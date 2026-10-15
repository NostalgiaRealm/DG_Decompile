/*
 * FUN_180035e78 at 180035e78
 * undefined __fastcall FUN_180035e78(longlong * param_1, int param_2, undefined4 param_3)
 * Address ranges: 180035e78-180035ec0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180035e78(longlong *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)((longlong)param_2 * 0x180 + 0x2d0c + (longlong)param_1) = param_3;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

