/*
 * FUN_180028e18 at 180028e18
 * undefined __fastcall FUN_180028e18(longlong * param_1, int param_2, int param_3, byte param_4, undefined4 param_5)
 * Address ranges: 180028e18-180028e92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028e18(longlong *param_1,int param_2,int param_3,byte param_4,undefined4 param_5)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x2e0))();
  lVar1 = (longlong)param_2 * 0x1a0;
  *(float *)(lVar1 + 0x2ddc + (longlong)param_1) = (float)param_3;
  *(float *)(param_1 + (longlong)param_2 * 0x34 + 0x5bc) = (float)(1 << (param_4 & 0x1f)) / 255.0;
  *(undefined4 *)(lVar1 + 0x2de4 + (longlong)param_1) = param_5;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

