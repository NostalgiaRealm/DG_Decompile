/*
 * FUN_14000118c at 14000118c
 * bool __fastcall FUN_14000118c(longlong param_1, int param_2, HDC param_3)
 * Address ranges: 14000118c-140001276
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_14000118c(longlong param_1,int param_2,HDC param_3)

{
  int iVar1;
  HWND hWnd;
  HBRUSH pHVar2;
  RECT local_58;
  RECT local_48;
  tagRECT local_38;
  
  if (param_2 == 0x14) {
    hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),1);
    GetWindowRect(hWnd,&local_38);
    MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 0x18),(LPPOINT)&local_38,2);
    iVar1 = MulDiv(8,*(int *)(param_1 + 0x100),0x60);
    iVar1 = local_38.top - iVar1;
    GetClientRect(*(HWND *)(param_1 + 0x18),&local_38);
    GetClientRect(*(HWND *)(param_1 + 0x18),&local_38);
    pHVar2 = GetStockObject(0);
    local_58.left = 0;
    local_58.top = 0;
    local_58.right = local_38.right - local_38.left;
    local_58.bottom = iVar1;
    FillRect(param_3,&local_58,pHVar2);
    local_48.bottom = local_38.bottom - local_38.top;
    local_48.left = 0;
    local_48.top = iVar1;
    local_48.right = local_38.right - local_38.left;
    pHVar2 = GetSysColorBrush(0xf);
    FillRect(param_3,&local_48,pHVar2);
  }
  return param_2 == 0x14;
}

