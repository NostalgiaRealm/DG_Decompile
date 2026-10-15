/*
 * FUN_180036b1c at 180036b1c
 * undefined __fastcall FUN_180036b1c(longlong * param_1, undefined4 param_2)
 * Address ranges: 180036b1c-180036b51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036b1c(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)((longlong)param_1 + 0x2c7c) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  *(undefined4 *)((longlong)param_1 + 0x298c) = param_2;
  return;
}

