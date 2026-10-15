/*
 * FUN_1005414b at 1005414b
 * undefined __stdcall FUN_1005414b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1005414b-1005417c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005414b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xe4))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

