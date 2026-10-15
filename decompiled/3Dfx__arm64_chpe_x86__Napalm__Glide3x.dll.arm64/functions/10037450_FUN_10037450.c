/*
 * FUN_10037450 at 10037450
 * undefined FUN_10037450(void)
 * Address ranges: 10037450-100374ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037450(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  iVar1 = param_2 + param_3 * 0x250;
  *(float *)(iVar1 + 0x2f80) = (float)param_4;
  *(float *)(iVar1 + 0x2f84) = (float)(1 << (ulonglong)(param_5 & 0x1f)) / 255.0;
  *(undefined4 *)(iVar1 + 0x2f88) = param_1;
  *(undefined1 *)(param_2 + 0x3650) = 1;
  return;
}

