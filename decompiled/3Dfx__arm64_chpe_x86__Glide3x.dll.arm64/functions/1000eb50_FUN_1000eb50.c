/*
 * FUN_1000eb50 at 1000eb50
 * undefined FUN_1000eb50(void)
 * Address ranges: 1000eb50-1000ebd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000eb50(int param_1,int param_2,undefined4 param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + param_2 * 0x1a0 + 0x2dec) = param_3;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  *(undefined4 *)(param_1 + param_2 * 4 + 0x2a40) = param_3;
  return;
}

