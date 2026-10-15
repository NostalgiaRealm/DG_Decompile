/*
 * FUN_10040abe at 10040abe
 * undefined __stdcall FUN_10040abe(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10040abe-10040af0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040abe(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x44))(*(int **)(param_1 + 0x638),param_2,param_3);
  FUN_1003f5b7(param_1);
  return;
}

