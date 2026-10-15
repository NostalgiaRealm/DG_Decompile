/*
 * range_start_10122000 at 10122000
 * undefined range_start_10122000(void)
 * Address ranges: 10122000-1012201b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall range_start_10122000(undefined4 *param_1)

{
  *param_1 = MXCSR;
  MXCSR = 0x3fc0;
  return param_1;
}

