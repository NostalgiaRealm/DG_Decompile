/*
 * FUN_1004400a at 1004400a
 * undefined __stdcall FUN_1004400a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1004400a-10044042
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004400a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x30))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  FUN_100429c0(param_1);
  return;
}

