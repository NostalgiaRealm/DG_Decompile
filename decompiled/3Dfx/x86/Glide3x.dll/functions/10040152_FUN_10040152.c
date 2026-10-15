/*
 * FUN_10040152 at 10040152
 * undefined __stdcall FUN_10040152(int param_1, int param_2)
 * Address ranges: 10040152-1004017e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040152(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_1003f5ff(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x50))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

