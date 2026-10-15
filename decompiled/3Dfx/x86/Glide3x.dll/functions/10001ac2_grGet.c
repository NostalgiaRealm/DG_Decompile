/*
 * grGet at 10001ac2
 * undefined __stdcall grGet(int param_1, uint param_2, uint * param_3)
 * Address ranges: 10001ac2-10001add
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGet,12
 */

/* __stdcall grGet,12 */

void grGet(int param_1,uint param_2,uint *param_3)

{
  undefined *this;
  
                    /* 0x1ac2  40  _grGet@12 */
  this = FUN_1000504c();
  FUN_10004558(this,param_1,param_2,param_3);
  return;
}

