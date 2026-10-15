/*
 * FUN_100434dd at 100434dd
 * undefined __stdcall FUN_100434dd(int param_1, int param_2)
 * Address ranges: 100434dd-1004351f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100434dd(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x14)) {
    FUN_10042a08(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x74))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x14) = param_2;
    FUN_100561f1((int *)(param_1 + 0x138),0,0x100);
  }
  return;
}

