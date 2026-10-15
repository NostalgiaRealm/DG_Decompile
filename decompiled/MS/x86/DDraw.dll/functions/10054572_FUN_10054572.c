/*
 * FUN_10054572 at 10054572
 * undefined __stdcall FUN_10054572(int param_1, undefined4 param_2)
 * Address ranges: 10054572-1005459d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10054572(int param_1,undefined4 param_2)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x130))(*(int **)(param_1 + 0x638),param_2);
  return;
}

