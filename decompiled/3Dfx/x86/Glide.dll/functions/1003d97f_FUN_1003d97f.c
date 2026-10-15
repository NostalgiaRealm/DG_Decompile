/*
 * FUN_1003d97f at 1003d97f
 * undefined __stdcall FUN_1003d97f(int param_1, int param_2)
 * Address ranges: 1003d97f-1003d9c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d97f(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x14)) {
    FUN_1003ceaa(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x74))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x14) = param_2;
    FUN_10050561((int *)(param_1 + 0x138),0,0x100);
  }
  return;
}

