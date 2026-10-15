/*
 * FUN_10099167 at 10099167
 * undefined __stdcall FUN_10099167(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10099167-100991b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099167(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x38 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x3c + param_2 * 8))) {
    FUN_10098377(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x98))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x38 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x3c + param_2 * 8) = param_4;
  }
  return;
}

