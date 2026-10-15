/*
 * grBufferSwap at 1000142d
 * undefined __stdcall grBufferSwap(int param_1)
 * Address ranges: 1000142d-1000144b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grBufferSwap,4
 */

/* __stdcall grBufferSwap,4 */

void grBufferSwap(int param_1)

{
  undefined *this;
  
                    /* 0x142d  9  _grBufferSwap@4 */
  if (4 < param_1) {
    param_1 = 4;
  }
  this = FUN_1000504c();
  FUN_1000605c(this,param_1);
  return;
}

