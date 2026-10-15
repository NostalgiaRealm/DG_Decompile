/*
 * FUN_10099bae at 10099bae
 * undefined __stdcall FUN_10099bae(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10099bae-10099be5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099bae(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1009827e(param_1);
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x38))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  FUN_1009832f(param_1);
  return;
}

