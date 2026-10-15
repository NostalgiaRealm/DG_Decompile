/*
 * FUN_10052040 at 10052040
 * undefined FUN_10052040(void)
 * Address ranges: 10052040-100520b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052040(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_1003d508(iVar1 + 0x44,&DAT_100b1830);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar2 = (*extraout_w11)(iVar1,param_2,param_3);
  return uVar2;
}

