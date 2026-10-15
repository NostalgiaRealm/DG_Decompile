/*
 * FUN_100bc6c7 at 100bc6c7
 * undefined __stdcall FUN_100bc6c7(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 100bc6c7-100bc711
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc6c7(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x100))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10);
  FUN_100ba907(param_1);
  return;
}

