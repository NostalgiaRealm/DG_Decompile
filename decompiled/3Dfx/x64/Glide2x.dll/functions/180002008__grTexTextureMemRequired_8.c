/*
 * _grTexTextureMemRequired@8 at 180002008
 * uint __fastcall _grTexTextureMemRequired@8(uint param_1, int * param_2)
 * Address ranges: 180002008-180002039
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexTextureMemRequired_8(uint param_1,int *param_2)

{
  int iVar1;
  
                    /* 0x2008  102  _grTexTextureMemRequired@8
                       0x2008  259  grTexTextureMemRequired */
  FUN_180015044();
  iVar1 = FUN_1800178d8(param_1,*param_2,param_2[1],param_2[2],param_2[3]);
  return iVar1 + 7U & 0xfffffff8;
}

