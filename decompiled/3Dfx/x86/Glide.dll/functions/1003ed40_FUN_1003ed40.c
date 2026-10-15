/*
 * FUN_1003ed40 at 1003ed40
 * undefined __stdcall FUN_1003ed40(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003ed40-1003ed71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ed40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003cdb1(param_1);
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x13c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

