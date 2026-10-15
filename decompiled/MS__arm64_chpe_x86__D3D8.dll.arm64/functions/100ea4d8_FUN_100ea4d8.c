/*
 * FUN_100ea4d8 at 100ea4d8
 * undefined FUN_100ea4d8(void)
 * Address ranges: 100ea4d8-100ea563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ea4d8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (int)*(undefined8 *)(param_2 + 2);
  FUN_100ec118(*(undefined4 *)(param_1 + 0x24),*param_2,1);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  FUN_100fed00(param_2[4]);
  FUN_100fed00(param_2[5]);
  return;
}

