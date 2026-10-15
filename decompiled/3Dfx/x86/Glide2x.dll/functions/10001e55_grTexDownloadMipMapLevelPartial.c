/*
 * grTexDownloadMipMapLevelPartial at 10001e55
 * undefined __stdcall grTexDownloadMipMapLevelPartial(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, undefined4 * param_8, int param_9, int param_10)
 * Address ranges: 10001e55-10001e85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexDownloadMipMapLevelPartial,40
 */

/* __stdcall grTexDownloadMipMapLevelPartial,40 */

void grTexDownloadMipMapLevelPartial
               (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,undefined4 *param_8,int param_9,int param_10)

{
  undefined *this;
  
                    /* 0x1e55  88  _grTexDownloadMipMapLevelPartial@40 */
  this = FUN_10012760();
  FUN_10014336(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
              );
  return;
}

