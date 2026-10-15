/*
 * FUN_18005f970 at 18005f970
 * float __fastcall FUN_18005f970(void)
 * Address ranges: 18005f970-18005f9d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_18005f970(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_18006d9a0 == '\0') {
    QueryPerformanceCounter(local_res8);
    DAT_18006d9a4 = (uint)(ushort)local_res8[0]._0_2_;
    DAT_18006d9a0 = '\x01';
  }
  DAT_18006d9a4 = DAT_18006d9a4 * DAT_18006d9a4 + DAT_18006c044 & 0xffff;
  DAT_18006c044 = (DAT_18006d9a4 >> 2) + DAT_18006c044 & 0xffff;
  return (float)DAT_18006d9a4 / 65535.0;
}

