/*
 * FUN_100bc2ec at 100bc2ec
 * undefined4 __stdcall FUN_100bc2ec(int param_1)
 * Address ranges: 100bc2ec-100bc30f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bc2ec(int param_1)

{
  if (*(int *)(param_1 + 0x8e0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x24))(*(int **)(param_1 + 0x638));
  }
  return 0x80004005;
}

