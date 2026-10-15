/*
 * FUN_1400107e8 at 1400107e8
 * undefined __cdecl FUN_1400107e8(longlong param_1, int param_2)
 * Address ranges: 1400107e8-140010863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400107e8(longlong param_1,int param_2)

{
  undefined8 local_60;
  HWND pHStack_58;
  HWND local_50;
  undefined8 local_30;
  longlong local_28;
  
  FUN_140025250((undefined1 *)&local_60,0,0x48);
  pHStack_58 = *(HWND *)(param_1 + 0x18);
  local_60 = 0x11100000048;
  local_30 = 0xffffffffffffffff;
  local_50 = GetDlgItem(pHStack_58,param_2);
  local_28 = (longlong)param_2;
  SendMessageW(*(HWND *)(param_1 + 0x20),0x432,0,(LPARAM)&local_60);
  return;
}

