/*
 * FUN_180026100 at 180026100
 * undefined __cdecl FUN_180026100(longlong * param_1, undefined4 param_2)
 * Address ranges: 180026100-18002613f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180026100(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)(param_1 + 0x57f) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x299c) = param_2;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

