/*
 * FUN_10003287 at 10003287
 * undefined4 __stdcall FUN_10003287(void * param_1)
 * Address ranges: 10003287-100033af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003287(void *param_1)

{
  HANDLE pvVar1;
  ATOM AVar2;
  HWND pHVar3;
  BOOL BVar4;
  int iVar5;
  WCHAR *pWVar6;
  WNDCLASSW local_6c;
  WCHAR local_44 [16];
  tagMSG local_24;
  uint local_8;
  
  local_6c.style = 3;
  local_6c.lpfnWndProc = FUN_1000319e;
  local_6c.cbClsExtra = 0;
  local_6c.cbWndExtra = 0;
  local_6c.hInstance = (HINSTANCE)0x0;
  local_6c.hIcon = (HICON)0x0;
  local_6c.hCursor = (HCURSOR)0x0;
  local_6c.hbrBackground = GetStockObject(4);
  local_6c.lpszMenuName = (LPCWSTR)0x0;
  local_6c.lpszClassName = L"DGVOODOOCOMM";
  AVar2 = RegisterClassW(&local_6c);
  local_8 = (uint)AVar2;
  if (AVar2 != 0) {
    pWVar6 = local_44;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      pWVar6[0] = L'\0';
      pWVar6[1] = L'\0';
      pWVar6 = pWVar6 + 2;
    }
    pHVar3 = CreateWindowExW(0,L"DGVOODOOCOMM",local_44,0,-0x80000000,-0x80000000,-0x80000000,
                             -0x80000000,(HWND)0xfffffffd,(HMENU)0x0,(HINSTANCE)0x0,(LPVOID)0x0);
    *(HWND *)((int)param_1 + 0x314) = pHVar3;
    PeekMessageW(&local_24,(HWND)0x0,0,0,0);
    pvVar1 = DAT_1005b8a4;
    if (*(int *)((int)param_1 + 0x314) != 0) {
      *(undefined1 *)((int)param_1 + 0x758) = 1;
      SetEvent(pvVar1);
      while( true ) {
        BVar4 = GetMessageW(&local_24,(HWND)0x0,0,0);
        if (BVar4 < 1) break;
        TranslateMessage(&local_24);
        DispatchMessageW(&local_24);
      }
      FUN_10002e07(param_1);
      DestroyWindow(*(HWND *)((int)param_1 + 0x314));
      *(undefined4 *)((int)param_1 + 0x314) = 0;
    }
    UnregisterClassW((LPCWSTR)(local_8 & 0xffff),(HINSTANCE)0x0);
  }
  pvVar1 = DAT_1005b8a4;
  *(undefined1 *)((int)param_1 + 0x758) = 0;
  SetEvent(pvVar1);
  return 1;
}

