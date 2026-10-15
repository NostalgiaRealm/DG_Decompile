/*
 * FUN_1003df9b at 1003df9b
 * undefined __stdcall FUN_1003df9b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1003df9b-1003dfd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003df9b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x4c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  FUN_1003cad2(param_1);
  return;
}

