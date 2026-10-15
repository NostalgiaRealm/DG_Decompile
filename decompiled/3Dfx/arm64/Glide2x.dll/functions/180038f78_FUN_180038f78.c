/*
 * FUN_180038f78 at 180038f78
 * undefined __cdecl FUN_180038f78(undefined4 param_1, longlong * param_2, int param_3)
 * Address ranges: 180038f78-180038fcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038f78(undefined4 param_1,longlong *param_2,int param_3)

{
  (**(code **)(*param_2 + 0x2a0))();
  *(undefined4 *)((longlong)param_2 + (longlong)param_3 * 0x180 + 0x2d0c) = param_1;
  *(undefined1 *)(param_2 + 0x62e) = 1;
  return;
}

