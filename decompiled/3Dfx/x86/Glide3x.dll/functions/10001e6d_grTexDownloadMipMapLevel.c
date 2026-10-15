/*
 * grTexDownloadMipMapLevel at 10001e6d
 * undefined __stdcall grTexDownloadMipMapLevel(int param_1, uint param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, undefined4 * param_8)
 * Address ranges: 10001e6d-10001eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexDownloadMipMapLevel,32
 */

/* __stdcall grTexDownloadMipMapLevel,32 */

void grTexDownloadMipMapLevel
               (int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
               uint param_7,undefined4 *param_8)

{
  undefined *this;
  uint uVar1;
  int extraout_EDX;
  
                    /* 0x1e6d  76  _grTexDownloadMipMapLevel@32 */
  this = FUN_1000504c();
  uVar1 = FUN_1000415b(param_3,param_5);
  FUN_10006c14(this,param_1,param_2,param_3,param_4,extraout_EDX,param_6,param_7,param_8,0,
               (uVar1 & 0xffff) - 1);
  return;
}

