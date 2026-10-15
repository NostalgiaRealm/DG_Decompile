/*
 * FUN_10099d14 at 10099d14
 * undefined4 __stdcall FUN_10099d14(int param_1)
 * Address ranges: 10099d14-10099d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10099d14(int param_1)

{
  if (*(int *)(param_1 + 0x8e0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x24))(*(int **)(param_1 + 0x638));
  }
  return 0x80004005;
}

