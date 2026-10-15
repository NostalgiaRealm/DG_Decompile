/*
 * FUN_18005de30 at 18005de30
 * char __fastcall FUN_18005de30(void)
 * Address ranges: 18005de30-18005deaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18005de30(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  
  if (DAT_18006c86c == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,&DAT_18006c868,&DAT_18006c86a);
      }
      FreeLibrary(hModule);
    }
    DAT_18006c86c = '\x01';
  }
  return DAT_18006c86c;
}

