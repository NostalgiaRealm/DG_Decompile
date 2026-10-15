/*
 * FUN_1001519b at 1001519b
 * undefined __thiscall FUN_1001519b(void * this, LPCSTR param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, undefined4 param_7)
 * Address ranges: 1001519b-10015233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001519b(void *this,LPCSTR param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  *(undefined1 *)((int)this + 0x58) = 0;
  *(bool *)((int)this + 0x59) = param_6 != 0;
  hModule = LoadLibraryA(param_1);
  *(HMODULE *)((int)this + 0x44) = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"_fxSplashInit@24");
    *(FARPROC *)((int)this + 0x48) = pFVar1;
    if (pFVar1 != (FARPROC)0x0) {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 0x44),"_fxSplashShutdown@0");
      *(FARPROC *)((int)this + 0x4c) = pFVar1;
      if (pFVar1 != (FARPROC)0x0) {
        pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 0x44),"_fxSplashPlug@16");
        *(FARPROC *)((int)this + 0x50) = pFVar1;
        if (pFVar1 != (FARPROC)0x0) {
          pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 0x44),"_fxSplash@20");
          *(FARPROC *)((int)this + 0x54) = pFVar1;
          if (pFVar1 != (FARPROC)0x0) {
            (**(code **)((int)this + 0x48))(param_2,param_3,param_4,param_5,1,param_7);
            return;
          }
        }
      }
    }
    FreeLibrary(*(HMODULE *)((int)this + 0x44));
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  return;
}

