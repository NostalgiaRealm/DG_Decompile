/*
 * FUN_180051b60 at 180051b60
 * undefined8 __cdecl FUN_180051b60(WNDPROC param_1)
 * Address ranges: 180051b60-180051e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180051b60(WNDPROC param_1)

{
  ATOM AVar1;
  int iVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  ulonglong uVar5;
  LPCSTR pCVar6;
  int local_70 [2];
  longlong *local_68;
  WNDCLASSEXA local_60;
  
  if ((*(longlong *)(param_1 + 0x2a0) == 0) && (*(longlong *)(param_1 + 0x2d8) == 0)) {
    pHVar3 = LoadLibraryA("DXGI.DLL");
    *(HMODULE *)(param_1 + 0x2a0) = pHVar3;
    if (pHVar3 == (HMODULE)0x0) {
      return 0;
    }
    pFVar4 = GetProcAddress(pHVar3,"CreateDXGIFactory1");
    *(FARPROC *)(param_1 + 0x2b8) = pFVar4;
    if (pFVar4 != (FARPROC)0x0) {
      pHVar3 = LoadLibraryA(*(LPCSTR *)(*(longlong *)(param_1 + 0x680) + 0x10));
      *(HMODULE *)(param_1 + 0x2d8) = pHVar3;
      if (pHVar3 != (HMODULE)0x0) {
        pFVar4 = GetProcAddress(pHVar3,*(LPCSTR *)(*(longlong *)(param_1 + 0x680) + 0x18));
        *(FARPROC *)(param_1 + 0x2e0) = pFVar4;
        if ((pFVar4 != (FARPROC)0x0) && (uVar5 = FUN_180056248((longlong)param_1), (uVar5 & 1) != 0)
           ) {
          pHVar3 = LoadLibraryA("winmm.dll");
          *(HMODULE *)(param_1 + 0x2f8) = pHVar3;
          if (pHVar3 != (HMODULE)0x0) {
            pFVar4 = GetProcAddress(pHVar3,"timeBeginPeriod");
            *(FARPROC *)(param_1 + 0x300) = pFVar4;
            pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 0x2f8),"timeEndPeriod");
            *(FARPROC *)(param_1 + 0x308) = pFVar4;
            if ((*(longlong *)(param_1 + 0x300) == 0) || (pFVar4 == (FARPROC)0x0)) {
              *(undefined8 *)(param_1 + 0x300) = 0;
              *(undefined8 *)(param_1 + 0x308) = 0;
            }
          }
          goto LAB_180051c60;
        }
        FreeLibrary(*(HMODULE *)(param_1 + 0x2d8));
        *(undefined8 *)(param_1 + 0x2d8) = 0;
      }
    }
    FreeLibrary(*(HMODULE *)(param_1 + 0x2a0));
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  else {
LAB_180051c60:
    local_60.cbClsExtra = 0;
    local_60.cbWndExtra = 0;
    pCVar6 = (LPCSTR)**(undefined8 **)(param_1 + 0x680);
    local_60.lpfnWndProc = param_1;
    if (param_1 == (WNDPROC)0xfffffffffffffff8) {
      local_60.lpfnWndProc = (WNDPROC)0x0;
    }
    local_60.cbSize = 0x50;
    local_60.style = 0;
    local_60.hInstance = GetModuleHandleW((LPCWSTR)0x0);
    local_60.hCursor = (HCURSOR)0x0;
    local_60.hbrBackground = (HBRUSH)0x0;
    local_60.hIcon = (HICON)0x0;
    local_60.lpszMenuName = (LPCSTR)0x0;
    local_60.hIconSm = (HICON)0x0;
    local_60.lpszClassName = pCVar6;
    AVar1 = RegisterClassExA(&local_60);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(ATOM *)(param_1 + 0xc) = AVar1;
    if (AVar1 != 0) {
      iVar2 = (**(code **)(param_1 + 0x2b8))(&DAT_180066a68,param_1 + 0x2e8);
      if ((-1 < iVar2) && (uVar5 = FUN_1800544e8((longlong)param_1), (uVar5 & 1) != 0)) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
        *(undefined8 *)(param_1 + 0x618) = 0;
        param_1[0x313] = (code)0x0;
        local_68 = (longlong *)0x0;
        iVar2 = (**(code **)**(undefined8 **)(param_1 + 0x2e8))
                          (*(undefined8 **)(param_1 + 0x2e8),&DAT_1800624b0,&local_68);
        if (-1 < iVar2) {
          local_70[0] = 0;
          iVar2 = (**(code **)(*local_68 + 0xe0))(local_68,0,local_70,4);
          if (-1 < iVar2) {
            param_1[0x313] = (WNDPROC)(local_70[0] == 1);
          }
          (**(code **)(*local_68 + 0x10))();
        }
        QueryPerformanceFrequency((LARGE_INTEGER *)(param_1 + 0x6a0));
        param_1[0x314] = (code)0x0;
        *(longlong *)(param_1 + 0x6a0) = *(longlong *)(param_1 + 0x6a0) / 1000;
        param_1[0x310] = (code)0x1;
        return 1;
      }
      if (*(short *)(param_1 + 0xc) != 0) {
        pHVar3 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)(param_1 + 0xc),pHVar3);
        if (*(HMODULE *)(param_1 + 0x10) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)(param_1 + 0x10));
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
      }
    }
    FUN_180051a08((longlong)param_1);
  }
  return 0;
}

