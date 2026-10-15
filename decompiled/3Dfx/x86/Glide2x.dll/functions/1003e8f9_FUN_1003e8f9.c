/*
 * FUN_1003e8f9 at 1003e8f9
 * undefined __stdcall FUN_1003e8f9(int param_1, int param_2)
 * Address ranges: 1003e8f9-1003e936
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e8f9(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_1003cb1a(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 300))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

