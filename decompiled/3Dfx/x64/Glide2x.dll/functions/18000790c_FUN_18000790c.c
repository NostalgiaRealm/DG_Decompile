/*
 * FUN_18000790c at 18000790c
 * undefined8 * __fastcall FUN_18000790c(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18000790c-180007936
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18000790c(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180061d48;
  if ((param_2 & 1) != 0) {
    FUN_18005d720(param_1);
  }
  return param_1;
}

