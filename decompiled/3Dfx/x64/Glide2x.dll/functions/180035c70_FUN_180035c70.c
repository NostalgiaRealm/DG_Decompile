/*
 * FUN_180035c70 at 180035c70
 * undefined __fastcall FUN_180035c70(longlong * param_1, int param_2, int param_3, byte param_4, undefined4 param_5)
 * Address ranges: 180035c70-180035ceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035c70(longlong *param_1,int param_2,int param_3,byte param_4,undefined4 param_5)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x2a0))();
  lVar1 = (longlong)param_2 * 0x180;
  *(float *)(lVar1 + 0x2d3c + (longlong)param_1) = (float)param_3;
  *(float *)(param_1 + (longlong)param_2 * 0x30 + 0x5a8) = (float)(1 << (param_4 & 0x1f)) / 255.0;
  *(undefined4 *)(lVar1 + 0x2d44 + (longlong)param_1) = param_5;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

