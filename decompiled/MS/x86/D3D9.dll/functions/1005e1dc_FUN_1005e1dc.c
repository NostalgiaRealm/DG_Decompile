/*
 * FUN_1005e1dc at 1005e1dc
 * undefined __fastcall FUN_1005e1dc(undefined4 * param_1, undefined4 param_2, undefined1 param_3, undefined4 param_4)
 * Address ranges: 1005e1dc-1005e203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1005e1dc(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[4] = param_4;
  param_1[7] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[5] = 0xffffffff;
  return;
}

