/*
 * FUN_1003e4de at 1003e4de
 * undefined __stdcall FUN_1003e4de(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003e4de-1003e50f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e4de(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xe0))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

