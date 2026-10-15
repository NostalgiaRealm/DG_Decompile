/*
 * FUN_1800894f8 at 1800894f8
 * undefined FUN_1800894f8(void)
 * Address ranges: 1800894f8-18008951f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800894f8(longlong param_1)

{
  FUN_1800e69c8(*(undefined8 *)(param_1 + -0x90),*(undefined8 *)(param_1 + 0x38),
                *(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0xc18 +
                0x100c0,*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}

