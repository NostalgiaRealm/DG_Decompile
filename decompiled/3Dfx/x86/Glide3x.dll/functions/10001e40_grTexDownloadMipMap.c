/*
 * grTexDownloadMipMap at 10001e40
 * undefined __stdcall grTexDownloadMipMap(int param_1, undefined4 * param_2, uint param_3, int * param_4)
 * Address ranges: 10001e40-10001e6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexDownloadMipMap,16
 */

/* __stdcall grTexDownloadMipMap,16 */

void grTexDownloadMipMap(int param_1,undefined4 *param_2,uint param_3,int *param_4)

{
  undefined *this;
  
                    /* 0x1e40  75  _grTexDownloadMipMap@16 */
  this = FUN_1000504c();
  FUN_100068c0(this,param_1,param_2,param_3,*param_4,param_4[1],param_4[2],param_4[3],
               (undefined4 *)param_4[4]);
  return;
}

