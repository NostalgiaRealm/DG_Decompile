/*
 * FUN_18003d1c8 at 18003d1c8
 * undefined8 * __fastcall FUN_18003d1c8(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18003d1c8-18003d1f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18003d1c8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180101cb8;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

