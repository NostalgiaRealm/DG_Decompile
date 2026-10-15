/*
 * FUN_1003d66d at 1003d66d
 * undefined __stdcall FUN_1003d66d(int param_1, int param_2)
 * Address ranges: 1003d66d-1003d699
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d66d(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_1003cb1a(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x50))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

