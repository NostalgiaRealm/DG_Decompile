/*
 * _guEndianSwapBytes@4 at 180005b48
 * ushort __cdecl _guEndianSwapBytes@4(ushort param_1)
 * Address ranges: 180005b48-180005b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort _guEndianSwapBytes_4(ushort param_1)

{
                    /* 0x5b48  112  _guEndianSwapBytes@4
                       0x5b48  269  guEndianSwapBytes */
  return param_1 >> 8 | param_1 << 8;
}

