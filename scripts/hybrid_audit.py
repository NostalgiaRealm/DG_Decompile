#!/usr/bin/env python3
"""Independently verify exported hybrid instruction ranges, bytes and seed coverage."""

import argparse
import csv
import hashlib
import json
import pathlib
import re


def rows(path):
    with path.open(newline='') as file:
        yield from csv.DictReader(file, delimiter='\t')


def audit(root):
    manifest_path = root / 'inventory/hybrid_jobs.json'
    jobs = json.loads(manifest_path.read_text())['jobs']
    switches_path = root / 'inventory/hybrid_switch_table_evidence.json'
    switches = json.loads(switches_path.read_text()) if switches_path.exists() else []

    def local_path(saved):
        """Rebase archived absolute paths onto the current extracted bundle."""
        path = pathlib.Path(saved)
        if not path.is_absolute():
            return root / path
        for anchor in ('binaries', 'inventory', 'decompiled'):
            if anchor in path.parts:
                return root.joinpath(*path.parts[path.parts.index(anchor):])
        return path

    def digest(path):
        return hashlib.sha256(path.read_bytes()).hexdigest()

    results = []
    for job in jobs:
        out = root / 'decompiled' / job['output_id']
        if not (out / 'summary.json').exists():
            results.append({'id': job['id'], 'state': 'pending'})
            continue
        summary = json.loads((out / 'summary.json').read_text())
        input_path = local_path(job['input_path'])
        seed_path = local_path(job['function_starts'])
        metadata_path = local_path(job['metadata_path'])
        image = input_path.read_bytes()
        base = int(job['image_base'], 16)
        ranges = [(base + r['rva_start'], base + r['rva_end_exclusive']) for r in job['code_ranges']]

        def inside(start, end):
            return any(a <= start and end <= b for a, b in ranges)

        problems = []
        if hashlib.sha256(image).hexdigest() != job['input_sha256']:
            problems.append('image_sha256_mismatch')
        if summary['language'] != job['language_id']:
            problems.append('language_mismatch')
        if summary['compiler'] != job['compiler_spec']:
            problems.append('compiler_spec_mismatch')
        # BinaryLoader maps at baseAddr without changing Ghidra's raw-program
        # logical imageBase property (often zero). Validate actual memory VAs.
        memory = list(rows(out / 'memory.tsv'))
        if min(int(row['start'], 16) for row in memory) != base:
            problems.append('mapped_memory_base_mismatch')
        instructions = {}
        for row in rows(out / 'assembly.tsv'):
            address = int(row['address'], 16)
            data = bytes.fromhex(row['bytes'])
            if not inside(address, address + len(data)):
                problems.append(f'instruction_outside_architecture:{address:x}')
            offset = address - base
            if image[offset:offset + len(data)] != data:
                problems.append(f'instruction_byte_mismatch:{address:x}')
            instructions[address] = len(data)
        starts, bodies = set(), []
        for row in rows(out / 'functions.tsv'):
            start = int(row['address'], 16)
            starts.add(start)
            if not inside(start, start + 1):
                problems.append(f'function_outside_architecture:{start:x}')
            for interval in row['body_ranges'].split(';'):
                if not interval:
                    continue
                a, b = (int(value, 16) for value in interval.split('-'))
                if not inside(a, b + 1):
                    problems.append(f'function_body_outside_architecture:{a:x}-{b:x}')
                bodies.append((a, b))
        missing_starts, undecoded_seeds, contained_seeds = [], [], []
        seed_count = 0
        seed_lines = seed_path.read_text().splitlines()
        additional_path = seed_path.parent / (job['id'] + '.additional_pointer_seeds.tsv')
        additional_count = 0
        if additional_path.exists():
            additional_lines = additional_path.read_text().splitlines()
            additional_count = len(additional_lines)
            existing_addresses = {line.split('\t')[0] for line in seed_lines}
            seed_lines.extend(line for line in additional_lines if line.split('\t')[0] not in existing_addresses)
        for line in seed_lines:
            address, name = line.split('\t', 1)
            address = int(address, 16)
            seed_count += 1
            item = {'address': hex(address), 'name': name}
            if address not in instructions:
                undecoded_seeds.append(item)
            if address not in starts:
                if any(a <= address <= b for a, b in bodies):
                    contained_seeds.append(item)
                else:
                    missing_starts.append(item)
        if missing_starts:
            problems.append(f'metadata_seeds_without_function_coverage:{len(missing_starts)}')
        if undecoded_seeds:
            problems.append(f'metadata_seeds_without_instruction:{len(undecoded_seeds)}')
        patch_coverage = None
        # The decompiler can follow direct jumps into undefined bytes even when
        # the listing was correctly architecture-restricted. Its out-of-range
        # instruction/block warnings exposed this in the initial x86 pilot.
        c_text = (out / 'full_decompilation.c').read_text()
        outside_warning_addresses = sorted({int(address, 16) for address in re.findall(r'\(ram,0x([0-9a-fA-F]+)\)', c_text)
                                            if not inside(int(address, 16), int(address, 16) + 1)})
        if outside_warning_addresses:
            problems.append(f'decompiler_warnings_outside_architecture:{len(outside_warning_addresses)}')
        detail = json.loads(metadata_path.read_text())
        switches_checked = 0
        if job['architecture'] == 'arm64':
            for switch in switches:
                if switch['source_relative_path'] != job['source_relative_path']:
                    continue
                switches_checked += 1
                table = int(switch['table_va'], 16)
                expected_bytes = bytes.fromhex(switch['table_bytes_hex'])
                if image[table - base:table - base + len(expected_bytes)] != expected_bytes or switch['source_sha256'] != detail['source_sha256']:
                    problems.append(f'compact_switch_table_evidence_mismatch:{table:x}')
                for entry, value in zip(switch['entries'], expected_bytes):
                    signed_value = value if value < 128 else value - 256
                    target = table + 4 * signed_value
                    if target != int(entry['target_va'], 16) or target not in instructions:
                        problems.append(f'compact_switch_target_mismatch:{target:x}')
        boundary_path = metadata_path.parent / (input_path.name + '.boundary-overrides.tsv')
        overrides = list(rows(boundary_path)) if boundary_path.exists() else []
        override_pairs = {(int(row['instruction'], 16), int(row['target'], 16)) for row in overrides if row['analysis_override'] == 'CALL_RETURN'}
        expected_pairs = set()
        if job['architecture'] == 'x86':
            expected_pairs = {(base + bridge['source_rva'] + 7, base + bridge['target_rva']) for bridge in detail.get('chpe_export_bridges', [])}
        elif job['architecture'] == 'x64':
            for bridge in detail.get('redirections', []):
                offset = bridge['source_rva']
                # This input's metadata-redirection thunks have this exact x64
                # entry prologue, followed by an E9 rel32 at offset nine.
                if image[offset:offset + 10] == bytes.fromhex('488bc448895820555de9'):
                    expected_pairs.add((base + offset + 9, base + bridge['destination_rva']))
                else:
                    problems.append(f'unrecognized_x64_redirection_thunk:{offset:x}')
        missing_pairs = sorted(expected_pairs - override_pairs)
        if missing_pairs:
            problems.append(f'missing_cross_architecture_tailcall_override:{len(missing_pairs)}')
        pcode_path = out / 'pcode_origins.tsv'
        pcode_origin_count = 0
        pcode_outside = []
        if pcode_path.exists():
            for row in rows(pcode_path):
                address = int(row['instruction_origin'], 16)
                pcode_origin_count += 1
                if not inside(address, address + 1) or row['inside_executable_view'] != 'true':
                    pcode_outside.append({'function': row['function'], 'instruction_origin': row['instruction_origin']})
            if pcode_outside:
                problems.append(f'pcode_origins_outside_architecture:{len(pcode_outside)}')
        else:
            problems.append('missing_pcode_origin_evidence')
        if job['conditional_fixups_applied']:
            patches = detail['arm64x_fixups']['patches']
            selected = [p for p in patches if inside(base + p['rva'], base + p['rva'] + p['size'])]
            decoded = []
            for patch in selected:
                va = base + patch['rva']
                if any(a <= va and va + patch['size'] <= a + n for a, n in instructions.items()):
                    decoded.append(patch)
            patch_coverage = {'patches_within_architecture': len(selected),
                              'patches_fully_inside_exported_instruction': len(decoded)}
        evidence_paths = [out / name for name in ('summary.json', 'functions.tsv', 'assembly.tsv', 'pcode_origins.tsv', 'full_decompilation.c', 'memory.tsv')]
        evidence_paths += [input_path, seed_path, metadata_path, local_path(job['code_ranges_tsv']), local_path(job['labels_tsv'])]
        evidence_paths += [path for path in (additional_path, boundary_path) if path.exists()]
        for suffix in ('.seed-repairs.tsv', '.pointer-recoveries.tsv'):
            path = metadata_path.parent / (input_path.name + suffix)
            if path.exists():
                evidence_paths.append(path)
        files_sha256 = {path.relative_to(root).as_posix(): digest(path) for path in evidence_paths if path.exists()}
        results.append({'id': job['id'], 'state': 'verified' if not problems else 'problems',
                        'language': summary['language'], 'compiler': summary['compiler'],
                        'ghidra_program_image_base': summary['image_base'],
                        'verified_mapped_memory_base': hex(base),
                        'instructions_checked': len(instructions), 'functions_checked': len(starts),
                        'decompiled_functions': summary['decompiled'],
                        'assembly_fallback_functions': summary['assembly_fallback'],
                        'instruction_bytes_outside_functions': summary['instruction_bytes_outside_functions'],
                        'function_seed_count': seed_count,
                        'additional_pointer_seed_count': additional_count,
                        'seed_without_function_or_body': missing_starts,
                        'seed_inside_another_function': contained_seeds,
                        'seed_without_instruction_at_address': undecoded_seeds,
                        'fixup_instruction_coverage': patch_coverage,
                        'boundary_override_count': len(overrides),
                        'known_export_bridge_count': len(expected_pairs),
                        'compact_switch_tables_checked': switches_checked,
                        'missing_export_bridge_overrides': [{'instruction': hex(a), 'target': hex(b)} for a, b in missing_pairs],
                        'pcode_instruction_origins_checked': pcode_origin_count,
                        'pcode_origins_outside_architecture': pcode_outside,
                        'decompiler_warning_addresses_outside_architecture': [hex(address) for address in outside_warning_addresses],
                        'files_sha256': files_sha256,
                        'problems': problems})
    report = {'method': 'Compare all exported instruction bytes to the projected image; enforce code-map ranges for instructions, function starts and all function body intervals; compare every metadata seed to exports. This is static structural validation, not runtime or semantic validation.',
              'hybrid_jobs_sha256': digest(manifest_path),
              'auditor_script_sha256': digest(pathlib.Path(__file__).resolve()),
              'hybrid_orphan_pointer_evidence_sha256': digest(root / 'inventory/hybrid_orphan_pointer_evidence.json') if (root / 'inventory/hybrid_orphan_pointer_evidence.json').exists() else None,
              'hybrid_switch_table_evidence_sha256': digest(root / 'inventory/hybrid_switch_table_evidence.json') if (root / 'inventory/hybrid_switch_table_evidence.json').exists() else None,
              'results': results}
    (root / 'inventory/hybrid_export_audit.json').write_text(json.dumps(report, indent=2) + '\n')
    for row in results:
        print(row['id'], row['state'], 'functions', row.get('functions_checked'),
              'uncovered seeds', len(row.get('seed_without_function_or_body', [])),
              'undecoded seeds', len(row.get('seed_without_instruction_at_address', [])),
              'problems', len(row.get('problems', [])))
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=pathlib.Path, default=pathlib.Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    audit(args.root.resolve())
