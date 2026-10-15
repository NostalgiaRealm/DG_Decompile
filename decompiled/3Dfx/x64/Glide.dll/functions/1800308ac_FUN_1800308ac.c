/*
 * FUN_1800308ac at 1800308ac
 * undefined8 * __fastcall FUN_1800308ac(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800308ac-1800308d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800308ac(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180063a58;
  if ((param_2 & 1) != 0) {
    FUN_18005dbc0(param_1);
  }
  return param_1;
}

