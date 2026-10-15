/*
 * FUN_180028b54 at 180028b54
 * undefined __fastcall FUN_180028b54(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180028b54-180028ba4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028b54(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)(lVar1 * 0x1a0 + 0x2dc4 + (longlong)param_1) = param_3;
  *(undefined4 *)(param_1 + lVar1 * 0x34 + 0x5b9) = param_4;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined1 *)(lVar1 + 0x32f3 + (longlong)param_1) = 1;
  return;
}

