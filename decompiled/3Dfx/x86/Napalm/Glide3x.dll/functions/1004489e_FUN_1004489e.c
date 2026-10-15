/*
 * FUN_1004489e at 1004489e
 * undefined __stdcall FUN_1004489e(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1004489e-100448cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004489e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x13c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

