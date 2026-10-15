/*
 * FUN_180023818 at 180023818
 * undefined __fastcall FUN_180023818(longlong * param_1, undefined4 param_2)
 * Address ranges: 180023818-18002384d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023818(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x57f) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x299c) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

