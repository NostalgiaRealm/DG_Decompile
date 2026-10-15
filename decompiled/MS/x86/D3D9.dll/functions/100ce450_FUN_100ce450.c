/*
 * FUN_100ce450 at 100ce450
 * undefined __stdcall FUN_100ce450(void)
 * Address ranges: 100ce450-100ce4a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ce450(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  
  if (DAT_100e3a40 == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        puVar4 = &DAT_100e3a3e;
        puVar3 = &DAT_100e3a3c;
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,puVar3,puVar4);
      }
      FreeLibrary(hModule);
    }
    DAT_100e3a40 = '\x01';
  }
  return;
}

