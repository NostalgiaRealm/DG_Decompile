/*
 * FUN_14000e180 at 14000e180
 * undefined __fastcall FUN_14000e180(longlong param_1, int param_2, LPCSTR param_3)
 * Address ranges: 14000e180-14000e1b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000e180(longlong param_1,int param_2,LPCSTR param_3)

{
  HWND hWnd;
  
  *(undefined1 *)(param_1 + 0x3c) = 0;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SetWindowTextA(hWnd,param_3);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}

