/*
 * FUN_100bc2b5 at 100bc2b5
 * undefined __stdcall FUN_100bc2b5(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 100bc2b5-100bc2eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc2b5(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd8))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

