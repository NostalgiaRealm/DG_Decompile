/*
 * FUN_1003ebbb at 1003ebbb
 * undefined __stdcall FUN_1003ebbb(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1003ebbb-1003ebec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ebbb(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003cdb1(param_1);
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x11c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

