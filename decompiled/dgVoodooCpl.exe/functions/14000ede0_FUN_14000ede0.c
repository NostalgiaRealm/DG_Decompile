/*
 * FUN_14000ede0 at 14000ede0
 * undefined __fastcall FUN_14000ede0(longlong param_1, int param_2, int param_3)
 * Address ranges: 14000ede0-14000ee9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000ede0(longlong param_1,int param_2,int param_3)

{
  HWND hWnd;
  int cx;
  HDWP pvVar1;
  tagRECT local_38;
  
  hWnd = *(HWND *)(param_1 + 0x18);
  pvVar1 = *(HDWP *)(param_1 + 0x10);
  GetWindowRect(hWnd,&local_38);
  cx = (local_38.right - local_38.left) + param_2;
  if (pvVar1 != (HDWP)0x0) {
    pvVar1 = DeferWindowPos(pvVar1,hWnd,(HWND)0x0,0,0,cx,(local_38.bottom - local_38.top) + param_3,
                            0x16);
    *(HDWP *)(param_1 + 0x10) = pvVar1;
    return;
  }
  SetWindowPos(hWnd,(HWND)0x0,0,0,cx,(local_38.bottom - local_38.top) + param_3,0x16);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

