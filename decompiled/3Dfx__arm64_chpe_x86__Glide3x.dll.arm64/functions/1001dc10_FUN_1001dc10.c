/*
 * FUN_1001dc10 at 1001dc10
 * undefined FUN_1001dc10(void)
 * Address ranges: 1001dc10-1001dc8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001dc10(int param_1,undefined4 param_2)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  FUN_1001bf60(*(undefined4 *)(param_1 + 0x32dc),0,0);
  *(undefined2 *)(param_1 + 0x2c64) = 0x101;
  *(undefined4 *)(param_1 + 0x29e0) = param_2;
  return;
}

