/*
 * grTexDownloadMipMapLevelPartial at 10001de6
 * undefined __stdcall grTexDownloadMipMapLevelPartial(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, undefined4 * param_8, int param_9, int param_10)
 * Address ranges: 10001de6-10001e16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexDownloadMipMapLevelPartial,40
 */

/* __stdcall grTexDownloadMipMapLevelPartial,40 */

void grTexDownloadMipMapLevelPartial
               (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,undefined4 *param_8,int param_9,int param_10)

{
  undefined *this;
  
                    /* 0x1de6  92  _grTexDownloadMipMapLevelPartial@40 */
  this = FUN_10012ab2();
  FUN_100146c4(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
              );
  return;
}

