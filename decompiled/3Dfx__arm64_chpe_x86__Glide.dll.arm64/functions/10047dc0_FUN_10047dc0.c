/*
 * FUN_10047dc0 at 10047dc0
 * undefined FUN_10047dc0(void)
 * Address ranges: 10047dc0-10047e33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047dc0(undefined4 param_1,int param_2,int param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  *(undefined4 *)(param_2 + param_3 * 0x180 + 0x2cec) = param_1;
  *(undefined1 *)(param_2 + 0x3150) = 1;
  return;
}

