/*
 * FUN_100408a5 at 100408a5
 * undefined __stdcall FUN_100408a5(int param_1, int param_2)
 * Address ranges: 100408a5-100408d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100408a5(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_1003f5ff(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x60))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

