/*
 * FUN_100bbdb3 at 100bbdb3
 * undefined __stdcall FUN_100bbdb3(int param_1, int param_2)
 * Address ranges: 100bbdb3-100bbde5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bbdb3(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_100ba94f(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x60))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

