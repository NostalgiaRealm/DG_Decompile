/*
 * grTexTextureMemRequired at 10001c29
 * uint __stdcall grTexTextureMemRequired(uint param_1, int * param_2)
 * Address ranges: 10001c29-10001c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexTextureMemRequired,8
 */

/* __stdcall grTexTextureMemRequired,8 */

uint grTexTextureMemRequired(uint param_1,int *param_2)

{
  int iVar1;
  
                    /* 0x1c29  104  _grTexTextureMemRequired@8 */
  FUN_10012ab2();
  iVar1 = FUN_10014ea7(param_1,*param_2,param_2[1],param_2[2],param_2[3]);
  return iVar1 + 7U & 0xfffffff8;
}

