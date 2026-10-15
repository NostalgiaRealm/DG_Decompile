/*
 * FUN_10019b50 at 10019b50
 * undefined FUN_10019b50(void)
 * Address ranges: 10019b50-10019bbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019b50(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2cfc) = param_2;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  *(undefined4 *)(param_1 + 0x29e8) = param_2;
  return;
}

