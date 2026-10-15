/*
 * FUN_18005a9cc at 18005a9cc
 * undefined8 * __cdecl FUN_18005a9cc(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18005a9cc-18005a9ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18005a9cc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &DAT_18006a1a8;
  if ((param_2 & 1) != 0) {
    FUN_180063700(param_1);
  }
  return param_1;
}

