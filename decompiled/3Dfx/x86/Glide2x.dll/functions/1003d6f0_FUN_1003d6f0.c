/*
 * FUN_1003d6f0 at 1003d6f0
 * undefined __stdcall FUN_1003d6f0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1003d6f0-1003d71d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d6f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x90))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

