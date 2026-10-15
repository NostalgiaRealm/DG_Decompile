/*
 * FUN_100b407b at 100b407b
 * undefined __thiscall FUN_100b407b(void * this, int param_1)
 * Address ranges: 100b407b-100b40bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b407b(void *this,int param_1)

{
  if (*(int *)(param_1 + 0xd68) != 0) {
    FUN_100b4b8c(this,*(int *)(param_1 + 8),*(int **)(param_1 + 0xd6c));
    (**(code **)(**(int **)(param_1 + 0xd68) + 8))(*(int **)(param_1 + 0xd68));
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
  }
  return;
}

