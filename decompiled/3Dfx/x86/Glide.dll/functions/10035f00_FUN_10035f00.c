/*
 * FUN_10035f00 at 10035f00
 * undefined4 __stdcall FUN_10035f00(void)
 * Address ranges: 10035f00-10035f60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10035f00(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  undefined *puVar3;
  short *psVar4;
  
  if (DAT_10059798 == '\0') {
    hModule = LoadLibraryA("Kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
      if (pFVar1 != (FARPROC)0x0) {
        psVar4 = &DAT_10059796;
        puVar3 = &DAT_10059794;
        pvVar2 = GetCurrentProcess();
        (*pFVar1)(pvVar2,puVar3,psVar4);
      }
      FreeLibrary(hModule);
    }
    DAT_10059798 = '\x01';
  }
  return CONCAT31(0xaa,DAT_10059796 == -0x559c);
}

