# PE inventory and preparation

Scanned **53 files** recursively by MZ signature and PE parsing: **26 PE images**, **27 companion files**. All original input hashes were rechecked after preparation: **True**.

Tool versions: `upx 5.2.1` and `pefile 2024.8.26`.

The `binaries/original` copies preserve the supplied FIXED input bytes. `binaries/unpacked` contains the analysis inputs, including byte-identical copies for images already unpacked. Original source files were never written.

| Input | Architecture | UPX preparation | Original bytes | Analysis bytes | Exports |
|---|---|---|---:|---:|---:|
| `3Dfx/arm64/Glide.dll` | ARM64 | not packed with UPX (UPX test) | 977408 | 977408 | 326 |
| `3Dfx/arm64/Glide2x.dll` | ARM64 | not packed with UPX (UPX test) | 973312 | 973312 | 318 |
| `3Dfx/arm64/Glide3x.dll` | ARM64 | not packed with UPX (UPX test) | 996864 | 996864 | 200 |
| `3Dfx/arm64_chpe_x86/Glide.dll` | CHPE x86/ARM64 hybrid | not packed with UPX (UPX test) | 1184768 | 1184768 | 163 |
| `3Dfx/arm64_chpe_x86/Glide2x.dll` | CHPE x86/ARM64 hybrid | not packed with UPX (UPX test) | 1184256 | 1184256 | 159 |
| `3Dfx/arm64_chpe_x86/Glide3x.dll` | CHPE x86/ARM64 hybrid | not packed with UPX (UPX test) | 1206784 | 1206784 | 100 |
| `3Dfx/arm64_chpe_x86/Napalm/Glide3x.dll` | CHPE x86/ARM64 hybrid | not packed with UPX (UPX test) | 1291776 | 1291776 | 222 |
| `3Dfx/x64/Glide.dll` | x64 | not packed with UPX (UPX test) | 982016 | 982016 | 326 |
| `3Dfx/x64/Glide2x.dll` | x64 | not packed with UPX (UPX test) | 980480 | 980480 | 318 |
| `3Dfx/x64/Glide3x.dll` | x64 | not packed with UPX (UPX test) | 998912 | 998912 | 200 |
| `3Dfx/x86/Glide.dll` | x86 | not packed with UPX (UPX test) | 893952 | 893952 | 163 |
| `3Dfx/x86/Glide2x.dll` | x86 | not packed with UPX (UPX test) | 892416 | 892416 | 159 |
| `3Dfx/x86/Glide3x.dll` | x86 | not packed with UPX (UPX test) | 913408 | 913408 | 100 |
| `3Dfx/x86/Napalm/Glide3x.dll` | x86 | not packed with UPX (UPX test) | 978944 | 978944 | 122 |
| `Cpl/arm64/dgVoodooCpl.exe` | ARM64 | not packed with UPX (UPX test) | 446464 | 446464 | 0 |
| `MS/arm64_chpe_x86/D3D8.dll` | CHPE x86/ARM64 hybrid | not packed with UPX (UPX test) | 2012672 | 2012672 | 4 |
| `MS/arm64_chpe_x86/D3D9.dll` | CHPE x86/ARM64 hybrid | not packed with UPX (UPX test) | 2251264 | 2251264 | 11 |
| `MS/arm64_chpe_x86/D3DImm.dll` | CHPE x86/ARM64 hybrid | not packed with UPX (UPX test) | 1024512 | 1024512 | 2 |
| `MS/arm64_chpe_x86/DDraw.dll` | CHPE x86/ARM64 hybrid | not packed with UPX (UPX test) | 1240064 | 1240064 | 15 |
| `MS/arm64x/D3D9.dll` | ARM64X hybrid | not packed with UPX (UPX test) | 3166208 | 3166208 | 11 |
| `MS/x64/D3D9.dll` | x64 | not packed with UPX (UPX test) | 1871360 | 1871360 | 11 |
| `MS/x86/D3D8.dll` | x86 | not packed with UPX (UPX test) | 1492992 | 1492992 | 4 |
| `MS/x86/D3D9.dll` | x86 | not packed with UPX (UPX test) | 1647104 | 1647104 | 11 |
| `MS/x86/D3DImm.dll` | x86 | unpacked (erased header restored) | 208384 | 796160 | 2 |
| `MS/x86/DDraw.dll` | x86 | not packed with UPX (UPX test) | 905728 | 905728 | 15 |
| `dgVoodooCpl.exe` | x64 | not packed with UPX (UPX test) | 451072 | 451072 | 0 |

## Reproduce

```sh
python3 scripts/prepare_binaries.py --source /home/rick/Documents/dgVoodoo2_87_5_FIXED --output /home/rick/Documents/dgVoodoo2_87_5_Decompiled --upx /usr/bin/upx
(cd /home/rick/Documents/dgVoodoo2_87_5_FIXED && sha256sum --check /home/rick/Documents/dgVoodoo2_87_5_Decompiled/inventory/source-sha256.txt)
sha256sum --check inventory/analysis-sha256.txt
```

The script requires Python 3, pefile, and UPX. It refuses conflicting binary outputs and a nonempty unowned generated directory. Each source file is read and hashed; executable extensions without a valid PE are reported. UPX test and decompression exit status and full output are retained under `upx-logs/`.

## Restoring erased UPX identifiers

The supplied `Wine-fix/patch_dgvoodoo_2875.py` already documents restoration of erased identifiers. For the remaining packed image this run first asserted two empty section names, zero raw size for section 0, and four zero bytes 32 bytes before section 1 raw data. Only the 8-byte names were changed to `UPX0` and `UPX1` (zero padded), and the four-byte pack-header magic to `UPX!`. The repaired copy was validated using `upx -t` before `upx -d` decompressed it. The original, repaired packed copy, and decompressed image are retained separately. Exact offsets, before/after bytes, hashes, commands, output, and status are in `manifest.json`.

For ordinary unpacked images, a negative UPX test means UPX did not recognize its own packing. For unsupported ARM64 formats it is not proof that no other packer could exist; normal PE sections, imports, exports, and exception tables remain directly inspectable.

## Metadata interpretation

Every `metadata/<relative input>.json` contains PE sections and their raw hashes, entropy, permissions, imports, delay imports, exports, load configuration with file offsets, debug/PDB records, and exception-table runtime-function records. Addresses explicitly distinguish RVAs from virtual addresses. Timestamp and PDB path are embedded build metadata, not verified build history. ARM64/CHPE exception records are retained directly; their presence does not establish instruction-set boundaries in mixed-architecture code. Each metadata file lists parser warnings rather than silently dropping them.

Preparation errors: 0.
