# Why?
Background: dgVoodoo versions from about 2.8 on were deliberately blocked by its creator DEGE to NOT function on Wine, this GPT-6 Astra created fix removes this block making it possible to run dgVoodoo on Wine again. Additionally, I instructed GPT-6 Astra with REA (Reverse Engineer Anything) loaded to then decompile this fixed version, which is the source code that is available in this repository. The rest of this README file and other files have been fully written by AI unfortunately. If I will find the time to further improve on this, I sure will. I am also absolutely accepting pull requests/comments from everyone.

# DG_Decompile

Decompile of the dgVoodoo2 2.87.5 version fully fixed to work with Wine and Proton.

## Downloads

- [Complete inspection package](https://github.com/NostalgiaRealm/DG_Decompile/releases/download/v2.87.5/dgVoodoo2_87_5_inspection.tar.gz): recovered code, notes, assembly, resources, exact input binaries, unpacked analysis inputs and all 36 saved Ghidra projects.
- [Original fixed input distribution](https://github.com/NostalgiaRealm/DG_Decompile/releases/download/v2.87.5/dgVoodoo2_87_5_FIXED.zip): the exact 53 files supplied for this decompilation, including all 24 DLLs and both executables, with their original directory layout and prior Wine-fix evidence.
- [Release checksums and verification records](https://github.com/NostalgiaRealm/DG_Decompile/releases/tag/v2.87.5).

“Original inputs” means the supplied **fixed** distribution. Its existing compatibility patches are preserved byte for byte. The original-input ZIP also preserves the still-packed x86 D3DImm DLL; its unpacked counterpart is included in the complete inspection package. The [Wine-fix report](provenance/Wine-fix/README.md) records the changes and the scope of the earlier runtime tests. This publication adds static analysis, without extending those runtime test claims.

## Inspection edition

All **24 DLLs and 2 executables** in the supplied `dgVoodoo2_87_5_FIXED` directory were processed. The output contains **54,620 C-like function exports across 36 architecture views**, with readable notes, assembly, indexes, resources and saved Ghidra projects. Every indexed function produced C-like pseudocode.

**Start with [the binary index](INDEX.md)** to choose a DLL or executable. Read [the concrete code notes](notes/CODE_MAP.md) for guided examples, [the control-panel notes](notes/CONTROL_PANEL.md) for configuration and dialog handling, and [Reading the code](notes/READING_THE_CODE.md) for address and type conventions.

The C files are recovered pseudocode with inferred types and generated internal names. They are not the original C/C++ source or a buildable replacement. Counts include compiler helpers, thunks and implementations repeated across architecture views. Remaining unowned instruction fragments, undecoded executable ranges, indirect calls and decompiler warnings are preserved explicitly for further inspection.

## What is included

| Location | Contents |
|---|---|
| [INDEX.md](INDEX.md) | Every input binary, architecture views and links to its reading notes |
| `decompiled/` | One C file per recovered function, combined C, assembly, calls, strings, symbols and coverage tables |
| `analysis-projects/` | In the complete inspection download: one saved Ghidra project per view; open its `analysis.gpr` with Ghidra 12.1.4 |
| [notes/](notes/) | Per-binary export maps, readable examples, hybrid handling, control-panel decoding and unpacking details |
| [inventory/manifest.json](inventory/manifest.json) | Input identities, packing results, transformation hashes and per-binary PE metadata |
| `binaries/original/` | In the complete inspection download: byte-identical copy of all 53 supplied files |
| `binaries/unpacked/` | In the complete inspection download: all 26 analysis-ready PE files, retaining the original relative paths |
| `binaries/hybrid/` | In the complete inspection download: derived architecture views; these mapped images are analysis inputs, not replacement DLLs |
| `resources/` | 3,714 PE resource payloads, their locations/hashes, string tables and raw strings |
| [provenance/Wine-fix/](provenance/Wine-fix/) | The supplied earlier Wine-fix report, patch manifest and historical evidence |
| [scripts/](scripts/) and `logs/` | Reproducible preparation, analysis, export, verification and packaging steps |

## Packing and mixed architectures

Only **`MS/x86/D3DImm.dll`** still required UPX decompression. Its erased `UPX0`, `UPX1` and `UPX!` identifiers were restored on a separate copy, validated and decompressed with UPX 5.2.1. [The unpacking record](notes/UNPACKING.md) gives exact byte offsets, hashes, commands and tool output. The other 25 PE files were already unpacked. All original inputs remain unchanged.

Eight CHPE DLLs contain both x86 and ARM64 code. The ARM64X D3D9 DLL has ARM64, ARM64EC and x64 views, including 347 recorded loader fixups. [The hybrid notes](notes/HYBRID.md) explain the projections, ABI limits and analysis-only branch overrides that prevent decoding a native destination with the wrong processor. Every successful hybrid C export passed instruction-origin range checks.

[The switch-table notes](notes/SWITCH_TABLE_RECOVERY.md) show how three compact ARM64 dispatch tables were decoded from their original bytes to resolve decompiler failures, with exact targets and readable pseudocode.

## Verification

[The final verification report](evidence/delivery-verification.json) passed for all **26 binaries / 36 views**. It checked:

- All 53 original file hashes and their complete retained copies.
- Every function index and its individual/combined C output.
- **4,138,300 exported instruction records** against the actual analysis-input bytes.
- **1,290,660 hybrid decompiler instruction origins** against the selected processor ranges.
- Saved projects, resource contents and all 23 already-supplied Wine-fix instruction sites.
- The [independent hybrid audit](inventory/hybrid_export_audit.json), including metadata seeds, cross-architecture bridges and applicable fixups.

These checks validate the static inspection artifacts. They do not establish complete source recovery, correct inferred types, every indirect target, or runtime rendering behavior. No target DLL or executable was run during this task. Historical game-test results in `provenance/` are labeled as earlier evidence.

## Reproduce or share

See [Reproducing this edition](notes/REPRODUCING.md) for the exact toolchain and commands. The workspace contains its local Ghidra installation under `tools/`; the shareable archive omits the tool installation and retains the inspection outputs and projects.

The Git repository contains the browsable code, notes, resources, scripts, inventories and evidence. Binary inputs and saved Ghidra databases are distributed as release assets. Download and extract the complete inspection package to use the saved projects or run the full delivery verifier without first recreating those inputs. `scripts/package_original_inputs.py` reproduces and verifies the separate original-input ZIP.

The companion file `dgVoodoo2_87_5_inspection.tar.gz` contains this edition. Its `.sha256` and `.verify.json` sidecars identify the archive and record a full member-by-member content-hash check. Inside the archive, `DELIVERY_SHA256SUMS` covers the delivered files. Check those sums before rerunning scripts that regenerate reports.
