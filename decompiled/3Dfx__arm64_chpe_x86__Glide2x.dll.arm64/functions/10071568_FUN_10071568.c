/*
 * FUN_10071568 at 10071568
 * undefined FUN_10071568(void)
 * Address ranges: 10071568-100715f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071568(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (int)*(undefined8 *)(param_2 + 2);
  FUN_100592e0(*(undefined4 *)(param_1 + 0x24),*param_2,1);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  FUN_1007a060(param_2[4]);
  FUN_1007a060(param_2[5]);
  return;
}

