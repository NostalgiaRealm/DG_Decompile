# Cpl/arm64/dgVoodooCpl.exe

Control-panel executable. Start with the entry function, then use the imported dialog/window APIs and the resource string IDs to locate UI handlers. There are no exported DLL entry points. The two executables target different processors; the root executable is x64. See the control-panel notes for verified resource contents.

## Identity

- Machine/format: ARM64, PE32+.
- Preferred image base: `0x140000000`; entry RVA: `0xf1b0`.
- Supplied SHA-256: `726e819dde0e4a0e9e3fef5302a528403d1d9c7a07f3ce0578c29e65cfb115e9`.
- Prepared SHA-256: `726e819dde0e4a0e9e3fef5302a528403d1d9c7a07f3ce0578c29e65cfb115e9`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../../../inventory/metadata/Cpl/arm64/dgVoodooCpl.exe.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [ARM64](../../../../decompiled/Cpl/arm64/dgVoodooCpl.exe/full_decompilation.c) | 361 | 361 | 0 | 1,260 | 1,664 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**ARM64 navigation:** [Functions](../../../../decompiled/Cpl/arm64/dgVoodooCpl.exe/functions.tsv) · [Calls](../../../../decompiled/Cpl/arm64/dgVoodooCpl.exe/calls.tsv) · [Assembly](../../../../decompiled/Cpl/arm64/dgVoodooCpl.exe/assembly.tsv) · [Strings](../../../../decompiled/Cpl/arm64/dgVoodooCpl.exe/strings.tsv) · [Symbols](../../../../decompiled/Cpl/arm64/dgVoodooCpl.exe/symbols.tsv) · [Coverage](../../../../decompiled/Cpl/arm64/dgVoodooCpl.exe/summary.json)

## Imports and useful search leads

Imported modules: `GDI32.dll`, `KERNEL32.dll`, `USER32.dll`, `SHLWAPI.dll`, `ole32.dll`, `SHELL32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../../../resources/Cpl/arm64/dgVoodooCpl.exe/manifest.json) and [byte-offset string index](../../../../resources/Cpl/arm64/dgVoodooCpl.exe/raw-strings.tsv) provide further search anchors.

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| — | No exports | — | Follow program entry and UI call sites |
