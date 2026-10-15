/*
 * FUN_10040e5c at 10040e5c
 * undefined __thiscall FUN_10040e5c(void * this, int param_1)
 * Address ranges: 10040e5c-10040e9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10040e5c(void *this,int param_1)

{
  if (*(int *)(param_1 + 0xd68) != 0) {
    FUN_10041787(this,*(int *)(param_1 + 8),*(int **)(param_1 + 0xd6c));
    (**(code **)(**(int **)(param_1 + 0xd68) + 8))(*(int **)(param_1 + 0xd68));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
  }
  return;
}

