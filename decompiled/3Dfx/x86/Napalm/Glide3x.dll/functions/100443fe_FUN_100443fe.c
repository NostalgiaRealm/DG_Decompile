/*
 * FUN_100443fe at 100443fe
 * undefined __stdcall FUN_100443fe(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100443fe-1004442f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100443fe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xe4))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

