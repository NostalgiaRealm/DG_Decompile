/*
 * FUN_1003ecc7 at 1003ecc7
 * undefined __stdcall FUN_1003ecc7(int param_1, undefined4 param_2)
 * Address ranges: 1003ecc7-1003ecf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ecc7(int param_1,undefined4 param_2)

{
  FUN_1003cdb1(param_1);
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x130))(*(int **)(param_1 + 0x638),param_2);
  return;
}

