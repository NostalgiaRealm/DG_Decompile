/*
 * FUN_14000e230 at 14000e230
 * LRESULT __fastcall FUN_14000e230(longlong param_1, int param_2)
 * Address ranges: 14000e230-14000e263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_14000e230(longlong param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  LRESULT LVar2;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  LVar1 = SendMessageW(hWnd,0x146,0,0);
  LVar2 = 0;
  if (LVar1 != -1) {
    LVar2 = LVar1;
  }
  return LVar2;
}

