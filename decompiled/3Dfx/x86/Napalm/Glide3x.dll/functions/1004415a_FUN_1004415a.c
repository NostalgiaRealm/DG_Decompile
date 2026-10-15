/*
 * FUN_1004415a at 1004415a
 * undefined __stdcall FUN_1004415a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1004415a-10044184
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004415a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd0))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

