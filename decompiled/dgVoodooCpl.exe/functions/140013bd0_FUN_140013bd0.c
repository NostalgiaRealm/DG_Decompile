/*
 * FUN_140013bd0 at 140013bd0
 * undefined8 * __fastcall FUN_140013bd0(undefined8 * param_1, uint param_2)
 * Address ranges: 140013bd0-140013c36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140013bd0(undefined8 *param_1,uint param_2)

{
  param_1[0xa6] = 0;
  *param_1 = &PTR_FUN_140029018;
  FUN_140013580((longlong)param_1);
  *param_1 = &PTR_FUN_140028f90;
  FUN_140013580((longlong)param_1);
  FUN_140024260((LPVOID)param_1[99]);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}

