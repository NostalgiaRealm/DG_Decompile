/*
 * FUN_1003e82b at 1003e82b
 * undefined __stdcall FUN_1003e82b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003e82b-1003e85c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e82b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x11c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

