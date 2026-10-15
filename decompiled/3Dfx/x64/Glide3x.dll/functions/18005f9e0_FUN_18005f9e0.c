/*
 * FUN_18005f9e0 at 18005f9e0
 * char __fastcall FUN_18005f9e0(void)
 * Address ranges: 18005f9e0-18005fa5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18005f9e0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  
  if (DAT_18006d9ac == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,&DAT_18006d9a8,&DAT_18006d9aa);
      }
      FreeLibrary(hModule);
    }
    DAT_18006d9ac = '\x01';
  }
  return DAT_18006d9ac;
}

