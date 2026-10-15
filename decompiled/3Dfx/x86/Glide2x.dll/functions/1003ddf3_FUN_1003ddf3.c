/*
 * FUN_1003ddf3 at 1003ddf3
 * undefined __stdcall FUN_1003ddf3(int param_1, int * param_2)
 * Address ranges: 1003ddf3-1003de65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ddf3(int param_1,int *param_2)

{
  if ((((*param_2 != *(int *)(param_1 + 0x60c)) || (param_2[1] != *(int *)(param_1 + 0x610))) ||
      (param_2[2] != *(int *)(param_1 + 0x614))) || (param_2[3] != *(int *)(param_1 + 0x618))) {
    *(int *)(param_1 + 0x60c) = *param_2;
    *(int *)(param_1 + 0x610) = param_2[1];
    *(int *)(param_1 + 0x614) = param_2[2];
    *(int *)(param_1 + 0x618) = param_2[3];
    FUN_1003cb1a(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))(*(int **)(param_1 + 0x638),param_2);
  }
  return;
}

