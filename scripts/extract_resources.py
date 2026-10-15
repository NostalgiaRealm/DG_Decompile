#!/usr/bin/env python3
"""Extract PE resources and inspectable string tables without loading target code."""
import argparse
import hashlib
import json
import re
import struct
from pathlib import Path

import pefile


def digest(data):
    return hashlib.sha256(data).hexdigest()


def label(entry):
    return str(entry.name) if entry.name is not None else str(entry.id)


def safe(value):
    return re.sub(r'[^a-zA-Z0-9_.-]', '_', value)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--input', type=Path, default=Path(__file__).resolve().parents[1] / 'binaries' / 'unpacked')
    ap.add_argument('--output', type=Path, default=Path(__file__).resolve().parents[1] / 'resources')
    args = ap.parse_args()
    records = []
    for path in sorted(args.input.rglob('*')):
        if not path.is_file() or path.suffix.lower() not in ('.exe', '.dll'):
            continue
        raw = path.read_bytes()
        pe = pefile.PE(data=raw)
        relative = path.relative_to(args.input)
        out = args.output / relative
        out.mkdir(parents=True, exist_ok=True)
        resources, strings = [], []
        root = getattr(pe, 'DIRECTORY_ENTRY_RESOURCE', None)
        for typ in root.entries if root else []:
            for name in typ.directory.entries:
                for lang in name.directory.entries:
                    s = lang.data.struct
                    data = pe.get_data(s.OffsetToData, s.Size)
                    if len(data) != s.Size:
                        raise ValueError(f'Truncated resource: {relative}/{label(typ)}/{label(name)}')
                    filename = '__'.join(safe(label(x)) for x in (typ, name, lang)) + '.bin'
                    (out / filename).write_bytes(data)
                    entry = {'type': label(typ), 'name': label(name), 'language': label(lang),
                             'rva': hex(s.OffsetToData), 'file_offset': hex(pe.get_offset_from_rva(s.OffsetToData)),
                             'size': s.Size, 'code_page': s.CodePage,
                             'sha256': digest(data), 'file': filename}
                    resources.append(entry)
                    if typ.id == 6 and name.id is not None:
                        pos = 0
                        for index in range(16):
                            length = struct.unpack_from('<H', data, pos)[0]
                            pos += 2
                            string = data[pos:pos + length * 2].decode('utf-16-le', errors='strict')
                            pos += length * 2
                            if string:
                                strings.append({'id': (name.id - 1) * 16 + index,
                                                'language': label(lang), 'text': string,
                                                'resource_file': filename})
        metadata = {'binary': relative.as_posix(), 'sha256': digest(raw), 'resources': resources,
                    'string_table': strings, 'limitations': [
                        'Static resource bytes only; no target execution or UI observation.',
                        'Only RT_STRING is decoded. Other payload formats are preserved verbatim.']}
        (out / 'manifest.json').write_text(json.dumps(metadata, indent=2, ensure_ascii=False) + '\n')
        with (out / 'strings.tsv').open('w') as f:
            f.write('id\tlanguage\ttext_json\tresource_file\n')
            for item in strings:
                f.write(f"{item['id']}\t{item['language']}\t{json.dumps(item['text'], ensure_ascii=False)}\t{item['resource_file']}\n")
        # Byte-offset anchored raw strings complement Ghidra's address-based recognized strings.
        with (out / 'raw-strings.tsv').open('w') as f:
            f.write('file_offset\tencoding\ttext_json\n')
            for encoding, pattern in [('ascii', rb'[\x20-\x7e]{5,}'),
                                      ('utf-16-le', rb'(?:[\x20-\x7e]\x00){5,}')]:
                for m in re.finditer(pattern, raw):
                    f.write(f'{m.start():#x}\t{encoding}\t{json.dumps(m.group().decode(encoding))}\n')
        records.append({'binary': relative.as_posix(), 'sha256': digest(raw),
                        'resource_count': len(resources), 'string_count': len(strings),
                        'manifest': (relative / 'manifest.json').as_posix()})
    args.output.mkdir(parents=True, exist_ok=True)
    (args.output / 'index.json').write_text(json.dumps(records, indent=2) + '\n')
    print(json.dumps({'binaries': len(records), 'resources': sum(r['resource_count'] for r in records)}))


if __name__ == '__main__':
    main()
