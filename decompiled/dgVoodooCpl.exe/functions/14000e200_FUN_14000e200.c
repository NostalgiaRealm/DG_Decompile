/*
 * FUN_14000e200 at 14000e200
 * undefined __fastcall FUN_14000e200(longlong param_1, int param_2, ulonglong param_3)
 * Address ranges: 14000e200-14000e22d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000e200(longlong param_1,int param_2,ulonglong param_3)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014000e227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW(hWnd,0xf1,param_3 & 0xff,0);
  return;
}

