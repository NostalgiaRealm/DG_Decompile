/*
 * FUN_10019460 at 10019460
 * undefined FUN_10019460(void)
 * Address ranges: 10019460-100194f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_5);
  *(undefined4 *)(param_5 + 0x2cd0) = param_1;
  *(undefined4 *)(param_5 + 0x2cd4) = param_2;
  *(undefined4 *)(param_5 + 0x2cd8) = param_3;
  *(undefined4 *)(param_5 + 0x2cdc) = param_4;
  *(undefined1 *)(param_5 + 0x32d0) = 1;
  return;
}

