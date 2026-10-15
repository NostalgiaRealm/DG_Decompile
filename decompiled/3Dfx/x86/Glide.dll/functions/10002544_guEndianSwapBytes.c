/*
 * guEndianSwapBytes at 10002544
 * undefined2 __stdcall guEndianSwapBytes(undefined2 param_1)
 * Address ranges: 10002544-10002552
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guEndianSwapBytes,4
 */

/* __stdcall guEndianSwapBytes,4 */

undefined2 guEndianSwapBytes(undefined2 param_1)

{
                    /* 0x2544  114  _guEndianSwapBytes@4 */
  return CONCAT11((char)param_1,(char)((ushort)param_1 >> 8));
}

