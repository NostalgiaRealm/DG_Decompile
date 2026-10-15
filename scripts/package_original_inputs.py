#!/usr/bin/env python3
"""Create and verify a deterministic ZIP of the exact supplied FIXED inputs.

Archives binaries/original, never binaries/unpacked. All file bytes and the
complete file set must match inventory/all-files.json. The original source tree
is checked too when present. Existing differing artifacts are never overwritten.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import stat
import tempfile
import zipfile
import zlib

ROOT = Path(__file__).resolve().parents[1]
ARCHIVE_NAME = 'dgVoodoo2_87_5_FIXED.zip'
ARCHIVE_PREFIX = 'dgVoodoo2_87_5_FIXED/'
FIXED_TIME = (1980, 1, 1, 0, 0, 0)


def digest_bytes(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def digest_file(path: Path) -> str:
    result = hashlib.sha256()
    with path.open('rb') as source:
        for data in iter(lambda: source.read(1024 * 1024), b''):
            result.update(data)
    return result.hexdigest()


def safe_name(name: str) -> bool:
    path = PurePosixPath(name)
    return (bool(name) and not path.is_absolute() and str(path) == name
            and all(piece not in ('', '.', '..') for piece in path.parts)
            and '\\' not in name and '\n' not in name and '\r' not in name)


def verify_tree(directory: Path, expected: dict) -> None:
    if directory.is_symlink() or not directory.is_dir():
        raise ValueError(f'Expected a real input directory: {directory}')
    paths = list(directory.rglob('*'))
    for path in paths:
        if path.is_symlink() or not (path.is_dir() or path.is_file()):
            raise ValueError(f'Refusing symlink or special input: {path}')
    observed = {path.relative_to(directory).as_posix() for path in paths if path.is_file()}
    if observed != set(expected):
        raise ValueError(f'Input file set differs in {directory}: '
                         f'missing={sorted(set(expected)-observed)}, '
                         f'extra={sorted(observed-set(expected))}')
    for name, record in expected.items():
        path = directory / name
        if path.stat().st_size != record['size'] or digest_file(path) != record['sha256']:
            raise ValueError(f'Input size/hash differs: {path}')


def check_existing(target: Path, staged: Path) -> None:
    if target.is_symlink():
        raise ValueError(f'Refusing symlink output: {target}')
    if target.exists() and (not target.is_file() or digest_file(target) != digest_file(staged)):
        raise ValueError(f'Refusing to replace a differing existing artifact: {target}')


def publish_identical_or_new(target: Path, staged: Path) -> None:
    check_existing(target, staged)
    if target.exists():
        return
    # A hard link is an atomic exclusive publish on the same filesystem. The
    # temporary name is removed on scope exit, leaving a normal single file.
    try:
        os.link(staged, target)
    except FileExistsError:
        check_existing(target, staged)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output-dir', type=Path, default=ROOT / 'release-assets')
    parser.add_argument('--source', type=Path,
                        help='Optional source-tree override; otherwise use inventory source_root when it still exists.')
    args = parser.parse_args()
    records = json.loads((ROOT / 'inventory/all-files.json').read_text())
    if len(records) != 53:
        raise ValueError('This release requires exactly the 53 inventoried supplied files')
    expected = {}
    for record in records:
        name = record['path']
        if not safe_name(name) or name in expected:
            raise ValueError(f'Invalid or duplicate inventory path: {name!r}')
        expected[name] = record
    retained = ROOT / 'binaries/original'
    manifest = json.loads((ROOT / 'inventory/manifest.json').read_text())
    source = args.source if args.source is not None else Path(manifest['source_root'])
    if args.source is not None and not source.exists():
        raise ValueError(f'Explicit source override does not exist: {source}')
    source_present = source.exists() or source.is_symlink()
    verify_tree(retained, expected)
    if source_present:
        verify_tree(source, expected)

    output = args.output_dir.absolute()
    if output.is_symlink():
        raise ValueError(f'Refusing symlink output directory: {output}')
    resolved_output = output.resolve()
    for protected in (retained.resolve(), source.resolve()):
        if resolved_output == protected or protected in resolved_output.parents:
            raise ValueError(f'Output must be outside each input tree: {output}')
    output.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix='.original-inputs-', dir=output) as temporary:
        stage = Path(temporary)
        archive_path = stage / ARCHIVE_NAME
        with zipfile.ZipFile(archive_path, 'w', compression=zipfile.ZIP_DEFLATED,
                             compresslevel=9, allowZip64=True, strict_timestamps=True) as archive:
            for name in sorted(expected):
                data = (retained / name).read_bytes()
                if len(data) != expected[name]['size'] or digest_bytes(data) != expected[name]['sha256']:
                    raise ValueError(f'Retained input changed while reading: {name}')
                info = zipfile.ZipInfo(ARCHIVE_PREFIX + name, date_time=FIXED_TIME)
                info.create_system = 3  # Unix, with an explicitly regular file mode.
                info.external_attr = (stat.S_IFREG | 0o644) << 16
                info.compress_type = zipfile.ZIP_DEFLATED
                info.extra = b''
                info.comment = b''
                archive.writestr(info, data, compress_type=zipfile.ZIP_DEFLATED, compresslevel=9)

        expected_names = [ARCHIVE_PREFIX + name for name in sorted(expected)]
        verified_members = []
        with zipfile.ZipFile(archive_path, 'r') as archive:
            if archive.namelist() != expected_names:
                raise ValueError('ZIP member order/file set differs from the complete input inventory')
            for info in archive.infolist():
                name = info.filename[len(ARCHIVE_PREFIX):]
                data = archive.read(info)  # Full decompression also validates ZIP CRC.
                actual_hash = digest_bytes(data)
                if (info.is_dir() or info.date_time != FIXED_TIME
                        or stat.S_IFMT(info.external_attr >> 16) != stat.S_IFREG
                        or info.file_size != expected[name]['size']
                        or len(data) != expected[name]['size']
                        or actual_hash != expected[name]['sha256']):
                    raise ValueError(f'ZIP member validation failed: {info.filename}')
                verified_members.append({'path': info.filename, 'size': len(data), 'sha256': actual_hash})

        # Verify complete trees again after archiving, including all companions.
        verify_tree(retained, expected)
        if source_present:
            verify_tree(source, expected)
        archive_hash = digest_file(archive_path)
        packed_input = expected['MS/x86/D3DImm.dll']
        report = {
            'status': 'passed',
            'archive': ARCHIVE_NAME,
            'archive_prefix': ARCHIVE_PREFIX,
            'archive_sha256': archive_hash,
            'archive_bytes': archive_path.stat().st_size,
            'expected_files': len(expected),
            'members_verified_by_full_read_and_sha256': len(verified_members),
            'uncompressed_bytes': sum(item['size'] for item in verified_members),
            'retained_input_files_verified_before_and_after': len(expected),
            'retained_inputs_unchanged': True,
            'original_source_present': source_present,
            'original_source_files_verified_before_and_after': len(expected) if source_present else 0,
            'original_source_unchanged': True if source_present else None,
            'method': 'Exact original supplied bytes; no unpacking, patching, added archive payload files, or target execution.',
            'determinism': {'sorted_members': True, 'member_timestamp': list(FIXED_TIME),
                            'regular_file_mode': '0644', 'compression': 'ZIP_DEFLATED level 9',
                            'zlib_runtime_version': zlib.ZLIB_RUNTIME_VERSION},
            'packed_x86_D3DImm_preserved': {'path': ARCHIVE_PREFIX + 'MS/x86/D3DImm.dll',
                                          'size': packed_input['size'], 'sha256': packed_input['sha256']},
            'members': verified_members,
        }
        checksum_path = stage / (ARCHIVE_NAME + '.sha256')
        checksum_path.write_text(f'{archive_hash}  {ARCHIVE_NAME}\n')
        report_path = stage / (ARCHIVE_NAME + '.verify.json')
        report_path.write_text(json.dumps(report, indent=2) + '\n')
        staged_paths = [archive_path, checksum_path, report_path]
        for path in staged_paths:
            check_existing(output / path.name, path)
        for path in staged_paths:
            publish_identical_or_new(output / path.name, path)
        if digest_file(output / ARCHIVE_NAME) != archive_hash:
            raise ValueError('Published ZIP hash differs from verified staged artifact')
    print(json.dumps({'status': 'passed', 'archive': str(output / ARCHIVE_NAME),
                      'files': len(expected), 'bytes': report['archive_bytes'],
                      'sha256': archive_hash, 'original_source_unchanged': report['original_source_unchanged']}))


if __name__ == '__main__':
    main()
