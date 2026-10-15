/*
 * FUN_100535be at 100535be
 * undefined __stdcall FUN_100535be(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100535be-10053614
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100535be(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x138 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x13c + param_2 * 8))) {
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xa4))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x138 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x13c + param_2 * 8) = param_4;
  }
  return;
}

