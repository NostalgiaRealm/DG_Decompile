/*
 * FUN_1800110b0 at 1800110b0
 * undefined __fastcall FUN_1800110b0(longlong param_1)
 * Address ranges: 1800110b0-1800110d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800110b0(longlong param_1)

{
  HWND hWnd;
  
  hWnd = *(HWND *)(*(longlong *)(param_1 + 0x30) + 0x3b0);
  if (hWnd != (HWND)0x0) {
    PostMessageW(hWnd,0x408,0,0);
  }
  return;
}

