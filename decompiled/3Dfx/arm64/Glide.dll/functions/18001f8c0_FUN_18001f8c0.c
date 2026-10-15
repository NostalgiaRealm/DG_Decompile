/*
 * FUN_18001f8c0 at 18001f8c0
 * HWND __cdecl FUN_18001f8c0(void)
 * Address ranges: 18001f8c0-18001f9cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND FUN_18001f8c0(void)

{
  HINSTANCE hInstance;
  HWND hWnd;
  HANDLE lParam;
  WNDCLASSW local_60;
  
  hInstance = DAT_18006c860;
  local_60.hCursor = (HCURSOR)0x0;
  local_60.style = 3;
  local_60.hInstance = DAT_18006c860;
  local_60.hIcon = (HICON)0x0;
  local_60.lpfnWndProc = DefWindowProcW_exref;
  local_60.cbClsExtra = 0;
  local_60.cbWndExtra = 0;
  local_60.hbrBackground = GetStockObject(4);
  local_60.lpszClassName = L"DGVOODOO";
  local_60.lpszMenuName = (LPCWSTR)0x0;
  RegisterClassW(&local_60);
  hWnd = CreateWindowExW(0x40000,L"DGVOODOO",L"dgVoodoo 2.87",0x10cf0000,-0x80000000,-0x80000000,100
                         ,100,(HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
  lParam = LoadImageW(hInstance,(LPCWSTR)0x65,1,0,0,0x8040);
  SendMessageW(hWnd,0x80,1,(LPARAM)lParam);
  SendMessageW(hWnd,0x80,0,(LPARAM)lParam);
  return hWnd;
}

