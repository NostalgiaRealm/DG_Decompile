/*
 * FUN_180036674 at 180036674
 * undefined __fastcall FUN_180036674(longlong * param_1, undefined4 param_2)
 * Address ranges: 180036674-1800366a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036674(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)((longlong)param_1 + 0x2c7c) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined4 *)((longlong)param_1 + 0x298c) = param_2;
  return;
}

