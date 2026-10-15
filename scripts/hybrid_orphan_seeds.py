#!/usr/bin/env python3
"""Find existing orphan instruction starts referenced by pointer-shaped PE data.

Run after an initial hybrid export and before the recovery export. This never
linear-sweeps undecoded bytes or creates functions. It supplies evidence-backed
candidates for the separate Ghidra recovery step. Existing per-job discovery
evidence and seed files are preserved on reruns after recovery.
"""

import argparse
import csv
import json
import pathlib

import pefile


def main(root):
    manifest = json.loads((root / 'inventory/hybrid_jobs.json').read_text())
    source = pathlib.Path(manifest['source_root'])
    report_path = root / 'inventory/hybrid_orphan_pointer_evidence.json'
    result = json.loads(report_path.read_text()) if report_path.exists() else []
    prior = {row['job']: row for row in result}
    for job in manifest['jobs']:
        if job['id'] in prior:
            print(job['id'], 'preserved initial pointer evidence and seeds')
            continue
        path = root / 'decompiled' / job['id'] / 'instructions_outside_functions.tsv'
        if not path.exists():
            continue
        pe_path = root / 'binaries/unpacked' / job['source_relative_path']
        if not pe_path.exists():
            pe_path = source / job['source_relative_path']
        pe = pefile.PE(str(pe_path))
        image_path = root / 'binaries/hybrid' / pathlib.Path(job['input_path']).name
        image = image_path.read_bytes()
        width = 4 if job['kind'] == 'chpe_x86' else 8
        sections = [section for section in pe.sections if not section.Characteristics & 0x20000000]
        with path.open() as file:
            orphans = list(csv.DictReader(file, delimiter='\t'))
        found, unmatched = [], []
        for row in orphans:
            address = int(row['start'], 16)
            pattern = address.to_bytes(width, 'little')
            references = []
            for section in sections:
                start = section.VirtualAddress
                end = start + section.Misc_VirtualSize
                position = image.find(pattern, start, end)
                while position >= 0:
                    if position % width == 0:
                        references.append({'rva': hex(position), 'section': section.Name.rstrip(b'\0').decode()})
                    position = image.find(pattern, position + 1, end)
            record = {'address': hex(address), 'length': int(row['length']), 'references': references}
            (found if references else unmatched).append(record)
        if orphans:
            result.append({'job': job['id'], 'pointer_width': width,
                           'with_data_references': found, 'without_data_references': unmatched})
            seeds = root / 'inventory/hybrid' / (job['id'] + '.additional_pointer_seeds.tsv')
            seeds.write_text(''.join(f"{int(record['address'], 16):x}\tFUN_{int(record['address'], 16):x}\n" for record in found))
            print(job['id'], 'orphan ranges', len(orphans), 'data-pointer candidates', len(found), 'unmatched', len(unmatched))
    serialized = json.dumps(result, indent=2) + '\n'
    if not report_path.exists() or report_path.read_text() != serialized:
        report_path.write_text(serialized)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=pathlib.Path, default=pathlib.Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    main(args.root.resolve())
