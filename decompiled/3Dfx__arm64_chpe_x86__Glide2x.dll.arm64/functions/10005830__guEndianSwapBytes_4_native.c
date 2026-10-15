/*
 * _guEndianSwapBytes@4_native at 10005830
 * undefined _guEndianSwapBytes@4_native(void)
 * Address ranges: 10005830-1000583f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort _guEndianSwapBytes_4_native(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}

