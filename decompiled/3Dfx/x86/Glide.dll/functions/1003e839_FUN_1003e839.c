/*
 * FUN_1003e839 at 1003e839
 * undefined __stdcall FUN_1003e839(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1003e839-1003e86d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e839(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003cdb1(param_1);
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xdc))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

