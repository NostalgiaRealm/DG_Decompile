/*
 * FUN_10040dde at 10040dde
 * undefined4 __stdcall FUN_10040dde(int param_1)
 * Address ranges: 10040dde-10040e01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10040dde(int param_1)

{
  if (*(int *)(param_1 + 0x8e0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x24))(*(int **)(param_1 + 0x638));
  }
  return 0x80004005;
}

