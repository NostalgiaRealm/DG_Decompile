/*
 * _guEndianSwapWords@4 at 180005b40
 * uint __cdecl _guEndianSwapWords@4(uint param_1)
 * Address ranges: 180005b40-180005b47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _guEndianSwapWords_4(uint param_1)

{
                    /* 0x5b40  113  _guEndianSwapWords@4
                       0x5b40  270  guEndianSwapWords */
  return param_1 >> 0x10 | param_1 << 0x10;
}

