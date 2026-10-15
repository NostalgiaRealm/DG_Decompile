#!/usr/bin/env python3
"""Create a complete Wine-compatible copy of the supplied dgVoodoo2 v2.87.5.

Python 3 + UPX 5.2.0. Inputs are hash-checked and never modified. Output must not
already exist. Patches all 23 Wine-export predicates in 22 affected DLLs.
The two D3DImm DLLs and every non-DLL file are copied byte-for-byte.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

# Injected, verified specifications for this exact distribution.
SOURCES = {'3Dfx/arm64/Glide.dll': 'f866a5177c5e2174a74e8db1a1854c4777c377f1ed841d240596215b8f6e888b',
 '3Dfx/arm64/Glide2x.dll': '4e25b777d529e09b0e0ece2d8d6cf26ff8e6d05eb1cfe173b17f833c2d8f88fa',
 '3Dfx/arm64/Glide3x.dll': 'cbbc4c3f0f5d7a0293ed2389868c06f1c7c237acb6dd33269f4c2a2cccdfd396',
 '3Dfx/arm64_chpe_x86/Glide.dll': '2fc2e9bf3e862c750f5aa60ead14e807de6121f3aeba03b0d31063264abce25b',
 '3Dfx/arm64_chpe_x86/Glide2x.dll': '16c2c0d9ec973f9a5236cfb00c150cec973b2759b98db50b7ae74358fd8d7a04',
 '3Dfx/arm64_chpe_x86/Glide3x.dll': '784414034d38d136f1c8beceb4ce9a0800aaa6e7a6e03adcb046c8f1f67580e8',
 '3Dfx/arm64_chpe_x86/Napalm/Glide3x.dll': 'd01feeea9eb77bcbb7cd3115031ddbc39e7c9bf302dfaaf0f71f7464a5a18f0e',
 '3Dfx/x64/Glide.dll': '097a8f4dd085eeaebf6a9d91ec186cbcfc516a64ff92886e477f3e390fff9f07',
 '3Dfx/x64/Glide2x.dll': '9e07c3667185354f95eb5daed2ed0b4347e0cbf0e7819550f1fc2090c1cc426a',
 '3Dfx/x64/Glide3x.dll': '911938a3a578e1ec98de4110e5717ac28906b908e95b9d61d4dd0ee64d93eb97',
 '3Dfx/x86/Glide.dll': '028dcaef62ccb9a051df986096031c4d63bdd4c19d997b14ed3389b1b09a368e',
 '3Dfx/x86/Glide2x.dll': 'dd61cf60e2cab0ed0d5dd4e26b88a3008592adc9ebe072d90dc086d67f7dfad2',
 '3Dfx/x86/Glide3x.dll': 'd704f1885f17d015750d9f8b125df83fef0d14bae0d18d0ba0209c904ac9cde2',
 '3Dfx/x86/Napalm/Glide3x.dll': '6a1cb33c44048cd5f005e99aabb178d832916c7794dc1b63855504ab19240749',
 'Cpl/arm64/dgVoodooCpl.exe': '726e819dde0e4a0e9e3fef5302a528403d1d9c7a07f3ce0578c29e65cfb115e9',
 'Cpl/x64/ReadMe.txt': '478b0cc90b9fc0298f5be46fd3b8a453ed6441d8a237004c939dbf99adf7c58b',
 'Doc/Readme.url': '9c0331928bf6ac7fd618cb0269e284a3e849f48c0c9bbe9f2e65df77fc272a60',
 'Doc/ReadmeDirectX.url': '51b1fb228a90191604af094c0adab10eb95da75d79cdf09a93d01462f944062c',
 'Doc/ReadmeGlide.url': 'c04479f57b9c3d2768fb1dfa55889457c0ffc6cc4b139a0942c0b0ab5d3245dc',
 'MS/arm64_chpe_x86/D3D8.dll': 'aef1f48392d7d291bd666fd069a869711a8b8e5305781a04c8ba9244fd024a02',
 'MS/arm64_chpe_x86/D3D9.dll': '0497d37533d75f9d9defbd637f65050b112460072ee47d34d902719bda1dff3d',
 'MS/arm64_chpe_x86/D3DImm.dll': '67a9e8c6c4d465460cf5a6d5d33583d9c99fe485b4319a994a9011cbef449008',
 'MS/arm64_chpe_x86/DDraw.dll': 'baebd076a8e3898b8abc4a2635431aadf06ba4fd6319f59f70d0d89fb5090915',
 'MS/arm64x/D3D9.dll': 'b5c19449f0c38e8dd4060e303dceac3de8172a20cab6fa46437e095775d39628',
 'MS/x64/D3D9.dll': '0b3485614a56fff27cf66c1cee670979defe4103342884203e9726f455a5b091',
 'MS/x86/D3D8.dll': 'd03e2562178db1fcf3493fc0a0b23a465e35c55d73adb3ec095be866cd662704',
 'MS/x86/D3D9.dll': '6a0ca214784be04b7c8b547105aa9d79acf4dc26c0b6f8702b437ddca54058b2',
 'MS/x86/D3DImm.dll': '93c534f2d17419ea78f15551f7e0aac78b3c503733a840914fa063708a5afe8e',
 'MS/x86/DDraw.dll': '612a24408a090a3c6f3886557fa18034ee742e94ad0a40ebdf854d2816176c2e',
 'QuickGuide.url': 'eb8b3e0ea127dd8d406782eb5b511553f1b3f144321de9bb7153d3ca51a1d4e4',
 'dgVoodoo.conf': '45cc0eb8e6ed4f067aca1b2e4ac1268dfbd164bbbd06d264c53e8a60642c4dbf',
 'dgVoodooCpl.exe': '87fb878166dcaef3e75ff170de030527c73f5c9b164c5943da13f8a97b0b75c6'}
SPECS = [{'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 382304,
               'rva': 382404,
               'signature_rva': 382416}],
  'path': '3Dfx/arm64/Glide.dll',
  'unpacked_sha256': 'f866a5177c5e2174a74e8db1a1854c4777c377f1ed841d240596215b8f6e888b'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 378640,
               'rva': 378740,
               'signature_rva': 378752}],
  'path': '3Dfx/arm64/Glide2x.dll',
  'unpacked_sha256': '4e25b777d529e09b0e0ece2d8d6cf26ff8e6d05eb1cfe173b17f833c2d8f88fa'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 393184,
               'rva': 393284,
               'signature_rva': 393296}],
  'path': '3Dfx/arm64/Glide3x.dll',
  'unpacked_sha256': 'cbbc4c3f0f5d7a0293ed2389868c06f1c7c237acb6dd33269f4c2a2cccdfd396'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 484144,
               'rva': 484260,
               'signature_rva': 484272}],
  'path': '3Dfx/arm64_chpe_x86/Glide.dll',
  'unpacked_sha256': '2fc2e9bf3e862c750f5aa60ead14e807de6121f3aeba03b0d31063264abce25b'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 482992,
               'rva': 483108,
               'signature_rva': 483120}],
  'path': '3Dfx/arm64_chpe_x86/Glide2x.dll',
  'unpacked_sha256': '16c2c0d9ec973f9a5236cfb00c150cec973b2759b98db50b7ae74358fd8d7a04'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 498512,
               'rva': 498628,
               'signature_rva': 498640}],
  'path': '3Dfx/arm64_chpe_x86/Glide3x.dll',
  'unpacked_sha256': '784414034d38d136f1c8beceb4ce9a0800aaa6e7a6e03adcb046c8f1f67580e8'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 520688,
               'rva': 520804,
               'signature_rva': 520816}],
  'path': '3Dfx/arm64_chpe_x86/Napalm/Glide3x.dll',
  'unpacked_sha256': 'd01feeea9eb77bcbb7cd3115031ddbc39e7c9bf302dfaaf0f71f7464a5a18f0e'},
 {'packed': True,
  'patches': [{'after': '7408',
               'before': '740a',
               'predicate_rva': 369092,
               'rva': 369151,
               'signature_rva': 369128}],
  'path': '3Dfx/x64/Glide.dll',
  'unpacked_sha256': 'bb048ebaf571845c9c20ca77ac109a782f6b7dfcfc0cb27b6fc77656d3b88695'},
 {'packed': True,
  'patches': [{'after': '7408',
               'before': '740a',
               'predicate_rva': 367900,
               'rva': 367959,
               'signature_rva': 367936}],
  'path': '3Dfx/x64/Glide2x.dll',
  'unpacked_sha256': '7d93a9a15df8b13899f4f662491df281f51286a0ab7c926a2b1099cd0b671271'},
 {'packed': True,
  'patches': [{'after': '7408',
               'before': '740a',
               'predicate_rva': 377640,
               'rva': 377699,
               'signature_rva': 377676}],
  'path': '3Dfx/x64/Glide3x.dll',
  'unpacked_sha256': 'f4e5505aac2cc6788594c7a01bfc1305f81014a97d6c216335204454d073c14c'},
 {'packed': True,
  'patches': [{'after': 'b000',
               'before': 'b001',
               'predicate_rva': 313896,
               'rva': 313971,
               'signature_rva': 313934}],
  'path': '3Dfx/x86/Glide.dll',
  'unpacked_sha256': 'ee87eb7c251d6830ecb3dc28ded3bb3d16f79c4a981d32e4472e9e9e78f796a5'},
 {'packed': True,
  'patches': [{'after': 'b000',
               'before': 'b001',
               'predicate_rva': 312984,
               'rva': 313059,
               'signature_rva': 313022}],
  'path': '3Dfx/x86/Glide2x.dll',
  'unpacked_sha256': 'b28a4fcaab0bc3e46ae7c6f1d5f6d8871ff305b4e96799e5899376a156534062'},
 {'packed': True,
  'patches': [{'after': 'b000',
               'before': 'b001',
               'predicate_rva': 323968,
               'rva': 324043,
               'signature_rva': 324006}],
  'path': '3Dfx/x86/Glide3x.dll',
  'unpacked_sha256': '781109f34677634e4a989e5ee1bd61095228049167ae2b4d604f14723757d5ec'},
 {'packed': True,
  'patches': [{'after': 'b000',
               'before': 'b001',
               'predicate_rva': 337289,
               'rva': 337364,
               'signature_rva': 337327}],
  'path': '3Dfx/x86/Napalm/Glide3x.dll',
  'unpacked_sha256': '1146471e8cc76f6c1456d490c739e7133c938882687768d5521bf208e9d19119'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 983360,
               'rva': 983476,
               'signature_rva': 983488}],
  'path': 'MS/arm64_chpe_x86/D3D8.dll',
  'unpacked_sha256': 'aef1f48392d7d291bd666fd069a869711a8b8e5305781a04c8ba9244fd024a02'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 1193744,
               'rva': 1193860,
               'signature_rva': 1193872}],
  'path': 'MS/arm64_chpe_x86/D3D9.dll',
  'unpacked_sha256': '0497d37533d75f9d9defbd637f65050b112460072ee47d34d902719bda1dff3d'},
 {'packed': False,
  'patches': [],
  'path': 'MS/arm64_chpe_x86/D3DImm.dll',
  'unpacked_sha256': '67a9e8c6c4d465460cf5a6d5d33583d9c99fe485b4319a994a9011cbef449008'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 465056,
               'rva': 465172,
               'signature_rva': 465184}],
  'path': 'MS/arm64_chpe_x86/DDraw.dll',
  'unpacked_sha256': 'baebd076a8e3898b8abc4a2635431aadf06ba4fd6319f59f70d0d89fb5090915'},
 {'packed': False,
  'patches': [{'after': '00008052',
               'before': '20008052',
               'predicate_rva': 1007872,
               'rva': 1007972,
               'signature_rva': 1007984},
              {'after': '00008052',
               'before': '20008052',
               'predicate_rva': 2183584,
               'rva': 2183692,
               'signature_rva': 2183704}],
  'path': 'MS/arm64x/D3D9.dll',
  'unpacked_sha256': 'b5c19449f0c38e8dd4060e303dceac3de8172a20cab6fa46437e095775d39628'},
 {'packed': True,
  'patches': [{'after': '7408',
               'before': '740a',
               'predicate_rva': 976204,
               'rva': 976263,
               'signature_rva': 976240}],
  'path': 'MS/x64/D3D9.dll',
  'unpacked_sha256': 'b94f686a3c538822f2d0a821a8fb17da865cdd023c9ed93f4a496fc2ef5343d3'},
 {'packed': True,
  'patches': [{'after': 'b000',
               'before': 'b001',
               'predicate_rva': 662984,
               'rva': 663059,
               'signature_rva': 663022}],
  'path': 'MS/x86/D3D8.dll',
  'unpacked_sha256': '48ed7e36310ad1d96bebaf7c6c638a01a193b95cd3abd781f09e25d8221bb17f'},
 {'packed': True,
  'patches': [{'after': 'b000',
               'before': 'b001',
               'predicate_rva': 804509,
               'rva': 804584,
               'signature_rva': 804547}],
  'path': 'MS/x86/D3D9.dll',
  'unpacked_sha256': '84f46cf997eb00de239dd65399e3004fe96e0fe004495c4d4c1689305ac69fe2'},
 {'packed': True,
  'patches': [],
  'path': 'MS/x86/D3DImm.dll',
  'unpacked_sha256': '2f52824f2b9893b6e211315e09c9bc74f1970c0204cfd00fdb45c32b22a94d48'},
 {'packed': True,
  'patches': [{'after': 'b000',
               'before': 'b001',
               'predicate_rva': 305718,
               'rva': 305793,
               'signature_rva': 305756}],
  'path': 'MS/x86/DDraw.dll',
  'unpacked_sha256': '0953bb15fa1de6607eff6bc429a5f060ceefc1a51529207210e045bdd0743996'}]

def sha(data):
    return hashlib.sha256(data).hexdigest()

def sections(data):
    pe = struct.unpack_from('<I', data, 0x3c)[0]
    if data[pe:pe+4] != b'PE\0\0':
        raise ValueError('Not a PE file')
    count = struct.unpack_from('<H', data, pe+6)[0]
    opt = struct.unpack_from('<H', data, pe+20)[0]
    return [pe+24+opt+40*i for i in range(count)]

def offset(data, rva):
    for s in sections(data):
        size, va, rawsize, raw = struct.unpack_from('<IIII', data, s+8)
        if va <= rva < va+rawsize:
            return raw+rva-va
    raise ValueError(f'Unmapped RVA {rva:#x}')

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('source',type=Path)
    ap.add_argument('destination',type=Path)
    ap.add_argument('--upx',required=True,type=Path,help='UPX executable; tested with 5.2.0')
    args=ap.parse_args()
    src=args.source.resolve();dst=args.destination.absolute();upx=args.upx.resolve()
    if dst.exists(): raise SystemExit(f'Refusing existing destination: {dst}')
    if src==dst or src in dst.parents: raise SystemExit('Destination must be outside the original directory')
    files={p.relative_to(src).as_posix():p for p in src.rglob('*') if p.is_file()}
    if set(files)!=set(SOURCES): raise SystemExit('Input file list differs from the verified distribution')
    for name,p in files.items():
        if p.is_symlink() or sha(p.read_bytes())!=SOURCES[name]:
            raise SystemExit(f'Refusing unknown input: {name}')
    dst.parent.mkdir(parents=True,exist_ok=True)
    with tempfile.TemporaryDirectory(prefix='.dgvoodoo-2875-',dir=dst.parent) as tmp:
        stage=Path(tmp)/'fixed'
        shutil.copytree(src,stage)
        records=[]
        for spec in SPECS:
            name=spec['path'];p=stage/name;original=p.read_bytes()
            if not spec['patches']:
                records.append(dict(path=name,status='unchanged: no Wine-export predicate',source_sha256=sha(original),fixed_sha256=sha(original),patches=[]))
                continue
            if spec['packed']:
                data=bytearray(original);ss=sections(data)
                for i in (0,1):
                    if data[ss[i]:ss[i]+8]!=b'\0'*8: raise ValueError(f'Unexpected packed section: {name}')
                    data[ss[i]:ss[i]+8]=f'UPX{i}'.encode().ljust(8,b'\0')
                raw=struct.unpack_from('<I',data,ss[1]+20)[0]
                if data[raw-32:raw-28]!=b'\0'*4: raise ValueError(f'Unexpected UPX signature: {name}')
                data[raw-32:raw-28]=b'UPX!'
                p.write_bytes(data)
                subprocess.run([str(upx),'-d',str(p)],check=True,stdout=subprocess.PIPE,stderr=subprocess.STDOUT)
            data=bytearray(p.read_bytes())
            if sha(data)!=spec['unpacked_sha256']: raise ValueError(f'Unexpected unpacked hash: {name}')
            changes=[]
            for patch in spec['patches']:
                before=bytes.fromhex(patch['before']);after=bytes.fromhex(patch['after']);pos=offset(data,patch['rva'])
                if data[pos:pos+len(before)]!=before or len(before)!=len(after): raise ValueError(f'Wrong instruction: {name}')
                data[pos:pos+len(after)]=after
                changes.append(dict(rva=hex(patch['rva']),file_offset=hex(pos),before=before.hex(),after=after.hex(),predicate_rva=hex(patch['predicate_rva'])))
            p.write_bytes(data)
            records.append(dict(path=name,status='patched',source_sha256=sha(original),unpacked_sha256=spec['unpacked_sha256'],fixed_sha256=sha(data),patches=changes))
            print(f"Patched {name}: {len(changes)} predicate(s)")
        # Check the source again before publishing; protect against concurrent changes.
        for name,p in files.items():
            if sha(p.read_bytes())!=SOURCES[name]: raise ValueError(f'Source changed during build: {name}')
        info=stage/'Wine-fix';info.mkdir()
        (info/'patch-manifest.json').write_text(json.dumps(records,indent=2)+'\n')
        (info/'source-sha256.json').write_text(json.dumps(SOURCES,indent=2)+'\n')
        shutil.copy2(Path(__file__).resolve(),info/'patch_dgvoodoo_2875.py')
        if dst.exists(): raise SystemExit(f'Destination appeared during build: {dst}')
        os.rename(stage,dst)
    print(f'Created {dst}: {len(files)} original files, 22 patched DLLs, 23 predicates')

if __name__=='__main__':
    main()
