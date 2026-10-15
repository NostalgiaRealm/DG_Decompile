/*
 * FUN_18003597c at 18003597c
 * undefined __fastcall FUN_18003597c(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18003597c-1800359cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003597c(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(lVar1 * 0x180 + 0x2d24 + (longlong)param_1) = param_3;
  *(undefined4 *)(param_1 + lVar1 * 0x30 + 0x5a5) = param_4;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined1 *)(lVar1 + 0x3173 + (longlong)param_1) = 1;
  return;
}

