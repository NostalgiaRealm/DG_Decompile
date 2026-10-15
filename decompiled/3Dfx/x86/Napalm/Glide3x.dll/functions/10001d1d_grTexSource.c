/*
 * grTexSource at 10001d1d
 * undefined __stdcall grTexSource(int param_1, uint param_2, uint param_3, int * param_4)
 * Address ranges: 10001d1d-10001d48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexSource,16
 */

/* __stdcall grTexSource,16 */

void grTexSource(int param_1,uint param_2,uint param_3,int *param_4)

{
  undefined *this;
  
                    /* 0x1d1d  110  _grTexSource@16 */
  this = FUN_10005411();
  FUN_100071d9(this,param_1,3,param_2,param_3,*param_4,param_4[1],param_4[2],param_4[3]);
  return;
}

