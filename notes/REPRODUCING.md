# Reproducing this inspection edition

The saved `.c` and `.tsv` files can be read with any text editor. The saved Ghidra projects under `analysis-projects/` allow interactive analysis. A matching Ghidra installation is needed to open or regenerate them; it is not needed to read the exported text.

For the complete working tree, download [the inspection release archive](https://github.com/NostalgiaRealm/DG_Decompile/releases/download/v2.87.5/dgVoodoo2_87_5_inspection.tar.gz). Git contains the exported code, notes, resources and evidence; binary inputs and saved analysis projects are included in the release archive. The separate [original-input ZIP](https://github.com/NostalgiaRealm/DG_Decompile/releases/download/v2.87.5/dgVoodoo2_87_5_FIXED.zip) contains the exact fixed distribution supplied for analysis.

## Toolchain

This run used Ghidra 12.1.4, OpenJDK 25, Python 3.14, pefile 2024.8.26, Capstone 5.0.7 and UPX 5.2.1. Exact version output and the official release URL are recorded in [toolchain.json](../evidence/toolchain.json). REA 6.4.0 provided independent control-panel PE resource evidence in [rea-resources.json](../evidence/rea-resources.json); the bulk C export used local Ghidra headless scripts, not REA pseudocode calls.

The official Ghidra archive is `ghidra_12.1.4_PUBLIC_20260921.zip`, SHA-256:

```text
ddac49f903da9d5bac833e5cc79395098b9c33cfd3279be5f31bd00387d2d4db
```

The local installation is `tools/ghidra_12.1.4_PUBLIC/`. The shareable inspection archive omits this tool installation and its download; obtain the same release from the recorded official URL when regenerating. Java, UPX and Python packages remain host prerequisites. No global tool configuration was changed for the batch.

## Full sequence

Run these from the root of an inspection workspace containing the supplied scripts. Set `INPUT_DIR` to the fixed input distribution. To work from the retained copy, use the absolute path to `binaries/original`. Set `OUTPUT_DIR` to the absolute path of this inspection workspace. Both variables are examples of task-specific names, not changes to system configuration.

```sh
python3 scripts/prepare_binaries.py --source "$INPUT_DIR" --output "$OUTPUT_DIR" --upx /usr/bin/upx
python3 scripts/hybrid_metadata.py --source "$INPUT_DIR" --output "$OUTPUT_DIR"
python3 scripts/extract_resources.py
python3 scripts/inspect_control_panels.py
python3 scripts/decompile_all.py --ordinary --hybrid --workers 2
python3 scripts/hybrid_audit.py
python3 scripts/build_reader_guide.py
python3 scripts/verify_delivery.py
python3 scripts/write_readme.py
python3 scripts/package_original_inputs.py
python3 scripts/package_delivery.py
```

Check each script's `--help` if changing paths. The preparation script preserves original copies, restores the known erased UPX identifiers on a separate copy and refuses conflicting output bytes. The hybrid script records its derived views and their hashes. The decompilation driver records the exact headless command, selected language/compiler specification, script hashes, input hashes, exit code and project location for each job. It reuses a compatible saved analysis project, and exports again when its relevant scripts change.

The source layout is retained in ordinary output paths. Hybrid output IDs flatten that path and add an architecture suffix; their job records map them back to the exact input. The generic AArch64 ILP32 analysis used for CHPE preserves 32-bit pointer width, but does not recover a complete Windows hybrid ABI type model. Historical logs include intermediate and failed attempts; the current `decompiled/` exports and final verification reports identify the delivered result.

## Function discovery and correction

Ghidra performs its default PE analysis for the ordinary images. Hybrid import explicitly maps the full image at its preferred base, seeds functions from metadata/exports and restricts executable ranges to the selected architecture. `RecoverFunctions.java` adds functions only at supported direct-call/export targets; remaining instruction fragments are retained in assembly and coverage reports.

The ARM64X recovery also adds function starts backed by aligned pointers in non-executable data, with exact reference evidence. Two metadata-defined starts displaced by Ghidra to interior prologues are restored to their recorded addresses. These changes alter analysis metadata only.

The x64 control-panel function at VA `0x140002910` initially failed with `Low-level Error: Overlapping input varnodes`. `RepairDecompilerFailure.java` relaxed the analysis-derived signature source to let Ghidra infer storage again. It then produced C. No executable bytes were changed. The repair is documented in that function's generated comment and in the repair log; the driver applies it only to the exact matching control-panel input.

Three native CHPE functions initially failed with `Trying to build dynamic symbol on locked varnode`: D3D8 at `0x10012968`, D3D9 at `0x10014800`, and D3DImm at `0x1007b170`. Their original signed-byte switch tables were independently decoded. `RepairSwitchTable.java` records the correct target sets as Ghidra jump-table overrides, after which C and HighFunction output succeeded. No table bytes, executable instructions or ABI prototypes were changed by this successful repair. Earlier unsuccessful inferred-variable/prototype trials were rolled back and remain visible in diagnostic logs.

Function export first allows 45 seconds, then retries a failed decompilation with 180 seconds. A remaining failure retains its error and assembly fallback. A successful batch status must be based on the final saved project, successful headless exit and summary, not merely on a partially written C file.

## Verification and sharing

`verify_delivery.py` checks the full source-file set and hashes, prepared and projected inputs, function/file counts, every exported instruction's bytes, architecture placement, saved projects, resource hashes and the 23 already-supplied Wine-fix sites. It records exact results in `evidence/delivery-verification.json`. The independent hybrid audit also checks all metadata seeds and full function-body ranges against the appropriate architecture view.

For an unpacked shared bundle whose original external input directory is unavailable, the verification script falls back to the complete retained input copy. To request that check explicitly:

```sh
sha256sum --check DELIVERY_SHA256SUMS
python3 scripts/verify_delivery.py --source binaries/original
```

The retained input copy contains all 53 supplied files, including non-executable documentation. A fresh verification writes a new report, so its timestamp/path-dependent bytes can differ from the original checksum manifest; check the delivery checksums before rerunning generators. Machine-local absolute paths in historical logs are evidence of this run. Relative document links and exported code remain usable after moving the directory.

These are static consistency and coverage checks. They do not prove that the decompiler recovered every possible function, correct type, indirect target or source-level construct, and they are not rendering tests.
