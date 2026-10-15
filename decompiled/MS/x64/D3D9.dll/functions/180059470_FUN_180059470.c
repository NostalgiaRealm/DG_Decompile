/*
 * FUN_180059470 at 180059470
 * undefined8 * __fastcall FUN_180059470(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180059470-18005949a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180059470(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1801023a0;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

