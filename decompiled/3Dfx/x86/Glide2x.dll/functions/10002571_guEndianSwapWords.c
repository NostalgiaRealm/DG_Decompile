/*
 * guEndianSwapWords at 10002571
 * uint __stdcall guEndianSwapWords(uint param_1)
 * Address ranges: 10002571-1000257d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guEndianSwapWords,4
 */

/* __stdcall guEndianSwapWords,4 */

uint guEndianSwapWords(uint param_1)

{
                    /* 0x2571  111  _guEndianSwapWords@4 */
  return param_1 >> 0x10 | param_1 << 0x10;
}

