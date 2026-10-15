/*
 * FUN_10054534 at 10054534
 * undefined __stdcall FUN_10054534(int param_1, int param_2)
 * Address ranges: 10054534-10054571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054534(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 300))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x1c) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

