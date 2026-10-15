# Three compact ARM64 switches recovered from table bytes

Three functions in the CHPE x86/ARM64 DLLs initially triggered Ghidra's ILP32 locked-varnode error while recovering an indirect branch. Their branch destinations were recovered from the unchanged binary data, then recorded as **Ghidra analysis metadata**. The decompiler subsequently produced C and a HighFunction for all three. No executable bytes or source binaries were patched for this repair.

The repeatable implementation is [`RepairSwitchTable.java`](../scripts/RepairSwitchTable.java). It reads each table byte as a signed value, computes the target, checks that the target is an existing instruction inside the function, and installs a jump-table override. Its transaction is retained only if decompilation succeeds. Per-function comments record the destinations. The annotated C is the primary reading artifact; the following independent decoding corroborates its recovered control flow.

## Representation

All three branches use this ARM64 pattern:

```text
index = low_byte(selector) - 1
signed_offset = sign_extend_8(table[index])
destination = table_address + signed_offset * 4
branch destination
```

A preceding comparison bounds the selector. These table bytes are **signed, scaled displacements**, not pointers or instruction bytes. The two larger functions accept selectors 1–3 at this dispatch; the smaller function accepts 1–4.

| View/function entry | Indirect branch | Table VA | Indexed bytes |
|---|---|---|---|
| `MS/arm64_chpe_x86/D3D8.dll`, `0x10012968` | `0x10012c4c` | `0x10012d08` | `d2 d4 d7` |
| `MS/arm64_chpe_x86/D3D9.dll`, `0x10014800` | `0x10014b2c` | `0x10014bf0` | `d0 d2 d5` |
| `MS/arm64_chpe_x86/D3DImm.dll`, `0x1007b170` | `0x1007b190` | `0x1007b1c0` | `f5 f7 ff f9` |

The machine-readable [table evidence](switch-table-evidence.json) preserves the supplied-image and mapped-image hashes, function and branch addresses, bytes, signed offsets, and resulting targets. In the mapped analysis images, file offset equals original RVA and the preferred base is `0x10000000`.

## D3DImm: set one bit in a selected field

[Recovered function `0x1007b170`](../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/functions/1007b170_FUN_1007b170.c), with original instructions in its view's [assembly index](../decompiled/MS__arm64_chpe_x86__D3DImm.dll.arm64/assembly.tsv):

| Low byte of W2 | Signed displacement | Target | Observed action |
|---:|---:|---|---|
| 1 | -11 | `0x1007b194` | Select field at W0 + `0x14` |
| 2 | -9 | `0x1007b19c` | Select field at W0 + `0x18` |
| 3 | -1 | `0x1007b1bc` | Return without a memory write |
| 4 | -7 | `0x1007b1a4` | Select field at W0 + `0x1c` |

The following analyst pseudocode describes its memory effect, without asserting an original source prototype or return type:

```c
selector = (uint8_t)entry_W2;
switch (selector) {
    case 1: field32 = (uint32_t)(entry_W0 + 0x14); break;
    case 2: field32 = (uint32_t)(entry_W0 + 0x18); break;
    case 4: field32 = (uint32_t)(entry_W0 + 0x1c); break;
    default: return;  // Includes selector 3, which has its own table entry.
}
address = zero_extend_32_to_64(field32);
store_u32_le(address,
             load_u32_le(address) | (UINT32_C(1) << (entry_W1 & 31)));
```

The pointer arithmetic wraps to 32 bits because the original adds write W10 before using X10 as the address. The variable 32-bit shift uses the low five shift-count bits. The table's explicit no-op entry for selector 3 must not be silently mapped to the third writable field.

## D3D8 and D3D9: modifier dispatch within larger routines

The two larger functions have closely matching control flow, including an embedded three-way dispatch:

- [D3D8 `0x10012968`](../decompiled/MS__arm64_chpe_x86__D3D8.dll.arm64/functions/10012968_FUN_10012968.c), [assembly index](../decompiled/MS__arm64_chpe_x86__D3D8.dll.arm64/assembly.tsv)
- [D3D9 `0x10014800`](../decompiled/MS__arm64_chpe_x86__D3D9.dll.arm64/functions/10014800_FUN_10014800.c), [assembly index](../decompiled/MS__arm64_chpe_x86__D3D9.dll.arm64/assembly.tsv)

Both save the entry W4 low byte in W23, then use W23 as the selector at the recovered switch. W21 holds the entry W0 low 32 bits, and W22 holds the entry W1 low 32 bits. W20 at the switch is a value produced by earlier calls; it is not necessarily the entry W2.

| W23 | D3D8 signed offset → target | D3D9 signed offset → target | X1 literal value | W4 argument |
|---:|---|---|---|---|
| 1 | -46 → `0x10012c50` | -48 → `0x10014b30` | `0x0000570200100700` | `0x110` |
| 2 | -44 → `0x10012c58` | -46 → `0x10014b38` | `0x0000540200100700` | `0x100` |
| 3 | -41 → `0x10012c64` | -43 → `0x10014b44` | `0x0000560200100700` | `0x110` |

The 64-bit literals are loaded from D3D8 addresses `0x10012d40`, `0x10012d48`, `0x10012d50`, and D3D9 addresses `0x10014c28`, `0x10014c30`, `0x10014c38`, respectively. They are literal call arguments; these notes do not reinterpret them as pointers or assign unverified opcode names.

Concise analyst pseudocode for this dispatch alone:

```c
switch (W23) {
    case 1: token64 = UINT64_C(0x0000570200100700); offset32 = 0x110; break;
    case 2: token64 = UINT64_C(0x0000540200100700); offset32 = 0x100; break;
    case 3: token64 = UINT64_C(0x0000560200100700); offset32 = 0x110; break;
    default: goto after_modifier_dispatch;
}
W0 = W22;
X1 = token64;
W2 = W20;
W3 = load_u32_le(zero_extend_32_to_64((uint32_t)(W21 + 4)))
     | UINT32_C(0x80000000);
W4 = offset32;
W5 = 0;
BL(/* D3D8: 0x10002350; D3D9: 0x10002470 */);
after_modifier_dispatch:
/* Continue the containing function; this default is not a function return. */
```

Here W-register assignments zero-extend the corresponding X register. `BL` denotes a call with the shown machine-register state, not a recovered C prototype. Other argument registers, callee effects, and the broader meaning of the values are intentionally not invented. The full decompiled functions retain the earlier table/cache work, other call sites, and final return construction.

One concrete difference remains visible after the shared switch: D3D9 also saves the entry W7 low byte and consults it in the final conditional-copy path; D3D8 has no corresponding test. Similar instruction sequences therefore should not be replaced by one assumed shared original function. Both return a value through X0 assembled from their maintained state, and their 32-bit address arithmetic must be preserved when interpreting the CHPE ILP32 output.

This is a control-flow recovery backed by static bytes. It does not establish original class names, full calling conventions, or runtime behavior, and it does not make inferred decompiler types authoritative.
