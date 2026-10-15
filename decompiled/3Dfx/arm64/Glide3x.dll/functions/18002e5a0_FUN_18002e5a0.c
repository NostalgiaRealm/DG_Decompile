/*
 * FUN_18002e5a0 at 18002e5a0
 * undefined __cdecl FUN_18002e5a0(longlong * param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 18002e5a0-18002e607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e5a0(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 0x1a0 + 0x2dc4) = param_3;
  *(undefined4 *)(param_1 + (longlong)param_2 * 0x34 + 0x5b9) = param_4;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  *(undefined1 *)((longlong)param_1 + (longlong)param_2 + 0x32f3) = 1;
  return;
}

