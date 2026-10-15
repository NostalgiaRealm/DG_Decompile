/*
 * FUN_100cf903 at 100cf903
 * undefined4 __thiscall FUN_100cf903(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100cf903-100cf993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100cf903(void *this,undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  int iVar1;
  BOOL BVar2;
  CHAR local_114 [260];
  HMODULE local_10;
  FARPROC local_c;
  FARPROC local_8;
  
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0x287;
  hModule = LoadLibraryA("SampleAddon.dll");
  BVar2 = 0;
  if (hModule != (HMODULE)0x0) {
    local_10 = hModule;
    GetModuleFileNameA(hModule,local_114,0x104);
    local_c = GetProcAddress(hModule,"AddOnInit");
    local_8 = GetProcAddress(hModule,"AddOnExit");
    if ((local_c != (FARPROC)0x0) && (local_8 != (FARPROC)0x0)) {
      iVar1 = (*local_c)(this);
      if ((char)iVar1 != '\0') {
        BVar2 = FUN_100c1960((void *)((int)this + 4),&local_10);
        goto LAB_100cf98c;
      }
    }
    BVar2 = FreeLibrary(hModule);
  }
LAB_100cf98c:
  return CONCAT31((int3)((uint)BVar2 >> 8),1);
}

