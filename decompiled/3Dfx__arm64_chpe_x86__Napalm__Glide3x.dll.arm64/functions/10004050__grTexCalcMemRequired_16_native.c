/*
 * _grTexCalcMemRequired@16_native at 10004050
 * undefined _grTexCalcMemRequired@16_native(void)
 * Address ranges: 10004050-10004087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexCalcMemRequired_16_native(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong extraout_x1;
  ulonglong extraout_x11;
  
  FUN_1000ae60();
  iVar1 = FUN_10009b30(3,extraout_x11 & 0xffffffff,extraout_x1 & 0xffffffff,param_3 & 0xffffffff);
  return iVar1 + 7U & 0xfffffff8;
}

