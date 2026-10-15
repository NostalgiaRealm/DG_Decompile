/*
 * FUN_180035e24 at 180035e24
 * undefined __fastcall FUN_180035e24(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 180035e24-180035e75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035e24(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

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

