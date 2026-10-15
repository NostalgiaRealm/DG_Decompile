/*
 * FUN_10053302 at 10053302
 * undefined __stdcall FUN_10053302(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10053302-1005332c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053302(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x84))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

