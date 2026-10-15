/*
 * grTexDownloadMipMapLevel at 10001dbb
 * undefined __stdcall grTexDownloadMipMapLevel(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, undefined4 * param_8)
 * Address ranges: 10001dbb-10001de5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexDownloadMipMapLevel,32
 */

/* __stdcall grTexDownloadMipMapLevel,32 */

void grTexDownloadMipMapLevel
               (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,undefined4 *param_8)

{
  undefined *this;
  
                    /* 0x1dbb  91  _grTexDownloadMipMapLevel@32 */
  this = FUN_10012ab2();
  FUN_10014688(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

