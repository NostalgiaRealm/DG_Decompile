/*
 * FUN_10044185 at 10044185
 * undefined __stdcall FUN_10044185(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10044185-100441af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10044185(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xd4))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

