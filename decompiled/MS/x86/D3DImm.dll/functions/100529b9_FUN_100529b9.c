/*
 * FUN_100529b9 at 100529b9
 * undefined __stdcall FUN_100529b9(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100529b9-100529f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100529b9(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_10051fdb(param_1);
  FUN_100520d4(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x30))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5);
  FUN_1005208c(param_1);
  return;
}

