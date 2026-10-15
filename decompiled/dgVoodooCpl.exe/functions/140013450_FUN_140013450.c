/*
 * FUN_140013450 at 140013450
 * undefined4 __fastcall FUN_140013450(longlong param_1)
 * Address ranges: 140013450-140013574
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_140013450(longlong param_1)

{
  uint uVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  
  if ((*(longlong *)(param_1 + 0x290) == 0) && (*(longlong *)(param_1 + 0x2c8) == 0)) {
    pHVar2 = LoadLibraryA("DXGI.DLL");
    *(HMODULE *)(param_1 + 0x290) = pHVar2;
    uVar1 = (uint)pHVar2;
    if (pHVar2 == (HMODULE)0x0) goto LAB_14001356d;
    pFVar3 = GetProcAddress(pHVar2,"CreateDXGIFactory1");
    *(FARPROC *)(param_1 + 0x2a8) = pFVar3;
    if (pFVar3 != (FARPROC)0x0) {
      pHVar2 = LoadLibraryA(*(LPCSTR *)(*(longlong *)(param_1 + 0x308) + 0x10));
      *(HMODULE *)(param_1 + 0x2c8) = pHVar2;
      if (pHVar2 != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(pHVar2,*(LPCSTR *)(*(longlong *)(param_1 + 0x308) + 0x18));
        *(FARPROC *)(param_1 + 0x2d0) = pFVar3;
        if (pFVar3 != (FARPROC)0x0) goto LAB_14001350c;
        FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
        *(undefined8 *)(param_1 + 0x2c8) = 0;
      }
    }
    pHVar2 = *(HMODULE *)(param_1 + 0x290);
  }
  else {
LAB_14001350c:
    uVar1 = (**(code **)(param_1 + 0x2a8))(&DAT_140028f80,param_1 + 0x2d8);
    if (-1 < (int)uVar1) {
      *(undefined1 *)(param_1 + 0x300) = 1;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    if (*(HMODULE *)(param_1 + 0x2c8) != (HMODULE)0x0) {
      uVar1 = FreeLibrary(*(HMODULE *)(param_1 + 0x2c8));
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    pHVar2 = *(HMODULE *)(param_1 + 0x290);
    if (pHVar2 == (HMODULE)0x0) goto LAB_14001356d;
  }
  uVar1 = FreeLibrary(pHVar2);
  *(undefined8 *)(param_1 + 0x290) = 0;
LAB_14001356d:
  return uVar1 & 0xffffff00;
}

