/*
 * FUN_100400d4 at 100400d4
 * undefined __stdcall FUN_100400d4(int param_1, int param_2)
 * Address ranges: 100400d4-10040116
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100400d4(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x14)) {
    FUN_1003f5ff(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x74))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x14) = param_2;
    FUN_10052de1((int *)(param_1 + 0x138),0,0x100);
  }
  return;
}

