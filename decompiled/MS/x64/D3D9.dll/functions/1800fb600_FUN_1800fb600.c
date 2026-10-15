/*
 * FUN_1800fb600 at 1800fb600
 * undefined8 * __fastcall FUN_1800fb600(undefined8 * param_1, undefined8 param_2)
 * Address ranges: 1800fb600-1800fb615
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800fb600(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_1800fd628;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}

