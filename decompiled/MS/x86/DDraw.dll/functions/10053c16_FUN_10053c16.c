/*
 * FUN_10053c16 at 10053c16
 * undefined __stdcall FUN_10053c16(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10053c16-10053c48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053c16(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x44))(*(int **)(param_1 + 0x638),param_2,param_3);
  FUN_10052578(param_1);
  return;
}

