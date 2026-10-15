/*
 * FUN_10035b70 at 10035b70
 * undefined4 __stdcall FUN_10035b70(void)
 * Address ranges: 10035b70-10035bd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10035b70(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  short *psVar4;
  
  if (DAT_10059768 == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        psVar4 = &DAT_10059766;
        puVar3 = &DAT_10059764;
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,puVar3,psVar4);
      }
      FreeLibrary(hModule);
    }
    DAT_10059768 = '\x01';
  }
  return CONCAT31(0xaa,DAT_10059766 == -0x559c);
}

