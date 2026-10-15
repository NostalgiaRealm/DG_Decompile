/*
 * FUN_14000fc58 at 14000fc58
 * BOOL __cdecl FUN_14000fc58(longlong param_1, int param_2, LPCSTR param_3)
 * Address ranges: 14000fc58-14000fca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

BOOL FUN_14000fc58(longlong param_1,int param_2,LPCSTR param_3)

{
  BOOL BVar1;
  HWND hWnd;
  
  *(undefined1 *)(param_1 + 0x3c) = 0;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  BVar1 = SetWindowTextA(hWnd,param_3);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return BVar1;
}

