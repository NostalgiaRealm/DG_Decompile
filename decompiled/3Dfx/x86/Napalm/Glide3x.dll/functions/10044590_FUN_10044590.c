/*
 * FUN_10044590 at 10044590
 * undefined __stdcall FUN_10044590(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10044590-100445c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10044590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1004290f(param_1);
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xfc))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

