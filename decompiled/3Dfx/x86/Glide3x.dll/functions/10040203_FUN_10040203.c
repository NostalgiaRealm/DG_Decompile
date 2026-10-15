/*
 * FUN_10040203 at 10040203
 * undefined __stdcall FUN_10040203(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 10040203-10040230
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040203(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x8c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

