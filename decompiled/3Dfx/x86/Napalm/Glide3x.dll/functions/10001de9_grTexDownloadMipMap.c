/*
 * grTexDownloadMipMap at 10001de9
 * undefined __stdcall grTexDownloadMipMap(int param_1, undefined4 * param_2, uint param_3, int * param_4)
 * Address ranges: 10001de9-10001e15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexDownloadMipMap,16
 */

/* __stdcall grTexDownloadMipMap,16 */

void grTexDownloadMipMap(int param_1,undefined4 *param_2,uint param_3,int *param_4)

{
  undefined *this;
  
                    /* 0x1de9  97  _grTexDownloadMipMap@16 */
  this = FUN_10005411();
  FUN_10006d24(this,param_1,param_2,param_3,*param_4,param_4[1],param_4[2],param_4[3],
               (undefined4 *)param_4[4]);
  return;
}

