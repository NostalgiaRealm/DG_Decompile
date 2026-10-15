/*
 * FUN_1004008d at 1004008d
 * undefined __stdcall FUN_1004008d(int param_1, int param_2)
 * Address ranges: 1004008d-100400d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004008d(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x10)) {
    FUN_1003f5ff(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x78))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x10) = param_2;
    FUN_10052de1((int *)(param_1 + 0x38),0,0x100);
  }
  return;
}

