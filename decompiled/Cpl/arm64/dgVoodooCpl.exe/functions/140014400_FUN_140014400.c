/*
 * FUN_140014400 at 140014400
 * undefined8 * __cdecl FUN_140014400(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140014400-140014403
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140014400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140028ec0;
  FUN_1400141b8(param_1);
  FUN_140013bd0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

