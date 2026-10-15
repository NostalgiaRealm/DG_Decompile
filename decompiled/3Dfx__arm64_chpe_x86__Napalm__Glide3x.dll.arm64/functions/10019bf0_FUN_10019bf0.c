/*
 * FUN_10019bf0 at 10019bf0
 * undefined FUN_10019bf0(void)
 * Address ranges: 10019bf0-10019c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_5);
  *(undefined4 *)(param_5 + 0x2e20) = param_1;
  *(undefined4 *)(param_5 + 0x2e24) = param_2;
  *(undefined4 *)(param_5 + 0x2e28) = param_3;
  *(undefined4 *)(param_5 + 0x2e2c) = param_4;
  *(undefined1 *)(param_5 + 0x3650) = 1;
  return;
}

