/*
 * FUN_1800fa920 at 1800fa920
 * char __fastcall FUN_1800fa920(void)
 * Address ranges: 1800fa920-1800fa99f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800fa920(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  
  if (DAT_180111ecc == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,&DAT_180111ec8,&DAT_180111eca);
      }
      FreeLibrary(hModule);
    }
    DAT_180111ecc = '\x01';
  }
  return DAT_180111ecc;
}

