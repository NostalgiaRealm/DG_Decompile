/*
 * FUN_10053dce at 10053dce
 * undefined __stdcall FUN_10053dce(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10053dce-10053e05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053dce(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x38))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  FUN_10052578(param_1);
  return;
}

