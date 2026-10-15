/*
 * FUN_100447af at 100447af
 * undefined __stdcall FUN_100447af(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100447af-100447e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100447af(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x128))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  return;
}

