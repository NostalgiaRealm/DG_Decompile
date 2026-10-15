/*
 * FUN_1003d938 at 1003d938
 * undefined __stdcall FUN_1003d938(int param_1, int param_2)
 * Address ranges: 1003d938-1003d97e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d938(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x10)) {
    FUN_1003ceaa(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x78))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x10) = param_2;
    FUN_10050561((int *)(param_1 + 0x38),0,0x100);
  }
  return;
}

