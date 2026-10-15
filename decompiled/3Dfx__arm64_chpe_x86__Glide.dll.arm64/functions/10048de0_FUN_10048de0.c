/*
 * FUN_10048de0 at 10048de0
 * undefined FUN_10048de0(void)
 * Address ranges: 10048de0-10048e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_5);
  *(undefined4 *)(param_5 + 0x2c30) = param_1;
  *(undefined4 *)(param_5 + 0x2c34) = param_2;
  *(undefined4 *)(param_5 + 0x2c38) = param_3;
  *(undefined4 *)(param_5 + 0x2c3c) = param_4;
  *(undefined1 *)(param_5 + 0x3150) = 1;
  return;
}

