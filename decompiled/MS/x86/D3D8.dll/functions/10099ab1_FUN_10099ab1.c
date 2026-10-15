/*
 * FUN_10099ab1 at 10099ab1
 * undefined __stdcall FUN_10099ab1(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 10099ab1-10099aec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099ab1(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1009827e(param_1);
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xc0))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  FUN_1009832f(param_1);
  return;
}

