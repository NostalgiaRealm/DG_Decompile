/*
 * FUN_1001eb00 at 1001eb00
 * undefined FUN_1001eb00(void)
 * Address ranges: 1001eb00-1001eb97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001eb00(int param_1,uint param_2)

{
  code *extraout_w11;
  
  FUN_1001bfa8(*(undefined4 *)(param_1 + 0x32dc));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(uint *)(param_1 + 0x2c98) = -(uint)((param_2 & 0xff) != 0);
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  *(uint *)(param_1 + 0x2ae4) = param_2 & 0xff;
  *(undefined2 *)(param_1 + 0x2c60) = 0x101;
  return;
}

