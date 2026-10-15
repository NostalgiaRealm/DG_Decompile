# Reading the decompiled code

This directory is an inspection edition of the **supplied fixed binaries**. The C files are decompiler pseudocode. They are not the developer's original C/C++ source, and are not a buildable replacement for dgVoodoo. Compiler optimization removes names, types, comments and source-file boundaries that cannot be recovered exactly from these files.

## Find a useful entry point

Start with the PE export map in a binary's reading notes, then find its address in `functions.tsv`. Open the corresponding file under `functions/`. The generated `exports.tsv` records Ghidra external-entry labels; raw hybrid projections may lack those flags, so the reading notes preserve the authoritative PE names and bridge links. Export aliases can share an address, so the number of export names is not the number of implementations. The per-binary `full_decompilation.c` contains the same function bodies in address order for searching and browsing.

Follow the calls from a public wrapper into the internal functions. Many exports are small argument adapters or dispatchers. In particular, Direct3D methods live behind object method tables, and Glide exports often obtain a context before calling through a method table. A short export does not mean the feature has a short implementation.

The function index records the decompilation result for every function discovered in that analysis view. Use the saved Ghidra projects to inspect bytes, references, recovered types and control flow. A successful function decompilation means the tool produced pseudocode; it does not prove that every inferred type or expression is correct.

## Address conventions

- A **file offset** indexes bytes in the PE file on disk.
- An **RVA** is an address relative to that PE's preferred image base.
- A **VA** in these exports is normally `image_base + RVA`; it is the static preferred address, not a measured address from a running process.
- Section mapping translates an RVA to a file offset. Do not subtract the image base and assume that the result is a disk offset.
- Hybrid projections preserve image RVAs; their provenance specifies which bytes and view were used. Match the binary, architecture view and hash before comparing addresses.

## Names, types and expressions

`FUN_...`, `DAT_...`, `LAB_...`, `param_1` and `local_...` are generated analysis names. An exported or imported name is stronger evidence than a name invented by an analyst. Recovered runtime/library names may come from analyzer signatures. Unknown internal classes and fields remain unknown instead of receiving speculative names throughout the code.

`undefined`, `undefined4` and `undefined8` express unknown types or widths. They do not by themselves identify an original integer or pointer. Expressions such as `CONCAT`, `SUB`, `ZEXT`, `SEXT` and casts frequently represent low-level register operations. A `code *` or indirect call is a function-pointer call whose final target may need further analysis. Virtual calls may not appear as ordinary resolved edges in the call index.

Calling conventions matter. On x86, decorated exports such as `_grDrawTriangle@12` encode a stack-argument byte count in their name. On CHPE, ARM64 instructions can implement a 32-bit interface: interpreting them as ordinary 64-bit C pointers is not automatically correct. Read [the hybrid notes](HYBRID.md) before relying on those types.

## Scope and evidence

This run performs static analysis and unpacking. It does not run the target DLLs, launch the control panel, render a game, or validate behavior under Windows or Wine. The copied `provenance/Wine-fix/` material describes a previous fix and previous tests; those tests are historical input evidence, not tests repeated by this decompilation run.

The prepared binary hashes tie the output to the input distribution. UPX preparation is documented independently, and no source input is edited. A function marked failed is accompanied by its diagnostic and assembly fallback rather than a fabricated C implementation. Unrecognized executable bytes, embedded data, compiler thunks, indirect targets and decompiler warnings require inspection; a complete batch pass does not establish a mathematical proof of whole-program recovery.

## Configuration and resources

`provenance/dgVoodoo.conf` preserves the supplied configuration and its comments. It provides names to search in the string indexes, including `OutputAPI`, `ScalingMode`, `Resolution`, `VRAM`, the Glide options and the DirectX options. A matching string is a search lead, not proof that a particular code path executes.

`resources/` preserves every parsed PE resource payload, its location and hash. `strings.tsv` there decodes RT_STRING tables; `raw-strings.tsv` contains printable ASCII and UTF-16LE byte runs with file offsets. These raw runs can include incidental text in machine code or binary data. Other resource formats are retained as bytes, without claiming that every dialog, image or shader has been reconstructed as source.
