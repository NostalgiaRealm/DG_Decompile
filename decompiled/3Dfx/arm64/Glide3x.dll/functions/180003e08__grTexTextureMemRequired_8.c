/*
 * _grTexTextureMemRequired@8 at 180003e08
 * uint __cdecl _grTexTextureMemRequired@8(void)
 * Address ranges: 180003e08-180003e37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexTextureMemRequired_8(void)

{
  int iVar1;
  int *extraout_x1;
  uint extraout_w11;
  
                    /* 0x3e08  89  _grTexTextureMemRequired@8
                       0x3e08  189  grTexTextureMemRequired */
  FUN_180008ce0();
  iVar1 = FUN_180008380(extraout_w11,*extraout_x1,extraout_x1[1],extraout_x1[2],extraout_x1[3]);
  return iVar1 + 7U & 0xfffffff8;
}

