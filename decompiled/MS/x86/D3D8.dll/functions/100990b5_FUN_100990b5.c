/*
 * FUN_100990b5 at 100990b5
 * undefined __stdcall FUN_100990b5(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100990b5-100990df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100990b5(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x88))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

