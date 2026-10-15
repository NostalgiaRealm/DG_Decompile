/*
 * FUN_100999b6 at 100999b6
 * undefined __stdcall FUN_100999b6(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100999b6-100999f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100999b6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_1009827e(param_1);
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x4c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  FUN_1009832f(param_1);
  return;
}

