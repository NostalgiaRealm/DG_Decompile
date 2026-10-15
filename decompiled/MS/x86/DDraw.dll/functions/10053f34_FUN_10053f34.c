/*
 * FUN_10053f34 at 10053f34
 * undefined4 __stdcall FUN_10053f34(int param_1)
 * Address ranges: 10053f34-10053f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053f34(int param_1)

{
  if (*(int *)(param_1 + 0x8e0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x24))(*(int **)(param_1 + 0x638));
  }
  return 0x80004005;
}

