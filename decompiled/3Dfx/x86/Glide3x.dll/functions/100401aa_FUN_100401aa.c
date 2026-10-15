/*
 * FUN_100401aa at 100401aa
 * undefined __stdcall FUN_100401aa(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100401aa-100401d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100401aa(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x84))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

