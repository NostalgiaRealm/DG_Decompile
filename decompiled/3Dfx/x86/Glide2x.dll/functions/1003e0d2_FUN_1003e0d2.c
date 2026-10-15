/*
 * FUN_1003e0d2 at 1003e0d2
 * undefined __stdcall FUN_1003e0d2(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 1003e0d2-1003e11b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003e0d2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_1003ca21(param_1);
  FUN_1003cb1a(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xbc))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_1003cad2(param_1);
  return;
}

