/*
 * FUN_1004e36c at 1004e36c
 * uint __stdcall FUN_1004e36c(int param_1)
 * Address ranges: 1004e36c-1004e384
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1004e36c(int param_1)

{
  return -(uint)(*(int *)(*(int *)(param_1 + 4) + 0x60) != 0) & 0x88760005;
}

