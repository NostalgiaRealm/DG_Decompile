/*
 * FUN_10066b18 at 10066b18
 * undefined FUN_10066b18(void)
 * Address ranges: 10066b18-10066bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10066b18(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar2 = 0x80070057;
  if ((param_2 < 0xff) && (param_2 + param_3 < 0x101)) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,param_2,param_3);
    uVar2 = 0;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar2;
}

