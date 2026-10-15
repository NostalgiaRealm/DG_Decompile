/*
 * FUN_1003e11c at 1003e11c
 * undefined __stdcall FUN_1003e11c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1003e11c-1003e154
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e11c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x30))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  FUN_1003cad2(param_1);
  return;
}

