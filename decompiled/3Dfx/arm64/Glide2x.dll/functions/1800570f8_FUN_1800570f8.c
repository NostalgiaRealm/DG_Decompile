/*
 * FUN_1800570f8 at 1800570f8
 * undefined8 * __cdecl FUN_1800570f8(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800570f8-1800570fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800570f8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &DAT_180065f18;
  if ((param_2 & 1) != 0) {
    FUN_18005fbc8(param_1);
  }
  return param_1;
}

