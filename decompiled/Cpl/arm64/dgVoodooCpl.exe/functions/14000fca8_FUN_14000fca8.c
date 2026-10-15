/*
 * FUN_14000fca8 at 14000fca8
 * undefined __cdecl FUN_14000fca8(longlong param_1, int param_2, LPARAM param_3, ulonglong param_4)
 * Address ranges: 14000fca8-14000fcef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000fca8(longlong param_1,int param_2,LPARAM param_3,ulonglong param_4)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SendMessageA(hWnd,0xd,param_4 & 0xffffffff,param_3);
  return;
}

