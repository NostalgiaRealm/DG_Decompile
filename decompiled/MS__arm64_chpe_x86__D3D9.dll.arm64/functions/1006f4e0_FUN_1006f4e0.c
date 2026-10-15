/*
 * FUN_1006f4e0 at 1006f4e0
 * undefined FUN_1006f4e0(void)
 * Address ranges: 1006f4e0-1006f4f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1006f4e0(int param_1,int param_2)

{
  *(int *)(param_1 + 8) = param_2;
  return param_2 - 8U < 5;
}

