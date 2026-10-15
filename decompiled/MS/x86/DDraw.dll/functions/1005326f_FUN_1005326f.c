/*
 * FUN_1005326f at 1005326f
 * undefined __stdcall FUN_1005326f(int param_1, int param_2)
 * Address ranges: 1005326f-100532a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005326f(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x18)) {
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 100))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

