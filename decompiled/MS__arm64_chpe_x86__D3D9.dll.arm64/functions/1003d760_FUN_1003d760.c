/*
 * FUN_1003d760 at 1003d760
 * undefined FUN_1003d760(void)
 * Address ranges: 1003d760-1003d7c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d760(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(uVar1);
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_1016c1fc)(iVar2,param_2,param_3);
  }
  return;
}

