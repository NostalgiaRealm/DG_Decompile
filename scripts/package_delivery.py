#!/usr/bin/env python3
"""Package the verified inspection outputs, excluding the third-party tool installation."""
import gzip
import hashlib
import json
import subprocess
import sys
import tarfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ARCHIVE = 'dgVoodoo2_87_5_inspection.tar.gz'
INCLUDE = ['.gitignore', '.gitattributes', 'README.md', 'INDEX.md', 'notes', 'scripts', 'provenance', 'evidence',
           'inventory', 'resources', 'binaries', 'decompiled', 'analysis-projects', 'logs']


def sha(path):
    h = hashlib.sha256()
    with path.open('rb') as f:
        for data in iter(lambda: f.read(1024 * 1024), b''):
            h.update(data)
    return h.hexdigest()


def main():
    subprocess.run([sys.executable, str(ROOT / 'scripts/verify_delivery.py')], check=True, cwd=ROOT)
    report = json.loads((ROOT / 'evidence/delivery-verification.json').read_text())
    if report['status'] != 'passed' or report['verified_views'] != report['expected_views']:
        raise SystemExit('Refusing to package an unverified or incomplete batch.')
    files = []
    for name in INCLUDE:
        path = ROOT / name
        if not path.exists():
            raise SystemExit(f'Missing required delivery component: {name}')
        if path.is_symlink():
            raise SystemExit(f'Refusing a symlink delivery root: {name}')
        for item in path.rglob('*') if path.is_dir() else [path]:
            if '__pycache__' in item.parts or item.suffix in ('.pyc', '.lock', '.lock~'):
                continue
            if item.is_symlink():
                raise SystemExit(f'Refusing a symlink in the delivery: {item}')
            if item.is_file():
                files.append(item)
    files.sort(key=lambda p: p.relative_to(ROOT).as_posix())
    manifest = ROOT / 'DELIVERY_SHA256SUMS'
    hashes = {}
    with manifest.open('w') as f:
        for path in files:
            relative = path.relative_to(ROOT).as_posix()
            hashes[relative] = sha(path)
            f.write(f'{hashes[relative]}  {relative}\n')
    files.append(manifest)
    hashes[manifest.name] = sha(manifest)
    target = ROOT / ARCHIVE
    temporary = target.with_suffix('.gz.tmp')
    with temporary.open('wb') as output:
        with gzip.GzipFile(filename='', mode='wb', fileobj=output, compresslevel=6, mtime=0) as gz:
            with tarfile.open(fileobj=gz, mode='w|', format=tarfile.PAX_FORMAT) as archive:
                for path in files:
                    info = archive.gettarinfo(str(path), arcname='dgVoodoo2_87_5_Decompiled/' + path.relative_to(ROOT).as_posix())
                    info.uid = info.gid = 0
                    info.uname = info.gname = ''
                    info.mtime = 0
                    info.mode = 0o644
                    with path.open('rb') as f:
                        archive.addfile(info, f)
    seen = set()
    prefix = 'dgVoodoo2_87_5_Decompiled/'
    with tarfile.open(temporary, 'r|gz') as archive:
        for member in archive:
            if not member.isfile() or not member.name.startswith(prefix):
                raise RuntimeError('Unexpected archive entry: ' + member.name)
            relative = member.name[len(prefix):]
            if relative in seen or relative not in hashes:
                raise RuntimeError('Duplicate or unexpected archive file: ' + relative)
            h = hashlib.sha256()
            with archive.extractfile(member) as f:
                for data in iter(lambda: f.read(1024 * 1024), b''):
                    h.update(data)
            if h.hexdigest() != hashes[relative]:
                raise RuntimeError('Archive content hash mismatch: ' + relative)
            seen.add(relative)
    if seen != set(hashes):
        raise RuntimeError('Missing archive entries')
    temporary.replace(target)
    archive_hash = sha(target)
    (ROOT / (ARCHIVE + '.sha256')).write_text(f'{archive_hash}  {ARCHIVE}\n')
    result = {'archive': str(target), 'bytes': target.stat().st_size,
              'sha256': archive_hash, 'files': len(files), 'archive_content_verification': 'passed'}
    (ROOT / (ARCHIVE + '.verify.json')).write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps(result))


if __name__ == '__main__':
    main()
