/*
 * FUN_1003e150 at 1003e150
 * undefined __stdcall FUN_1003e150(int param_1, int param_2)
 * Address ranges: 1003e150-1003e182
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e150(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x61c)) {
    FUN_1003ceaa(param_1);
    (**(code **)(**(int **)(param_1 + 0x638) + 0x60))(*(int **)(param_1 + 0x638),param_2);
    *(int *)(param_1 + 0x61c) = param_2;
  }
  return;
}

