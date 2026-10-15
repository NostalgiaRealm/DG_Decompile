/*
 * FUN_14000e460 at 14000e460
 * int __fastcall FUN_14000e460(longlong param_1, int param_2)
 * Address ranges: 14000e460-14000e490
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_14000e460(longlong param_1,int param_2)

{
  int iVar1;
  HWND hWnd;
  LRESULT LVar2;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  LVar2 = SendMessageA(hWnd,0x147,0,0);
  iVar1 = (int)LVar2;
  if ((int)LVar2 == -1) {
    iVar1 = -1;
  }
  return iVar1;
}

