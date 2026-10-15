/*
 * FUN_10043ec7 at 10043ec7
 * undefined __stdcall FUN_10043ec7(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10043ec7-10043ef9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043ec7(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x44))(*(int **)(param_1 + 0x638),param_2,param_3);
  FUN_100429c0(param_1);
  return;
}

