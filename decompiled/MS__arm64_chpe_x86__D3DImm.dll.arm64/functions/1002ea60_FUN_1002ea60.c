/*
 * FUN_1002ea60 at 1002ea60
 * undefined FUN_1002ea60(void)
 * Address ranges: 1002ea60-1002eabb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ea60(int *param_1)

{
  uint *puVar1;
  int iVar2;
  code *extraout_w11;
  
  iVar2 = *param_1;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar2,0);
  puVar1 = (uint *)(iVar2 + 0x470);
  *puVar1 = *puVar1 & 0x7fffffff;
  return;
}

