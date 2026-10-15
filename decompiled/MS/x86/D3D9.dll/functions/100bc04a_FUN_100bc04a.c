/*
 * FUN_100bc04a at 100bc04a
 * undefined __stdcall FUN_100bc04a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 100bc04a-100bc088
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc04a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x40))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_100ba907(param_1);
  return;
}

