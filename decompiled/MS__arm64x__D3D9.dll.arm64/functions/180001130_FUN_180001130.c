/*
 * FUN_180001130 at 180001130
 * undefined FUN_180001130(void)
 * Address ranges: 180001130-1800011bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180001130(double param_1)

{
  return (ulonglong)(param_1 - (double)(longlong)(param_1 / 6.283185307179586) * 6.283185307179586)
         & 0x8000000000000000;
}

