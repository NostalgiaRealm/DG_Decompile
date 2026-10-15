/*
 * FUN_100bb660 at 100bb660
 * undefined __stdcall FUN_100bb660(int param_1, int param_2)
 * Address ranges: 100bb660-100bb68c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb660(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_100ba94f(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x50))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

