/*
 * FUN_10040acc at 10040acc
 * undefined __thiscall FUN_10040acc(void * this, int param_1)
 * Address ranges: 10040acc-10040b0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10040acc(void *this,int param_1)

{
  if (*(int *)(param_1 + 0xd68) != 0) {
    FUN_100413f7(this,*(int *)(param_1 + 8),*(int **)(param_1 + 0xd6c));
    (**(code **)(**(int **)(param_1 + 0xd68) + 8))(*(int **)(param_1 + 0xd68));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
  }
  return;
}

