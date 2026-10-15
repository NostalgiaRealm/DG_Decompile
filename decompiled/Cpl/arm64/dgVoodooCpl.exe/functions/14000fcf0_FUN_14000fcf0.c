/*
 * FUN_14000fcf0 at 14000fcf0
 * undefined __cdecl FUN_14000fcf0(longlong param_1, int param_2, ulonglong param_3)
 * Address ranges: 14000fcf0-14000fd33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000fcf0(longlong param_1,int param_2,ulonglong param_3)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SendMessageW(hWnd,0xf1,param_3 & 0xff,0);
  return;
}

