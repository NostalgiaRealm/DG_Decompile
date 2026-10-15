/*
 * FUN_10036e80 at 10036e80
 * undefined FUN_10036e80(void)
 * Address ranges: 10036e80-10036f17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036e80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar1 = param_1 + param_2 * 0x250;
  *(undefined4 *)(iVar1 + 0x2f68) = param_3;
  *(undefined4 *)(iVar1 + 0x2f6c) = param_4;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  *(undefined1 *)(param_2 + param_1 + 0x3653) = 1;
  return;
}

