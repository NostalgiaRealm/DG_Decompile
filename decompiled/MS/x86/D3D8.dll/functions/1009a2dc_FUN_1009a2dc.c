/*
 * FUN_1009a2dc at 1009a2dc
 * undefined __stdcall FUN_1009a2dc(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1009a2dc-1009a313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009a2dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_1009827e(param_1);
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x128))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  return;
}

