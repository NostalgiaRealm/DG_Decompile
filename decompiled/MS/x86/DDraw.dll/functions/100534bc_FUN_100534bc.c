/*
 * FUN_100534bc at 100534bc
 * undefined __stdcall FUN_100534bc(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 100534bc-10053512
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100534bc(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x138 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x13c + param_2 * 8))) {
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x94))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x138 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x13c + param_2 * 8) = param_4;
  }
  return;
}

