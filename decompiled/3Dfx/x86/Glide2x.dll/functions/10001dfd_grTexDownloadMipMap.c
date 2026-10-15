/*
 * grTexDownloadMipMap at 10001dfd
 * undefined __stdcall grTexDownloadMipMap(int param_1, uint param_2, uint param_3, uint * param_4)
 * Address ranges: 10001dfd-10001e29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexDownloadMipMap,16
 */

/* __stdcall grTexDownloadMipMap,16 */

void grTexDownloadMipMap(int param_1,uint param_2,uint param_3,uint *param_4)

{
  undefined *this;
  
                    /* 0x1dfd  86  _grTexDownloadMipMap@16 */
  this = FUN_10012760();
  FUN_10013f5d(this,param_1,param_2,param_3,*param_4,param_4[1],param_4[2],param_4[3],
               (undefined4 *)param_4[4]);
  return;
}

