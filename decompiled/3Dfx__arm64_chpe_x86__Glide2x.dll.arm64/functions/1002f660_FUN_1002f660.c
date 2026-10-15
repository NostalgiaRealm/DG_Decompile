/*
 * FUN_1002f660 at 1002f660
 * undefined FUN_1002f660(void)
 * Address ranges: 1002f660-1002f6cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002f660(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + 0x2bd8) = param_2;
  *(undefined4 *)(param_1 + 0x297c) = param_2;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return;
}

