/*
 * FUN_10053efd at 10053efd
 * undefined __stdcall FUN_10053efd(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 10053efd-10053f33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053efd(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd8))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

