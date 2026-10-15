/*
 * FUN_1003dc66 at 1003dc66
 * undefined __stdcall FUN_1003dc66(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1003dc66-1003dcb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003dc66(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x138 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x13c + param_2 * 8))) {
    FUN_1003ceaa(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x7c))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x138 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x13c + param_2 * 8) = param_4;
  }
  return;
}

