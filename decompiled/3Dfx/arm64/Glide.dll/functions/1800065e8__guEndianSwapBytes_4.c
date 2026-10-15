/*
 * _guEndianSwapBytes@4 at 1800065e8
 * ushort __cdecl _guEndianSwapBytes@4(ushort param_1)
 * Address ranges: 1800065e8-1800065f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort _guEndianSwapBytes_4(ushort param_1)

{
                    /* 0x65e8  116  _guEndianSwapBytes@4
                       0x65e8  277  guEndianSwapBytes */
  return param_1 >> 8 | param_1 << 8;
}

