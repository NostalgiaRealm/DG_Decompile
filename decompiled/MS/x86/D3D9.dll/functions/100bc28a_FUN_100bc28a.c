/*
 * FUN_100bc28a at 100bc28a
 * undefined __stdcall FUN_100bc28a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100bc28a-100bc2b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc28a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd4))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

