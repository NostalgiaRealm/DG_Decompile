/*
 * FUN_1004ee48 at 1004ee48
 * undefined __fastcall FUN_1004ee48(undefined4 * param_1, undefined4 param_2, undefined1 param_3, undefined4 param_4)
 * Address ranges: 1004ee48-1004ee6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1004ee48(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[4] = param_4;
  param_1[7] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[5] = 0xffffffff;
  return;
}

