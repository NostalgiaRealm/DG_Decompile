/*
 * FUN_1003d69a at 1003d69a
 * undefined __stdcall FUN_1003d69a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003d69a-1003d6c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d69a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x88))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

