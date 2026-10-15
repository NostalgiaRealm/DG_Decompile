/*
 * FUN_140010940 at 140010940
 * undefined __cdecl FUN_140010940(longlong * param_1)
 * Address ranges: 140010940-140010a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010940(longlong *param_1)

{
  HWND pHVar1;
  int nCmdShow;
  tagRECT tStack_50;
  tagRECT tStack_40;
  SCROLLINFO local_30;
  
  pHVar1 = (HWND)FUN_1400108c8(param_1[(ulonglong)*(uint *)(param_1 + 0x22) + 1]);
  GetClientRect(pHVar1,&tStack_50);
  pHVar1 = (HWND)FUN_1400108c8(*param_1);
  GetClientRect(pHVar1,&tStack_40);
  *(bool *)((longlong)param_1 + 0x114) =
       tStack_40.bottom - tStack_40.top < tStack_50.bottom - tStack_50.top;
  nCmdShow = 8;
  if (tStack_50.bottom - tStack_50.top <= tStack_40.bottom - tStack_40.top) {
    nCmdShow = 0;
  }
  pHVar1 = GetDlgItem(*(HWND *)(*param_1 + 0x18),*(int *)(*param_1 + 0x5c));
  ShowWindow(pHVar1,nCmdShow);
  if (*(char *)((longlong)param_1 + 0x114) != '\0') {
    local_30.cbSize = 0x1c;
    local_30.fMask = 7;
    local_30.nMax = tStack_50.bottom - tStack_50.top;
    local_30.nMin = 0;
    local_30.nPage = tStack_40.bottom - tStack_40.top;
    local_30.nPos = 0;
    pHVar1 = GetDlgItem(*(HWND *)(*param_1 + 0x18),*(int *)(*param_1 + 0x5c));
    SetScrollInfo(pHVar1,2,&local_30,1);
    FUN_140010a60(param_1,0);
  }
  return;
}

