/*
 * FUN_100bb59b at 100bb59b
 * undefined __stdcall FUN_100bb59b(int param_1, int param_2)
 * Address ranges: 100bb59b-100bb5e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb59b(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x10)) {
    FUN_100ba94f(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x78))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x10) = param_2;
    FUN_100cfed0((int *)(param_1 + 0x38),0,0x100);
  }
  return;
}

