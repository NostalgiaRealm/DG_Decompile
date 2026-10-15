/*
 * FUN_100544ca at 100544ca
 * undefined __stdcall FUN_100544ca(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100544ca-100544fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100544ca(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100524c7(param_1);
  FUN_100525c0(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x124))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

