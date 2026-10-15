/*
 * FUN_100bc8b4 at 100bc8b4
 * undefined __stdcall FUN_100bc8b4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100bc8b4-100bc8eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bc8b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_100ba856(param_1);
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x128))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  return;
}

