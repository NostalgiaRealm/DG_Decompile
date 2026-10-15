/*
 * FUN_1800470cc at 1800470cc
 * undefined8 * __cdecl FUN_1800470cc(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800470cc-180047113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800470cc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180068ee8;
  FUN_180046fa0((longlong)param_1);
  FUN_18005b3b8(param_1);
  if ((param_2 & 1) != 0) {
    FUN_180063700(param_1);
  }
  return param_1;
}

