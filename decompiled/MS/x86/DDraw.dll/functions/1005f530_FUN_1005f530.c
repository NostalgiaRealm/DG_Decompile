/*
 * FUN_1005f530 at 1005f530
 * undefined __stdcall FUN_1005f530(void)
 * Address ranges: 1005f530-1005f581
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005f530(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  
  if (DAT_10070a28 == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        puVar4 = &DAT_10070a26;
        puVar3 = &DAT_10070a24;
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,puVar3,puVar4);
      }
      FreeLibrary(hModule);
    }
    DAT_10070a28 = '\x01';
  }
  return;
}

