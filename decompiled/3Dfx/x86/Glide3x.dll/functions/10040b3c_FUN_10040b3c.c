/*
 * FUN_10040b3c at 10040b3c
 * undefined __stdcall FUN_10040b3c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 10040b3c-10040b7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040b3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x40))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1003f5b7(param_1);
  return;
}

