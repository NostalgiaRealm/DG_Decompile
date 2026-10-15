/*
 * FUN_10091e79 at 10091e79
 * undefined __thiscall FUN_10091e79(void * this, int param_1)
 * Address ranges: 10091e79-10091ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10091e79(void *this,int param_1)

{
  if (*(int *)(param_1 + 0xd68) != 0) {
    FUN_10092988(this,*(int *)(param_1 + 8),*(int **)(param_1 + 0xd6c));
    (**(code **)(**(int **)(param_1 + 0xd68) + 8))(*(int **)(param_1 + 0xd68));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
  }
  return;
}

