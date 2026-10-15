/*
 * FUN_10041495 at 10041495
 * undefined __stdcall FUN_10041495(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10041495-100414c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041495(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x13c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

