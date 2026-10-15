/*
 * FUN_100bc466 at 100bc466
 * undefined __stdcall FUN_100bc466(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100bc466-100bc49b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc466(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xcc))(*(int **)(param_1 + 0x638),param_2,param_3);
  FUN_100ba907(param_1);
  return;
}

