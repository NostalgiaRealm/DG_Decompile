/*
 * FUN_180210658 at 180210658
 * undefined FUN_180210658(void)
 * Address ranges: 180210658-180210667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180210658(undefined8 param_1,longlong param_2,ulonglong *param_3,ulonglong *param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  *param_4 = (ulonglong)uVar1;
  *param_3 = (ulonglong)uVar1;
  return;
}

