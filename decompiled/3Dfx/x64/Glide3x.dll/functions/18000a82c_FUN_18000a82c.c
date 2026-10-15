/*
 * FUN_18000a82c at 18000a82c
 * undefined __fastcall FUN_18000a82c(longlong * param_1, undefined4 param_2)
 * Address ranges: 18000a82c-18000a861
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000a82c(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)((longlong)param_1 + 0x32c4) = param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined4 *)(param_1 + 0x546) = param_2;
  return;
}

