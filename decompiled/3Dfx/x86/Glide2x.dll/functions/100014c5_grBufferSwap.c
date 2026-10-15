/*
 * grBufferSwap at 100014c5
 * undefined __stdcall grBufferSwap(int param_1)
 * Address ranges: 100014c5-100014e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grBufferSwap,4
 */

/* __stdcall grBufferSwap,4 */

void grBufferSwap(int param_1)

{
  undefined *this;
  
                    /* 0x14c5  15  _grBufferSwap@4 */
  if (4 < param_1) {
    param_1 = 4;
  }
  this = FUN_10012760();
  FUN_1001366c(this,param_1);
  return;
}

