/*
 * FUN_18005d800 at 18005d800
 * undefined8 * __fastcall FUN_18005d800(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 18005d800-18005d815
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18005d800(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_180060440;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}

