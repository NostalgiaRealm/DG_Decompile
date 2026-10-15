/*
 * FUN_100990e0 at 100990e0
 * undefined __stdcall FUN_100990e0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100990e0-1009910a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100990e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x84))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

