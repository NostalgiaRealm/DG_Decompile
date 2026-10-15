/*
 * FUN_1003d5ef at 1003d5ef
 * undefined __stdcall FUN_1003d5ef(int param_1, int param_2)
 * Address ranges: 1003d5ef-1003d631
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003d5ef(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x14)) {
    FUN_1003cb1a(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x74))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x14) = param_2;
    FUN_100501d1((int *)(param_1 + 0x138),0,0x100);
  }
  return;
}

