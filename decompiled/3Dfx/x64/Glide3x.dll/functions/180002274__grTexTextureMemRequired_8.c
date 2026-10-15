/*
 * _grTexTextureMemRequired@8 at 180002274
 * uint __fastcall _grTexTextureMemRequired@8(uint param_1, int * param_2)
 * Address ranges: 180002274-18000229f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexTextureMemRequired_8(uint param_1,int *param_2)

{
  int iVar1;
  
                    /* 0x2274  89  _grTexTextureMemRequired@8
                       0x2274  189  grTexTextureMemRequired */
  FUN_1800069ac();
  iVar1 = FUN_180005928(param_1,*param_2,param_2[1],param_2[2],param_2[3]);
  return iVar1 + 7U & 0xfffffff8;
}

