/*
 * FUN_100bc49c at 100bc49c
 * undefined __stdcall FUN_100bc49c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100bc49c-100bc4d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc49c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xdc))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

