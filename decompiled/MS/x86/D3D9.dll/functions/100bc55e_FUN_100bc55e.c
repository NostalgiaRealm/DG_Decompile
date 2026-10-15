/*
 * FUN_100bc55e at 100bc55e
 * undefined __stdcall FUN_100bc55e(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * Address ranges: 100bc55e-100bc5b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc55e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xec))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  *(undefined1 *)(param_1 + 0x620) = 1;
  FUN_100ba907(param_1);
  return;
}

