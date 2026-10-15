/*
 * FUN_1005c340 at 1005c340
 * undefined __stdcall FUN_1005c340(void)
 * Address ranges: 1005c340-1005c391
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005c340(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  
  if (DAT_1006bbe0 == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        puVar4 = &DAT_1006bbde;
        puVar3 = &DAT_1006bbdc;
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,puVar3,puVar4);
      }
      FreeLibrary(hModule);
    }
    DAT_1006bbe0 = '\x01';
  }
  return;
}

