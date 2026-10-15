/*
 * FUN_1003daae at 1003daae
 * undefined __stdcall FUN_1003daae(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1003daae-1003dadb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003daae(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x8c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

