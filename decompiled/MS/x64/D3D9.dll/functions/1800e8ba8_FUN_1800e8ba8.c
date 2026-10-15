/*
 * FUN_1800e8ba8 at 1800e8ba8
 * undefined8 * __fastcall FUN_1800e8ba8(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800e8ba8-1800e8bd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800e8ba8(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180106f68;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

