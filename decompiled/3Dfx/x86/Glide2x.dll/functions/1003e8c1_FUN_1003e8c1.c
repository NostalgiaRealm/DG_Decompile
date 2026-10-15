/*
 * FUN_1003e8c1 at 1003e8c1
 * undefined __stdcall FUN_1003e8c1(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1003e8c1-1003e8f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e8c1(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x128))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  return;
}

