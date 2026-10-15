/*
 * FUN_100441b0 at 100441b0
 * undefined __stdcall FUN_100441b0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 100441b0-100441e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100441b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd8))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

