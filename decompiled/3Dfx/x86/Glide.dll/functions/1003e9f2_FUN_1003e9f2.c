/*
 * FUN_1003e9f2 at 1003e9f2
 * undefined __stdcall FUN_1003e9f2(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003e9f2-1003ea31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e9f2(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003cdb1(param_1);
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xf8))(*(int **)(param_1 + 0x638),param_2,param_3);
  return;
}

