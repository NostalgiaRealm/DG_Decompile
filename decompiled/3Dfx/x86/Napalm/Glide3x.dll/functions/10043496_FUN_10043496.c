/*
 * FUN_10043496 at 10043496
 * undefined __stdcall FUN_10043496(int param_1, int param_2)
 * Address ranges: 10043496-100434dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043496(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x10)) {
    FUN_10042a08(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x78))(*(int **)(param_1 + 0x638),param_2);
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(int *)(param_1 + 0x10) = param_2;
    FUN_100561f1((int *)(param_1 + 0x38),0,0x100);
  }
  return;
}

