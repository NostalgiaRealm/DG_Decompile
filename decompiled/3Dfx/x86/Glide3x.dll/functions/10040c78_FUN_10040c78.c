/*
 * FUN_10040c78 at 10040c78
 * undefined __stdcall FUN_10040c78(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10040c78-10040caf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040c78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x38))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  FUN_1003f5b7(param_1);
  return;
}

