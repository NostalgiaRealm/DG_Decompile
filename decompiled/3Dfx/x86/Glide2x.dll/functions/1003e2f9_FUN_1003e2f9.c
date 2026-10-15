/*
 * FUN_1003e2f9 at 1003e2f9
 * undefined4 __stdcall FUN_1003e2f9(int param_1)
 * Address ranges: 1003e2f9-1003e31c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003e2f9(int param_1)

{
  if (*(int *)(param_1 + 0x8e0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x24))(*(int **)(param_1 + 0x638));
  }
  return 0x80004005;
}

