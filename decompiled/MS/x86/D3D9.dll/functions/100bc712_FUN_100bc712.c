/*
 * FUN_100bc712 at 100bc712
 * undefined __stdcall FUN_100bc712(int param_1, undefined4 param_2)
 * Address ranges: 100bc712-100bc73d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc712(int param_1,undefined4 param_2)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x104))(*(int **)(param_1 + 0x638),param_2);
  return;
}

