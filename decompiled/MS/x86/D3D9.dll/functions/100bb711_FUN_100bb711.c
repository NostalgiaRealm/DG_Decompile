/*
 * FUN_100bb711 at 100bb711
 * undefined __stdcall FUN_100bb711(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100bb711-100bb73e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb711(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_100ba94f(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x8c))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  return;
}

