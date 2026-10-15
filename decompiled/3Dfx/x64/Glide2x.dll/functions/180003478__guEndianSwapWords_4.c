/*
 * _guEndianSwapWords@4 at 180003478
 * uint __fastcall _guEndianSwapWords@4(uint param_1)
 * Address ranges: 180003478-18000347d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _guEndianSwapWords_4(uint param_1)

{
                    /* 0x3478  113  _guEndianSwapWords@4
                       0x3478  270  guEndianSwapWords */
  return param_1 >> 0x10 | param_1 << 0x10;
}

