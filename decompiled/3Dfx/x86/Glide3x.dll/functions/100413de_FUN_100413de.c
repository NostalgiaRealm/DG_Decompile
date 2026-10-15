/*
 * FUN_100413de at 100413de
 * undefined __stdcall FUN_100413de(int param_1, int param_2)
 * Address ranges: 100413de-1004141b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100413de(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_1003f5ff(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 300))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

