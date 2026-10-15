/*
 * FUN_14000fff0 at 14000fff0
 * undefined __cdecl FUN_14000fff0(longlong param_1, int param_2, int param_3)
 * Address ranges: 14000fff0-140010033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000fff0(longlong param_1,int param_2,int param_3)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SendMessageW(hWnd,0x14e,(longlong)param_3,0);
  return;
}

