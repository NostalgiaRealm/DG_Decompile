/*
 * FUN_10040319 at 10040319
 * undefined __stdcall FUN_10040319(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10040319-10040363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040319(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x38 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x3c + param_2 * 8))) {
    FUN_1003f5ff(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xa8))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x38 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x3c + param_2 * 8) = param_4;
  }
  return;
}

