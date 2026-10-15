/*
 * FUN_14000e4d0 at 14000e4d0
 * undefined __fastcall FUN_14000e4d0(longlong param_1, int param_2)
 * Address ranges: 14000e4d0-14000e658
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000e4d0(longlong param_1,int param_2)

{
  int iVar1;
  HDC hdc;
  HWND pHVar2;
  HGDIOBJ pvVar3;
  LRESULT LVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  tagRECT local_238;
  WCHAR local_228 [264];
  
  uVar7 = 0;
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc != (HDC)0x0) {
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
    pvVar3 = (HGDIOBJ)SendMessageA(pHVar2,0x31,0,0);
    pvVar3 = SelectObject(hdc,pvVar3);
    uVar6 = 0;
    while( true ) {
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
      LVar4 = SendMessageW(pHVar2,0x146,0,0);
      uVar5 = 0;
      if (LVar4 != -1) {
        uVar5 = (uint)LVar4;
      }
      if (uVar5 <= uVar6) break;
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
      LVar4 = SendMessageW(pHVar2,0x148,(ulonglong)uVar6,(LPARAM)local_228);
      uVar5 = uVar7;
      if (1 < (int)LVar4 + 2U) {
        local_238.left = 0;
        local_238.top = 0;
        local_238.right = 0;
        local_238.bottom = 0;
        DrawTextW(hdc,local_228,-1,&local_238,0x420);
        uVar5 = local_238.right - local_238.left;
        if ((uint)(local_238.right - local_238.left) <= uVar7) {
          uVar5 = uVar7;
        }
      }
      uVar7 = uVar5;
      uVar6 = uVar6 + 1;
    }
    SelectObject(hdc,pvVar3);
    DeleteDC(hdc);
  }
  iVar1 = GetSystemMetrics(2);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SendMessageW(pHVar2,0x160,(ulonglong)(iVar1 + 10 + uVar7),0);
  return;
}

