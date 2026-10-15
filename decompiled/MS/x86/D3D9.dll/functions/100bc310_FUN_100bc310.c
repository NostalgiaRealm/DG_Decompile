/*
 * FUN_100bc310 at 100bc310
 * undefined4 __stdcall FUN_100bc310(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100bc310-100bc339
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bc310(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x8e0) == 0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x28))(*(int **)(param_1 + 0x638),param_2,param_3);
  }
  return 0x80004005;
}

