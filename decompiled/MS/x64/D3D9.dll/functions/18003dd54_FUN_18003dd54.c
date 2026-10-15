/*
 * FUN_18003dd54 at 18003dd54
 * undefined8 * __fastcall FUN_18003dd54(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18003dd54-18003dd7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18003dd54(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180101e58;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

