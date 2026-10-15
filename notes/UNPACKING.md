# Packing and decompression record

This analysis starts from the supplied **dgVoodoo2_87_5_FIXED** tree, which already contains the Wine-related changes described by its `Wine-fix` files. It is not an analysis of an untouched upstream download. No file in the supplied tree was modified.

The recursive scan examined **53 files by magic and PE structure**, not just by filename extension. It found **24 DLLs and 2 executables**. Exactly **one** remained UPX-packed: `MS/x86/D3DImm.dll`. All other PE inputs returned `NotPackedException` from UPX and were copied byte-for-byte to the analysis-input tree. Both control-panel executables were already unpacked.

## What was changed

The original D3DImm image has empty names for its first two sections and an erased UPX magic value. Running `upx -t` on that image reports `CantUnpackException: file is modified/hacked/protected`. This message comes from UPX's validation; it is not a finding that the application is malicious.

The supplied [`patch_dgvoodoo_2875.py`](../provenance/Wine-fix/patch_dgvoodoo_2875.py) documents the same header-erasure pattern. The preparation script restored only the following fields on a separate copy, after asserting their original values and the expected empty first-section raw data:

| File offset | Before | After | Meaning |
|---|---|---|---|
| `0x208` | eight zero bytes | `55 50 58 30 00 00 00 00` | Section 0 name: `UPX0` |
| `0x230` | eight zero bytes | `55 50 58 31 00 00 00 00` | Section 1 name: `UPX1` |
| `0x3e0` | four zero bytes | `55 50 58 21` | Pack-header signature: `UPX!` |

`0x3e0` is 32 bytes before the second section's raw data. These changes restore packer identifiers; they are not patches to the program's decoded instructions. UPX then validated the restored packed stream with `-t`, reporting `[OK]`, and decompressed it with `-d`, exiting successfully. The result was independently parsed as a normal x86 PE, with 2 exports and 40 imported symbols.

The original file was **208,384 bytes**; the decompressed analysis input is **796,160 bytes**.

| Artifact | SHA-256 |
|---|---|
| Supplied/original packed image | `93c534f2d17419ea78f15551f7e0aac78b3c503733a840914fa063708a5afe8e` |
| Packed image with restored identifiers | `4ff8ef062f28a7b99c4d00f8c89dc8c9eabe4c873cec74b9b51e5b0111bea64d` |
| Decompressed analysis input | `2f52824f2b9893b6e211315e09c9bc74f1970c0204cfd00fdb45c32b22a94d48` |

All three are retained under `binaries/original`, `binaries/header-restored`, and `binaries/unpacked`, preserving the relative path `MS/x86/D3DImm.dll`.

## Reproduce and inspect

This run used **UPX 5.2.1** at `/usr/bin/upx`, with **pefile 2024.8.26**. The full UPX version output, commands, stdout/stderr, exit status, and transformation records are retained in [`inventory`](../inventory/README.md).

From the root of this analysis directory:

```sh
python3 scripts/prepare_binaries.py \
  --source /home/rick/Documents/dgVoodoo2_87_5_FIXED \
  --output /home/rick/Documents/dgVoodoo2_87_5_Decompiled \
  --upx /usr/bin/upx
sha256sum --check inventory/analysis-sha256.txt
```

The script makes working copies in temporary storage, runs UPX there, and publishes only verified PE outputs. It refuses conflicting existing binary outputs. A successful rerun reproduced every analysis-input byte and left source hashes unchanged.

To repeat just the UPX steps on an explicitly disposable copy of the retained repaired image:

```sh
repro_dir=$(mktemp -d)
cp binaries/header-restored/MS/x86/D3DImm.dll "$repro_dir/D3DImm.dll"
upx -t "$repro_dir/D3DImm.dll"
upx -d "$repro_dir/D3DImm.dll"
sha256sum "$repro_dir/D3DImm.dll"
```

The original-test, restored-test, and unpack logs are in [`inventory/upx-logs/MS/x86/D3DImm.dll`](../inventory/upx-logs/MS/x86/D3DImm.dll). The manifest's temporary paths record the commands actually executed; the temporary directories are intentionally removed after each run. Use the retained repaired copy or the preparation script to reproduce them.

UPX's negative test only rules out packing that UPX recognizes. It is not a universal proof against every possible obfuscator. The analysis inputs also have directly readable PE sections, imports, exports, and, where present, exception tables. No DLL was loaded and no target executable was launched during preparation.
