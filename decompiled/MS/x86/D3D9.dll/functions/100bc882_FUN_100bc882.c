/*
 * FUN_100bc882 at 100bc882
 * undefined __stdcall FUN_100bc882(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100bc882-100bc8b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc882(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x124))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

