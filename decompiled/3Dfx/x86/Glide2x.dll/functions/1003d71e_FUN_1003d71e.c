/*
 * FUN_1003d71e at 1003d71e
 * undefined __stdcall FUN_1003d71e(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1003d71e-1003d74b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d71e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x8c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

