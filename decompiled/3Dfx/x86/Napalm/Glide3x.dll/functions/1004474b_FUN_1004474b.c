/*
 * FUN_1004474b at 1004474b
 * undefined __stdcall FUN_1004474b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1004474b-1004477c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004474b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x120))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

