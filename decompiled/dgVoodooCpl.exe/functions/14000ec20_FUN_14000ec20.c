/*
 * FUN_14000ec20 at 14000ec20
 * undefined __fastcall FUN_14000ec20(longlong param_1, int param_2, uint param_3)
 * Address ranges: 14000ec20-14000ed84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000ec20(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  HWND hWnd;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  plVar3 = (longlong *)GetWindowLongPtrW(hWnd,-0x15);
  uVar5 = 0;
  if (*(uint *)((longlong)plVar3 + 0x10c) != 0) {
    uVar4 = 0;
    do {
      if (param_3 < uVar4) break;
      uVar2 = uVar4 + 1;
      if ((*(uint *)(plVar3 + 0x21) >> (uVar5 & 0x1f) & 1) == 0) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((longlong)plVar3 + 0x10c));
  }
  uVar5 = uVar5 - 1;
  if (*(uint *)(plVar3 + 0x22) != uVar5) {
    lVar1 = plVar3[(ulonglong)*(uint *)(plVar3 + 0x22) + 1];
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
    ShowWindow(*(HWND *)(lVar1 + 0x18),0);
    lVar1 = plVar3[(ulonglong)uVar5 + 1];
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
    ShowWindow(*(HWND *)(lVar1 + 0x18),1);
    *(uint *)(plVar3 + 0x22) = uVar5;
    if (*plVar3 != 0) {
      FUN_14000f030(plVar3);
    }
  }
  return;
}

