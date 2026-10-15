/*
 * FUN_1003e2c2 at 1003e2c2
 * undefined __stdcall FUN_1003e2c2(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 1003e2c2-1003e2f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e2c2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd8))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

