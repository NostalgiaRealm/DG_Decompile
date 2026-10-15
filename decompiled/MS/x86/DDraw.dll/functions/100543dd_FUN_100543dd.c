/*
 * FUN_100543dd at 100543dd
 * undefined __stdcall FUN_100543dd(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100543dd-10054411
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100543dd(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x110))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

