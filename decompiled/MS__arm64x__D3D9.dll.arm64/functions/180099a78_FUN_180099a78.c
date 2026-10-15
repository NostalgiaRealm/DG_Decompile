/*
 * FUN_180099a78 at 180099a78
 * undefined FUN_180099a78(void)
 * Address ranges: 180099a78-180099a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180099a78(longlong param_1)

{
  FUN_1800e69c8(*(undefined8 *)(param_1 + -0xb0),*(undefined8 *)(param_1 + 0x38),
                *(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0xc18 +
                0x100c0,*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}

