/*
 * FUN_10001f3b at 10001f3b
 * undefined __stdcall FUN_10001f3b(void)
 * Address ranges: 10001f3b-10001fe4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001f3b(void)

{
  WCHAR local_20c [260];
  
  if (DAT_100ba2a0 == (HMODULE)0x0) {
    GetModuleFileNameW(DAT_100ba2dc,local_20c,0x104);
    PathRemoveFileSpecW(local_20c);
    PathAppendW(local_20c,L"DDRAW.DLL");
    DAT_100ba2a0 = LoadLibraryW(local_20c);
    if (DAT_100ba2a0 == (HMODULE)0x0) {
      GetModuleFileNameW((HMODULE)0x0,local_20c,0x104);
      PathRemoveFileSpecW(local_20c);
      PathAppendW(local_20c,L"DDRAW.DLL");
      DAT_100ba2a0 = LoadLibraryW(local_20c);
    }
  }
  return;
}

