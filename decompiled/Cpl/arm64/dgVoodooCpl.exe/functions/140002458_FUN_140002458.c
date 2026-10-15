/*
 * FUN_140002458 at 140002458
 * undefined8 __cdecl FUN_140002458(longlong param_1, int param_2)
 * Address ranges: 140002458-14000250b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140002458(longlong param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  SCROLLINFO local_30;
  
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41e);
  iVar1 = GetScrollPos(pHVar2,2);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x18),0x41e);
  local_30.cbSize = 0x1c;
  local_30.fMask = 4;
  local_30.nPos = iVar1 - (param_2 * 10) / 0x78;
  iVar1 = SetScrollInfo(pHVar2,2,&local_30,1);
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    FUN_140010a60(*(longlong **)(param_1 + 0x68),iVar1);
  }
  return 1;
}

