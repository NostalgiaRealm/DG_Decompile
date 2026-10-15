/*
 * FUN_18001093c at 18001093c
 * HWND __fastcall FUN_18001093c(void)
 * Address ranges: 18001093c-180010a72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HWND FUN_18001093c(void)

{
  HINSTANCE hInstance;
  HWND hWnd;
  HANDLE lParam;
  WNDCLASSW local_58;
  
  hInstance = DAT_18006d9d0;
  local_58.style = 3;
  local_58.lpfnWndProc = DefWindowProcW_exref;
  local_58.hInstance = DAT_18006d9d0;
  local_58.hIcon = (HICON)0x0;
  local_58.hCursor = (HCURSOR)0x0;
  local_58.cbClsExtra = 0;
  local_58.cbWndExtra = 0;
  local_58.hbrBackground = GetStockObject(4);
  local_58.lpszMenuName = (LPCWSTR)0x0;
  local_58.lpszClassName = L"DGVOODOO";
  RegisterClassW(&local_58);
  hWnd = CreateWindowExW(0x40000,L"DGVOODOO",L"dgVoodoo 2.87",0x10cf0000,-0x80000000,-0x80000000,100
                         ,100,(HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
  lParam = LoadImageW(hInstance,(LPCWSTR)0x65,1,0,0,0x8040);
  SendMessageW(hWnd,0x80,1,(LPARAM)lParam);
  SendMessageW(hWnd,0x80,0,(LPARAM)lParam);
  return hWnd;
}

