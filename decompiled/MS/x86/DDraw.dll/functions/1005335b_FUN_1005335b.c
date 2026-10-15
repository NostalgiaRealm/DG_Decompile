/*
 * FUN_1005335b at 1005335b
 * undefined __stdcall FUN_1005335b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1005335b-10053388
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005335b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x8c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

