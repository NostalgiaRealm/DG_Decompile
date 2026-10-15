/*
 * FUN_10036d3a at 10036d3a
 * undefined __cdecl FUN_10036d3a(LPCSTR param_1)
 * Address ranges: 10036d3a-10036d7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_10036d3a(LPCSTR param_1)

{
  int local_2004 [2047];
  undefined4 uStack_8;
  
  uStack_8 = 0x10036d47;
  FUN_10060d45(local_2004,0,0x2000);
  FUN_10060bb6((LPSTR)local_2004,param_1,&stack0x00000008);
  OutputDebugStringA((LPCSTR)local_2004);
  return;
}

