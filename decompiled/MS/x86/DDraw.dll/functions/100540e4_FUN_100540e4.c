/*
 * FUN_100540e4 at 100540e4
 * undefined __stdcall FUN_100540e4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100540e4-10054118
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100540e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xdc))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

