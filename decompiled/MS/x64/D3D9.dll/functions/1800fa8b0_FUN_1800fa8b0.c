/*
 * FUN_1800fa8b0 at 1800fa8b0
 * float __fastcall FUN_1800fa8b0(void)
 * Address ranges: 1800fa8b0-1800fa913
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1800fa8b0(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_180111ec0 == '\0') {
    QueryPerformanceCounter(local_res8);
    DAT_180111ec4 = (uint)(ushort)local_res8[0]._0_2_;
    DAT_180111ec0 = '\x01';
  }
  DAT_180111ec4 = DAT_180111ec4 * DAT_180111ec4 + DAT_18010e044 & 0xffff;
  DAT_18010e044 = (DAT_180111ec4 >> 2) + DAT_18010e044 & 0xffff;
  return (float)DAT_180111ec4 / 65535.0;
}

