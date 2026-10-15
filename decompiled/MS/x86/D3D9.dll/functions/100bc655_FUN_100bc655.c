/*
 * FUN_100bc655 at 100bc655
 * undefined __stdcall FUN_100bc655(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100bc655-100bc694
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc655(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xf8))(*(int **)(param_1 + 0x638),param_2,param_3);
  return;
}

