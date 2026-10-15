/*
 * FUN_1003da80 at 1003da80
 * undefined __stdcall FUN_1003da80(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1003da80-1003daad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003da80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x90))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

