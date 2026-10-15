/*
 * FUN_1002aa70 at 1002aa70
 * undefined __stdcall FUN_1002aa70(void)
 * Address ranges: 1002aa70-1002aad0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002aa70(void)

{
  LARGE_INTEGER local_c;
  
  if (DAT_1005b8b8 == '\0') {
    QueryPerformanceCounter(&local_c);
    DAT_1005b8b4 = (uint)(ushort)local_c.s.LowPart._0_2_;
    DAT_1005b8b8 = '\x01';
  }
  DAT_1005b8b4 = DAT_1005b8b4 * DAT_1005b8b4 + DAT_1005b730 & 0xffff;
  DAT_1005b730 = (DAT_1005b8b4 >> 2) + DAT_1005b730 & 0xffff;
  return;
}

