/*
 * D3DPERF_EndEvent at 100911b9
 * undefined __stdcall D3DPERF_EndEvent(void)
 * Address ranges: 100911b9-100911c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void D3DPERF_EndEvent(void)

{
                    /* 0x911b9  2  D3DPERF_EndEvent */
  DAT_100e3a28 = DAT_100e3a28 + -1;
  return;
}

