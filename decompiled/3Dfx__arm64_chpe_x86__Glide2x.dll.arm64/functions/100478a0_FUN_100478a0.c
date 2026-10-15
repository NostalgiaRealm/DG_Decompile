/*
 * FUN_100478a0 at 100478a0
 * undefined FUN_100478a0(void)
 * Address ranges: 100478a0-10047937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100478a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar1 = param_1 + param_2 * 0x180;
  *(undefined4 *)(iVar1 + 0x2d04) = param_3;
  *(undefined4 *)(iVar1 + 0x2d08) = param_4;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  *(undefined1 *)(param_2 + param_1 + 0x3153) = 1;
  return;
}

