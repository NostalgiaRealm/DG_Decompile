/*
 * FUN_100532aa at 100532aa
 * undefined __stdcall FUN_100532aa(int param_1, int param_2)
 * Address ranges: 100532aa-100532d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100532aa(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x20)) {
    FUN_100525c0(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x50))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

