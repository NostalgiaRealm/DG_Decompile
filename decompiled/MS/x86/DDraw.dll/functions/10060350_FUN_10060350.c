/*
 * FUN_10060350 at 10060350
 * DWORD __fastcall FUN_10060350(int param_1)
 * Address ranges: 10060350-10060379
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD __fastcall FUN_10060350(int param_1)

{
  BOOL BVar1;
  LARGE_INTEGER local_c;
  
  BVar1 = GetFileSizeEx(*(HANDLE *)(param_1 + 4),&local_c);
  if ((BVar1 != 0) && (local_c.s.HighPart == 0)) {
    return local_c.s.LowPart;
  }
  return 0;
}

