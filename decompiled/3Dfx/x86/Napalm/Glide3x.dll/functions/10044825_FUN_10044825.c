/*
 * FUN_10044825 at 10044825
 * undefined __stdcall FUN_10044825(int param_1, undefined4 param_2)
 * Address ranges: 10044825-10044850
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10044825(int param_1,undefined4 param_2)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x130))(*(int **)(param_1 + 0x638),param_2);
  return;
}

