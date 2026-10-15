/*
 * FUN_1800359d0 at 1800359d0
 * undefined __fastcall FUN_1800359d0(longlong * param_1, int param_2, undefined4 param_3)
 * Address ranges: 1800359d0-180035a18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800359d0(longlong *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)((longlong)param_2 * 0x180 + 0x2d0c + (longlong)param_1) = param_3;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

