/*
 * FUN_10054498 at 10054498
 * undefined __stdcall FUN_10054498(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10054498-100544c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054498(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x120))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

