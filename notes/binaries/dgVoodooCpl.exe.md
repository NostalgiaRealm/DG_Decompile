# dgVoodooCpl.exe

Control-panel executable. Start with the entry function, then use the imported dialog/window APIs and the resource string IDs to locate UI handlers. There are no exported DLL entry points. The two executables target different processors; the root executable is x64. See the control-panel notes for verified resource contents.

## Identity

- Machine/format: x64, PE32+.
- Preferred image base: `0x140000000`; entry RVA: `0x23ec0`.
- Supplied SHA-256: `87fb878166dcaef3e75ff170de030527c73f5c9b164c5943da13f8a97b0b75c6`.
- Prepared SHA-256: `87fb878166dcaef3e75ff170de030527c73f5c9b164c5943da13f8a97b0b75c6`.
- Packing result: not packed with UPX (UPX test).
- [Full PE metadata](../../inventory/metadata/dgVoodooCpl.exe.json).

## Code views

C-like pseudocode retains inferred types and generated internal names. Addresses refer to the stated static analysis view. The assembly and coverage files retain evidence when analysis does not produce a function.

| View | Functions | C output | Assembly fallback | Instructions outside functions (bytes) | Executable bytes without instructions |
|---|---:|---:|---:|---:|---:|
| [x64](../../decompiled/dgVoodooCpl.exe/full_decompilation.c) | 331 | 331 | 0 | 1,289 | 2,025 |

Bytes without instructions can include padding, embedded data and undiscovered code. They are not automatically missing functions. Instructions outside function bodies remain visible in the assembly export.

**x64 navigation:** [Functions](../../decompiled/dgVoodooCpl.exe/functions.tsv) · [Calls](../../decompiled/dgVoodooCpl.exe/calls.tsv) · [Assembly](../../decompiled/dgVoodooCpl.exe/assembly.tsv) · [Strings](../../decompiled/dgVoodooCpl.exe/strings.tsv) · [Symbols](../../decompiled/dgVoodooCpl.exe/symbols.tsv) · [Coverage](../../decompiled/dgVoodooCpl.exe/summary.json)

## Imports and useful search leads

Imported modules: `GDI32.dll`, `KERNEL32.dll`, `USER32.dll`, `SHLWAPI.dll`, `ole32.dll`, `SHELL32.dll`.

The import table describes static imports only. Calls through `LoadLibrary*`/`GetProcAddress`, module/export walkers or object method tables need additional tracing. Absence from this list is not evidence that a rendering backend is unused.

[Resource payloads and metadata](../../resources/dgVoodooCpl.exe/manifest.json) and [byte-offset string index](../../resources/dgVoodooCpl.exe/raw-strings.tsv) provide further search anchors.

## Export map

This table preserves the original PE export names and aliases. Links use the function at the matching VA in each view, if recovered. An unlinked entry remains an explicit lookup target in assembly; it is not silently treated as decompiled.

| Ordinal | Export | RVA | Function/view |
|---:|---|---|---|
| — | No exports | — | Follow program entry and UI call sites |
