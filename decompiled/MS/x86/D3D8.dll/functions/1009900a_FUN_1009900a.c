/*
 * FUN_1009900a at 1009900a
 * undefined __stdcall FUN_1009900a(int param_1, int param_2)
 * Address ranges: 1009900a-1009904c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009900a(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x14)) {
    FUN_10098377(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x74))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x14) = param_2;
    FUN_100ada8e((int *)(param_1 + 0x138),0,0x100);
  }
  return;
}

