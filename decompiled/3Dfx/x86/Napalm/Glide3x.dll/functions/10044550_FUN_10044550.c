/*
 * FUN_10044550 at 10044550
 * undefined __stdcall FUN_10044550(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10044550-1004458f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10044550(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xf8))(*(int **)(param_1 + 0x638),param_2,param_3);
  return;
}

