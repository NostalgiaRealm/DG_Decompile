/*
 * FUN_14000f030 at 14000f030
 * undefined __fastcall FUN_14000f030(longlong * param_1)
 * Address ranges: 14000f030-14000f1d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000f030(longlong *param_1)

{
  longlong lVar1;
  HWND pHVar2;
  int nCmdShow;
  tagRECT local_48;
  tagRECT local_38;
  SCROLLINFO local_28;
  
  lVar1 = param_1[(ulonglong)*(uint *)(param_1 + 0x22) + 1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
      if (*(uint *)(lVar1 + 0x48) != 0) {
        CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                           (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                           *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    else {
      CreateDialogIndirectParamW
                ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                 *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
    }
  }
  GetClientRect(*(HWND *)(lVar1 + 0x18),&local_48);
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    if (*(LPCDLGTEMPLATEW *)(lVar1 + 0x40) == (LPCDLGTEMPLATEW)0x0) {
      if (*(uint *)(lVar1 + 0x48) != 0) {
        CreateDialogParamW(*(HINSTANCE *)(lVar1 + 0x50),
                           (LPCWSTR)(ulonglong)(*(uint *)(lVar1 + 0x48) & 0xffff),
                           *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
      }
    }
    else {
      CreateDialogIndirectParamW
                ((HINSTANCE)0x0,*(LPCDLGTEMPLATEW *)(lVar1 + 0x40),
                 *(HWND *)(*(longlong *)(lVar1 + 0x60) + 0x18),FUN_14000d9e0,lVar1);
    }
  }
  GetClientRect(*(HWND *)(lVar1 + 0x18),&local_38);
  *(bool *)((longlong)param_1 + 0x114) =
       local_38.bottom - local_38.top < local_48.bottom - local_48.top;
  nCmdShow = 0;
  if (local_38.bottom - local_38.top < local_48.bottom - local_48.top) {
    nCmdShow = 8;
  }
  pHVar2 = GetDlgItem(*(HWND *)(*param_1 + 0x18),*(int *)(*param_1 + 0x5c));
  ShowWindow(pHVar2,nCmdShow);
  if (*(char *)((longlong)param_1 + 0x114) != '\0') {
    local_28.nMax = local_48.bottom - local_48.top;
    local_28.nPage = local_38.bottom - local_38.top;
    local_28.cbSize = 0x1c;
    local_28.fMask = 7;
    local_28.nMin = 0;
    local_28.nPos = 0;
    pHVar2 = GetDlgItem(*(HWND *)(*param_1 + 0x18),*(int *)(*param_1 + 0x5c));
    SetScrollInfo(pHVar2,2,&local_28,1);
    FUN_14000f1e0(param_1,0);
  }
  return;
}

