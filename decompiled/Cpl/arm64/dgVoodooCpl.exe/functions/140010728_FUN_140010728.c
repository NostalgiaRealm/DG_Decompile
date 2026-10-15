/*
 * FUN_140010728 at 140010728
 * undefined __cdecl FUN_140010728(longlong param_1, int param_2, int param_3)
 * Address ranges: 140010728-1400107e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010728(longlong param_1,int param_2,int param_3)

{
  HWND hWnd;
  HDWP pvVar1;
  tagRECT local_40;
  
  pvVar1 = *(HDWP *)(param_1 + 0x10);
  hWnd = *(HWND *)(param_1 + 0x18);
  GetWindowRect(hWnd,&local_40);
  if (pvVar1 == (HDWP)0x0) {
    SetWindowPos(hWnd,(HWND)0x0,0,0,(local_40.right - local_40.left) + param_2,
                 (local_40.bottom - local_40.top) + param_3,0x16);
    pvVar1 = (HDWP)0x0;
  }
  else {
    pvVar1 = DeferWindowPos(pvVar1,hWnd,(HWND)0x0,0,0,(local_40.right - local_40.left) + param_2,
                            (local_40.bottom - local_40.top) + param_3,0x16);
  }
  *(HDWP *)(param_1 + 0x10) = pvVar1;
  return;
}

