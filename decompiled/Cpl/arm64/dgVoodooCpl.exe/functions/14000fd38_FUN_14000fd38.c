/*
 * FUN_14000fd38 at 14000fd38
 * LRESULT __cdecl FUN_14000fd38(longlong param_1, int param_2)
 * Address ranges: 14000fd38-14000fd77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_14000fd38(longlong param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  LVar1 = SendMessageW(hWnd,0x146,0,0);
  if (LVar1 == -1) {
    LVar1 = 0;
  }
  return LVar1;
}

