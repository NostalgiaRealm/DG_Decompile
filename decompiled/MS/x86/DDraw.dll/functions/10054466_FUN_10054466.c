/*
 * FUN_10054466 at 10054466
 * undefined __stdcall FUN_10054466(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10054466-10054497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054466(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x11c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

