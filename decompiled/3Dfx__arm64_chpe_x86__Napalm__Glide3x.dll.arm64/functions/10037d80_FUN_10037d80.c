/*
 * FUN_10037d80 at 10037d80
 * undefined FUN_10037d80(void)
 * Address ranges: 10037d80-10037dff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037d80(int param_1,uint param_2)

{
  code *extraout_w11;
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2d20) = param_2 & 0xff;
  *(uint *)(param_1 + 0x2c2c) = param_2 & 0xff;
  *(undefined1 *)(param_1 + 0x2da8) = 1;
  return;
}

