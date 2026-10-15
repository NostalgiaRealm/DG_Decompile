/*
 * FUN_100401d5 at 100401d5
 * undefined __stdcall FUN_100401d5(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100401d5-10040202
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100401d5(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x90))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

