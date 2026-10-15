/*
 * FUN_10043f84 at 10043f84
 * undefined __stdcall FUN_10043f84(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 10043f84-10043fbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043f84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xc0))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  FUN_100429c0(param_1);
  return;
}

