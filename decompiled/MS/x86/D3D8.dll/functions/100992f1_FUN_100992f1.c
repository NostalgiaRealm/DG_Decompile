/*
 * FUN_100992f1 at 100992f1
 * undefined __stdcall FUN_100992f1(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100992f1-10099344
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100992f1(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x138 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x13c + param_2 * 8))) {
    FUN_10098377(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x7c))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x138 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x13c + param_2 * 8) = param_4;
  }
  return;
}

