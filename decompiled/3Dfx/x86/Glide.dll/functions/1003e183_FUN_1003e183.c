/*
 * FUN_1003e183 at 1003e183
 * undefined __stdcall FUN_1003e183(int param_1, int * param_2)
 * Address ranges: 1003e183-1003e1f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e183(int param_1,int *param_2)

{
  if ((((*param_2 != *(int *)(param_1 + 0x60c)) || (param_2[1] != *(int *)(param_1 + 0x610))) ||
      (param_2[2] != *(int *)(param_1 + 0x614))) || (param_2[3] != *(int *)(param_1 + 0x618))) {
    *(int *)(param_1 + 0x60c) = *param_2;
    *(int *)(param_1 + 0x610) = param_2[1];
    *(int *)(param_1 + 0x614) = param_2[2];
    *(int *)(param_1 + 0x618) = param_2[3];
    FUN_1003ceaa(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))(*(int **)(param_1 + 0x638),param_2);
  }
  return;
}

