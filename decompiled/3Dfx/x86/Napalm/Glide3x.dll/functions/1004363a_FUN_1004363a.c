/*
 * FUN_1004363a at 1004363a
 * undefined __stdcall FUN_1004363a(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1004363a-10043684
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004363a(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x38 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x3c + param_2 * 8))) {
    FUN_10042a08(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x98))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x38 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x3c + param_2 * 8) = param_4;
  }
  return;
}

