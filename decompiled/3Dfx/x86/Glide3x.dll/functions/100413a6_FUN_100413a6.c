/*
 * FUN_100413a6 at 100413a6
 * undefined __stdcall FUN_100413a6(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100413a6-100413dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100413a6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x128))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  return;
}

