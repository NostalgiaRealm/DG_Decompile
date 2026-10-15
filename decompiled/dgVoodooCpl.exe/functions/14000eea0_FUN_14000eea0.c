/*
 * FUN_14000eea0 at 14000eea0
 * undefined __fastcall FUN_14000eea0(longlong param_1, int param_2)
 * Address ranges: 14000eea0-14000ef23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000eea0(longlong param_1,int param_2)

{
  undefined4 local_58;
  undefined4 local_54;
  HWND local_50;
  HWND local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_48 = (HWND)0x0;
  local_40 = 0;
  local_50 = *(HWND *)(param_1 + 0x18);
  local_38 = 0;
  uStack_30 = 0;
  local_20 = 0;
  local_18 = 0;
  local_58 = 0x48;
  local_54 = 0x111;
  local_28 = 0xffffffffffffffff;
  local_48 = GetDlgItem(local_50,param_2);
  local_20 = (longlong)param_2;
  SendMessageW(*(HWND *)(param_1 + 0x20),0x432,0,(LPARAM)&local_58);
  return;
}

