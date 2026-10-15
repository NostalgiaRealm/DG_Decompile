/*
 * FUN_10045faf at 10045faf
 * undefined __thiscall FUN_10045faf(void * this, int param_1)
 * Address ranges: 10045faf-10045ff1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045faf(void *this,int param_1)

{
  if (*(int *)(param_1 + 0xd68) != 0) {
    FUN_100468dc(this,*(int *)(param_1 + 8),*(int **)(param_1 + 0xd6c));
    (**(code **)(**(int **)(param_1 + 0xd68) + 8))(*(int **)(param_1 + 0xd68));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
  }
  return;
}

