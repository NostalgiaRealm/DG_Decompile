/*
 * FUN_1003e297 at 1003e297
 * undefined __stdcall FUN_1003e297(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003e297-1003e2c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e297(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd4))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

