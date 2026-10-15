/*
 * _guEndianSwapWords@4 at 180003698
 * uint __fastcall _guEndianSwapWords@4(uint param_1)
 * Address ranges: 180003698-18000369d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _guEndianSwapWords_4(uint param_1)

{
                    /* 0x3698  117  _guEndianSwapWords@4
                       0x3698  278  guEndianSwapWords */
  return param_1 >> 0x10 | param_1 << 0x10;
}

