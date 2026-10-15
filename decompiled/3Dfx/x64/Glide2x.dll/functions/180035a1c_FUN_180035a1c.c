/*
 * FUN_180035a1c at 180035a1c
 * undefined __fastcall FUN_180035a1c(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180035a1c-180035ab3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035a1c(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  (**(code **)(*param_1 + 0x2a0))();
  if (*(int *)(param_1[1] + 0x4b) == 0x200) {
    param_3 = 1;
  }
  else if (*(int *)(param_1[1] + 0x4b) == 0x100) {
    param_3 = 0;
  }
  *(undefined4 *)(lVar1 * 0x180 + 0x2d2c + (longlong)param_1) = param_3;
  if (*(int *)(param_1[1] + 0x4b) == 0x200) {
    param_4 = 1;
  }
  else if (*(int *)(param_1[1] + 0x4b) == 0x100) {
    param_4 = 0;
  }
  *(undefined4 *)(param_1 + lVar1 * 0x30 + 0x5a6) = param_4;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined1 *)(lVar1 + 0x3173 + (longlong)param_1) = 1;
  return;
}

