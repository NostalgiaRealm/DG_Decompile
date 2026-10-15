/*
 * FUN_14000ffb8 at 14000ffb8
 * undefined __cdecl FUN_14000ffb8(longlong param_1, int param_2)
 * Address ranges: 14000ffb8-14000ffef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000ffb8(longlong param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SendMessageA(hWnd,0x147,0,0);
  return;
}

