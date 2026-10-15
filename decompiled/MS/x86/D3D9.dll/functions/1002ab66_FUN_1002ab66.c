/*
 * FUN_1002ab66 at 1002ab66
 * HDC __fastcall FUN_1002ab66(int param_1, HWND param_2, int * param_3, int * param_4, undefined4 * param_5)
 * Address ranges: 1002ab66-1002abe6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HDC __fastcall FUN_1002ab66(int param_1,HWND param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  HDC hdc;
  HRGN hRgn;
  
  hdc = (HDC)FUN_1002a8bb(param_1,param_2,param_4,param_5);
  *param_5 = 0;
  if (hdc != (HDC)0x0) {
    FUN_100cfed0(param_3,0,0x40);
    *param_3 = (int)hdc;
    GetUpdateRect(param_2,(LPRECT)(param_3 + 2),0);
    hRgn = CreateRectRgn(0,0,0,0);
    GetUpdateRgn(param_2,hRgn,0);
    SelectClipRgn(hdc,hRgn);
    DeleteObject(hRgn);
    ValidateRect(param_2,(RECT *)0x0);
    *param_5 = 1;
  }
  return hdc;
}

