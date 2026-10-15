/*
 * FUN_1003da55 at 1003da55
 * undefined __stdcall FUN_1003da55(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003da55-1003da7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003da55(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x84))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

