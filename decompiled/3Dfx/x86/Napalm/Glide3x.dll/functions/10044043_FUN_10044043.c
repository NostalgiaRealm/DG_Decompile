/*
 * FUN_10044043 at 10044043
 * undefined __stdcall FUN_10044043(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10044043-10044080
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10044043(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x34))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  FUN_100429c0(param_1);
  return;
}

