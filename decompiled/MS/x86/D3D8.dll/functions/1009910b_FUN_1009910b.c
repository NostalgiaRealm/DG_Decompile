/*
 * FUN_1009910b at 1009910b
 * undefined __stdcall FUN_1009910b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1009910b-10099138
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009910b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x90))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

