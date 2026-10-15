/*
 * FUN_140001418 at 140001418
 * bool __cdecl FUN_140001418(longlong param_1, int param_2, HDC param_3)
 * Address ranges: 140001418-140001553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140001418(longlong param_1,int param_2,HDC param_3)

{
  int iVar1;
  HWND hWnd;
  HBRUSH pHVar2;
  RECT local_50;
  RECT local_40;
  tagRECT local_30;
  
  if (param_2 == 0x14) {
    hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),1);
    GetWindowRect(hWnd,&local_30);
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_30,2);
    iVar1 = MulDiv(8,*(int *)(param_1 + 0x100),0x60);
    iVar1 = local_30.top - iVar1;
    GetClientRect(*(HWND *)(param_1 + 0x18),&local_30);
    GetClientRect(*(HWND *)(param_1 + 0x18),&local_30);
    pHVar2 = GetStockObject(0);
    local_40.left = 0;
    local_40.top = 0;
    local_40.right = local_30.right - local_30.left;
    local_40.bottom = iVar1;
    FillRect(param_3,&local_40,pHVar2);
    local_50.left = 0;
    local_50.bottom = local_30.bottom - local_30.top;
    local_50.top = iVar1;
    local_50.right = local_30.right - local_30.left;
    pHVar2 = GetSysColorBrush(0xf);
    FillRect(param_3,&local_50,pHVar2);
  }
  return param_2 == 0x14;
}

