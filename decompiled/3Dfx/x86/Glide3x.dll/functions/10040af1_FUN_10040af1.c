/*
 * FUN_10040af1 at 10040af1
 * undefined __stdcall FUN_10040af1(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * Address ranges: 10040af1-10040b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040af1(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x3c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  FUN_1003f5b7(param_1);
  return;
}

