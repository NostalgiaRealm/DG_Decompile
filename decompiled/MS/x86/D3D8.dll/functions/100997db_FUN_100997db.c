/*
 * FUN_100997db at 100997db
 * undefined __stdcall FUN_100997db(int param_1, int param_2)
 * Address ranges: 100997db-1009980d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100997db(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_10098377(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x60))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

