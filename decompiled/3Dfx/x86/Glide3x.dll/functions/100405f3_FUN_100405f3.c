/*
 * FUN_100405f3 at 100405f3
 * undefined __stdcall FUN_100405f3(int param_1, int * param_2)
 * Address ranges: 100405f3-10040651
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100405f3(int param_1,int *param_2)

{
  if ((((*(int *)(param_1 + 0x438) != *param_2) || (*(int *)(param_1 + 0x43c) != param_2[1])) ||
      (*(int *)(param_1 + 0x444) != param_2[3])) || (*(int *)(param_1 + 0x440) != param_2[2])) {
    FUN_1003f5ff(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0xac))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x438) = *param_2;
    *(int *)(param_1 + 0x43c) = param_2[1];
    *(int *)(param_1 + 0x440) = param_2[2];
    *(int *)(param_1 + 0x444) = param_2[3];
  }
  return;
}

