/*
 * FUN_10048620 at 10048620
 * undefined FUN_10048620(void)
 * Address ranges: 10048620-10048683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048620(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2c48) = param_2;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}

