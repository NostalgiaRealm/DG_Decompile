/*
 * FUN_100441e7 at 100441e7
 * undefined4 __stdcall FUN_100441e7(int param_1)
 * Address ranges: 100441e7-1004420a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100441e7(int param_1)

{
  if (*(int *)(param_1 + 0x8e0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x24))(*(int **)(param_1 + 0x638));
  }
  return 0x80004005;
}

