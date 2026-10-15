/*
 * FUN_10043efa at 10043efa
 * undefined __stdcall FUN_10043efa(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)
 * Address ranges: 10043efa-10043f44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043efa(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x3c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  FUN_100429c0(param_1);
  return;
}

