/*
 * FUN_10040a80 at 10040a80
 * undefined __stdcall FUN_10040a80(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10040a80-10040abd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040a80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x4c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  FUN_1003f5b7(param_1);
  return;
}

