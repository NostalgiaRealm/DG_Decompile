/*
 * FUN_10037900 at 10037900
 * undefined FUN_10037900(void)
 * Address ranges: 10037900-100379d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037900(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_100375d8(param_1 + 0x2e80,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

