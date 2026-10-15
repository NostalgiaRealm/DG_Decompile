/*
 * FUN_180064378 at 180064378
 * undefined4 * __fastcall FUN_180064378(undefined4 * param_1, undefined4 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 180064378-18006439a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_180064378(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  param_1[5] = param_5;
  param_1[6] = param_6;
  param_1[7] = param_7;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[4] = param_4;
  return param_1;
}

