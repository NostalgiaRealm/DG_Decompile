/*
 * FUN_18021c560 at 18021c560
 * undefined FUN_18021c560(void)
 * Address ranges: 18021c560-18021c57b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_18021c560(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  FUN_180205b78(*(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0 + 0x22d8,param_3);
  return;
}

