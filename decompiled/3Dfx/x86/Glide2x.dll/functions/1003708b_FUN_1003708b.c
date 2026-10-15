/*
 * FUN_1003708b at 1003708b
 * undefined __fastcall FUN_1003708b(int param_1)
 * Address ranges: 1003708b-100370b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003708b(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

