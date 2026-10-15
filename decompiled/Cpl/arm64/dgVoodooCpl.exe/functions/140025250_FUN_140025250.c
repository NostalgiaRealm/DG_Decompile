/*
 * FUN_140025250 at 140025250
 * undefined1 * __cdecl FUN_140025250(undefined1 * param_1, undefined1 param_2, longlong param_3)
 * Address ranges: 140025250-14002526b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_140025250(undefined1 *param_1,undefined1 param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

