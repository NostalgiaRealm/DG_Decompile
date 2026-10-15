/*
 * grGet at 10001ac5
 * undefined __stdcall grGet(int param_1, uint param_2, uint * param_3)
 * Address ranges: 10001ac5-10001ae0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGet,12
 */

/* __stdcall grGet,12 */

void grGet(int param_1,uint param_2,uint *param_3)

{
  undefined *this;
  
                    /* 0x1ac5  47  _grGet@12 */
  this = FUN_10005411();
  FUN_100047a1(this,param_1,param_2,param_3);
  return;
}

