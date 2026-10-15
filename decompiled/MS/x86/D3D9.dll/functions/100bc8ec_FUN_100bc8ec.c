/*
 * FUN_100bc8ec at 100bc8ec
 * undefined __stdcall FUN_100bc8ec(int param_1, int param_2)
 * Address ranges: 100bc8ec-100bc929
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc8ec(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_100ba94f(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 300))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

