/*
 * FUN_10099a27 at 10099a27
 * undefined __stdcall FUN_10099a27(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * Address ranges: 10099a27-10099a71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099a27(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  FUN_1009827e(param_1);
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x3c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  FUN_1009832f(param_1);
  return;
}

