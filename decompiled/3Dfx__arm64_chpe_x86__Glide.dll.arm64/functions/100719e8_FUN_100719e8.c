/*
 * FUN_100719e8 at 100719e8
 * undefined FUN_100719e8(void)
 * Address ranges: 100719e8-10071a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100719e8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (int)*(undefined8 *)(param_2 + 2);
  FUN_10059760(*(undefined4 *)(param_1 + 0x24),*param_2,1);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  FUN_1007a4e0(param_2[4]);
  FUN_1007a4e0(param_2[5]);
  return;
}

