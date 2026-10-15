/*
 * FUN_10041204 at 10041204
 * undefined __stdcall FUN_10041204(int param_1, undefined4 param_2)
 * Address ranges: 10041204-1004122f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041204(int param_1,undefined4 param_2)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x104))(*(int **)(param_1 + 0x638),param_2);
  return;
}

