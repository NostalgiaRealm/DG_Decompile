/*
 * FUN_18001e9b8 at 18001e9b8
 * undefined __fastcall FUN_18001e9b8(longlong param_1)
 * Address ranges: 18001e9b8-18001e9e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e9b8(longlong param_1)

{
  HWND hWnd;
  
  hWnd = *(HWND *)(*(longlong *)(param_1 + 0x30) + 0x3b0);
  if (hWnd != (HWND)0x0) {
    PostMessageW(hWnd,0x408,0,0);
  }
  return;
}

