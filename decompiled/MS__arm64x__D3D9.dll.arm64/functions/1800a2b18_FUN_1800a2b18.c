/*
 * FUN_1800a2b18 at 1800a2b18
 * undefined FUN_1800a2b18(void)
 * Address ranges: 1800a2b18-1800a2b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800a2b18(longlong param_1,longlong *param_2,longlong *param_3)

{
  *param_2 = (ulonglong)(uint)(*(int *)(param_1 + 0x2c) << 2) * 4 + 0x1802318f0;
  *param_3 = (ulonglong)(uint)(*(int *)(param_1 + 0x2c) << 2) * 4 + 0x18024b860;
  return;
}

