/*
 * FUN_140002588 at 140002588
 * undefined8 __cdecl FUN_140002588(longlong param_1, int param_2, int param_3)
 * Address ranges: 140002588-1400025ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140002588(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  HWND hwnd;
  SCROLLINFO local_30;
  
  hwnd = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
  local_30.cbSize = 0x1c;
  local_30.fMask = 4;
  local_30.nPos = param_3;
  iVar1 = SetScrollInfo(hwnd,2,&local_30,0);
  if (*(longlong **)(param_1 + -8) != (longlong *)0x0) {
    FUN_140010a60(*(longlong **)(param_1 + -8),iVar1);
  }
  return 1;
}

