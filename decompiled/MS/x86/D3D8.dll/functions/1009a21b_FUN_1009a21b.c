/*
 * FUN_1009a21b at 1009a21b
 * undefined __stdcall FUN_1009a21b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1009a21b-1009a245
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009a21b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x118))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

