/*
 * FUN_100382b0 at 100382b0
 * undefined FUN_100382b0(void)
 * Address ranges: 100382b0-1003835f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100382b0(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  iVar1 = param_2 + param_3 * 0x1a0;
  *(float *)(iVar1 + 0x2dbc) = (float)param_4;
  *(float *)(iVar1 + 0x2dc0) = (float)(1 << (ulonglong)(param_5 & 0x1f)) / 255.0;
  *(undefined4 *)(iVar1 + 0x2dc4) = param_1;
  *(undefined1 *)(param_2 + 0x32d0) = 1;
  return;
}

