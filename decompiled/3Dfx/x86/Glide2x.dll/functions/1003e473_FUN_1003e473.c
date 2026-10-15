/*
 * FUN_1003e473 at 1003e473
 * undefined __stdcall FUN_1003e473(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003e473-1003e4a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e473(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xcc))(*(int **)(param_1 + 0x638),param_2,param_3);
  FUN_1003cad2(param_1);
  return;
}

