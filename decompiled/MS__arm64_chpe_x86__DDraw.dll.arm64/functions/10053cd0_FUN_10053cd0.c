/*
 * FUN_10053cd0 at 10053cd0
 * undefined FUN_10053cd0(void)
 * Address ranges: 10053cd0-10053d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053cd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_1003d508(iVar1 + 0x2c,&DAT_100b1870);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar2 = (*extraout_w11)(iVar1,param_2,param_3);
  return uVar2;
}

