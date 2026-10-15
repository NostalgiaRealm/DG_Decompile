/*
 * FUN_1800fbea0 at 1800fbea0
 * undefined1 * __fastcall FUN_1800fbea0(undefined1 * param_1, undefined1 param_2, longlong param_3)
 * Address ranges: 1800fbea0-1800fbeb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_1800fbea0(undefined1 *param_1,undefined1 param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return puVar1;
}

