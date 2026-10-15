/*
 * FUN_100bb7dc at 100bb7dc
 * undefined __stdcall FUN_100bb7dc(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100bb7dc-100bb826
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb7dc(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x38 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x3c + param_2 * 8))) {
    FUN_100ba94f(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xa0))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x38 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x3c + param_2 * 8) = param_4;
  }
  return;
}

