/*
 * FUN_18002eb70 at 18002eb70
 * undefined __cdecl FUN_18002eb70(undefined4 param_1, longlong * param_2, int param_3, int param_4, uint param_5)
 * Address ranges: 18002eb70-18002ebef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002eb70(undefined4 param_1,longlong *param_2,int param_3,int param_4,uint param_5)

{
  (**(code **)(*param_2 + 0x2e0))();
  *(undefined4 *)((longlong)param_2 + (longlong)param_3 * 0x1a0 + 0x2de4) = param_1;
  *(float *)((longlong)param_2 + (longlong)param_3 * 0x1a0 + 0x2ddc) = (float)param_4;
  *(float *)(param_2 + (longlong)param_3 * 0x34 + 0x5bc) =
       (float)(1 << (ulonglong)(param_5 & 0x1f)) / 255.0;
  *(undefined1 *)(param_2 + 0x65e) = 1;
  return;
}

