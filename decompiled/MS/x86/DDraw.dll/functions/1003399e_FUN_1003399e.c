/*
 * FUN_1003399e at 1003399e
 * longlong __fastcall FUN_1003399e(uint param_1)
 * Address ranges: 1003399e-100339fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong __fastcall FUN_1003399e(uint param_1)

{
  return (ulonglong)(param_1 >> 2 & 7 | (param_1 & 0x1f) << 3) << 0x20;
}

