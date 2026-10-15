/*
 * FUN_1005332d at 1005332d
 * undefined __stdcall FUN_1005332d(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1005332d-1005335a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005332d(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x90))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

