/*
 * FUN_10037b80 at 10037b80
 * undefined FUN_10037b80(void)
 * Address ranges: 10037b80-10037c17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037b80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar1 = param_1 + param_2 * 0x1a0;
  *(undefined4 *)(iVar1 + 0x2da4) = param_3;
  *(undefined4 *)(iVar1 + 0x2da8) = param_4;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  *(undefined1 *)(param_2 + param_1 + 0x32d3) = 1;
  return;
}

