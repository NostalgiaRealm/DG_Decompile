/*
 * FUN_1004f3e2 at 1004f3e2
 * undefined __thiscall FUN_1004f3e2(void * this, int param_1)
 * Address ranges: 1004f3e2-1004f424
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004f3e2(void *this,int param_1)

{
  if (*(int *)(param_1 + 0xd68) != 0) {
    FUN_1004f963(this,*(int *)(param_1 + 8),*(int **)(param_1 + 0xd6c));
    (**(code **)(**(int **)(param_1 + 0xd68) + 8))(*(int **)(param_1 + 0xd68));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
  }
  return;
}

