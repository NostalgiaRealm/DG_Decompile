/*
 * FUN_1003e523 at 1003e523
 * undefined __stdcall FUN_1003e523(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003e523-1003e55a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e523(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003cdb1(param_1);
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x38))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  FUN_1003ce62(param_1);
  return;
}

