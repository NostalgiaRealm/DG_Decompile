/*
 * FUN_10040f8e at 10040f8e
 * undefined __stdcall FUN_10040f8e(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 10040f8e-10040fc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040f8e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xdc))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

