/*
 * FUN_1001efd0 at 1001efd0
 * undefined FUN_1001efd0(void)
 * Address ranges: 1001efd0-1001f05f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001efd0(int param_1,int param_2)

{
  code *extraout_w11;
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(int *)(param_1 + 0x2d3c) = param_2;
  *(undefined4 *)(param_1 + 0x2c28) = *(undefined4 *)(&DAT_100a0170 + param_2 * 4);
  *(undefined1 *)(param_1 + 0x2da8) = 1;
  return;
}

