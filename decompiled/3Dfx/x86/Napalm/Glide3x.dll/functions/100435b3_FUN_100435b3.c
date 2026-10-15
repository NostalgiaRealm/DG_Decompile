/*
 * FUN_100435b3 at 100435b3
 * undefined __stdcall FUN_100435b3(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100435b3-100435dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100435b3(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x84))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

