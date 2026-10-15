/*
 * _grTexCalcMemRequired@16_native at 10003880
 * undefined _grTexCalcMemRequired@16_native(void)
 * Address ranges: 10003880-100038bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexCalcMemRequired_16_native
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  ulonglong extraout_x1;
  ulonglong extraout_x11;
  
  FUN_1001beb0();
  if (0xf < param_4) {
    param_4 = 8;
  }
  iVar1 = FUN_1001f388(3,extraout_x11 & 0xffffffff,extraout_x1 & 0xffffffff,param_3 & 0xffffffff,
                       param_4);
  return iVar1 + 7U & 0xfffffff8;
}

