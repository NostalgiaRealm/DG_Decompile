/*
 * FUN_10099a72 at 10099a72
 * undefined __stdcall FUN_10099a72(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 10099a72-10099ab0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099a72(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_1009827e(param_1);
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x40))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1009832f(param_1);
  return;
}

