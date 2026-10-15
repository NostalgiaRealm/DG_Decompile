/*
 * FUN_1003dfd9 at 1003dfd9
 * undefined __stdcall FUN_1003dfd9(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003dfd9-1003e00b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003dfd9(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x44))(*(int **)(param_1 + 0x638),param_2,param_3);
  FUN_1003cad2(param_1);
  return;
}

