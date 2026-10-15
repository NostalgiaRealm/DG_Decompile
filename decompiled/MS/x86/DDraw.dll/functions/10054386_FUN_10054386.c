/*
 * FUN_10054386 at 10054386
 * undefined __stdcall FUN_10054386(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10054386-100543b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054386(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x108))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

