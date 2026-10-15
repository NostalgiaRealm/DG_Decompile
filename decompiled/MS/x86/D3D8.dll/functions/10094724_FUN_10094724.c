/*
 * FUN_10094724 at 10094724
 * undefined4 __fastcall FUN_10094724(int param_1)
 * Address ranges: 10094724-10094842
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10094724(int param_1)

{
  FARPROC in_EAX;
  HMODULE pHVar1;
  FARPROC pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((*(int *)(param_1 + 0x29c) == 0) && (*(int *)(param_1 + 0x2b8) == 0)) {
    pHVar1 = LoadLibraryA("DXGI.DLL");
    *(HMODULE *)(param_1 + 0x29c) = pHVar1;
    uVar4 = 0;
    if (pHVar1 != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(pHVar1,"CreateDXGIFactory1");
      *(FARPROC *)(param_1 + 0x2a8) = pFVar2;
      if (pFVar2 != (FARPROC)0x0) {
        pHVar1 = LoadLibraryA(*(LPCSTR *)(*(int *)(param_1 + 0x4e8) + 8));
        *(HMODULE *)(param_1 + 0x2b8) = pHVar1;
        if (pHVar1 != (HMODULE)0x0) {
          pFVar2 = GetProcAddress(pHVar1,*(LPCSTR *)(*(int *)(param_1 + 0x4e8) + 0xc));
          *(FARPROC *)(param_1 + 700) = pFVar2;
          if (pFVar2 != (FARPROC)0x0) {
            uVar3 = FUN_100a0328(param_1);
            if ((char)uVar3 != '\0') {
              pHVar1 = LoadLibraryA("winmm.dll");
              *(HMODULE *)(param_1 + 0x2c8) = pHVar1;
              in_EAX = (FARPROC)0x0;
              if (pHVar1 != (HMODULE)0x0) {
                pFVar2 = GetProcAddress(pHVar1,"timeBeginPeriod");
                *(FARPROC *)(param_1 + 0x2cc) = pFVar2;
                in_EAX = GetProcAddress(*(HMODULE *)(param_1 + 0x2c8),"timeEndPeriod");
                *(FARPROC *)(param_1 + 0x2d0) = in_EAX;
                if ((*(int *)(param_1 + 0x2cc) == 0) || (in_EAX == (FARPROC)0x0)) {
                  *(undefined4 *)(param_1 + 0x2cc) = 0;
                  *(undefined4 *)(param_1 + 0x2d0) = 0;
                }
              }
              goto LAB_1009480e;
            }
          }
          FreeLibrary(*(HMODULE *)(param_1 + 0x2b8));
          *(undefined4 *)(param_1 + 0x2b8) = 0;
        }
      }
      uVar4 = FreeLibrary(*(HMODULE *)(param_1 + 0x29c));
      *(undefined4 *)(param_1 + 0x29c) = 0;
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_1009480e:
    uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  return uVar4;
}

