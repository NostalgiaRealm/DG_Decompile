/*
 * FUN_1003e36c at 1003e36c
 * undefined __stdcall FUN_1003e36c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 1003e36c-1003e3b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e36c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x48))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_1003cad2(param_1);
  return;
}

