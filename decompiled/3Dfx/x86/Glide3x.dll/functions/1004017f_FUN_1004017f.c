/*
 * FUN_1004017f at 1004017f
 * undefined __stdcall FUN_1004017f(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1004017f-100401a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004017f(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x88))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

