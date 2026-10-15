/*
 * FUN_180007d48 at 180007d48
 * undefined8 __cdecl FUN_180007d48(longlong param_1)
 * Address ranges: 180007d48-180007f6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180007d48(longlong param_1)

{
  HANDLE pvVar1;
  bool bVar2;
  ATOM AVar3;
  int iVar4;
  BOOL BVar5;
  HWND pHVar6;
  DWORD local_d0 [2];
  WNDCLASSW local_c8;
  tagMSG tStack_80;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_c8.hInstance = (HINSTANCE)0x0;
  local_c8.hIcon = (HICON)0x0;
  local_c8.style = 3;
  local_c8.lpfnWndProc = FUN_180007830;
  local_c8.cbClsExtra = 0;
  local_c8.cbWndExtra = 0;
  local_c8.hCursor = (HCURSOR)0x0;
  local_c8.hbrBackground = GetStockObject(4);
  local_c8.lpszClassName = L"DGVOODOOCOMM";
  local_c8.lpszMenuName = (LPCWSTR)0x0;
  AVar3 = RegisterClassW(&local_c8);
  if (AVar3 != 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    pHVar6 = CreateWindowExW(0,L"DGVOODOOCOMM",(LPCWSTR)&local_50,0,-0x80000000,-0x80000000,
                             -0x80000000,-0x80000000,(HWND)0xfffffffffffffffd,(HMENU)0x0,
                             (HINSTANCE)0x0,(LPVOID)0x0);
    *(HWND *)(param_1 + 0x380) = pHVar6;
    PeekMessageW(&tStack_80,(HWND)0x0,0,0,0);
    pvVar1 = DAT_18006c8e0;
    if (*(longlong *)(param_1 + 0x380) != 0) {
      *(undefined1 *)(param_1 + 0x7e8) = 1;
      SetEvent(pvVar1);
      iVar4 = GetMessageW(&tStack_80,(HWND)0x0,0,0);
      while (0 < iVar4) {
        TranslateMessage(&tStack_80);
        DispatchMessageW(&tStack_80);
        iVar4 = GetMessageW(&tStack_80,(HWND)0x0,0,0);
      }
      BVar5 = IsWindow(*(HWND *)(param_1 + 0x3b0));
      bVar2 = BVar5 == 1;
      if (BVar5 == 1) {
        local_d0[0] = 0;
        GetWindowThreadProcessId(*(HWND *)(param_1 + 0x3b0),local_d0);
        bVar2 = local_d0[0] == *(DWORD *)(param_1 + 0x3b8);
      }
      if ((*(longlong *)(param_1 + 0x3b0) != 0) && (!bVar2)) {
        FUN_1800077b0(param_1,1);
      }
      DestroyWindow(*(HWND *)(param_1 + 0x380));
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
    UnregisterClassW((LPCWSTR)AVar3,(HINSTANCE)0x0);
  }
  pvVar1 = DAT_18006c8e0;
  *(undefined1 *)(param_1 + 0x7e8) = 0;
  SetEvent(pvVar1);
  return 1;
}

