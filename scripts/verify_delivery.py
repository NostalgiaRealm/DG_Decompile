#!/usr/bin/env python3
"""Check inventory completeness, immutable inputs, output indexes and instruction bytes."""
import argparse
import csv
import hashlib
import json
import re
from pathlib import Path

import pefile

ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    h = hashlib.sha256()
    with path.open('rb') as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b''):
            h.update(chunk)
    return h.hexdigest()


def load(path):
    return json.loads(path.read_text())


def table(path):
    with path.open() as f:
        yield from csv.DictReader(f, delimiter='\t')


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--source', type=Path, help='Override original input root; use binaries/original for a portable copied-input check.')
    args = ap.parse_args()
    errors = []
    manifest = load(ROOT / 'inventory/manifest.json')
    source_root = args.source.resolve() if args.source else Path(manifest['source_root'])
    if not args.source and not source_root.is_dir():
        source_root = ROOT / 'binaries/original'
    old_root = Path(manifest['output_root'])

    def local(path):
        path = Path(path)
        try:
            return ROOT / path.relative_to(old_root)
        except ValueError:
            return path
    source_files = load(ROOT / 'inventory/all-files.json')
    observed = {p.relative_to(source_root).as_posix() for p in source_root.rglob('*') if p.is_file()}
    expected = {r['path'] for r in source_files}
    if observed != expected:
        errors.append({'source_file_set_changed': sorted(observed ^ expected)})
    for row in source_files:
        path = source_root / row['path']
        if not path.is_file() or digest(path) != row['sha256']:
            errors.append({'source_hash': row['path']})
        copied = ROOT / 'binaries/original' / row['path']
        if not copied.is_file() or digest(copied) != row['sha256']:
            errors.append({'retained_input_hash': row['path']})
    copied_names = {p.relative_to(ROOT / 'binaries/original').as_posix() for p in (ROOT / 'binaries/original').rglob('*') if p.is_file()}
    if copied_names != expected:
        errors.append({'retained_input_file_set': sorted(copied_names ^ expected)})
    jobs = []
    by_source = {}
    for row in manifest['files']:
        by_source[row['path']] = row
        for path, expected_hash in [(local(row['original_path']), row['source_sha256']),
                                    (local(row['analysis_path']), row['prepared_sha256'])]:
            if not path.is_file() or digest(path) != expected_hash:
                errors.append({'binary_hash': str(path)})
        if 'chpe' not in row['path'] and '/arm64x/' not in row['path']:
            jobs.append({'id': row['path'], 'source_relative_path': row['path'],
                         'input_path': row['analysis_path'], 'input_sha256': row['prepared_sha256'], 'input_format': 'pe'})
    jobs += load(ROOT / 'inventory/hybrid_jobs.json')['jobs']
    job_ids = [job['id'] for job in jobs]
    if len(job_ids) != len(set(job_ids)):
        errors.append({'duplicate_analysis_view_ids': True})
    required_views = set()
    for row in manifest['files']:
        name = row['path']
        if 'arm64_chpe_x86' in name:
            required_views.update((name, arch) for arch in ('arm64', 'x86'))
        elif '/arm64x/' in name:
            required_views.update((name, arch) for arch in ('arm64', 'arm64ec', 'x64'))
        else:
            required_views.add((name, 'pe'))
    actual_views = [(job['source_relative_path'], job.get('architecture', 'pe')) for job in jobs]
    if set(actual_views) != required_views or len(actual_views) != len(required_views):
        errors.append({'incorrect_analysis_view_set': {'missing': sorted(required_views - set(actual_views)),
                                                      'unexpected': sorted(set(actual_views) - required_views)}})
    pe_inputs = {row['path'] for row in source_files if row['classification'] == 'PE'}
    if set(by_source) != pe_inputs or len(manifest['files']) != len(pe_inputs):
        errors.append({'incorrect_pe_inventory': True})
    if len(pe_inputs) != 26 or len(jobs) != 36:
        errors.append({'unexpected_batch_size': {'pe_inputs': len(pe_inputs), 'views': len(jobs)}})
    results = []
    for job in jobs:
        out = ROOT / 'decompiled' / job['id']
        summary_path = out / 'summary.json'
        if not summary_path.is_file():
            errors.append({'missing_analysis_view': job['id']})
            continue
        summary = load(summary_path)
        binary_path = local(job['input_path'])
        if digest(binary_path) != job['input_sha256']:
            errors.append({'analysis_input_hash': job['id']})
        raw = binary_path.read_bytes()
        pe = pefile.PE(data=raw) if job.get('input_format') == 'pe' else None
        base = pe.OPTIONAL_HEADER.ImageBase if pe else int(job['image_base'], 0)
        if pe and int(summary['image_base'], 16) != base:
            errors.append({'image_base': job['id']})
        if not pe:
            memory = list(table(out / 'memory.tsv'))
            if min(int(row['start'], 16) for row in memory) != base:
                errors.append({'mapped_memory_base': job['id']})
        if job.get('language_id') and summary['language'] != job['language_id']:
            errors.append({'processor_language': job['id'], 'actual': summary['language'], 'expected': job['language_id']})
        rows = list(table(out / 'functions.tsv'))
        addresses, files = set(), set()
        full_c = (out / 'full_decompilation.c').read_text()
        aggregate_parts = [full_c.splitlines(keepends=True)[0]]
        statuses = {'decompiled': 0, 'assembly_fallback': 0}
        for row in rows:
            address = int(row['address'], 16)
            if address in addresses or row['file'] in files:
                errors.append({'duplicate_function': job['id'], 'address': row['address']})
            addresses.add(address)
            files.add(row['file'])
            statuses[row['status']] = statuses.get(row['status'], 0) + 1
            path = out / row['file']
            if not path.is_file() or path.stat().st_size < 20:
                errors.append({'function_file': job['id'], 'address': row['address']})
            else:
                text = path.read_text()
                header_end = text.index(' */\n') + len(' */\n')
                aggregate_parts.append(text[:header_end] + '\n' + text[header_end:] + '\n')
            if row['status'] == 'assembly_fallback' and not (out / 'failed-assembly' / (row['address'] + '.asm')).is_file():
                errors.append({'missing_fallback': job['id'], 'address': row['address']})
        if len(rows) != summary['functions'] or statuses['decompiled'] != summary['decompiled'] or statuses['assembly_fallback'] != summary['assembly_fallback']:
            errors.append({'function_count': job['id']})
        if ''.join(aggregate_parts) != full_c:
            errors.append({'individual_and_combined_c_differ': job['id']})
        if set(p.relative_to(out).as_posix() for p in (out / 'functions').glob('*.c')) != files:
            errors.append({'stale_or_missing_function_files': job['id']})
        for name in ['full_decompilation.c', 'assembly.tsv', 'calls.tsv', 'strings.tsv', 'symbols.tsv',
                     'imports.tsv', 'exports.tsv', 'memory.tsv', 'instructions_outside_functions.tsv',
                     'executable_without_instructions.tsv']:
            if not (out / name).is_file() or (out / name).stat().st_size == 0:
                errors.append({'missing_export': job['id'], 'file': name})
        instruction_count, mismatch_count, outside_ranges = 0, 0, 0
        declared_ranges = [(int(r['start'], 16), int(r['end_exclusive'], 16)) for r in job.get('code_ranges', [])]
        for row in table(out / 'assembly.tsv'):
            instruction_count += 1
            address = int(row['address'], 16)
            data = bytes.fromhex(row['bytes'])
            rva = address - base
            original = pe.get_data(rva, len(data)) if pe else raw[rva:rva + len(data)]
            if data != original:
                mismatch_count += 1
            if declared_ranges and not any(start <= address and address + len(data) <= end for start, end in declared_ranges):
                outside_ranges += 1
        if mismatch_count or outside_ranges or instruction_count != summary['instructions']:
            errors.append({'instruction_validation': job['id'], 'mismatched_bytes': mismatch_count,
                           'outside_architecture_ranges': outside_ranges, 'count': instruction_count})
        origin_count = 0
        if declared_ranges:
            if not summary.get('architecture_origin_restriction') or not (out / 'pcode_origins.tsv').is_file():
                errors.append({'missing_decompiler_architecture_validation': job['id']})
            else:
                function_status = {row['address']: row['status'] for row in rows}
                unsafe_c_origins = 0
                for origin in table(out / 'pcode_origins.tsv'):
                    origin_count += 1
                    address = int(origin['instruction_origin'], 16)
                    inside = any(start <= address < end for start, end in declared_ranges)
                    if not inside and function_status[origin['function']] == 'decompiled':
                        unsafe_c_origins += 1
                if unsafe_c_origins or origin_count != summary['pcode_unique_function_origins']:
                    errors.append({'decompiler_origin_validation': job['id'], 'unsafe_c_origins': unsafe_c_origins})
        key = re.sub(r'[^A-Za-z0-9_.-]', '_', job['id'])
        project = ROOT / 'analysis-projects' / key / 'analysis.gpr'
        if not project.is_file() or not project.with_suffix('.rep').is_dir():
            errors.append({'missing_saved_project': job['id']})
        log = ROOT / 'logs/decompile' / (key + '-job.json')
        run_record = load(log) if log.exists() else {}
        if run_record.get('state') not in ('complete', 'complete_existing') or run_record.get('exit_code', 0) != 0:
            errors.append({'incomplete_job_record': job['id'], 'state': run_record.get('state')})
        results.append({'id': job['id'], 'source': job['source_relative_path'],
                        'functions': len(rows), 'decompiled': statuses['decompiled'],
                        'fallback': statuses['assembly_fallback'], 'instructions_verified': instruction_count,
                        'hybrid_decompiler_origins_verified': origin_count,
                        'executable_bytes_without_instructions': summary['executable_bytes_without_instructions'],
                        'instruction_bytes_outside_functions': summary['instruction_bytes_outside_functions']})
    audit = load(ROOT / 'inventory/hybrid_export_audit.json')
    audit_ids = [row['id'] for row in audit['results']]
    hybrid_ids = [job['id'] for job in jobs if job.get('language_id')]
    if len(audit_ids) != 19 or set(audit_ids) != set(hybrid_ids) or audit['hybrid_jobs_sha256'] != digest(ROOT / 'inventory/hybrid_jobs.json'):
        errors.append({'incorrect_independent_hybrid_audit_scope': True})
    for result in audit['results']:
        if result['state'] != 'verified' or result.get('problems'):
            errors.append({'independent_hybrid_audit_problem': result['id'], 'state': result['state']})
        for name, expected_hash in result.get('files_sha256', {}).items():
            path = ROOT / name
            if not path.is_file() or digest(path) != expected_hash:
                errors.append({'stale_hybrid_audit': result['id'], 'path': name})
    patch_count = 0
    for row in load(ROOT / 'provenance/Wine-fix/patch-manifest.json'):
        pe = pefile.PE(str(local(by_source[row['path']]['analysis_path'])))
        for patch in row.get('patches', []):
            expected = bytes.fromhex(patch['after'])
            if pe.get_data(int(patch['rva'], 16), len(expected)) != expected:
                errors.append({'changed_supplied_wine_patch': row['path'], 'rva': patch['rva']})
            patch_count += 1
    resource_count = 0
    resource_index = load(ROOT / 'resources/index.json')
    resource_names = [row['binary'] for row in resource_index]
    if set(resource_names) != pe_inputs or len(resource_names) != len(pe_inputs):
        errors.append({'incorrect_resource_binary_set': True})
    for row in resource_index:
        directory = ROOT / 'resources' / row['binary']
        resource_manifest = load(directory / 'manifest.json')
        prepared = by_source[row['binary']]
        if row['sha256'] != prepared['prepared_sha256'] or resource_manifest['sha256'] != prepared['prepared_sha256']:
            errors.append({'resource_binary_hash': row['binary']})
        pe = pefile.PE(str(local(prepared['analysis_path'])))
        if row['resource_count'] != len(resource_manifest['resources']):
            errors.append({'resource_count_mismatch': row['binary']})
        for resource in resource_manifest['resources']:
            if digest(directory / resource['file']) != resource['sha256']:
                errors.append({'resource_hash': row['binary'], 'resource': resource['file']})
            if hashlib.sha256(pe.get_data(int(resource['rva'], 16), resource['size'])).hexdigest() != resource['sha256']:
                errors.append({'resource_input_mismatch': row['binary'], 'resource': resource['file']})
            resource_count += 1
    report = {'status': 'passed' if not errors else 'failed', 'checked_source_root': str(source_root), 'source_files': len(source_files),
              'source_pe_files': len(manifest['files']), 'expected_views': len(jobs), 'verified_views': len(results),
              'functions': sum(x['functions'] for x in results), 'decompiled': sum(x['decompiled'] for x in results),
              'assembly_fallback': sum(x['fallback'] for x in results),
              'instructions_byte_verified': sum(x['instructions_verified'] for x in results),
              'hybrid_decompiler_origins_verified': sum(x['hybrid_decompiler_origins_verified'] for x in results),
              'supplied_patch_sites_verified': patch_count, 'resources_verified': resource_count,
              'views': results, 'errors': errors,
              'limits': ['Static output integrity and analysis coverage checks; no target execution.',
                         'Function discovery and inferred C semantics are not proved complete or correct.',
                         'Counts across hybrid views can include shared implementations.']}
    (ROOT / 'evidence/delivery-verification.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({k: v for k, v in report.items() if k not in ('views', 'limits')}))
    raise SystemExit(bool(errors))


if __name__ == '__main__':
    main()
