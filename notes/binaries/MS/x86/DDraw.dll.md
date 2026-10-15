# MS/x86/DDraw.dll

DirectDraw API front door. Useful roots are `DirectDrawCreate`, `DirectDrawCreateEx`, `DirectDrawCreateClipper`, the ANSI/Unicode enumeration exports, and the COM exports `DllGetClassObject` and `DllCanUnloadNow`. Dispatch through function pointers and object tables requires following beyond these exported wrappers.

## Identity

- Machine/format: x86, PE32.
- Preferred image base: `0x10000000`; entry RVA: `0x60cd4`.
- Supplied SHA-256: `2ed78bef2eb5935f81a122d8cf5707516d5b6c65094c51b253b6569fadd96454`.
- Prepared SHA-256: `2ed78bef2eb5935f81a122d8cf5707516d5b6c65094c51b253b6569fadd96454`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/MS/x86/DDraw.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x86](../../../../decompiled/MS/x86/DDraw.dll/full_decompilation.c) | 1,936 | 1,936 | 0 | 3,123 | 1,562 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x86 navigation:** [Functions](../../../../decompiled/MS/x86/DDraw.dll/functions.tsv) · [Calls](../../../../decompiled/MS/x86/DDraw.dll/calls.tsv) · [Assembly](../../../../decompiled/MS/x86/DDraw.dll/assembly.tsv) · [Strings](../../../../decompiled/MS/x86/DDraw.dll/strings.tsv) · [Symbols](../../../../decompiled/MS/x86/DDraw.dll/symbols.tsv) · [Coverage](../../../../decompiled/MS/x86/DDraw.dll/summary.json)

## Imports and useful search leads

Imported modules: `KERNEL32.DLL`, `GDI32.dll`, `ole32.dll`, `SHELL32.dll`, `SHLWAPI.dll`, `USER32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/MS/x86/DDraw.dll/manifest.json) and [byte-offset string index](../../../../resources/MS/x86/DDraw.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x4aa36` | `0x4aa81` | `b000` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/1004aa36_FUN_1004aa36.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `AcquireDDThreadLock` | `0x28d8d` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028d8d_AcquireDDThreadLock.c) |
| 2 | `CompleteCreateSysmemSurface` | `0x28e17` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028e17_CompleteCreateSysmemSurface.c) |
| 3 | `D3DParseUnknownCommand` | `0x28e3d` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028e3d_D3DParseUnknownCommand.c) |
| 4 | `DDInternalLock` | `0x28dcb` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028dcb_DDInternalLock.c) |
| 5 | `DDInternalUnlock` | `0x28df1` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028df1_DDInternalUnlock.c) |
| 6 | `DirectDrawCreate` | `0x28bd9` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028bd9_DirectDrawCreate.c) |
| 7 | `DirectDrawCreateClipper` | `0x28c53` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028c53_DirectDrawCreateClipper.c) |
| 8 | `DirectDrawCreateEx` | `0x28c08` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028c08_DirectDrawCreateEx.c) |
| 9 | `DirectDrawEnumerateA` | `0x28d05` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028d05_DirectDrawEnumerateA.c) |
| 10 | `DirectDrawEnumerateExA` | `0x28d17` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028d17_DirectDrawEnumerateExA.c) |
| 11 | `DirectDrawEnumerateExW` | `0x28d56` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028d56_DirectDrawEnumerateExW.c) |
| 12 | `DirectDrawEnumerateW` | `0x28d2d` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028d2d_DirectDrawEnumerateW.c) |
| 13 | `DllCanUnloadNow` | `0x28e8a` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028e8a_DllCanUnloadNow.c) |
| 14 | `DllGetClassObject` | `0x28e63` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028e63_DllGetClassObject.c) |
| 15 | `ReleaseDDThreadLock` | `0x28dac` | [x86](../../../../decompiled/MS/x86/DDraw.dll/functions/10028dac_ReleaseDDThreadLock.c) |
