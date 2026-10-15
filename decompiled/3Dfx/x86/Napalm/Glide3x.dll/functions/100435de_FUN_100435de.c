/*
 * FUN_100435de at 100435de
 * undefined __stdcall FUN_100435de(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100435de-1004360b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100435de(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x90))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

