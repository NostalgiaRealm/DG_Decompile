/*
 * FUN_1003e88f at 1003e88f
 * undefined __stdcall FUN_1003e88f(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003e88f-1003e8c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e88f(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x124))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

