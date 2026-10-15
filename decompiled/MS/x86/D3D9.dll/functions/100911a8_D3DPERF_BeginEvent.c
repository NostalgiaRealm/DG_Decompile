/*
 * D3DPERF_BeginEvent at 100911a8
 * undefined __stdcall D3DPERF_BeginEvent(void)
 * Address ranges: 100911a8-100911b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void D3DPERF_BeginEvent(void)

{
                    /* 0x911a8  1  D3DPERF_BeginEvent */
  DAT_100e3a28 = DAT_100e3a28 + 1;
  return;
}

