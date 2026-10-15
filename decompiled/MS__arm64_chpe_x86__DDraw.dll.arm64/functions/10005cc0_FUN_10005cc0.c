/*
 * FUN_10005cc0 at 10005cc0
 * undefined FUN_10005cc0(void)
 * Address ranges: 10005cc0-10005d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10005cc0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(uVar1);
  if (iVar2 != 0) {
    (*(code *)PTR_FUN_100ba238)(iVar2,param_2,param_3);
  }
  return;
}

