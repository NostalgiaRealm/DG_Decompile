/*
 * FUN_100446ee at 100446ee
 * undefined __stdcall FUN_100446ee(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100446ee-10044718
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100446ee(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x118))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

