/*
 * FUN_1801bb0f0 at 1801bb0f0
 * undefined FUN_1801bb0f0(void)
 * Address ranges: 1801bb0f0-1801bb123
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801bb0f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  *param_2 = (ulonglong)(uint)(*(int *)(param_1 + 0x2c) << 2) * 4 + 0x18022ddb0;
  *param_3 = (ulonglong)(uint)(*(int *)(param_1 + 0x2c) << 2) * 4 + 0x18024cd20;
  return;
}

