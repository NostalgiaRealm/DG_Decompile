/*
 * _guEndianSwapBytes@4 at 1800036a0
 * ushort __fastcall _guEndianSwapBytes@4(ushort param_1)
 * Address ranges: 1800036a0-1800036a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort _guEndianSwapBytes_4(ushort param_1)

{
                    /* 0x36a0  116  _guEndianSwapBytes@4
                       0x36a0  277  guEndianSwapBytes */
  return param_1 >> 8 | param_1 << 8;
}

