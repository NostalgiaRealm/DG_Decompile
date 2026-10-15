/*
 * FUN_14000e4a0 at 14000e4a0
 * undefined __fastcall FUN_14000e4a0(longlong param_1, int param_2, int param_3)
 * Address ranges: 14000e4a0-14000e4cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000e4a0(longlong param_1,int param_2,int param_3)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014000e4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SendMessageW(hWnd,0x14e,(longlong)param_3,0);
  return;
}

