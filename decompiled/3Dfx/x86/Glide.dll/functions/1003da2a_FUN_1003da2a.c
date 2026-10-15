/*
 * FUN_1003da2a at 1003da2a
 * undefined __stdcall FUN_1003da2a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003da2a-1003da54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003da2a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x88))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

