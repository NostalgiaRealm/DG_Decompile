/*
 * _grTexTextureMemRequired@8_native at 100038d0
 * undefined _grTexTextureMemRequired@8_native(void)
 * Address ranges: 100038d0-10003917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexTextureMemRequired_8_native(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *extraout_w1;
  ulonglong extraout_x11;
  
  FUN_1001beb0(param_1,param_2);
  iVar1 = FUN_1001f388(extraout_x11 & 0xffffffff,*extraout_w1,extraout_w1[1],extraout_w1[2],
                       extraout_w1[3]);
  return iVar1 + 7U & 0xfffffff8;
}

