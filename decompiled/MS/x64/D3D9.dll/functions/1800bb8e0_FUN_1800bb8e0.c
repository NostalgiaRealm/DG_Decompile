/*
 * FUN_1800bb8e0 at 1800bb8e0
 * undefined8 * __fastcall FUN_1800bb8e0(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800bb8e0-1800bb90a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800bb8e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180104928;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

