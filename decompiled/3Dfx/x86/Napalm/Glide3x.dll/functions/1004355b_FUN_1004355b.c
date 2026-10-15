/*
 * FUN_1004355b at 1004355b
 * undefined __stdcall FUN_1004355b(int param_1, int param_2)
 * Address ranges: 1004355b-10043587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004355b(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_10042a08(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x50))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

