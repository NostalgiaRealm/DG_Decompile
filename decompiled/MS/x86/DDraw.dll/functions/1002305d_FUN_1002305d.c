/*
 * FUN_1002305d at 1002305d
 * HRGN __fastcall FUN_1002305d(int param_1)
 * Address ranges: 1002305d-100230b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HRGN __fastcall FUN_1002305d(int param_1)

{
  RGNDATA *lpData;
  HRGN hrgn;
  HDC hdc;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    lpData = *(RGNDATA **)(param_1 + 0x54);
    hrgn = ExtCreateRegion((XFORM *)0x0,(lpData->rdh).nCount * 0x10 + (lpData->rdh).dwSize,lpData);
  }
  else {
    hrgn = CreateRectRgn(0,0,0,0);
    hdc = GetDCEx(*(HWND *)(param_1 + 0x4c),(HRGN)0x0,0x10000);
    GetRandomRgn(hdc,hrgn,4);
    ReleaseDC(*(HWND *)(param_1 + 0x4c),hdc);
  }
  return hrgn;
}

