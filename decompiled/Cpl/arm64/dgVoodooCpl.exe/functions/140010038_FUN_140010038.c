/*
 * FUN_140010038 at 140010038
 * undefined __cdecl FUN_140010038(longlong param_1, int param_2)
 * Address ranges: 140010038-14001006f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010038(longlong param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),param_2);
  SendMessageW(hWnd,0x14b,0,0);
  return;
}

