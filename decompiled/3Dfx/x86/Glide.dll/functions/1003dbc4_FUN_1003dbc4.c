/*
 * FUN_1003dbc4 at 1003dbc4
 * undefined __stdcall FUN_1003dbc4(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1003dbc4-1003dc0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003dbc4(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x38 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x3c + param_2 * 8))) {
    FUN_1003ceaa(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xa8))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x38 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x3c + param_2 * 8) = param_4;
  }
  return;
}

