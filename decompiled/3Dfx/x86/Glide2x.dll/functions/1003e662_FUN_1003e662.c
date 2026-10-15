/*
 * FUN_1003e662 at 1003e662
 * undefined __stdcall FUN_1003e662(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003e662-1003e6a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e662(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xf8))(*(int **)(param_1 + 0x638),param_2,param_3);
  return;
}

