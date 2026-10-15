# Concrete code notes

These examples were read in the generated code and checked against address-based evidence. They are starting points for inspection, not an exhaustive explanation of every renderer algorithm. Paths identify the exact architecture and DLL; similarly named functions in another build can have different addresses.

## Glide context access and drawing

In x86 `3Dfx/Glide.dll`, [`grGlideInit` at 0x1000209e](../decompiled/3Dfx/x86/Glide.dll/functions/1000209e_grGlideInit.c) calls a shared accessor and then an initialization routine. The [accessor at 0x10012ab2](../decompiled/3Dfx/x86/Glide.dll/functions/10012ab2_FUN_10012ab2.c) tests a bit in `DAT_1005985c`, sets it on first access, calls `FUN_10012ace`, and returns the address `0x10059860`. Describing this as lazy initialization of shared context storage is an inference directly supported by that sequence; the original class name is unknown.

[`grDrawTriangle` at 0x100012b9](../decompiled/3Dfx/x86/Glide.dll/functions/100012b9_grDrawTriangle.c) obtains the same context, checks the byte at context offset `0x3c`, increments a counter at `+0x38` with a locked instruction, dispatches through the object at `+0xc`, then decrements the counter. Its indirect call uses table offset `0x104`. The observed increment/decrement is useful evidence of activity tracking around dispatch; it is not enough to assert the complete locking protocol or name every field.

The [initialization routine at 0x10012c78](../decompiled/3Dfx/x86/Glide.dll/functions/10012c78_FUN_10012c78.c) clears several context fields, obtains additional state, allocates `0x31000` bytes through an internal helper, and sets a byte at `+0x3e`. Ghidra types one returned state pointer as `WNDPROC` and then indexes it like a structure. That suspicious type illustrates why inferred Windows typedefs should not be read as definitive original source types.

## Glide extension lookup

In x86 ordinary `Glide3x.dll`, [`grGetProcAddress` at 0x10002370](../decompiled/3Dfx/x86/Glide3x.dll/functions/10002370_grGetProcAddress.c) leads to [0x1002a2ff](../decompiled/3Dfx/x86/Glide3x.dll/functions/1002a2ff_FUN_1002a2ff.c). The latter walks a table of names, function pointers and a small selector, compares the requested name, checks a context-dependent predicate, and returns the matching pointer or null. This is a useful place to trace extension availability. Finding an extension string alone would not establish that the function is exposed for every context.

The wrapper's recovered signature may say `void` although its helper computes a returned pointer. Check the calling convention and the actual return register in `assembly.tsv` before copying an inferred prototype into a reconstruction.

## DirectDraw forwarding and local implementation

In x86 `DDraw.dll`, [`DirectDrawCreate` at 0x10028bd9](../decompiled/MS/x86/DDraw.dll/functions/10028bd9_DirectDrawCreate.c) passes the literal name `DirectDrawCreate` to [0x10023885](../decompiled/MS/x86/DDraw.dll/functions/10023885_FUN_10023885.c). If that helper returns a function pointer, the export transfers control to it; otherwise it calls its local implementation.

The helper enters a critical section, consults shared state, conditionally builds a path ending in `DDRAW.DLL`, calls `LoadLibraryW`, and resolves the requested name with `GetProcAddress`. The specific configuration-field meaning requires further tracing. The code establishes a conditional external-library dispatch path; it does not establish which path a particular game takes.

The decompiler warns about an unrecovered jump table in this exported wrapper. Here the underlying pattern is an indirect tail jump to a resolved API address. That warning should be read alongside the assembly rather than interpreted as evidence that the original source contained a C `switch`.

[`DirectDrawCreateEx` at 0x10028c08](../decompiled/MS/x86/DDraw.dll/functions/10028c08_DirectDrawCreateEx.c) has the same dispatch pattern, followed by a comparison of four 32-bit values in its local path. [`DirectDrawCreateClipper` at 0x10028c53](../decompiled/MS/x86/DDraw.dll/functions/10028c53_DirectDrawCreateClipper.c) shows argument checks, allocation, indirect object calls and cleanup. Those branches are useful roots for tracing local COM-object behavior.

## Direct3D factory roots and small stubs

The x86 [`Direct3DCreate8` export](../decompiled/MS/x86/D3D8.dll/functions/1007a630_Direct3DCreate8.c) adapts its argument into [the internal factory at 0x100798d5](../decompiled/MS/x86/D3D8.dll/functions/100798d5_FUN_100798d5.c). That factory first checks for an externally resolved `Direct3DCreate8` function. Its local branch tests the input version value, performs initialization, allocates a `0x8c`-byte object, invokes construction/setup helpers, obtains an interface result and cleans up on failure. The observed accepted values in this local branch are `0x78` or the unsigned interval starting at `0xdc` with length 100. The original symbolic SDK constant names were not recovered.

The x86 [`Direct3DCreate9` export](../decompiled/MS/x86/D3D9.dll/functions/10091163_Direct3DCreate9.c) leads to [0x1008fd51](../decompiled/MS/x86/D3D9.dll/functions/1008fd51_FUN_1008fd51.c). Its local branch accepts a version value whose lower 31 bits equal `0x1f` or `0x20`, allocates `0xc0` bytes and obtains an interface through internal helpers. The [Ex factory at 0x1008fec6](../decompiled/MS/x86/D3D9.dll/functions/1008fec6_FUN_1008fec6.c) clears the output slot, selects external forwarding or local object creation, and returns a status. The wrappers' inferred `void` signatures again require return-register confirmation.

[`D3DPERF_GetStatus` and `D3DPERF_QueryRepeatFrame`](../decompiled/MS/x86/D3D9.dll/functions/10075f50_D3DPERF_GetStatus.c) share the x86 address `0x10075f50`, whose implementation returns zero. This is a concrete example of two public export names mapping to one stub. It does not imply that all `D3DPERF_*` exports behave identically.

## D3DImm: compact exports, larger implementation

The unpacked x86 `D3DImm.dll` exports only two names. [`GetD3DVersion` at 0x1003c644](../decompiled/MS/x86/D3DImm.dll/functions/1003c644_GetD3DVersion.c) returns the literal `0x287`. [`GetD3DInterface` at 0x1003c64a](../decompiled/MS/x86/D3DImm.dll/functions/1003c64a_GetD3DInterface.c) returns a static interface-table address at `0x1006b7a4`. Follow that table and its referenced functions to inspect the implementation. Two exports do not imply that the library contains only two functions.

## The supplied Wine-fix predicate

The original input for this run is already the fixed distribution. Every affected binary's reading notes link the historical patch location to the present code when the corresponding function entry is recovered. The original patch report and manifest are preserved under `provenance/Wine-fix/`.

For x86 `Glide.dll`, [the predicate at 0x1004ca28](../decompiled/3Dfx/x86/Glide.dll/functions/1004ca28_FUN_1004ca28.c) contains the two additive comparisons identified by that report. Its patched return clears the low return byte. Ghidra represents this as `return param_2 & 0xffffff00` with an inferred 32-bit result. That is **not** a claim that the whole return register is zero. The meaningful false result for the byte/Boolean consumer is in the low byte. Read the caller's cast or test as well as the callee's inferred return type.

The header-restoration/unpacking step in this run concerns the previously packed x86 D3DImm only. It does not undo or reapply the existing Wine patches in the other libraries.

## How to extend these notes

Use `functions.tsv` to retain a stable address anchor, `calls.tsv` to follow resolved calls, `assembly.tsv` to check suspicious expressions, and the per-binary export map to preserve aliases. Record an interpretation separately from the observed instructions. Keep the preferred image base, architecture view and prepared SHA-256 with any copied example. The saved Ghidra projects permit further type recovery and renaming without editing the supplied binaries.
