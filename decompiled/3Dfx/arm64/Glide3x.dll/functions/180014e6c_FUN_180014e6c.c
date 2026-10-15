/*
 * FUN_180014e6c at 180014e6c
 * undefined __cdecl FUN_180014e6c(longlong * param_1, undefined4 param_2)
 * Address ranges: 180014e6c-180014ea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014e6c(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x2e0))();
  *(undefined4 *)(param_1 + 0x5a1) = param_2;
  *(undefined1 *)(param_1 + 0x65e) = 1;
  return;
}

