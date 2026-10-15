/*
 * FUN_100bb6e3 at 100bb6e3
 * undefined __stdcall FUN_100bb6e3(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100bb6e3-100bb710
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb6e3(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x90))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

