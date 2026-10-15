/*
 * FUN_1003ecf3 at 1003ecf3
 * undefined __stdcall FUN_1003ecf3(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003ecf3-1003ed1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003ecf3(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003ceaa(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x134))(*(int **)(param_1 + 0x638),param_2,param_3);
  return;
}

