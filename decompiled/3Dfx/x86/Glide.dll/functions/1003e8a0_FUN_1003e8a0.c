/*
 * FUN_1003e8a0 at 1003e8a0
 * undefined __stdcall FUN_1003e8a0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003e8a0-1003e8d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e8a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003cdb1(param_1);
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xe4))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

