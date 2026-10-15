/*
 * FUN_100443cc at 100443cc
 * undefined __stdcall FUN_100443cc(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100443cc-100443fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100443cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xe0))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

