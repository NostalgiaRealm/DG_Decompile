/*
 * FUN_100607b8 at 100607b8
 * undefined4 __thiscall FUN_100607b8(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100607b8-10060848
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100607b8(void *this,undefined4 param_1,undefined4 param_2)

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
        BVar2 = FUN_1005064a((void *)((int)this + 4),&local_10);
        goto LAB_10060841;
      }
    }
    BVar2 = FreeLibrary(hModule);
  }
LAB_10060841:
  return CONCAT31((int3)((uint)BVar2 >> 8),1);
}

