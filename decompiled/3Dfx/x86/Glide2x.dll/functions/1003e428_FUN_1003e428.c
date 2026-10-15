/*
 * FUN_1003e428 at 1003e428
 * undefined __stdcall FUN_1003e428(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
 * Address ranges: 1003e428-1003e472
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e428(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 200))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_1003cad2(param_1);
  return;
}

