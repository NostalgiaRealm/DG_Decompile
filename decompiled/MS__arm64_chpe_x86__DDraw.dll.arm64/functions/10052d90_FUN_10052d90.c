/*
 * FUN_10052d90 at 10052d90
 * undefined FUN_10052d90(void)
 * Address ranges: 10052d90-10052e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052d90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = *(int *)(param_1 + 4);
  FUN_1003d508(iVar1 + 0x2c,&DAT_100b18d0);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar2 = (*extraout_w11)(iVar1,param_2,param_3);
  return uVar2;
}

