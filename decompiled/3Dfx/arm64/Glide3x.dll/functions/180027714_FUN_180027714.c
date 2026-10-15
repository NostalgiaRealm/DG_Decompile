/*
 * FUN_180027714 at 180027714
 * undefined8 * __cdecl FUN_180027714(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180027714-180027747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180027714(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180067840;
  if ((param_2 & 1) != 0) {
    FUN_180063700(param_1);
  }
  return param_1;
}

