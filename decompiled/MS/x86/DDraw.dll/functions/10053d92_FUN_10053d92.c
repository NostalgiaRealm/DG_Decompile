/*
 * FUN_10053d92 at 10053d92
 * undefined __stdcall FUN_10053d92(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10053d92-10053dcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053d92(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x34))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  FUN_10052578(param_1);
  return;
}

