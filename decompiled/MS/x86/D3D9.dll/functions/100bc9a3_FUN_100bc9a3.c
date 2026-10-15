/*
 * FUN_100bc9a3 at 100bc9a3
 * undefined __stdcall FUN_100bc9a3(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100bc9a3-100bc9d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc9a3(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x13c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

