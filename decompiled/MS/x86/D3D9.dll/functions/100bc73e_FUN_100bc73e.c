/*
 * FUN_100bc73e at 100bc73e
 * undefined __stdcall FUN_100bc73e(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100bc73e-100bc76f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc73e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x108))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

