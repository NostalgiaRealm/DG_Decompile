/*
 * FUN_10041187 at 10041187
 * undefined __stdcall FUN_10041187(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10041187-100411b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041187(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xfc))
            (*(int **)(param_1 + 0x638),param_2,param_3,param_4);
  return;
}

