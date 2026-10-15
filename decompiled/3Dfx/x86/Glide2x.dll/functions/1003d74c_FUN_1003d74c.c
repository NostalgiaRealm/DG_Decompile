/*
 * FUN_1003d74c at 1003d74c
 * undefined __stdcall FUN_1003d74c(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1003d74c-1003d796
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d74c(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x38 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x3c + param_2 * 8))) {
    FUN_1003cb1a(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x98))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x38 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x3c + param_2 * 8) = param_4;
  }
  return;
}

