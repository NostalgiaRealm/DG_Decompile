#!/usr/bin/env python3
"""Create architecture-separated, non-executable analysis projections of hybrid PEs.

The original PE files are never changed. Every projection is a flat memory image
whose file offset equals the original RVA. It is for a disassembler, not Windows.
CHPE x86 uses bit 0 of each code-range start for the native-AArch64 flag.
ARM64X uses bits 0..1 for ARM64/ARM64EC/AMD64 and DVRT symbol 6 for fixups.
See notes/HYBRID.md for primary-source references and interpretation limits.
"""

import argparse
import collections
import hashlib
import json
import pathlib
import re
import struct

import pefile


def sha256(data):
    return hashlib.sha256(data).hexdigest()


def read_words(pe, rva, count):
    data = pe.get_data(rva, count * 4)
    if len(data) != count * 4:
        raise ValueError(f"Truncated metadata at RVA {rva:#x}")
    return list(struct.unpack('<' + 'I' * count, data))


def mapped_image(pe):
    out = bytearray(pe.OPTIONAL_HEADER.SizeOfImage)
    headers = bytes(pe.__data__[:pe.OPTIONAL_HEADER.SizeOfHeaders])
    out[:len(headers)] = headers
    for section in pe.sections:
        data = section.get_data()
        start = section.VirtualAddress
        if start + len(data) > len(out):
            raise ValueError('Section extends beyond SizeOfImage')
        out[start:start + len(data)] = data
    return out


def apply_arm64x_fixups(pe, image):
    """Apply DVRT symbol 6 with LLVM's value/zero/delta encoding rules."""
    lc = pe.DIRECTORY_ENTRY_LOAD_CONFIG.struct
    secidx = lc.DynamicValueRelocTableSection
    offset = lc.DynamicValueRelocTableOffset
    if not secidx or not offset:
        raise ValueError('ARM64X image has no section-relative DVRT')
    sec = pe.sections[secidx - 1]
    table = sec.VirtualAddress + offset
    version, size = struct.unpack_from('<II', image, table)
    if version != 1:
        raise ValueError(f'Unsupported DVRT version: {version}')
    cursor, end = table + 8, table + 8 + size
    patches = []
    records = []
    while cursor < end:
        symbol, recordsize = struct.unpack_from('<QI', image, cursor)
        cursor += 12
        recordend = cursor + recordsize
        if recordend > end or symbol != 6:
            raise ValueError(f'Unsupported/malformed DVRT record: {symbol}')
        records.append({'symbol': symbol, 'size': recordsize})
        while cursor < recordend:
            page, blocksize = struct.unpack_from('<II', image, cursor)
            blockend = cursor + blocksize
            if blocksize < 8 or blocksize % 4 or blockend > recordend or page & 4095:
                raise ValueError('Invalid ARM64X relocation block')
            cursor += 8
            while cursor < blockend:
                header, = struct.unpack_from('<H', image, cursor)
                cursor += 2
                if header == 0:  # terminal alignment padding
                    if any(image[cursor:blockend]):
                        raise ValueError('Nonterminal ARM64X padding')
                    cursor = blockend
                    break
                target = page + (header & 4095)
                kind, arg = (header >> 12) & 3, header >> 14
                sizebytes = 4 if kind == 2 else 1 << arg
                if target + sizebytes > len(image):
                    raise ValueError('ARM64X patch outside image')
                before = bytes(image[target:target + sizebytes])
                delta = None
                if kind == 0:
                    after = bytes(sizebytes)
                elif kind == 1:
                    if not arg or cursor + sizebytes > blockend:
                        raise ValueError('Invalid ARM64X value record')
                    after = bytes(image[cursor:cursor + sizebytes])
                    cursor += sizebytes
                elif kind == 2:
                    if cursor + 2 > blockend:
                        raise ValueError('Truncated ARM64X delta record')
                    delta, = struct.unpack_from('<H', image, cursor)
                    delta *= (8 if arg & 2 else 4) * (-1 if arg & 1 else 1)
                    cursor += 2
                    after = ((int.from_bytes(before, 'little') + delta) & 0xffffffff).to_bytes(4, 'little')
                else:
                    raise ValueError('Unknown ARM64X fixup type')
                image[target:target + sizebytes] = after
                section = pe.get_section_by_rva(target)
                patches.append({'rva': target, 'rva_hex': hex(target), 'type': kind,
                                'size': sizebytes, 'before_hex': before.hex(),
                                'after_hex': after.hex(), 'delta': delta,
                                'section': section.Name.rstrip(b'\0').decode() if section else 'headers'})
            cursor = blockend
        cursor = recordend
    if cursor != end:
        raise ValueError('Incorrect DVRT length')
    return {'table_rva': table, 'version': version, 'size': size,
            'records': records, 'patch_count': len(patches), 'patches': patches}


def name_clean(text):
    return re.sub(r'[^a-zA-Z0-9_.$@?]', '_', text)


def inspect_one(path, source, output):
    original = path.read_bytes()
    pe = pefile.PE(data=original)
    if not hasattr(pe, 'DIRECTORY_ENTRY_LOAD_CONFIG'):
        return []
    lc = pe.DIRECTORY_ENTRY_LOAD_CONFIG.struct
    pointer = getattr(lc, 'CHPEMetadataPointer', 0)
    if not pointer:
        return []
    rel = path.relative_to(source).as_posix()
    base = pe.OPTIONAL_HEADER.ImageBase
    metadata_rva = pointer - base
    kind = 'chpe_x86' if pe.FILE_HEADER.Machine == 0x14c else 'arm64x'
    words = read_words(pe, metadata_rva, 16 if kind == 'chpe_x86' else 23)
    ranges = []
    for rawstart, length in struct.iter_unpack('<II', pe.get_data(words[1], words[2] * 8)):
        tag = rawstart & (1 if kind == 'chpe_x86' else 3)
        start = rawstart & ~(1 if kind == 'chpe_x86' else 3)
        arch = ('arm64' if tag else 'x86') if kind == 'chpe_x86' else {0: 'arm64', 1: 'arm64ec', 2: 'x64'}.get(tag)
        if arch is None or length == 0 or start + length > pe.OPTIONAL_HEADER.SizeOfImage:
            raise ValueError('Malformed hybrid code map')
        ranges.append({'architecture': arch, 'rva_start': start, 'rva_end_exclusive': start + length,
                       'start': hex(base + start), 'end_exclusive': hex(base + start + length),
                       'length': length, 'encoded_start': rawstart})

    def in_arch(rva, arch):
        return any(r['architecture'] == arch and r['rva_start'] <= rva < r['rva_end_exclusive'] for r in ranges)

    native_image = mapped_image(pe)
    fixed_image = bytearray(native_image)
    fixups = apply_arm64x_fixups(pe, fixed_image) if kind == 'arm64x' else None
    # Reconstruct the fixed on-disk PE only to parse its changed directories.
    # Preserve the analysis image separately and never execute this derivative.
    fixed_file = bytearray(original)
    if fixups:
        for patch in fixups['patches']:
            fileoff = pe.get_offset_from_rva(patch['rva'])
            fixed_file[fileoff:fileoff + patch['size']] = bytes.fromhex(patch['after_hex'])
    fixed_pe = pefile.PE(data=bytes(fixed_file)) if fixups else pe
    pdata_dir = pe.OPTIONAL_HEADER.DATA_DIRECTORY[3]
    pdata = list(struct.iter_unpack('<II', pe.get_data(pdata_dir.VirtualAddress, pdata_dir.Size)))
    runtime = [{'rva': start, 'unwind_data': unwind} for start, unwind in pdata]
    entry_ranges = list(struct.iter_unpack('<III', pe.get_data(words[3], words[12] * 12))) if kind == 'arm64x' else []
    redirections = list(struct.iter_unpack('<II', pe.get_data(words[4], words[13] * 8))) if kind == 'arm64x' else []
    extra = list(struct.iter_unpack('<III', pe.get_data(words[16], words[17]))) if kind == 'arm64x' else []
    runtime_fields = ({3: 'WowA64ExceptionHandlerFunctionPointer', 4: 'WowA64DispatchCallFunctionPointer',
                       5: 'WowA64DispatchIndirectCallFunctionPointer', 6: 'WowA64DispatchIndirectCallCfgFunctionPointer',
                       7: 'WowA64DispatchRetFunctionPointer', 8: 'WowA64DispatchRetLeafFunctionPointer',
                       9: 'WowA64DispatchJumpFunctionPointer', 10: 'CompilerIAT', 11: 'WowA64RdtscFunctionPointer'}
                      if kind == 'chpe_x86' else
                      {5: 'os_arm64x_dispatch_call_no_redirect', 6: 'os_arm64x_dispatch_ret',
                       7: 'os_arm64x_dispatch_call', 8: 'os_arm64x_dispatch_icall',
                       9: 'os_arm64x_dispatch_icall_cfg', 11: 'AuxiliaryIAT',
                       14: 'GetX64InformationFunctionPointer', 15: 'SetX64InformationFunctionPointer',
                       18: 'os_arm64x_dispatch_fptr', 19: 'AuxiliaryIATCopy',
                       20: 'AuxiliaryDelayloadIAT', 21: 'AuxiliaryDelayloadIATCopy'})
    runtime_slots = [{'metadata_word_index': index, 'rva': words[index], 'va': hex(base + words[index]),
                      'name': '__hybrid_' + name} for index, name in runtime_fields.items() if words[index]]
    # Observed CHPE export thunks use the exact x86 hotpatch/prologue/rel32
    # sequence below. Decode only that fixed pattern, never guess from names.
    export_bridges = []
    if kind == 'chpe_x86':
        for symbol in getattr(pe, 'DIRECTORY_ENTRY_EXPORT', object()).symbols:
            if symbol.forwarder:
                continue
            code = pe.get_data(symbol.address, 12)
            if len(code) == 12 and code[:8] == bytes.fromhex('8bff558bec5d90e9'):
                target = symbol.address + 12 + struct.unpack_from('<i', code, 8)[0]
                if in_arch(target, 'arm64'):
                    name = symbol.name.decode('utf-8', 'replace') if symbol.name else f'Ordinal_{symbol.ordinal}'
                    export_bridges.append({'source_rva': symbol.address, 'target_rva': target,
                                           'export_name': name, 'ordinal': symbol.ordinal,
                                           'thunk_bytes_hex': code.hex()})
    detail = {'source_relative_path': rel, 'source_sha256': sha256(original), 'kind': kind,
              'machine': hex(pe.FILE_HEADER.Machine), 'image_base': hex(base),
              'metadata_rva': hex(metadata_rva), 'metadata_version': words[0],
              'raw_metadata_words': [hex(x) for x in words], 'code_ranges': ranges,
              'native_runtime_function_records': runtime,
              'code_ranges_to_entrypoints': [{'start_rva': a, 'end_rva': b, 'entry_rva': c} for a, b, c in entry_ranges],
              'redirections': [{'source_rva': a, 'destination_rva': b} for a, b in redirections],
              'extra_x64_runtime_functions': [{'start_rva': a, 'end_rva': b, 'unwind_rva': c} for a, b, c in extra],
              'chpe_export_bridges': export_bridges,
              'runtime_pointer_slots_and_iat_tables': runtime_slots,
              'arm64x_fixups': fixups}
    slug = rel.replace('/', '__')
    detail_path = output / 'inventory/hybrid' / (slug + '.json')
    detail_path.parent.mkdir(parents=True, exist_ok=True)
    detail_path.write_text(json.dumps(detail, indent=2) + '\n')
    jobs = []
    for arch in dict.fromkeys(r['architecture'] for r in ranges):
        use_fixed = kind == 'arm64x' and arch != 'arm64'
        selected_pe = fixed_pe if use_fixed else pe
        image = fixed_image if use_fixed else native_image
        stem = slug + '.' + arch
        image_path = output / 'binaries/hybrid' / (stem + '.mapped.bin')
        image_path.parent.mkdir(parents=True, exist_ok=True)
        image_path.write_bytes(image)
        selected_ranges = [r for r in ranges if r['architecture'] == arch]
        seeds = {}
        provenance = collections.defaultdict(list)

        def seed(rva, name, reason):
            if in_arch(rva, arch):
                if rva not in seeds or reason.startswith('export'):
                    seeds[rva] = name_clean(name)
                provenance[rva].append(reason)

        for record in runtime:
            seed(record['rva'], f"FUN_{base + record['rva']:x}", 'native_pdata')
        for start, end, unwind in extra:
            seed(start, f'FUN_{base + start:x}', 'extra_x64_pdata')
        seed(selected_pe.OPTIONAL_HEADER.AddressOfEntryPoint, 'entry', 'pe_entrypoint')
        if kind == 'arm64x':
            seed(words[10], 'hybrid_alternate_entrypoint', 'hybrid_metadata_alternate_entrypoint')
        exports = getattr(selected_pe, 'DIRECTORY_ENTRY_EXPORT', None)
        export_names = {}
        if exports:
            for symbol in exports.symbols:
                if symbol.forwarder:
                    continue
                name = symbol.name.decode('utf-8', 'replace') if symbol.name else f'Ordinal_{symbol.ordinal}'
                export_names[symbol.address] = name
                seed(symbol.address, name, f'export_ordinal_{symbol.ordinal}')
        for start, end, entry in entry_ranges:
            seed(entry, export_names.get(entry, f'hybrid_entry_{base + entry:x}'), 'code_range_entrypoint')
        for start, target in redirections:
            seed(start, export_names.get(start, f'hybrid_source_{base + start:x}'), 'redirection_source')
            seed(target, export_names.get(start, f'hybrid_target_{base + target:x}') + '_native', 'redirection_destination')
        for bridge in export_bridges:
            seed(bridge['target_rva'], bridge['export_name'] + '_native', f"export_bridge_ordinal_{bridge['ordinal']}")
        # CFG entries are explicit compiler-produced function targets. Account for
        # the GuardFlags extra-bytes nibble instead of assuming four-byte entries.
        cfg_count = getattr(lc, 'GuardCFFunctionCount', 0)
        cfg_va = getattr(lc, 'GuardCFFunctionTable', 0)
        cfg_stride = 4 + ((getattr(lc, 'GuardFlags', 0) >> 28) & 15)
        if cfg_count and cfg_va:
            for i in range(cfg_count):
                target, = struct.unpack('<I', pe.get_data(cfg_va - base + i * cfg_stride, 4))
                seed(target, f'FUN_{base + target:x}', 'guard_cf_function_table')
        for r in selected_ranges:
            seed(r['rva_start'], f"range_start_{base + r['rva_start']:x}", 'code_map_range_start')
        seeds_path = output / 'inventory/hybrid' / (stem + '.functions.tsv')
        seeds_path.write_text(''.join(f'{base + rva:x}\t{seeds[rva]}\n' for rva in sorted(seeds)))
        ranges_path = output / 'inventory/hybrid' / (stem + '.ranges.tsv')
        ranges_path.write_text(''.join(f"{base + r['rva_start']:x}\t{base + r['rva_end_exclusive']:x}\n" for r in selected_ranges))
        labels = []
        labels.extend((base + slot['rva'], slot['name']) for slot in runtime_slots)
        for entry in getattr(selected_pe, 'DIRECTORY_ENTRY_IMPORT', []):
            library = entry.dll.decode('utf-8', 'replace')
            for symbol in entry.imports:
                name = symbol.name.decode('utf-8', 'replace') if symbol.name else f'Ordinal_{symbol.ordinal}'
                labels.append((symbol.address, name_clean('__imp_' + library + '_' + name)))
        if exports:
            for symbol in exports.symbols:
                if not symbol.forwarder:
                    name = symbol.name.decode('utf-8', 'replace') if symbol.name else f'Ordinal_{symbol.ordinal}'
                    labels.append((base + symbol.address, name_clean(name)))
        for bridge in export_bridges:
            labels.append((base + bridge['target_rva'], name_clean(bridge['export_name'] + '_native')))
        labels_path = output / 'inventory/hybrid' / (stem + '.labels.tsv')
        labels_path.write_text(''.join(f'{address:x}\t{name}\n' for address, name in sorted(set(labels))))
        seed_info_path = output / 'inventory/hybrid' / (stem + '.seed-evidence.json')
        seed_info_path.write_text(json.dumps([{'va': hex(base + rva), 'name': seeds[rva], 'sources': provenance[rva]} for rva in sorted(seeds)], indent=2) + '\n')
        language_id = 'AARCH64:LE:32:ilp32' if kind == 'chpe_x86' and arch == 'arm64' else {'arm64': 'AARCH64:LE:64:v8A', 'arm64ec': 'AARCH64:LE:64:v8A', 'x86': 'x86:LE:32:default', 'x64': 'x86:LE:64:default'}[arch]
        compiler_spec = 'default' if kind == 'chpe_x86' and arch == 'arm64' else 'windows'
        job = {'id': stem, 'output_id': stem, 'source_relative_path': rel, 'kind': kind, 'architecture': arch,
               'input_path': str(image_path), 'input_format': 'raw_mapped_image',
               'input_sha256': sha256(image), 'source_sha256': sha256(original),
               'image_base': hex(base), 'language_id': language_id,
               'compiler_spec': compiler_spec,
               'function_starts': str(seeds_path), 'function_seed_count': len(seeds),
               'code_ranges': selected_ranges, 'code_ranges_tsv': str(ranges_path),
               'labels_tsv': str(labels_path),
               'metadata_path': str(detail_path), 'conditional_fixups_applied': use_fixed,
               'notes': 'Flat memory image: file offset equals original RVA. Import at image_base; restrict code to code_ranges. CHPE/ARM64EC ABI types and calls remain approximate.'}
        jobs.append(job)
    return jobs


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=pathlib.Path, required=True)
    parser.add_argument('--output', type=pathlib.Path, required=True)
    args = parser.parse_args()
    source, output = args.source.resolve(), args.output.resolve()
    jobs = []
    for path in sorted(source.rglob('*')):
        if path.is_file() and path.suffix.lower() in ('.dll', '.exe'):
            jobs.extend(inspect_one(path, source, output))
    manifest = output / 'inventory/hybrid_jobs.json'
    manifest.write_text(json.dumps({'schema': 1, 'source_root': str(source), 'jobs': jobs}, indent=2) + '\n')
    print(json.dumps({'manifest': str(manifest), 'job_count': len(jobs), 'seed_count': sum(j['function_seed_count'] for j in jobs),
                      'jobs': [{'id': j['id'], 'seeds': j['function_seed_count']} for j in jobs]}, indent=2))


if __name__ == '__main__':
    main()
