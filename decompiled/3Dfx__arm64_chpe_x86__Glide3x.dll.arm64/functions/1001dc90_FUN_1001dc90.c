/*
 * FUN_1001dc90 at 1001dc90
 * undefined FUN_1001dc90(void)
 * Address ranges: 1001dc90-1001dd0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001dc90(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_1001bf60(*(undefined4 *)(param_1 + 0x32dc),0,0);
  *(undefined1 *)(param_1 + 0x2c64) = 1;
  *(undefined4 *)(param_1 + 0x29e4) = param_2;
  return;
}

