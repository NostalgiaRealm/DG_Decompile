/*
 * FUN_10039b70 at 10039b70
 * undefined __fastcall FUN_10039b70(int param_1)
 * Address ranges: 10039b70-10039b9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10039b70(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

