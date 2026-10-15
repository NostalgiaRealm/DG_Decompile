/*
 * FUN_10043818 at 10043818
 * undefined __stdcall FUN_10043818(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10043818-1004386e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043818(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_3 != *(int *)(param_1 + 0x138 + param_2 * 8)) ||
     (param_4 != *(int *)(param_1 + 0x13c + param_2 * 8))) {
    FUN_10042a08(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x9c))
              (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
    *(int *)(param_1 + 0x138 + param_2 * 8) = param_3;
    *(int *)(param_1 + 0x13c + param_2 * 8) = param_4;
  }
  return;
}

