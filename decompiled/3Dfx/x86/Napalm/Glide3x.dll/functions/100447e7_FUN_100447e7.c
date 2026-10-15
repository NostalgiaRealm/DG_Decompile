/*
 * FUN_100447e7 at 100447e7
 * undefined __stdcall FUN_100447e7(int param_1, int param_2)
 * Address ranges: 100447e7-10044824
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100447e7(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_10042a08(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 300))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

