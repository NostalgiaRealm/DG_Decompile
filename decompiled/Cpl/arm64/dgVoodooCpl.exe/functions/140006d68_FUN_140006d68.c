/*
 * FUN_140006d68 at 140006d68
 * undefined __cdecl FUN_140006d68(longlong param_1)
 * Address ranges: 140006d68-140006dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140006d68(longlong param_1)

{
  uint uVar1;
  HWND hWnd;
  
  uVar1 = MulDiv(0xe6,*(int *)(param_1 + 0x128),0x60);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3ef);
  SendMessageW(hWnd,0x160,(ulonglong)uVar1,0);
  return;
}

