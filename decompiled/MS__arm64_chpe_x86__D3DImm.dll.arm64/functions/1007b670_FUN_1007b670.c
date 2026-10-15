/*
 * FUN_1007b670 at 1007b670
 * undefined FUN_1007b670(void)
 * Address ranges: 1007b670-1007b6fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007b670(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (int)*(undefined8 *)(param_2 + 2);
  FUN_10077dc0(*(undefined4 *)(param_1 + 0x24),*param_2,1);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  FUN_10081dc0(param_2[4]);
  FUN_10081dc0(param_2[5]);
  return;
}

