/*
 * FUN_180032d5c at 180032d5c
 * undefined8 * __cdecl FUN_180032d5c(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180032d5c-180032d8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180032d5c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180064a10;
  if ((param_2 & 1) != 0) {
    FUN_18005fbc8(param_1);
  }
  return param_1;
}

