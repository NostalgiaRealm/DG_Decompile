/*
 * FUN_10040e02 at 10040e02
 * undefined4 __stdcall FUN_10040e02(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10040e02-10040e2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10040e02(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x8e0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x28))(*(int **)(param_1 + 0x638),param_2,param_3);
  }
  return 0x80004005;
}

