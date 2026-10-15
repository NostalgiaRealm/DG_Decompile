/*
 * FUN_1011cd28 at 1011cd28
 * undefined FUN_1011cd28(void)
 * Address ranges: 1011cd28-1011cdb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011cd28(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (int)*(undefined8 *)(param_2 + 2);
  FUN_1011e968(*(undefined4 *)(param_1 + 0x24),*param_2,1);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  FUN_101322d0(param_2[4]);
  FUN_101322d0(param_2[5]);
  return;
}

