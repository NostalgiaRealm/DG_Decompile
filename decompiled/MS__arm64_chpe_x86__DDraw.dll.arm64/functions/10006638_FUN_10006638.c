/*
 * FUN_10006638 at 10006638
 * undefined FUN_10006638(void)
 * Address ranges: 10006638-100066b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006638(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = FUN_10005fb0(param_1);
  FUN_10006160(param_1,1,uVar1);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(param_1);
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_100ba278)(iVar2,0x20,0,0);
  }
  return;
}

