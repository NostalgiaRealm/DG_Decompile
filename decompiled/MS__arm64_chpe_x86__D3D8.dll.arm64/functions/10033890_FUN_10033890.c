/*
 * FUN_10033890 at 10033890
 * undefined FUN_10033890(void)
 * Address ranges: 10033890-100338f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10033890(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(uVar1);
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_101341fc)(iVar2,param_2,param_3);
  }
  return;
}

