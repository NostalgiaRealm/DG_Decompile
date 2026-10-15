/*
 * FUN_10055b70 at 10055b70
 * undefined FUN_10055b70(void)
 * Address ranges: 10055b70-10055c17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055b70(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if (param_3 != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(uVar2,param_2,param_3);
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

