/*
 * FUN_140023f00 at 140023f00
 * undefined8 * __fastcall FUN_140023f00(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 140023f00-140023f15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140023f00(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_140026360;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}

