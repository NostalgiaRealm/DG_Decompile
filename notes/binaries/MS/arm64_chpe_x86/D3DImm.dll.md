# MS/arm64_chpe_x86/D3DImm.dll

Small public interface: `GetD3DInterface` and `GetD3DVersion`. Follow these two exports into the implementation. This module is separate from the D3D8 and D3D9 front doors. The supplied x86 build was still packed; the unpacking report records its restored UPX identifiers and derived binary hash.

## Identity

- Machine/format: CHPE x86/ARM64 hybrid, PE32.
- Preferred image base: `0x10000000`; entry RVA: `0x81e20`.
- Supplied SHA-256: `67a9e8c6c4d465460cf5a6d5d33583d9c99fe485b4319a994a9011cbef449008`.
- Prepared SHA-256: `67a9e8c6c4d465460cf5a6d5d33583d9c99fe485b4319a994a9011cbef449008`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/MS/arm64_chpe_x86/D3DImm.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [arm64](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/full_decompilation.c) | 2,305 | 2,305 | 0 | 0 | 36,800 |
| [x86](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.x86/full_decompilation.c) | 5 | 5 | 0 | 0 | 514 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**arm64 navigation:** [Functions](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/functions.tsv) · [Calls](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/calls.tsv) · [Assembly](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/assembly.tsv) · [Strings](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/strings.tsv) · [Symbols](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/symbols.tsv) · [Coverage](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/summary.json)

**x86 navigation:** [Functions](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.x86/functions.tsv) · [Calls](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.x86/calls.tsv) · [Assembly](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.x86/assembly.tsv) · [Strings](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.x86/strings.tsv) · [Symbols](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.x86/symbols.tsv) · [Coverage](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.x86/summary.json)

Read [the hybrid architecture notes](../../../HYBRID.md) before interpreting ABI types, interworking thunks or loader fixups.

## Imports and useful search leads

Imported modules: `KERNEL32.dll`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/MS/arm64_chpe_x86/D3DImm.dll/manifest.json) and [byte-offset string index](../../../../resources/MS/arm64_chpe_x86/D3DImm.dll/raw-strings.tsv) provide further search anchors.

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `GetD3DInterface` | `0x99000` | [x86](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.x86/functions/10099000_GetD3DInterface.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/functions/1004bd90_GetD3DInterface_native.c) |
| 2 | `GetD3DVersion` | `0x99010` | [x86](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.x86/functions/10099010_GetD3DVersion.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/functions/1004bd80_GetD3DVersion_native.c) |
