/*
 * FUN_180013370 at 180013370
 * undefined __cdecl FUN_180013370(longlong param_1, LPCSTR param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int param_7, undefined4 param_8)
 * Address ranges: 180013370-18001348b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180013370(longlong param_1,LPCSTR param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  *(bool *)(param_1 + 0x99) = param_7 != 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  hModule = LoadLibraryA(param_2);
  *(HMODULE *)(param_1 + 0x70) = hModule;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"_fxSplashInit@24");
    *(FARPROC *)(param_1 + 0x78) = pFVar1;
    if (pFVar1 != (FARPROC)0x0) {
      pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x70),"_fxSplashShutdown@0");
      *(FARPROC *)(param_1 + 0x80) = pFVar1;
      if (pFVar1 != (FARPROC)0x0) {
        pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x70),"_fxSplashPlug@16");
        *(FARPROC *)(param_1 + 0x88) = pFVar1;
        if (pFVar1 != (FARPROC)0x0) {
          pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x70),"_fxSplash@20");
          *(FARPROC *)(param_1 + 0x90) = pFVar1;
          if (pFVar1 != (FARPROC)0x0) {
            (**(code **)(param_1 + 0x78))(param_3,param_4,param_5,param_6,1,param_8);
            return;
          }
        }
      }
    }
    FreeLibrary(*(HMODULE *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}

