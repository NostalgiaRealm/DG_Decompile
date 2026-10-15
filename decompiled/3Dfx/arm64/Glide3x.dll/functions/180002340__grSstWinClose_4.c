/*
 * _grSstWinClose@4 at 180002340
 * ulonglong __cdecl _grSstWinClose@4(void)
 * Address ranges: 180002340-18000235f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong _grSstWinClose_4(void)

{
  ulonglong uVar1;
  undefined1 auVar2 [12];
  
                    /* 0x2340  67  _grSstWinClose@4
                       0x2340  167  grSstWinClose */
  auVar2 = FUN_180008ce0();
  uVar1 = FUN_18000a178(auVar2._0_8_,auVar2._8_4_);
  return uVar1 & 0xff;
}

