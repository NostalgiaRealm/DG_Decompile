/*
 * FUN_180037fb0 at 180037fb0
 * float __cdecl FUN_180037fb0(void)
 * Address ranges: 180037fb0-180038027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_180037fb0(void)

{
  LARGE_INTEGER local_20 [2];
  
  if (DAT_18006fa74 == '\0') {
    QueryPerformanceCounter(local_20);
    DAT_18006fa70 = (uint)(ushort)local_20[0]._0_2_;
    DAT_18006fa74 = '\x01';
  }
  DAT_18006fa70 = DAT_18006f894 + DAT_18006fa70 * DAT_18006fa70 & 0xffff;
  DAT_18006f894 = DAT_18006f894 + (DAT_18006fa70 >> 2) & 0xffff;
  return (float)DAT_18006fa70 / 65535.0;
}

