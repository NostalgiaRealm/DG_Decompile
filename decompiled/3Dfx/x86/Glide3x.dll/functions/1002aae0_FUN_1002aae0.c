/*
 * FUN_1002aae0 at 1002aae0
 * undefined4 __stdcall FUN_1002aae0(void)
 * Address ranges: 1002aae0-1002ab40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002aae0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  short *psVar4;
  
  if (DAT_1005b8ac == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        psVar4 = &DAT_1005b8aa;
        puVar3 = &DAT_1005b8a8;
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,puVar3,psVar4);
      }
      FreeLibrary(hModule);
    }
    DAT_1005b8ac = '\x01';
  }
  return CONCAT31(0xaa,DAT_1005b8aa == -0x559c);
}

