/*
 * FUN_10088ab8 at 10088ab8
 * undefined FUN_10088ab8(void)
 * Address ranges: 10088ab8-10088b43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088ab8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (int)*(undefined8 *)(param_2 + 2);
  FUN_10078600(*(undefined4 *)(param_1 + 0x24),*param_2,1);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  FUN_100914d0(param_2[4]);
  FUN_100914d0(param_2[5]);
  return;
}

