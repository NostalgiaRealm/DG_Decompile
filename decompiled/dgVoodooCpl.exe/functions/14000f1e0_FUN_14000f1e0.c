/*
 * FUN_14000f1e0 at 14000f1e0
 * undefined __fastcall FUN_14000f1e0(longlong * param_1, int param_2)
 * Address ranges: 14000f1e0-14000f344
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000f1e0(longlong *param_1,int param_2)

{
  longlong lVar1;
  HWND hWnd;
  tagRECT local_18;
  
  if ((*param_1 != 0) && (*(char *)((longlong)param_1 + 0x114) != '\0')) {
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
    hWnd = *(HWND *)(lVar1 + 0x18);
    GetWindowRect(hWnd,&local_18);
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
    MapWindowPoints((HWND)0x0,*(HWND *)(lVar1 + 0x18),(LPPOINT)&local_18,2);
    OffsetRect(&local_18,0,-(local_18.top + param_2));
    SetWindowPos(hWnd,(HWND)0x0,0,local_18.top,0,0,1);
  }
  return;
}

