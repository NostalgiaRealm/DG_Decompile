/*
 * FUN_10053ec0 at 10053ec0
 * undefined FUN_10053ec0(void)
 * Address ranges: 10053ec0-10053f37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053ec0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_1003d508(iVar1 + 0x2c,&DAT_100b1880);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar2 = (*extraout_w11)(iVar1,param_2,param_3);
  return uVar2;
}

