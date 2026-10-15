/*
 * _guEndianSwapWords@4_native at 10005820
 * undefined _guEndianSwapWords@4_native(void)
 * Address ranges: 10005820-10005827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _guEndianSwapWords_4_native(uint param_1)

{
  return param_1 >> 0x10 | param_1 << 0x10;
}

