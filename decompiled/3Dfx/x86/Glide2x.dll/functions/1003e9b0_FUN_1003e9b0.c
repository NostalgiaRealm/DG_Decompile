/*
 * FUN_1003e9b0 at 1003e9b0
 * undefined __stdcall FUN_1003e9b0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003e9b0-1003e9e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e9b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x13c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

