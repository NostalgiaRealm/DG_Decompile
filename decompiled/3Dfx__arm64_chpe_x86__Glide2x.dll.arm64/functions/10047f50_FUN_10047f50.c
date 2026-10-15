/*
 * FUN_10047f50 at 10047f50
 * undefined FUN_10047f50(void)
 * Address ranges: 10047f50-10047fff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047f50(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2);
  iVar1 = param_2 + param_3 * 0x180;
  *(float *)(iVar1 + 0x2d1c) = (float)param_4;
  *(float *)(iVar1 + 0x2d20) = (float)(1 << (ulonglong)(param_5 & 0x1f)) / 255.0;
  *(undefined4 *)(iVar1 + 0x2d24) = param_1;
  *(undefined1 *)(param_2 + 0x3150) = 1;
  return;
}

