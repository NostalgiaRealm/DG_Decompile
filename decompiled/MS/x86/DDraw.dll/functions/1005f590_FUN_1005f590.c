/*
 * FUN_1005f590 at 1005f590
 * undefined4 __stdcall FUN_1005f590(void)
 * Address ranges: 1005f590-1005f5f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005f590(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  short *psVar4;
  
  if (DAT_10070a28 == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        psVar4 = &DAT_10070a26;
        puVar3 = &DAT_10070a24;
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,puVar3,psVar4);
      }
      FreeLibrary(hModule);
    }
    DAT_10070a28 = '\x01';
  }
  return CONCAT31(0xaa,DAT_10070a26 == -0x559c);
}

