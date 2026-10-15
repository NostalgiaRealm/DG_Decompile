/*
 * FUN_180222c50 at 180222c50
 * undefined FUN_180222c50(void)
 * Address ranges: 180222c50-180222c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_180222c50(undefined1 *param_1,undefined1 param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}

