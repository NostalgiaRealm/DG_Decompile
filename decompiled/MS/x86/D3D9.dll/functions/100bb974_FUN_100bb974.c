/*
 * FUN_100bb974 at 100bb974
 * undefined __stdcall FUN_100bb974(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100bb974-100bb9ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb974(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x138 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x13c + param_2 * 8))) {
    FUN_100ba94f(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xa4))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x138 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x13c + param_2 * 8) = param_4;
  }
  return;
}

