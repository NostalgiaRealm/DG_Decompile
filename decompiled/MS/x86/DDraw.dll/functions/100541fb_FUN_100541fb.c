/*
 * FUN_100541fb at 100541fb
 * undefined __stdcall FUN_100541fb(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
 * Address ranges: 100541fb-1005424b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100541fb(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xf0))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9,param_10);
  FUN_10052578(param_1);
  return;
}

