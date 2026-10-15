/*
 * FUN_140010a60 at 140010a60
 * undefined __cdecl FUN_140010a60(longlong * param_1, int param_2)
 * Address ranges: 140010a60-140010b27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010a60(longlong *param_1,int param_2)

{
  HWND hWnd;
  HWND hWndTo;
  tagRECT tStack_30;
  
  if ((*param_1 != 0) && (*(char *)((longlong)param_1 + 0x114) != '\0')) {
    hWnd = (HWND)FUN_1400108c8(param_1[(ulonglong)*(uint *)(param_1 + 0x22) + 1]);
    GetWindowRect(hWnd,&tStack_30);
    hWndTo = (HWND)FUN_1400108c8(*param_1);
    MapWindowPoints((HWND)0x0,hWndTo,(LPPOINT)&tStack_30,2);
    OffsetRect(&tStack_30,0,-(tStack_30.top + param_2));
    SetWindowPos(hWnd,(HWND)0x0,0,tStack_30.top,0,0,1);
  }
  return;
}

