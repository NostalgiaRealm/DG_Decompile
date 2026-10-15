/*
 * FUN_10019657 at 10019657
 * HWND __stdcall FUN_10019657(void)
 * Address ranges: 10019657-10019708
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND FUN_10019657(void)

{
  HINSTANCE hInstance;
  HWND hWnd;
  HANDLE lParam;
  WNDCLASSW local_2c;
  
  hInstance = DAT_1005974c;
  local_2c.style = 3;
  local_2c.lpfnWndProc = DefWindowProcW_exref;
  local_2c.cbClsExtra = 0;
  local_2c.cbWndExtra = 0;
  local_2c.hInstance = DAT_1005974c;
  local_2c.hIcon = (HICON)0x0;
  local_2c.hCursor = (HCURSOR)0x0;
  local_2c.hbrBackground = GetStockObject(4);
  local_2c.lpszMenuName = (LPCWSTR)0x0;
  local_2c.lpszClassName = L"DGVOODOO";
  RegisterClassW(&local_2c);
  hWnd = CreateWindowExW(0x40000,L"DGVOODOO",L"dgVoodoo 2.87",0x10cf0000,-0x80000000,-0x80000000,100
                         ,100,(HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
  lParam = LoadImageW(hInstance,(LPCWSTR)0x65,1,0,0,0x8040);
  SendMessageW(hWnd,0x80,1,(LPARAM)lParam);
  SendMessageW(hWnd,0x80,0,(LPARAM)lParam);
  return hWnd;
}

