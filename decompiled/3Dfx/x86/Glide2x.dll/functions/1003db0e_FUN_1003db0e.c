/*
 * FUN_1003db0e at 1003db0e
 * undefined __stdcall FUN_1003db0e(int param_1, int * param_2)
 * Address ranges: 1003db0e-1003db6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003db0e(int param_1,int *param_2)

{
  if ((((*(int *)(param_1 + 0x438) != *param_2) || (*(int *)(param_1 + 0x43c) != param_2[1])) ||
      (*(int *)(param_1 + 0x444) != param_2[3])) || (*(int *)(param_1 + 0x440) != param_2[2])) {
    FUN_1003cb1a(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xac))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x438) = *param_2;
    *(int *)(param_1 + 0x43c) = param_2[1];
    *(int *)(param_1 + 0x440) = param_2[2];
    *(int *)(param_1 + 0x444) = param_2[3];
  }
  return;
}

