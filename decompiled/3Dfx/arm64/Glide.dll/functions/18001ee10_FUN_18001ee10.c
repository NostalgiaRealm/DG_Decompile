/*
 * FUN_18001ee10 at 18001ee10
 * undefined8 __cdecl FUN_18001ee10(longlong param_1)
 * Address ranges: 18001ee10-18001efb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001ee10(longlong param_1)

{
  HINSTANCE hInstance;
  int iVar1;
  HWND hWnd;
  HANDLE lParam;
  tagMSG tStack_a0;
  WNDCLASSW local_70;
  
  hInstance = DAT_18006c860;
  local_70.hCursor = (HCURSOR)0x0;
  local_70.style = 3;
  local_70.hInstance = DAT_18006c860;
  local_70.hIcon = (HICON)0x0;
  local_70.lpfnWndProc = DefWindowProcW_exref;
  local_70.cbClsExtra = 0;
  local_70.cbWndExtra = 0;
  local_70.hbrBackground = GetStockObject(4);
  local_70.lpszClassName = L"DGVOODOO";
  local_70.lpszMenuName = (LPCWSTR)0x0;
  RegisterClassW(&local_70);
  hWnd = CreateWindowExW(0x40000,L"DGVOODOO",L"dgVoodoo 2.87",0x10cf0000,-0x80000000,-0x80000000,100
                         ,100,(HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
  lParam = LoadImageW(hInstance,(LPCWSTR)0x65,1,0,0,0x8040);
  SendMessageW(hWnd,0x80,1,(LPARAM)lParam);
  SendMessageW(hWnd,0x80,0,(LPARAM)lParam);
  *(HWND *)(param_1 + 0x48) = hWnd;
  iVar1 = GetMessageW(&tStack_a0,hWnd,0,0);
  while (((iVar1 != 0 && (iVar1 != -1)) && (tStack_a0.message != 0x401))) {
    TranslateMessage(&tStack_a0);
    DispatchMessageW(&tStack_a0);
    iVar1 = GetMessageW(&tStack_a0,*(HWND *)(param_1 + 0x48),0,0);
  }
  DestroyWindow(*(HWND *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  return 0;
}

