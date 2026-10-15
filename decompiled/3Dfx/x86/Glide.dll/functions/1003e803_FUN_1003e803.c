/*
 * FUN_1003e803 at 1003e803
 * undefined __stdcall FUN_1003e803(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003e803-1003e838
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e803(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003cdb1(param_1);
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xcc))(*(int **)(param_1 + 0x638),param_2,param_3);
  FUN_1003ce62(param_1);
  return;
}

