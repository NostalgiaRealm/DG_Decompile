/*
 * FUN_140014404 at 140014404
 * longlong * __cdecl FUN_140014404(longlong * param_1, ulonglong param_2)
 * Address ranges: 140014404-14001444b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_140014404(longlong *param_1,ulonglong param_2)

{
  *param_1 = (longlong)&PTR_FUN_140028ec0;
  FUN_1400141b8(param_1);
  FUN_140013bd0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

