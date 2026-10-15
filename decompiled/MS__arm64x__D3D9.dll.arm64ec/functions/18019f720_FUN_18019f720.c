/*
 * FUN_18019f720 at 18019f720
 * undefined FUN_18019f720(void)
 * Address ranges: 18019f720-18019f747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18019f720(longlong param_1)

{
  FUN_180203e38(*(undefined8 *)(param_1 + -0x90),*(undefined8 *)(param_1 + 0x38),
                *(longlong *)(param_1 + 0x18) + (ulonglong)*(uint *)(param_1 + 0x20) * 0xc18 +
                0x100c0,*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}

