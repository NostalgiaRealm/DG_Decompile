/*
 * FUN_180015d94 at 180015d94
 * HDC __fastcall FUN_180015d94(longlong param_1, HWND param_2, undefined8 * param_3, undefined4 * param_4)
 * Address ranges: 180015d94-180015e37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HDC FUN_180015d94(longlong param_1,HWND param_2,undefined8 *param_3,undefined4 *param_4)

{
  HDC hdc;
  HRGN hRgn;
  
  hdc = (HDC)FUN_18002ec00(*(uint *)(param_1 + 0xa0),param_2,(longlong *)(param_1 + -0x48),param_4);
  *param_4 = 0;
  if (hdc != (HDC)0x0) {
    FUN_1800fbea0((undefined1 *)param_3,0,0x48);
    *param_3 = hdc;
    GetUpdateRect(param_2,(LPRECT)((longlong)param_3 + 0xc),0);
    hRgn = CreateRectRgn(0,0,0,0);
    GetUpdateRgn(param_2,hRgn,0);
    SelectClipRgn(hdc,hRgn);
    DeleteObject(hRgn);
    ValidateRect(param_2,(RECT *)0x0);
    *param_4 = 1;
  }
  return hdc;
}

