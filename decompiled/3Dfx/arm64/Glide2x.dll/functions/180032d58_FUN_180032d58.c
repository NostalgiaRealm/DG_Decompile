/*
 * FUN_180032d58 at 180032d58
 * undefined8 * __cdecl FUN_180032d58(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180032d58-180032d5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180032d58(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180064a10;
  if ((param_2 & 1) != 0) {
    FUN_18005fbc8(param_1);
  }
  return param_1;
}

