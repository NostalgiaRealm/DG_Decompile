/*
 * FUN_10040b7b at 10040b7b
 * undefined __stdcall FUN_10040b7b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 10040b7b-10040bb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040b7b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xc0))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  FUN_1003f5b7(param_1);
  return;
}

