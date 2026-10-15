/*
 * _guEndianSwapBytes@4 at 180003480
 * ushort __fastcall _guEndianSwapBytes@4(ushort param_1)
 * Address ranges: 180003480-180003487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort _guEndianSwapBytes_4(ushort param_1)

{
                    /* 0x3480  112  _guEndianSwapBytes@4
                       0x3480  269  guEndianSwapBytes */
  return param_1 >> 8 | param_1 << 8;
}

