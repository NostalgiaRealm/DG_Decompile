/*
 * FUN_180039520 at 180039520
 * undefined __cdecl FUN_180039520(undefined4 param_1, longlong * param_2, int param_3, int param_4, uint param_5)
 * Address ranges: 180039520-1800395a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180039520(undefined4 param_1,longlong *param_2,int param_3,int param_4,uint param_5)

{
  (**(code **)(*param_2 + 0x2a0))();
  *(undefined4 *)((longlong)param_2 + (longlong)param_3 * 0x180 + 0x2d44) = param_1;
  *(float *)((longlong)param_2 + (longlong)param_3 * 0x180 + 0x2d3c) = (float)param_4;
  *(float *)(param_2 + (longlong)param_3 * 0x30 + 0x5a8) =
       (float)(1 << (ulonglong)(param_5 & 0x1f)) / 255.0;
  *(undefined1 *)(param_2 + 0x62e) = 1;
  return;
}

