/*
 * FUN_10041147 at 10041147
 * undefined __stdcall FUN_10041147(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10041147-10041186
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041147(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_1003f506(param_1);
  FUN_1003f5ff(param_1);
  (**(code **)(**(int **)(param_1 + 0x638) + 0xf8))(*(int **)(param_1 + 0x638),param_2,param_3);
  return;
}

