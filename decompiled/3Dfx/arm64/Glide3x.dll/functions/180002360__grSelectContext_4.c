/*
 * _grSelectContext@4 at 180002360
 * bool __cdecl _grSelectContext@4(void)
 * Address ranges: 180002360-180002383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grSelectContext_4(void)

{
  longlong lVar1;
  int extraout_w11;
  
                    /* 0x2360  62  _grSelectContext@4
                       0x2360  162  grSelectContext */
  lVar1 = FUN_180008ce0();
  return extraout_w11 == *(int *)(lVar1 + 0x58);
}

