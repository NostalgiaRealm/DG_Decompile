/*
 * FUN_18002e608 at 18002e608
 * undefined __cdecl FUN_18002e608(undefined4 param_1, longlong * param_2, int param_3)
 * Address ranges: 18002e608-18002e657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e608(undefined4 param_1,longlong *param_2,int param_3)

{
  (**(code **)(*param_2 + 0x2e0))();
  *(undefined4 *)((longlong)param_2 + (longlong)param_3 * 0x1a0 + 0x2dac) = param_1;
  *(undefined1 *)(param_2 + 0x65e) = 1;
  return;
}

