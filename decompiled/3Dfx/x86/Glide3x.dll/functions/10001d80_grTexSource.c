/*
 * grTexSource at 10001d80
 * undefined __stdcall grTexSource(int param_1, undefined4 param_2, uint param_3, int * param_4)
 * Address ranges: 10001d80-10001dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexSource,16
 */

/* __stdcall grTexSource,16 */

void grTexSource(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  undefined *this;
  
                    /* 0x1d80  88  _grTexSource@16 */
  this = FUN_1000504c();
  FUN_10006d5e(this,param_1,3,param_2,param_3,*param_4,param_4[1],param_4[2],param_4[3]);
  return;
}

