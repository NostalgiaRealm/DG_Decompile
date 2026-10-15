/*
 * FUN_10099c87 at 10099c87
 * undefined __stdcall FUN_10099c87(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10099c87-10099cb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10099c87(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10098377(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd0))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

