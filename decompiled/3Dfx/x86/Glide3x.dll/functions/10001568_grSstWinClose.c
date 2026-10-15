/*
 * grSstWinClose at 10001568
 * uint __stdcall grSstWinClose(uint param_1)
 * Address ranges: 10001568-10001580
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstWinClose,4
 */

/* __stdcall grSstWinClose,4 */

uint grSstWinClose(uint param_1)

{
  undefined *this;
  uint uVar1;
  
                    /* 0x1568  67  _grSstWinClose@4 */
  this = FUN_1000504c();
  uVar1 = FUN_10005bb0(this,param_1);
  return uVar1 & 0xff;
}

