/*
 * FUN_14000e1c0 at 14000e1c0
 * undefined __fastcall FUN_14000e1c0(longlong param_1, int param_2, LPARAM param_3, ulonglong param_4)
 * Address ranges: 14000e1c0-14000e1f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000e1c0(longlong param_1,int param_2,LPARAM param_3,ulonglong param_4)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014000e1f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageA(hWnd,0xd,param_4 & 0xffffffff,param_3);
  return;
}

