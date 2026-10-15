#!/usr/bin/env python3
"""Build binary-specific reading notes and export links from measured analysis indexes."""
import csv
import json
import os
from collections import defaultdict
from pathlib import Path
from urllib.parse import quote

import pefile

ROOT = Path(__file__).resolve().parents[1]


def load(path):
    return json.loads(path.read_text())


def link(label, target, parent):
    return f'[{label}]({quote(os.path.relpath(target, parent), safe="/._-")})'


def escape(value):
    return str(value).replace('|', '\\|').replace('\n', ' ')


def role(path):
    name = Path(path).name.lower()
    if name == 'dgvoodoocpl.exe':
        return ('Control-panel executable. Start with the entry function, then use the imported dialog/window APIs and the resource string IDs to locate UI handlers. There are no exported DLL entry points. The two executables target different processors; the root executable is x64. See the control-panel notes for verified resource contents.')
    if name == 'd3d8.dll':
        return ('Direct3D 8 API front door. Start with `Direct3DCreate8`, then follow its internal factory calls and the method tables of the returned object. `ValidatePixelShader`, `ValidateVertexShader` and `DebugSetMute` are separate exports. Their presence does not establish the implementation of every method; follow the code and indirect calls.')
    if name == 'd3d9.dll':
        return ('Direct3D 9 API front door. `Direct3DCreate9` and `Direct3DCreate9Ex` lead toward object creation. The `D3DPERF_*` exports form a separate group and can share stub implementations; check addresses before treating each name as a distinct feature. The ARM64X binary needs its separate loader views.')
    if name == 'ddraw.dll':
        return ('DirectDraw API front door. Useful roots are `DirectDrawCreate`, `DirectDrawCreateEx`, `DirectDrawCreateClipper`, the ANSI/Unicode enumeration exports, and the COM exports `DllGetClassObject` and `DllCanUnloadNow`. Dispatch through function pointers and object tables requires following beyond these exported wrappers.')
    if name == 'd3dimm.dll':
        return ('Small public interface: `GetD3DInterface` and `GetD3DVersion`. Follow these two exports into the implementation. This module is separate from the D3D8 and D3D9 front doors. The supplied x86 build was still packed; the unpacking report records its restored UPX identifiers and derived binary hash.')
    return ('Glide API implementation. Useful roots include initialization/shutdown, context/window creation, drawing, texture upload/state and framebuffer access. The `gr*` and `gu*` export names provide search anchors. Several legacy names can share one address. The Napalm Glide3x variant has additional extension exports; compare its actual export table rather than assuming it is interchangeable with ordinary Glide3x.')


def jobs_for(manifest):
    jobs = []
    for record in manifest['files']:
        if 'chpe' not in record['path'] and '/arm64x/' not in record['path']:
            jobs.append({'id': record['path'], 'source_relative_path': record['path'], 'architecture': record['architecture']})
    hybrid = ROOT / 'inventory/hybrid_jobs.json'
    if hybrid.exists():
        jobs.extend(load(hybrid)['jobs'])
    return jobs


def main():
    manifest = load(ROOT / 'inventory/manifest.json')
    jobs = jobs_for(manifest)
    by_source = defaultdict(list)
    for job in jobs:
        job = dict(job)
        job['out'] = ROOT / 'decompiled' / job['id']
        summary = job['out'] / 'summary.json'
        job['summary'] = load(summary) if summary.exists() else None
        job['functions'] = {}
        if job['summary']:
            with (job['out'] / 'functions.tsv').open() as handle:
                for row in csv.DictReader(handle, delimiter='\t'):
                    job['functions'][int(row['address'], 16)] = row
        by_source[job.get('source_relative_path', job.get('source_path'))].append(job)
    patch_manifest = load(ROOT / 'provenance/Wine-fix/patch-manifest.json')
    patches = {x['path']: x for x in patch_manifest}
    index = ['# Binary and code index', '',
             'Each row identifies one supplied file. A hybrid file has multiple analysis views. Counts across views can include shared code; they are not a count of distinct original source functions.', '',
             '| Binary | Architecture | Analysis views complete | Functions producing C | Reading notes |',
             '|---|---|---:|---:|---|']
    export_report = []
    for record in manifest['files']:
        rel = record['path']
        metadata = load(ROOT / record['metadata_path'])
        notes = ROOT / 'notes/binaries' / (rel + '.md')
        notes.parent.mkdir(parents=True, exist_ok=True)
        parent = notes.parent
        views = by_source[rel]
        done = sum(v['summary'] is not None for v in views)
        success = sum((v['summary'] or {}).get('decompiled', 0) for v in views)
        index.append(f'| `{rel}` | {record["architecture"]} | {done}/{len(views)} | {success:,} | {link("Notes and exports", notes, ROOT)} |')
        lines = [f'# {rel}', '', role(rel), '',
                 '## Identity', '',
                 f'- Machine/format: {metadata["architecture"]}, {metadata["format"]}.',
                 f'- Preferred image base: `{metadata["image_base"]:#x}`; entry RVA: `{metadata["entry_point_rva"]:#x}`.',
                 f'- Supplied SHA-256: `{record["source_sha256"]}`.',
                 f'- Prepared SHA-256: `{record["prepared_sha256"]}`.',
                 f'- Packing result: {record["packing"]["status"]}.',
                 '- ' + link('Full PE metadata', ROOT / record['metadata_path'], parent) + '.', '',
                 '## Code views', '',
                 'C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.', '',
                 '| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |',
                 '|---|---:|---:|---:|---:|---:|']
        for v in views:
            s = v['summary']
            if not s:
                lines.append(f'| {v["id"]} | pending | | | | |')
                continue
            lines.append(f'| {link(v["architecture"], v["out"] / "full_decompilation.c", parent)} | {s["functions"]:,} | {s["decompiled"]:,} | {s["assembly_fallback"]:,} | {s["instruction_bytes_outside_functions"]:,} | {s["executable_bytes_without_instructions"]:,} |')
        lines += ['', 'Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.', '']
        for v in views:
            if v['summary']:
                lines += [f'**{v["architecture"]} navigation:** ' + ' · '.join(link(label, v['out'] / filename, parent) for label, filename in [('Functions', 'functions.tsv'), ('Calls', 'calls.tsv'), ('Assembly', 'assembly.tsv'), ('Strings', 'strings.tsv'), ('Symbols', 'symbols.tsv'), ('Coverage', 'summary.json')]), '']
        if 'chpe' in rel or '/arm64x/' in rel:
            lines += ['Read ' + link('the hybrid architecture notes', ROOT / 'notes/HYBRID.md', parent) + ' before interpreting ABI types, interworking thunks or loader fixups.', '']
        imported = metadata['imports']
        lines += ['## Imports and useful search leads', '',
                  'Imported modules: ' + ', '.join(f'`{d["dll"]}`' for d in imported) + '.', '',
                  'The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.', '',
                  link('Resource payloads and metadata', ROOT / 'resources' / rel / 'manifest.json', parent) + ' and ' + link('byte-offset string index', ROOT / 'resources' / rel / 'raw-strings.tsv', parent) + ' provide further search anchors.', '']
        p = patches.get(rel)
        if p and p.get('patches'):
            lines += ['## Supplied Wine-fix locations', '',
                      'These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.', '',
                      '| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |', '|---|---|---|---|']
            for patch in p['patches']:
                va = metadata['image_base'] + int(patch['predicate_rva'], 16)
                refs = [link(v['architecture'], v['out'] / v['functions'][va]['file'], parent) for v in views if va in v['functions']]
                lines.append(f'| `{patch["predicate_rva"]}` | `{patch["rva"]}` | `{patch["after"]}` | {", ".join(refs) or "See assembly at this RVA"} |')
            lines.append('')
        exports = metadata['exports']
        hybrid_detail = None
        bridge_targets = {}
        if 'chpe' in rel or '/arm64x/' in rel:
            hybrid_detail = load(ROOT / 'inventory/hybrid' / (rel.replace('/', '__') + '.json'))
            bridge_targets = {b['source_rva']: b['target_rva'] for b in hybrid_detail.get('chpe_export_bridges', [])}
        lines += ['## Export map', '',
                  'This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.', '',
                  '| Ordinal | Export | RVA | Function/view |', '|---:|---|---|---|']
        for exp in exports:
            refs = [link(v['architecture'], v['out'] / v['functions'][exp['va']]['file'], parent) for v in views if exp['va'] in v['functions']]
            if exp['rva'] in bridge_targets:
                native_va = metadata['image_base'] + bridge_targets[exp['rva']]
                refs += [link(v['architecture'] + ' bridge target', v['out'] / v['functions'][native_va]['file'], parent) for v in views if native_va in v['functions']]
            status = 'forwarder' if exp.get('forwarder') else 'linked' if refs else 'unresolved'
            target = ', '.join(refs) or (escape(exp['forwarder']) if exp.get('forwarder') else 'See assembly; no exact function entry recovered')
            lines.append(f'| {exp["ordinal"]} | `{escape(exp["name"] or "(ordinal only)")}` | `{exp["rva"]:#x}` | {target} |')
            export_report.append({'binary': rel, 'ordinal': exp['ordinal'], 'name': exp['name'], 'rva': exp['rva'], 'status': status})
        if not exports:
            lines += ['| — | No exports | — | Follow program entry and UI call sites |']
        if '/arm64x/' in rel:
            data = bytearray((ROOT / record['prepared_path']).read_bytes())
            original_pe = pefile.PE(data=bytes(data))
            for patch in hybrid_detail['arm64x_fixups']['patches']:
                offset = original_pe.get_offset_from_rva(patch['rva'])
                data[offset:offset + patch['size']] = bytes.fromhex(patch['after_hex'])
            compatible_pe = pefile.PE(data=bytes(data))
            redirects = {r['source_rva']: r['destination_rva'] for r in hybrid_detail['redirections']}
            lines += ['', '## ARM64X compatible-view exports', '',
                      'These export RVAs come from the PE headers after applying the recorded ARM64X conditional fixups. The original native-view table above remains separate. Metadata redirections link compatible stubs to their native ARM64EC targets.', '',
                      '| Ordinal | Export | Compatible RVA | Function/view |', '|---:|---|---|---|']
            for symbol in compatible_pe.DIRECTORY_ENTRY_EXPORT.symbols:
                va = metadata['image_base'] + symbol.address
                refs = [link(v['architecture'], v['out'] / v['functions'][va]['file'], parent) for v in views if va in v['functions']]
                if symbol.address in redirects:
                    native_va = metadata['image_base'] + redirects[symbol.address]
                    refs += [link(v['architecture'] + ' redirect target', v['out'] / v['functions'][native_va]['file'], parent) for v in views if native_va in v['functions']]
                name = symbol.name.decode() if symbol.name else '(ordinal only)'
                lines.append(f'| {symbol.ordinal} | `{escape(name)}` | `{symbol.address:#x}` | {", ".join(refs) or "See compatible-view assembly"} |')
                export_report.append({'binary': rel, 'view': 'compatible', 'ordinal': symbol.ordinal, 'name': name, 'rva': symbol.address, 'status': 'linked' if refs else 'unresolved'})
        notes.write_text('\n'.join(lines) + '\n')
    (ROOT / 'INDEX.md').write_text('\n'.join(index) + '\n')
    (ROOT / 'evidence/export-coverage.json').write_text(json.dumps(export_report, indent=2) + '\n')
    print(json.dumps({'binaries': len(manifest['files']), 'views': len(jobs), 'exports': len(export_report), 'unlinked_exports': sum(x['status'] == 'unresolved' for x in export_report)}))


if __name__ == '__main__':
    main()
