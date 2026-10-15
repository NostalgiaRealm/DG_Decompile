/*
 * _guEndianSwapWords@4 at 1800065e0
 * uint __cdecl _guEndianSwapWords@4(uint param_1)
 * Address ranges: 1800065e0-1800065e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _guEndianSwapWords_4(uint param_1)

{
                    /* 0x65e0  117  _guEndianSwapWords@4
                       0x65e0  278  guEndianSwapWords */
  return param_1 >> 0x10 | param_1 << 0x10;
}

