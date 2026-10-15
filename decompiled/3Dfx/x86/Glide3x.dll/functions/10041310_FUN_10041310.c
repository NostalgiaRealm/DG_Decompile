/*
 * FUN_10041310 at 10041310
 * undefined __stdcall FUN_10041310(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10041310-10041341
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x11c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

