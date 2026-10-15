/*
 * FUN_100469bd at 100469bd
 * undefined __thiscall FUN_100469bd(void * this, int param_1)
 * Address ranges: 100469bd-100469ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100469bd(void *this,int param_1)

{
  if (*(int *)(param_1 + 0xd68) != 0) {
    FUN_100472e8(this,*(int *)(param_1 + 8),*(int **)(param_1 + 0xd6c));
    (**(code **)(**(int **)(param_1 + 0xd68) + 8))(*(int **)(param_1 + 0xd68));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
  }
  return;
}

