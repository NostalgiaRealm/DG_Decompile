/*
 * FUN_1400026d8 at 1400026d8
 * undefined8 __cdecl FUN_1400026d8(longlong param_1, int param_2)
 * Address ranges: 1400026d8-1400027a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400026d8(longlong param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  tagSCROLLINFO local_60;
  SCROLLINFO local_40;
  
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
  local_60.cbSize = 0x1c;
  local_60.fMask = 6;
  GetScrollInfo(pHVar2,2,&local_60);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
  local_40.cbSize = 0x1c;
  local_40.fMask = 4;
  local_40.nPos = local_60.nPage + local_60.nPos;
  SetScrollInfo(pHVar2,2,&local_40,0);
  if (*(longlong *)(param_1 + -8) != 0) {
    pHVar2 = GetDlgItem(*(HWND *)(param_1 + -0x58),param_2);
    iVar1 = GetScrollPos(pHVar2,2);
    FUN_140010a60(*(longlong **)(param_1 + -8),iVar1);
  }
  return 1;
}

