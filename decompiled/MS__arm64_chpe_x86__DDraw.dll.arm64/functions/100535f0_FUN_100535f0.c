/*
 * FUN_100535f0 at 100535f0
 * undefined FUN_100535f0(void)
 * Address ranges: 100535f0-10053667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100535f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_1003d508(iVar1 + 0x2c,&DAT_100b1860);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar2 = (*extraout_w11)(iVar1,param_2,param_3);
  return uVar2;
}

