/*
 * grBufferClear at 10001411
 * undefined __stdcall grBufferClear(uint param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10001411-1000142c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grBufferClear,12
 */

/* __stdcall grBufferClear,12 */

void grBufferClear(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *this;
  
                    /* 0x1411  10  _grBufferClear@12 */
  this = FUN_10005411();
  FUN_1000641c(this,param_1,param_2,param_3);
  return;
}

