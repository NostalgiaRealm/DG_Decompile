/*
 * FUN_10099088 at 10099088
 * undefined __stdcall FUN_10099088(int param_1, int param_2)
 * Address ranges: 10099088-100990b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099088(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_10098377(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x50))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

