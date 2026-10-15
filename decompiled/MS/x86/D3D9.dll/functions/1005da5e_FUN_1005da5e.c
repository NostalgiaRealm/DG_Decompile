/*
 * FUN_1005da5e at 1005da5e
 * uint __stdcall FUN_1005da5e(uint param_1)
 * Address ranges: 1005da5e-1005da7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1005da5e(uint param_1)

{
  return (param_1 >> 0x14 & 0x700 | param_1 & 0x1800) >> 8;
}

