/*
 * FUN_1005443b at 1005443b
 * undefined __stdcall FUN_1005443b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1005443b-10054465
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005443b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x118))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

