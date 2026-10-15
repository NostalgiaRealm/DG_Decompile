/*
 * FUN_14000ed90 at 14000ed90
 * undefined __fastcall FUN_14000ed90(longlong param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 14000ed90-14000eddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000ed90(longlong param_1,int param_2,int param_3,uint param_4)

{
  HWND hwnd;
  SCROLLINFO local_28;
  
  hwnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  local_28.cbSize = 0x1c;
  local_28.fMask = 4;
  local_28.nPos = param_3;
  SetScrollInfo(hwnd,2,&local_28,param_4 & 0xff);
  return;
}

