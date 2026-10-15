/*
 * FUN_100109f0 at 100109f0
 * undefined FUN_100109f0(void)
 * Address ranges: 100109f0-10010a77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100109f0(int param_1,int param_2,undefined4 param_3)

{
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  *(undefined4 *)(param_1 + param_2 * 0x250 + 0x2fac) = param_3;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  *(undefined4 *)(param_1 + param_2 * 4 + 0x2b7c) = param_3;
  return;
}

