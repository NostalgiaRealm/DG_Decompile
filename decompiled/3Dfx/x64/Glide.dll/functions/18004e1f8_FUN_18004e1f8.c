/*
 * FUN_18004e1f8 at 18004e1f8
 * ulonglong __fastcall FUN_18004e1f8(ulonglong param_1)
 * Address ranges: 18004e1f8-18004e4d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18004e1f8(ulonglong param_1)

{
  LARGE_INTEGER *lpFrequency;
  LPCSTR pCVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ATOM AVar4;
  int iVar5;
  BOOL BVar6;
  HMODULE pHVar7;
  FARPROC pFVar8;
  undefined8 uVar9;
  undefined4 extraout_var;
  ulonglong uVar10;
  int local_res8 [2];
  longlong *local_res10;
  WNDCLASSEXA local_68;
  
  if ((*(longlong *)(param_1 + 0x2a0) == 0) && (*(longlong *)(param_1 + 0x2d8) == 0)) {
    pHVar7 = LoadLibraryA("DXGI.DLL");
    *(HMODULE *)(param_1 + 0x2a0) = pHVar7;
    uVar10 = 0;
    if (pHVar7 == (HMODULE)0x0) goto LAB_18004e4c1;
    pFVar8 = GetProcAddress(pHVar7,"CreateDXGIFactory1");
    *(FARPROC *)(param_1 + 0x2b8) = pFVar8;
    if (pFVar8 != (FARPROC)0x0) {
      pHVar7 = LoadLibraryA(*(LPCSTR *)(*(longlong *)(param_1 + 0x680) + 0x10));
      *(HMODULE *)(param_1 + 0x2d8) = pHVar7;
      if (pHVar7 != (HMODULE)0x0) {
        pFVar8 = GetProcAddress(pHVar7,*(LPCSTR *)(*(longlong *)(param_1 + 0x680) + 0x18));
        *(FARPROC *)(param_1 + 0x2e0) = pFVar8;
        if ((pFVar8 != (FARPROC)0x0) && (uVar9 = FUN_180053bfc(param_1), (char)uVar9 != '\0')) {
          pHVar7 = LoadLibraryA("winmm.dll");
          *(HMODULE *)(param_1 + 0x2f8) = pHVar7;
          if (pHVar7 != (HMODULE)0x0) {
            pFVar8 = GetProcAddress(pHVar7,"timeBeginPeriod");
            *(FARPROC *)(param_1 + 0x300) = pFVar8;
            pFVar8 = GetProcAddress(*(HMODULE *)(param_1 + 0x2f8),"timeEndPeriod");
            *(FARPROC *)(param_1 + 0x308) = pFVar8;
            if ((*(longlong *)(param_1 + 0x300) == 0) || (pFVar8 == (FARPROC)0x0)) {
              *(undefined8 *)(param_1 + 0x300) = 0;
              *(undefined8 *)(param_1 + 0x308) = 0;
            }
          }
          goto LAB_18004e31f;
        }
        FreeLibrary(*(HMODULE *)(param_1 + 0x2d8));
        *(undefined8 *)(param_1 + 0x2d8) = 0;
      }
    }
    BVar6 = FreeLibrary(*(HMODULE *)(param_1 + 0x2a0));
    uVar10 = CONCAT44(extraout_var,BVar6);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  else {
LAB_18004e31f:
    local_68.cbSize = 0x50;
    local_68.style = 0;
    local_68.cbClsExtra = 0;
    local_68.cbWndExtra = 0;
    pCVar1 = (LPCSTR)**(undefined8 **)(param_1 + 0x680);
    local_68.lpfnWndProc = (WNDPROC)(-(ulonglong)(param_1 != 0xfffffffffffffff8) & param_1);
    local_68.hInstance = GetModuleHandleW((LPCWSTR)0x0);
    local_68.hIcon = (HICON)0x0;
    local_68.hCursor = (HCURSOR)0x0;
    local_68.hbrBackground = (HBRUSH)0x0;
    local_68.lpszMenuName = (LPCSTR)0x0;
    local_68.hIconSm = (HICON)0x0;
    local_68.lpszClassName = pCVar1;
    AVar4 = RegisterClassExA(&local_68);
    *(ATOM *)(param_1 + 0xc) = AVar4;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (AVar4 != 0) {
      iVar5 = (**(code **)(param_1 + 0x2b8))(&DAT_180064a58,(undefined8 *)(param_1 + 0x2e8));
      if ((-1 < iVar5) && (uVar9 = FUN_180050fa4(param_1), (char)uVar9 != '\0')) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
        puVar2 = *(undefined8 **)(param_1 + 0x2e8);
        *(undefined8 *)(param_1 + 0x618) = 0;
        *(undefined1 *)(param_1 + 0x313) = 0;
        local_res10 = (longlong *)0x0;
        iVar5 = (**(code **)*puVar2)(puVar2,&DAT_1800605a0,&local_res10);
        if (-1 < iVar5) {
          local_res8[0] = 0;
          iVar5 = (**(code **)(*local_res10 + 0xe0))(local_res10,0,local_res8,4);
          if (-1 < iVar5) {
            *(bool *)(param_1 + 0x313) = local_res8[0] == 1;
          }
          (**(code **)(*local_res10 + 0x10))();
        }
        lpFrequency = (LARGE_INTEGER *)(param_1 + 0x6a0);
        QueryPerformanceFrequency(lpFrequency);
        *(undefined1 *)(param_1 + 0x314) = 0;
        lVar3 = lpFrequency->QuadPart;
        *(undefined1 *)(param_1 + 0x310) = 1;
        lpFrequency->QuadPart = lpFrequency->QuadPart / 1000;
        return CONCAT71((int7)((ulonglong)(lVar3 * 0x20c49ba5e353f7cf) >> 8),1);
      }
      if (*(short *)(param_1 + 0xc) != 0) {
        pHVar7 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)(param_1 + 0xc),pHVar7);
        if (*(HMODULE *)(param_1 + 0x10) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)(param_1 + 0x10));
          *(undefined8 *)(param_1 + 0x10) = 0;
        }
      }
    }
    uVar10 = FUN_18004e0ac(param_1);
  }
LAB_18004e4c1:
  return uVar10 & 0xffffffffffffff00;
}

