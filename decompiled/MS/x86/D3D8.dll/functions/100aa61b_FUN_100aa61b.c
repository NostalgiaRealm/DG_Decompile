/*
 * FUN_100aa61b at 100aa61b
 * undefined __stdcall FUN_100aa61b(HWND param_1)
 * Address ranges: 100aa61b-100aa641
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100aa61b(HWND param_1)

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

