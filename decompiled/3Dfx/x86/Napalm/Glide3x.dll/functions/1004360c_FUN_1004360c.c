/*
 * FUN_1004360c at 1004360c
 * undefined __stdcall FUN_1004360c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1004360c-10043639
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004360c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x8c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

