/*
 * FUN_1004460d at 1004460d
 * undefined __stdcall FUN_1004460d(int param_1, undefined4 param_2)
 * Address ranges: 1004460d-10044638
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004460d(int param_1,undefined4 param_2)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x104))(*(int **)(param_1 + 0x638),param_2);
  return;
}

