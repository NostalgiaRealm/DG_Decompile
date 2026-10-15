/*
 * FUN_1800d08fc at 1800d08fc
 * undefined8 * __fastcall FUN_1800d08fc(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800d08fc-1800d0926
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800d08fc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180105f08;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

