/*
 * FUN_10040c3a at 10040c3a
 * undefined __stdcall FUN_10040c3a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10040c3a-10040c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040c3a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0x34))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4,param_5,param_6);
  FUN_1003f5b7(param_1);
  return;
}

