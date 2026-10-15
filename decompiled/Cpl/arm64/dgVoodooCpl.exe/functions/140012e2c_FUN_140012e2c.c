/*
 * FUN_140012e2c at 140012e2c
 * longlong * __cdecl FUN_140012e2c(longlong * param_1, ulonglong param_2)
 * Address ranges: 140012e2c-140012e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_140012e2c(longlong *param_1,ulonglong param_2)

{
  *param_1 = (longlong)&PTR_FUN_140028c48;
  FUN_140012960(param_1);
  FUN_140013bd0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

