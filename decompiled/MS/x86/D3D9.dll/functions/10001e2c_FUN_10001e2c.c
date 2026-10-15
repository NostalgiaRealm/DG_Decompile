/*
 * FUN_10001e2c at 10001e2c
 * undefined __stdcall FUN_10001e2c(void)
 * Address ranges: 10001e2c-10001ed5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001e2c(void)

{
  WCHAR local_20c [260];
  
  if (DAT_100dea60 == (HMODULE)0x0) {
    GetModuleFileNameW(DAT_100dea9c,local_20c,0x104);
    PathRemoveFileSpecW(local_20c);
    PathAppendW(local_20c,L"DDRAW.DLL");
    DAT_100dea60 = LoadLibraryW(local_20c);
    if (DAT_100dea60 == (HMODULE)0x0) {
      GetModuleFileNameW((HMODULE)0x0,local_20c,0x104);
      PathRemoveFileSpecW(local_20c);
      PathAppendW(local_20c,L"DDRAW.DLL");
      DAT_100dea60 = LoadLibraryW(local_20c);
    }
  }
  return;
}

