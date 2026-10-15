/*
 * FUN_180060700 at 180060700
 * undefined8 * __fastcall FUN_180060700(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 180060700-180060715
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180060700(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_1800624b8;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}

