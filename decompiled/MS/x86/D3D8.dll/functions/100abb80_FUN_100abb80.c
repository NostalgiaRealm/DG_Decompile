/*
 * FUN_100abb80 at 100abb80
 * undefined __stdcall FUN_100abb80(void)
 * Address ranges: 100abb80-100abbd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100abb80(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  
  if (DAT_100bf01c == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        puVar4 = &DAT_100bf01a;
        puVar3 = &DAT_100bf018;
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,puVar3,puVar4);
      }
      FreeLibrary(hModule);
    }
    DAT_100bf01c = '\x01';
  }
  return;
}

