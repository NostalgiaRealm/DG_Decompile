/*
 * FUN_1002779e at 1002779e
 * undefined __cdecl FUN_1002779e(int * param_1)
 * Address ranges: 1002779e-100277bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1002779e(int *param_1)

{
  if (*(int *)(*param_1 + 0x2024) == param_1[1]) {
    *(undefined4 *)(*param_1 + 0x2024) = 0;
  }
  return;
}

