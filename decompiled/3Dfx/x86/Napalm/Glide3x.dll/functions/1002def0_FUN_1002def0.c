/*
 * FUN_1002def0 at 1002def0
 * undefined4 __stdcall FUN_1002def0(void)
 * Address ranges: 1002def0-1002df50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002def0(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  short *psVar4;
  
  if (DAT_1005fa8c == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        psVar4 = &DAT_1005fa8a;
        puVar3 = &DAT_1005fa88;
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,puVar3,psVar4);
      }
      FreeLibrary(hModule);
    }
    DAT_1005fa8c = '\x01';
  }
  return CONCAT31(0xaa,DAT_1005fa8a == -0x559c);
}

