/*
 * FUN_1800154b0 at 1800154b0
 * undefined __cdecl FUN_1800154b0(longlong * param_1, undefined4 param_2)
 * Address ranges: 1800154b0-1800154ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800154b0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)((longlong)param_1 + 0x2d1c) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2a04) = param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

