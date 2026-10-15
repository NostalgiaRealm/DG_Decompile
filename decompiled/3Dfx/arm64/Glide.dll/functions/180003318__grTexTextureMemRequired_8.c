/*
 * _grTexTextureMemRequired@8 at 180003318
 * uint __cdecl _grTexTextureMemRequired@8(void)
 * Address ranges: 180003318-180003347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexTextureMemRequired_8(void)

{
  ulonglong uVar1;
  uint *extraout_x1;
  uint extraout_w11;
  
                    /* 0x3318  106  _grTexTextureMemRequired@8
                       0x3318  267  grTexTextureMemRequired */
  FUN_180017788();
  uVar1 = FUN_1800198c0(extraout_w11,(ulonglong)*extraout_x1,extraout_x1[1],extraout_x1[2],
                        (ulonglong)extraout_x1[3]);
  return (int)uVar1 + 7U & 0xfffffff8;
}

