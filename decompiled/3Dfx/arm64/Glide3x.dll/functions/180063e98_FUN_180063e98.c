/*
 * FUN_180063e98 at 180063e98
 * undefined1 * __cdecl FUN_180063e98(undefined1 * param_1, undefined1 param_2, longlong param_3)
 * Address ranges: 180063e98-180063eb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_180063e98(undefined1 *param_1,undefined1 param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

