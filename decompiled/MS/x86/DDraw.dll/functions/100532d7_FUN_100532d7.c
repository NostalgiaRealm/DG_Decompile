/*
 * FUN_100532d7 at 100532d7
 * undefined __stdcall FUN_100532d7(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100532d7-10053301
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100532d7(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x88))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

