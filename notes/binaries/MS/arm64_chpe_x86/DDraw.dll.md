# MS/arm64_chpe_x86/DDraw.dll

DirectDraw API front door. Useful roots are `DirectDrawCreate`, `DirectDrawCreateEx`, `DirectDrawCreateClipper`, the ANSI/Unicode enumeration exports, and the COM exports `DllGetClassObject` and `DllCanUnloadNow`. Dispatch through function pointers and object tables requires following beyond these exported wrappers.

## Identity

- Machine/format: CHPE x86/ARM64 hybrid, PE32.
- Preferred image base: `0x10000000`; entry RVA: `0x916e0`.
- Supplied SHA-256: `e48e007fe9b4fc141fa42574acdf5733cca87761f7eb6eefd168e55f70d456c5`.
- Prepared SHA-256: `e48e007fe9b4fc141fa42574acdf5733cca87761f7eb6eefd168e55f70d456c5`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/MS/arm64_chpe_x86/DDraw.dll.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [arm64](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/full_decompilation.c) | 2,861 | 2,861 | 0 | 28 | 33,652 |
| [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/full_decompilation.c) | 17 | 17 | 0 | 0 | 837 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**arm64 navigation:** [Functions](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions.tsv) · [Calls](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/calls.tsv) · [Assembly](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/assembly.tsv) · [Strings](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/strings.tsv) · [Symbols](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/symbols.tsv) · [Coverage](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/summary.json)

**x86 navigation:** [Functions](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions.tsv) · [Calls](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/calls.tsv) · [Assembly](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/assembly.tsv) · [Strings](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/strings.tsv) · [Symbols](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/symbols.tsv) · [Coverage](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/summary.json)

Read [the hybrid architecture notes](../../../HYBRID.md) before interpreting ABI types, interworking thunks or loader fixups.

## Imports and useful search leads

Imported modules: `SHLWAPI.dll`, `KERNEL32.dll`, `USER32.dll`, `GDI32.dll`, `SHELL32.dll`, `ole32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/MS/arm64_chpe_x86/DDraw.dll/manifest.json) and [byte-offset string index](../../../../resources/MS/arm64_chpe_x86/DDraw.dll/raw-strings.tsv) provide further search anchors.

## Supplied Wine-fix locations

These changes were already present in the input. This run decompiles that fixed code; it does not apply another behavioral patch. The historical patch manifest supplies the predicate locations, and the current verification checks the expected patched bytes.

| Predicate RVA | Patched instruction RVA | Expected bytes | Decompiled entry |
|---|---|---|---|
| `0x718a0` | `0x71914` | `00008052` | [arm64](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/100718a0_FUN_100718a0.c) |

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| 1 | `AcquireDDThreadLock` | `0xae000` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae000_AcquireDDThreadLock.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/100401a0_AcquireDDThreadLock_native.c) |
| 2 | `CompleteCreateSysmemSurface` | `0xae010` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae010_CompleteCreateSysmemSurface.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/10040390_CompleteCreateSysmemSurface_native.c) |
| 3 | `D3DParseUnknownCommand` | `0xae020` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae020_D3DParseUnknownCommand.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/10040410_D3DParseUnknownCommand_native.c) |
| 4 | `DDInternalLock` | `0xae030` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae030_DDInternalLock.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/10040280_DDInternalLock_native.c) |
| 5 | `DDInternalUnlock` | `0xae040` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae040_DDInternalUnlock.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/10040310_DDInternalUnlock_native.c) |
| 6 | `DirectDrawCreate` | `0xae050` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae050_DirectDrawCreate.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/1003f9b0_DirectDrawCreate_native.c) |
| 7 | `DirectDrawCreateClipper` | `0xae060` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae060_DirectDrawCreateClipper.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/1003fb00_DirectDrawCreateClipper_native.c) |
| 8 | `DirectDrawCreateEx` | `0xae070` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae070_DirectDrawCreateEx.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/1003fa40_DirectDrawCreateEx_native.c) |
| 9 | `DirectDrawEnumerateA` | `0xae080` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae080_DirectDrawEnumerateA.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/1003fca0_DirectDrawEnumerateA_native.c) |
| 10 | `DirectDrawEnumerateExA` | `0xae090` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae090_DirectDrawEnumerateExA.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/1003fe20_DirectDrawEnumerateExA_native.c) |
| 11 | `DirectDrawEnumerateExW` | `0xae0a0` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae0a0_DirectDrawEnumerateExW.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/10040100_DirectDrawEnumerateExW_native.c) |
| 12 | `DirectDrawEnumerateW` | `0xae0b0` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae0b0_DirectDrawEnumerateW.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/10040080_DirectDrawEnumerateW_native.c) |
| 13 | `DllCanUnloadNow` | `0xae0c0` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae0c0_DllCanUnloadNow.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/10040710_DllCanUnloadNow_native.c) |
| 14 | `DllGetClassObject` | `0xae0d0` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae0d0_DllGetClassObject.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/100404a0_DllGetClassObject_native.c) |
| 15 | `ReleaseDDThreadLock` | `0xae0e0` | [x86](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.x86/functions/100ae0e0_ReleaseDDThreadLock.c), [arm64 bridge target](../../../../decompiled/MS__arm64_chpe_x86__DDraw.dll.arm64/functions/10040210_ReleaseDDThreadLock_native.c) |
