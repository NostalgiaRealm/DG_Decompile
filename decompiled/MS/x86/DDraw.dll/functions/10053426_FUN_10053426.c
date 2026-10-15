/*
 * FUN_10053426 at 10053426
 * undefined __stdcall FUN_10053426(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10053426-10053470
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053426(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x38 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x3c + param_2 * 8))) {
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xa0))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x38 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x3c + param_2 * 8) = param_4;
  }
  return;
}

