/*
 * FUN_10053bd8 at 10053bd8
 * undefined __stdcall FUN_10053bd8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10053bd8-10053c15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053bd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x4c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  FUN_10052578(param_1);
  return;
}

