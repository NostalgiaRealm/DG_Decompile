/*
 * FUN_1002de80 at 1002de80
 * undefined __stdcall FUN_1002de80(void)
 * Address ranges: 1002de80-1002dee0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002de80(void)

{
  LARGE_INTEGER local_c;
  
  if (DAT_1005fa98 == '\0') {
    QueryPerformanceCounter(&local_c);
    DAT_1005fa94 = (uint)(ushort)local_c.s.LowPart._0_2_;
    DAT_1005fa98 = '\x01';
  }
  DAT_1005fa94 = DAT_1005fa94 * DAT_1005fa94 + DAT_1005f908 & 0xffff;
  DAT_1005f908 = (DAT_1005fa94 >> 2) + DAT_1005f908 & 0xffff;
  return;
}

