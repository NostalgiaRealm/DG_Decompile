/*
 * D3DPERF_BeginEvent_native at 100d1a90
 * undefined D3DPERF_BeginEvent_native(void)
 * Address ranges: 100d1a90-100d1aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int D3DPERF_BeginEvent_native(void)

{
  int iVar1;
  
  iVar1 = DAT_10175b40;
  DAT_10175b40 = DAT_10175b40 + 1;
  return iVar1;
}

