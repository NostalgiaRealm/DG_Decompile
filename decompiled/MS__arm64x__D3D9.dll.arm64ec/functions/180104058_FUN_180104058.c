/*
 * FUN_180104058 at 180104058
 * undefined FUN_180104058(void)
 * Address ranges: 180104058-1801040e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180104058(double param_1)

{
  return (ulonglong)(param_1 - (double)(longlong)(param_1 / 6.283185307179586) * 6.283185307179586)
         & 0x8000000000000000;
}

