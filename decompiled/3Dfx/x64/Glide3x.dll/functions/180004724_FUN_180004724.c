/*
 * FUN_180004724 at 180004724
 * undefined8 __fastcall FUN_180004724(longlong param_1)
 * Address ranges: 180004724-18000488d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180004724(longlong param_1)

{
  HANDLE pvVar1;
  ATOM AVar2;
  BOOL BVar3;
  HWND pHVar4;
  WNDCLASSW local_c8;
  tagMSG local_78;
  WCHAR local_48 [16];
  
  local_c8.style = 3;
  local_c8.cbClsExtra = 0;
  local_c8.cbWndExtra = 0;
  local_c8.hInstance = (HINSTANCE)0x0;
  local_c8.lpfnWndProc = FUN_1800046d4;
  local_c8.hIcon = (HICON)0x0;
  local_c8.hCursor = (HCURSOR)0x0;
  local_c8.hbrBackground = GetStockObject(4);
  local_c8.lpszMenuName = (LPCWSTR)0x0;
  local_c8.lpszClassName = L"DGVOODOOCOMM";
  AVar2 = RegisterClassW(&local_c8);
  if (AVar2 != 0) {
    local_48[0] = L'\0';
    local_48[1] = L'\0';
    local_48[2] = L'\0';
    local_48[3] = L'\0';
    local_48[4] = L'\0';
    local_48[5] = L'\0';
    local_48[6] = L'\0';
    local_48[7] = L'\0';
    local_48[8] = L'\0';
    local_48[9] = L'\0';
    local_48[10] = L'\0';
    local_48[0xb] = L'\0';
    local_48[0xc] = L'\0';
    local_48[0xd] = L'\0';
    local_48[0xe] = L'\0';
    local_48[0xf] = L'\0';
    pHVar4 = CreateWindowExW(0,L"DGVOODOOCOMM",local_48,0,-0x80000000,-0x80000000,-0x80000000,
                             -0x80000000,(HWND)0xfffffffffffffffd,(HMENU)0x0,(HINSTANCE)0x0,
                             (LPVOID)0x0);
    *(HWND *)(param_1 + 0x380) = pHVar4;
    PeekMessageW(&local_78,(HWND)0x0,0,0,0);
    pvVar1 = DAT_18006da70;
    if (*(longlong *)(param_1 + 0x380) != 0) {
      *(undefined1 *)(param_1 + 0x7e8) = 1;
      SetEvent(pvVar1);
      while( true ) {
        BVar3 = GetMessageW(&local_78,(HWND)0x0,0,0);
        if (BVar3 < 1) break;
        TranslateMessage(&local_78);
        DispatchMessageW(&local_78);
      }
      FUN_180004170(param_1);
      DestroyWindow(*(HWND *)(param_1 + 0x380));
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
    UnregisterClassW((LPCWSTR)(ulonglong)AVar2,(HINSTANCE)0x0);
  }
  pvVar1 = DAT_18006da70;
  *(undefined1 *)(param_1 + 0x7e8) = 0;
  SetEvent(pvVar1);
  return 1;
}

