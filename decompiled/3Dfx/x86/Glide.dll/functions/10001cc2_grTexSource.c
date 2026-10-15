/*
 * grTexSource at 10001cc2
 * undefined __stdcall grTexSource(int param_1, undefined4 param_2, uint param_3, uint * param_4)
 * Address ranges: 10001cc2-10001ced
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexSource,16
 */

/* __stdcall grTexSource,16 */

void grTexSource(int param_1,undefined4 param_2,uint param_3,uint *param_4)

{
  undefined *this;
  
                    /* 0x1cc2  103  _grTexSource@16 */
  this = FUN_10012ab2();
  FUN_10014824(this,param_1,0,param_2,param_3,*param_4,param_4[1],param_4[2],param_4[3]);
  return;
}

