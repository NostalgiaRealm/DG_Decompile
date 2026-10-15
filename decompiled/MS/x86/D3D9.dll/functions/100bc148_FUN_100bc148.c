/*
 * FUN_100bc148 at 100bc148
 * undefined __stdcall FUN_100bc148(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100bc148-100bc185
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc148(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x34))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  FUN_100ba907(param_1);
  return;
}

