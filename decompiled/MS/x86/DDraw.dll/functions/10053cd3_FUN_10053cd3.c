/*
 * FUN_10053cd3 at 10053cd3
 * undefined __stdcall FUN_10053cd3(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 10053cd3-10053d0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053cd3(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xc0))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  FUN_10052578(param_1);
  return;
}

