# MS/x86/D3DImm.dll

Small public interface: `GetD3DInterface` and `GetD3DVersion`. Follow these two exports into the implementation. This module is separate from the D3D8 and D3D9 front doors. The supplied x86 build was still packed; the unpacking report records its restored UPX identifiers and derived binary hash.

## Identity

- Machine/format: x86, PE32.
- Preferred image base: `0x10000000`; entry RVA: `0x5c7ae`.
- Supplied SHA-256: `93c534f2d17419ea78f15551f7e0aac78b3c503733a840914fa063708a5afe8e`.
- Prepared SHA-256: `2f52824f2b9893b6e211315e09c9bc74f1970c0204cfd00fdb45c32b22a94d48`.
- Packing result: unpacked (erased header restored).
- [Full PE metadata](../../../../inventory/metadata/MS/x86/D3DImm.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x86](../../../../decompiled/MS/x86/D3DImm.dll/full_decompilation.c) | 1,394 | 1,394 | 0 | 493 | 3,403 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x86 navigation:** [Functions](../../../../decompiled/MS/x86/D3DImm.dll/functions.tsv) · [Calls](../../../../decompiled/MS/x86/D3DImm.dll/calls.tsv) · [Assembly](../../../../decompiled/MS/x86/D3DImm.dll/assembly.tsv) · [Strings](../../../../decompiled/MS/x86/D3DImm.dll/strings.tsv) · [Symbols](../../../../decompiled/MS/x86/D3DImm.dll/symbols.tsv) · [Coverage](../../../../decompiled/MS/x86/D3DImm.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.DLL`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/MS/x86/D3DImm.dll/manifest.json) and [byte-offset string index](../../../../resources/MS/x86/D3DImm.dll/raw-strings.tsv) provide further search anchors.

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `GetD3DInterface` | `0x3c64a` | [x86](../../../../decompiled/MS/x86/D3DImm.dll/functions/1003c64a_GetD3DInterface.c) |
| 2 | `GetD3DVersion` | `0x3c644` | [x86](../../../../decompiled/MS/x86/D3DImm.dll/functions/1003c644_GetD3DVersion.c) |
