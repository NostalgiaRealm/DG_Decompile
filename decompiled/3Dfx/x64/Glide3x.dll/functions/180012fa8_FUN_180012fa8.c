/*
 * FUN_180012fa8 at 180012fa8
 * undefined __fastcall FUN_180012fa8(longlong * param_1, undefined4 param_2)
 * Address ranges: 180012fa8-180012fdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012fa8(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)((longlong)param_1 + 0x2d1c) = param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2a04) = param_2;
  return;
}

