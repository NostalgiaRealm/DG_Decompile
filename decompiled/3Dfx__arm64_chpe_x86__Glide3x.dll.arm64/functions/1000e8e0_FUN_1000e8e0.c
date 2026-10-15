/*
 * FUN_1000e8e0 at 1000e8e0
 * undefined FUN_1000e8e0(void)
 * Address ranges: 1000e8e0-1000e98b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000e8e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2bb8) = param_2;
  *(undefined4 *)(param_1 + 0x2bbc) = param_3;
  *(undefined4 *)(param_1 + 0x2bc0) = param_4;
  *(undefined4 *)(param_1 + 0x2bc4) = param_5;
  FUN_1000e470(param_1,param_2,param_3,param_4,param_5);
  return;
}

