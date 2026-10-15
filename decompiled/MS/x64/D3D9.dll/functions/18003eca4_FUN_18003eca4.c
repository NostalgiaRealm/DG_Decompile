/*
 * FUN_18003eca4 at 18003eca4
 * undefined8 * __fastcall FUN_18003eca4(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18003eca4-18003ecd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18003eca4(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_D3DPERF_GetStatus_180101e70;
  param_1[4] = &PTR_FUN_1801029c8;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

