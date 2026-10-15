/*
 * FUN_14000fd78 at 14000fd78
 * undefined __cdecl FUN_14000fd78(longlong param_1, int param_2, ulonglong param_3)
 * Address ranges: 14000fd78-14000fdbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000fd78(longlong param_1,int param_2,ulonglong param_3)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SendMessageW(hWnd,0x150,param_3 & 0xffffffff,0);
  return;
}

