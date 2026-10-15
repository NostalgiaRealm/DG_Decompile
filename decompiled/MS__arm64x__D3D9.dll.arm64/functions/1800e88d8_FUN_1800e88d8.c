/*
 * FUN_1800e88d8 at 1800e88d8
 * undefined FUN_1800e88d8(void)
 * Address ranges: 1800e88d8-1800e890f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800e88d8(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x67c) + -1;
  *(int *)(param_1 + 0x67c) = iVar1;
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x678) <= *(int *)(param_1 + 0x670) || param_2 != '\0')) {
    uVar2 = FUN_1800e8548(param_1,0);
    return uVar2;
  }
  return 0;
}

