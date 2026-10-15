/*
 * grTexDownloadMipMapLevelPartial at 10001eac
 * undefined __stdcall grTexDownloadMipMapLevelPartial(int param_1, uint param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, undefined4 * param_8, int param_9, int param_10)
 * Address ranges: 10001eac-10001edc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexDownloadMipMapLevelPartial,40
 */

/* __stdcall grTexDownloadMipMapLevelPartial,40 */

void grTexDownloadMipMapLevelPartial
               (int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
               uint param_7,undefined4 *param_8,int param_9,int param_10)

{
  undefined *this;
  
                    /* 0x1eac  77  _grTexDownloadMipMapLevelPartial@40 */
  this = FUN_1000504c();
  FUN_10006c14(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
              );
  return;
}

