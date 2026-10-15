/*
 * FUN_100bb6b8 at 100bb6b8
 * undefined __stdcall FUN_100bb6b8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100bb6b8-100bb6e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb6b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x84))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

