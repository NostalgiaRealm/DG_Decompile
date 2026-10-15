/*
 * FUN_1003d9c2 at 1003d9c2
 * undefined __stdcall FUN_1003d9c2(int param_1, int param_2)
 * Address ranges: 1003d9c2-1003d9fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d9c2(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x18)) {
    FUN_1003ceaa(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 100))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

