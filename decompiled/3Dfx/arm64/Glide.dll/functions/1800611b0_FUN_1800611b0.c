/*
 * FUN_1800611b0 at 1800611b0
 * undefined1 * __cdecl FUN_1800611b0(undefined1 * param_1, undefined1 param_2, longlong param_3)
 * Address ranges: 1800611b0-1800611cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_1800611b0(undefined1 *param_1,undefined1 param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

