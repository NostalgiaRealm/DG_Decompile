/*
 * FUN_14002511c at 14002511c
 * undefined1 * __fastcall FUN_14002511c(undefined1 * param_1, undefined1 param_2, longlong param_3)
 * Address ranges: 14002511c-14002512f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_14002511c(undefined1 *param_1,undefined1 param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return puVar1;
}

