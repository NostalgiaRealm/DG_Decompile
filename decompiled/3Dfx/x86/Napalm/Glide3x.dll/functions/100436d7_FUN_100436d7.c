/*
 * FUN_100436d7 at 100436d7
 * undefined __stdcall FUN_100436d7(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100436d7-10043721
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100436d7(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x38 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x3c + param_2 * 8))) {
    FUN_10042a08(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xa0))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x38 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x3c + param_2 * 8) = param_4;
  }
  return;
}

