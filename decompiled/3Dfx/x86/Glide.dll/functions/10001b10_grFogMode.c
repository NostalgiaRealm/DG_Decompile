/*
 * grFogMode at 10001b10
 * undefined __stdcall grFogMode(uint param_1)
 * Address ranges: 10001b10-10001b25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grFogMode,4
 */

/* __stdcall grFogMode,4 */

void grFogMode(uint param_1)

{
  undefined *this;
  
                    /* 0x1b10  40  _grFogMode@4 */
  this = FUN_10012ab2();
  FUN_10014256(this,param_1);
  return;
}

