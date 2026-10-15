/*
 * _grTexCalcMemRequired@16 at 1800032e0
 * uint __cdecl _grTexCalcMemRequired@16(undefined8 param_1, undefined8 param_2, int param_3, uint param_4)
 * Address ranges: 1800032e0-18000331f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexCalcMemRequired_16(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  ulonglong uVar1;
  uint extraout_w1;
  ulonglong extraout_x11;
  
                    /* 0x32e0  83  _grTexCalcMemRequired@16
                       0x32e0  240  grTexCalcMemRequired */
  FUN_180016878();
  if (0xf < (int)param_4) {
    param_4 = 8;
  }
  uVar1 = FUN_180018a70(3,extraout_x11 & 0xffffffff,extraout_w1,param_3,(ulonglong)param_4);
  return (int)uVar1 + 7U & 0xfffffff8;
}

