/*
 * FUN_10043588 at 10043588
 * undefined __stdcall FUN_10043588(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10043588-100435b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043588(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_10042a08(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x88))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

