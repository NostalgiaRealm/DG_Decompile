# Hybrid DLL analysis

Nine DLLs contain more than one instruction architecture. Their PE machine field
alone does not describe all their code. The analysis exports separate views so
the ARM64 implementations do not disappear behind their small compatibility
stubs or get misread as x86 instructions.

The source DLLs were only read. `binaries/hybrid/*.mapped.bin` are flat analysis
images, not replacement DLLs. Import them at the manifest's image base; their
file offsets are RVAs. Original absolute addresses are retained, including data
outside the selected instruction range. The ranges in
`inventory/hybrid_jobs.json` are authoritative for each view.

## What is present

| Original DLL | ARM64 code-map bytes | x86 code-map bytes | Metadata function seeds, ARM64 / x86 |
|---|---:|---:|---:|
| `3Dfx/arm64_chpe_x86/Glide.dll` | 581,028 | 2,835 | 2,247 / 165 |
| `3Dfx/arm64_chpe_x86/Glide2x.dll` | 579,460 | 2,771 | 2,234 / 161 |
| `3Dfx/arm64_chpe_x86/Glide3x.dll` | 594,740 | 1,747 | 2,231 / 102 |
| `3Dfx/arm64_chpe_x86/Napalm/Glide3x.dll` | 620,836 | 3,699 | 2,328 / 224 |
| `MS/arm64_chpe_x86/D3D8.dll` | 1,184,964 | 947 | 3,849 / 6 |
| `MS/arm64_chpe_x86/D3D9.dll` | 1,404,900 | 1,059 | 4,310 / 13 |
| `MS/arm64_chpe_x86/D3DImm.dll` | 614,132 | 579 | 2,237 / 4 |
| `MS/arm64_chpe_x86/DDraw.dll` | 696,676 | 1,043 | 2,779 / 17 |

These eight files identify as machine `0x014c` and contain version 4 CHPE
metadata. Each has four declared code ranges. Bit zero of each encoded range
start identifies native ARM64 code; the remaining ranges contain x86. The
range lengths include any embedded data or padding, so they are not a count of
decoded instruction bytes.

`MS/arm64x/D3D9.dll` identifies as `0xaa64`. Its version 2 metadata declares:

| View | RVA interval, end exclusive | Code-map bytes | Metadata function seeds |
|---|---|---:|---:|
| ARM64 | `0x1000–0x103b44` | 1,059,652 | 1,752 |
| ARM64EC | `0x104000–0x2256d8` | 1,185,496 | 1,957 |
| x64 | `0x226000–0x2270c0` | 4,288 | 15 |

The original ARM64 exception directory contains 3,701 eight-byte runtime
function records: 1,749 starts in the ARM64 range and 1,952 in ARM64EC. The
extra x64 runtime table contains two twelve-byte records. Starts are combined
with exports, entry points, CFG targets and explicit hybrid redirections. They
are analysis seeds, not a promise that every record represents an independent
source-language function.

## ARM64X conditional fixups

Windows changes parts of an ARM64X image when presenting its compatible view.
`scripts/hybrid_metadata.py` reads the dynamic relocation table from section 9,
offset `0x2298`, at RVA `0x316298`. It finds DVRT version 1 and symbol 6. All
347 records in this input are value replacements: 336 target `.text`, three
target `.rdata`, and eight target headers. These replacements are applied to
the ARM64EC and x64 analysis images. The native ARM64 image keeps the original
bytes.

The header changes include machine `0xaa64 → 0x8664`, entry RVA
`0x103198 → 0x2270b0`, the export directory, the exception directory and the
load-config directory. The 336 `.text` replacements change 352 actual byte
values. Ignoring them would leave the compatible implementation's static
view incorrect. Each record's RVA, original bytes and replacement bytes is
retained in `inventory/hybrid/MS__arm64x__D3D9.dll.json`.

For a concrete example, the instruction at `0x180104f40` changes from
`adrp x16, 0x180228000` to `adrp x16, 0x180245000`. The following load retains
offset `0x2a8`. The former page holds the regular IAT; metadata designates the
latter as the auxiliary IAT. The corresponding regular import is
`SHLWAPI.dll!PathAppendW`. This illustrates why an unchanged-looking import
stub can need different table addresses in the ARM64EC view. LLVM describes
the [auxiliary IAT's native-callable role](https://github.com/llvm/llvm-project/pull/108304).

This is a static reconstruction of the recorded loader fixups. The binaries
were not run on Windows on ARM. Ordinary image rebasing and live import
resolution were not simulated; analysis uses the preferred image base.

## Readable native entry names

The CHPE exports enter x86 bridge stubs before transferring to ARM64. The
helper recognizes the observed twelve-byte sequence
`8b ff 55 8b ec 5d 90 e9 <rel32>` and calculates its branch target. It verifies
the destination lies in an ARM64 range. This yields 676 bridge records and
allows the native implementation to carry the export name plus `_native`.
Several exports can deliberately share one body. The raw export table and
bridge metadata preserve every alias, even when a function can have only one
primary display name.

For ARM64X, twelve explicit metadata redirections provide the same relationship
between compatible exports and native ARM64EC destinations. Names are copied
only from these binary relationships; no original internal function names
were invented. The `.labels.tsv` sidecars also label import-address slots and
metadata-described hybrid dispatcher slots. For example, CHPE Glide's slot at
`0x10093008` is the metadata-designated indirect-call CFG dispatcher; the label
`__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer` makes its role visible.
The code reached through such a slot is supplied by the runtime, rather than
being another recovered function in this DLL.

### Architecture boundaries in the C output

The original x86/x64 bridge instruction is a `JMP` into ARM64 code. Ghidra can
otherwise continue decoding that target as the caller's architecture even when
the instruction listing and function body were restricted correctly. The
analysis therefore marks those direct jumps with `CALL_RETURN`, an
**analysis-only boundary override**. The original bytes remain `JMP`, preserving
machine state and arguments across the transfer. Every override is recorded in
the `.boundary-overrides.tsv` sidecars.

A generated `func_0x10005b80()` with no arguments means the decompiler has no
reliable cross-architecture signature; it does **not** establish that the
original API took no arguments. For example, compare the
[x86 `ConvertAndDownloadRLE` bridge](../decompiled/3Dfx__arm64_chpe_x86__Glide.dll.x86/functions/10091000__ConvertAndDownloadRLE_64.c)
with its [ARM64 destination](../decompiled/3Dfx__arm64_chpe_x86__Glide.dll.arm64/functions/10005b80__ConvertAndDownloadRLE_64_native.c).
The complete export table and bridge metadata retain the decorated API name
and ordinal. The exporter additionally records decompiler instruction origins
in `pcode_origins.tsv`, allowing the audit to reject C that still incorporates
instructions from a different architecture.

### Reading a native draw wrapper

In CHPE Glide, [the native `grDrawPoint` wrapper at `0x10001410`](../decompiled/3Dfx__arm64_chpe_x86__Glide.dll.arm64/functions/10001410__grDrawPoint_4_native.c)
calls `0x1001beb0`, checks a byte at offset `0x3c` of the resulting object,
then conditionally brackets an indirect call with atomic increment/decrement
operations on the 32-bit value at offset `0x38`. The instruction listing shows
`ldaxr`/`stlxr` retry loops and `dmb ISH` barriers. Interpreting this as active-call
or synchronization accounting is reasonable but remains an inference; original
field names are unavailable.

The wrapper loads its call target through an object table and uses the hybrid
CFG dispatcher before `blr x11`. Pseudocode can display that final register as
`extraout_w11`, because the generic calling convention does not describe the
dispatcher contract. This is a useful place to read the instruction listing
alongside the C instead of assigning meaning to an inferred temporary name.

## Reproduce and inspect

```sh
python scripts/hybrid_metadata.py \
  --source /home/rick/Documents/dgVoodoo2_87_5_FIXED \
  --output /home/rick/Documents/dgVoodoo2_87_5_Decompiled
```

The helper emits 19 jobs, their projected bytes and SHA-256 values, code-range
TSVs, seed TSVs, import/export labels, and per-seed evidence. TSV addresses are
hexadecimal absolute virtual addresses without a `0x` prefix. Range end
addresses are exclusive. Function TSVs contain address and name; label TSVs
use the same format.

Ghidra's raw BinaryLoader can leave its internal program-image-base property
at zero even while the memory blocks correctly start at `0x10000000` or
`0x180000000`. Use the job manifest and `memory.tsv` for the original mapped
addresses; do not relocate an already correctly mapped program merely to change
that bookkeeping property.

The CHPE native views use Ghidra's `AARCH64:LE:32:ilp32` language so pointers
remain four bytes while instructions remain AArch64. ARM64 and ARM64EC use
`AARCH64:LE:64:v8A` with the Windows compiler specification; the compatibility
views use x86 or x64 Windows specifications. Code outside a view's architecture
ranges must not be disassembled as that architecture.

`inventory/hybrid_validation.json` records verification of every projected
image hash and all 26,631 seed addresses. Capstone decoded the first instruction
at every seed with no failures. This check verifies architecture placement and
readable starting bytes; it does not validate inferred C semantics.

## Limits when reading the C

The generic ILP32 specification is not a custom Windows CHPE ABI model. The
ARM64EC specification likewise does not model every hybrid calling convention,
register transition or dispatcher. Parameter counts, structure types, wide
character types, function signatures and calls crossing architectures therefore
need assembly confirmation. Windows string data is UTF-16 even though the
generic ILP32 compiler specification uses a different default `wchar_t` size.
The disassembly and original bytes are the evidence when pseudocode disagrees.

Metadata establishes starts for many functions but cannot guarantee recovery of
all leaf functions, indirect jump targets or functions missing from metadata.
Compiler-generated fragments, shared tails and aliases can also make recovered
function counts differ from source-level function counts. Decompiler warnings
and residual coverage must remain visible in the individual output reports.

The first ARM64X export also exposed decoded leaf/thunk bodies with no function
entry. `scripts/hybrid_orphan_seeds.py` checked their starts against aligned
pointer-width values in non-executable PE sections. It recorded 147 ARM64 and
316 ARM64EC candidates in `inventory/hybrid_orphan_pointer_evidence.json`;
461 are additional addresses and two overlap existing metadata starts. These
are evidence-backed static function candidates, not recovered original names.
The recovery script records what it creates in `.pointer-recoveries.tsv`.
Unreferenced orphan fragments are retained in the assembly and coverage lists.

Two ARM64EC metadata starts, `0x1801dd3e0` and `0x1801e3e80`, were initially
displaced by an inferred function starting twelve bytes into their prologues.
The metadata reconciliation pass checks that the prefix is straight-line code
and that no incoming call supports the displaced start, then restores the
metadata entry. The `.seed-repairs.tsv` record preserves this decision.

Three CHPE functions initially triggered Ghidra's ILP32 diagnostic
`Trying to build dynamic symbol on locked varnode`. Their instructions implement
compact switches: load a signed byte from a bounded table, multiply it by four,
and add it to the table address. The table bytes were read independently from
the original inputs and recorded in
`inventory/hybrid_switch_table_evidence.json`. The analysis supplies those exact
destinations through a Ghidra jump-table override, retaining the original
instruction bytes and ILP32 ABI. In D3DImm's function at `0x1007b170`, the table
`f5 f7 ff f9` maps selectors 1, 2, 3 and 4 to `0x1007b194`, `0x1007b19c`,
`0x1007b1bc` and `0x1007b1a4`; selector 3 reaches the return instruction.

`scripts/hybrid_audit.py` independently checks the final exports, including all
metadata and additional pointer seeds. Its report,
`inventory/hybrid_export_audit.json`, records instruction-byte comparisons,
architecture bounds, decompiler origins, fixup coverage, bridge overrides and
SHA-256 digests of the inspected artifacts. It accepts `--root` so the checks
can be rerun after the inspection bundle is moved or extracted elsewhere.

## Final audit result

All 19 hybrid views passed the independent audit after the repairs above.
They contain **28,549 recovered functions with 28,549 C outputs and no assembly
fallbacks**. The audit compared all 2,041,111 exported instruction records with
their projected bytes, checked 1,290,660 decompiler instruction origins, and
confirmed coverage of all 27,092 distinct metadata/pointer seed addresses
across the views. All 336 ARM64EC code fixups are present in the exported
instructions. The 689 cross-view boundary overrides are recorded explicitly.
These totals include related implementations and compatibility stubs, not
28,549 distinct functions from the author's original source tree.

Decoded instruction bytes outside Ghidra's assigned function bodies remain
visible in the assembly and coverage evidence:

| View | Residual instruction bytes |
|---|---:|
| CHPE DDraw ARM64 | 28 |
| ARM64X D3D9 ARM64 | 924 |
| ARM64X D3D9 ARM64EC | 2,252 |
| All other hybrid views | 0 |

The DDraw range `0x1004a914–0x1004a92f` sets up arguments, calls `0x1004a240`,
then falls into a block assigned to function `0x1004a3d0`. It is an internal
fragment candidate without a data-pointer entry reference; no separate function
was invented for it. The other residual ranges are likewise retained for
inspection. Successful function decompilation does not prove exhaustive
source-level recovery. Executable bytes without decoded instructions can include
embedded data or padding. Original names, complete types, comments and build
structure cannot be recovered from these binaries alone.

## Format sources

The parser follows the [LLVM COFF structures](https://github.com/llvm/llvm-project/blob/main/llvm/include/llvm/Object/COFF.h)
for ARM64EC code-map tags, and [LLVM's ARM64X relocation reader](https://github.com/llvm/llvm-project/blob/main/llvm/lib/Object/COFFObjectFile.cpp)
for fixup sizing and delta encoding. The CHPE x86 range flag and metadata fields
are described in [System Informer's ntimage.h](https://github.com/winsiderss/systeminformer/blob/master/phnt/include/ntimage.h).
The exact supplied bytes establish the counts and addresses above.

Ghidra 12.1.4's bundled `Base-src.zip` was also inspected: its load-config code
stores `CHPEMetadataPointer`, while `ImageArm64X` and
`ImageArm64XDynamicRelocation` parse and mark up relocation records. These
classes do not themselves create all architecture-specific analysis programs
or apply the compatible-view image changes used here. The projections make
those choices explicit and reproducible.
