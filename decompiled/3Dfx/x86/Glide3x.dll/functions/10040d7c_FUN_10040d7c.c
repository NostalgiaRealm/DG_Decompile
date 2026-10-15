/*
 * FUN_10040d7c at 10040d7c
 * undefined __stdcall FUN_10040d7c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10040d7c-10040da6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040d7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd4))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

