/*
 * FUN_10001058 at 10001058
 * undefined FUN_10001058(void)
 * Address ranges: 10001058-100010e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_10001058(double param_1)

{
  return (ulonglong)(param_1 - (double)(longlong)(param_1 / 6.283185307179586) * 6.283185307179586)
         & 0x8000000000000000;
}

