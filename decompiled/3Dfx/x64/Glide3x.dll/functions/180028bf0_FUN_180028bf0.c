/*
 * FUN_180028bf0 at 180028bf0
 * undefined __fastcall FUN_180028bf0(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180028bf0-180028c7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180028bf0(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  (**(code **)(*param_1 + 0x2e0))();
  if (*(int *)(param_1[1] + 0x4b) == 0x200) {
    param_3 = 1;
  }
  else if (*(int *)(param_1[1] + 0x4b) == 0x100) {
    param_3 = 0;
  }
  *(undefined4 *)(lVar1 * 0x1a0 + 0x2dcc + (longlong)param_1) = param_3;
  if (*(int *)(param_1[1] + 0x4b) == 0x200) {
    param_4 = 1;
  }
  else if (*(int *)(param_1[1] + 0x4b) == 0x100) {
    param_4 = 0;
  }
  *(undefined4 *)(param_1 + lVar1 * 0x34 + 0x5ba) = param_4;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined1 *)(lVar1 + 0x32f3 + (longlong)param_1) = 1;
  return;
}

