/*
 * FUN_10003625 at 10003625
 * undefined __stdcall FUN_10003625(HWND param_1)
 * Address ranges: 10003625-1000364b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003625(HWND param_1)

{
  BOOL BVar1;
  
  BVar1 = IsWindowUnicode(param_1);
  if (BVar1 == 0) {
    GetWindowLongA(param_1,-4);
  }
  else {
    GetWindowLongW(param_1,-4);
  }
  return;
}

