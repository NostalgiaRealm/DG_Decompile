/*
 * FUN_140010070 at 140010070
 * undefined __cdecl FUN_140010070(longlong param_1, int param_2)
 * Address ranges: 140010070-14001021b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010070(longlong param_1,int param_2)

{
  int iVar1;
  HDC hdc;
  HWND pHVar2;
  HGDIOBJ pvVar3;
  LRESULT LVar4;
  uint uVar5;
  uint uVar6;
  tagRECT local_270;
  WCHAR aWStack_260 [264];
  
  uVar5 = 0;
  hdc = CreateCompatibleDC((HDC)0x0);
  if (hdc != (HDC)0x0) {
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
    pvVar3 = (HGDIOBJ)SendMessageA(pHVar2,0x31,0,0);
    pvVar3 = SelectObject(hdc,pvVar3);
    uVar6 = 0;
    LVar4 = FUN_14000fd38(param_1,param_2);
    if ((int)LVar4 != 0) {
      do {
        pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
        LVar4 = SendMessageW(pHVar2,0x148,(WPARAM)uVar6,(LPARAM)aWStack_260);
        if (1 < (int)LVar4 + 2U) {
          local_270.left = 0;
          local_270.top = 0;
          local_270.right = 0;
          local_270.bottom = 0;
          DrawTextW(hdc,aWStack_260,-1,&local_270,0x420);
          if (uVar5 < (uint)(local_270.right - local_270.left)) {
            uVar5 = local_270.right - local_270.left;
          }
        }
        uVar6 = uVar6 + 1;
        LVar4 = FUN_14000fd38(param_1,param_2);
      } while (uVar6 < (uint)LVar4);
    }
    SelectObject(hdc,pvVar3);
    DeleteDC(hdc);
  }
  iVar1 = GetSystemMetrics(2);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SendMessageW(pHVar2,0x160,(longlong)iVar1 + (longlong)uVar5 + 10,0);
  return;
}

