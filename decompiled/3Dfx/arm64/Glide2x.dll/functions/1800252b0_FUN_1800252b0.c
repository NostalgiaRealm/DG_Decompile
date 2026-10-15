/*
 * FUN_1800252b0 at 1800252b0
 * undefined __cdecl FUN_1800252b0(longlong * param_1, undefined4 param_2)
 * Address ranges: 1800252b0-1800252ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800252b0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x57f) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x299c) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

