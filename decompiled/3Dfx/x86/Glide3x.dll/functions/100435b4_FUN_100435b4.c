/*
 * FUN_100435b4 at 100435b4
 * undefined __thiscall FUN_100435b4(void * this, int param_1)
 * Address ranges: 100435b4-100435f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100435b4(void *this,int param_1)

{
  if (*(int *)(param_1 + 0xd68) != 0) {
    FUN_10043edf(this,*(int *)(param_1 + 8),*(int **)(param_1 + 0xd6c));
    (**(code **)(**(int **)(param_1 + 0xd68) + 8))(*(int **)(param_1 + 0xd68));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
  }
  return;
}

