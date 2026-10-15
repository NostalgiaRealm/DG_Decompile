/*
 * grTexTextureMemRequired at 10001c31
 * uint __stdcall grTexTextureMemRequired(uint param_1, int * param_2)
 * Address ranges: 10001c31-10001c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexTextureMemRequired,8
 */

/* __stdcall grTexTextureMemRequired,8 */

uint grTexTextureMemRequired(uint param_1,int *param_2)

{
  int iVar1;
  
                    /* 0x1c31  111  _grTexTextureMemRequired@8 */
  FUN_10005411();
  iVar1 = FUN_1000440d(param_1,*param_2,param_2[1],param_2[2],param_2[3]);
  return iVar1 + 7U & 0xfffffff8;
}

