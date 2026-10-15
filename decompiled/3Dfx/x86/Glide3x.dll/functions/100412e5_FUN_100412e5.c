/*
 * FUN_100412e5 at 100412e5
 * undefined __stdcall FUN_100412e5(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100412e5-1004130f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100412e5(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x118))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

