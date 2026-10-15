/*
 * FUN_1003eaaf at 1003eaaf
 * undefined __stdcall FUN_1003eaaf(int param_1, undefined4 param_2)
 * Address ranges: 1003eaaf-1003eada
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003eaaf(int param_1,undefined4 param_2)

{
  FUN_1003cdb1(param_1);
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x104))(*(int **)(param_1 + 0x638),param_2);
  return;
}

