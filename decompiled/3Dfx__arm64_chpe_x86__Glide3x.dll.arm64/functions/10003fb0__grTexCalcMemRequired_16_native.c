/*
 * _grTexCalcMemRequired@16_native at 10003fb0
 * undefined _grTexCalcMemRequired@16_native(void)
 * Address ranges: 10003fb0-10003fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexCalcMemRequired_16_native(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong extraout_x1;
  ulonglong extraout_x11;
  
  FUN_100093b8();
  iVar1 = FUN_10008338(3,extraout_x11 & 0xffffffff,extraout_x1 & 0xffffffff,param_3 & 0xffffffff);
  return iVar1 + 7U & 0xfffffff8;
}

