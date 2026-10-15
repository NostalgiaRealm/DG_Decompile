/*
 * _grTexTextureMemRequired@8_native at 10004090
 * undefined _grTexTextureMemRequired@8_native(void)
 * Address ranges: 10004090-100040d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexTextureMemRequired_8_native(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *extraout_w1;
  ulonglong extraout_x11;
  
  FUN_1000ae60(param_1,param_2);
  iVar1 = FUN_10009b30(extraout_x11 & 0xffffffff,*extraout_w1,extraout_w1[1],extraout_w1[2],
                       extraout_w1[3]);
  return iVar1 + 7U & 0xfffffff8;
}

