/*
 * FUN_140014904 at 140014904
 * undefined8 * __fastcall FUN_140014904(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140014904-14001492e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140014904(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140029260;
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}

