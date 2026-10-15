/*
 * FUN_1005e42f at 1005e42f
 * undefined __stdcall FUN_1005e42f(HWND param_1)
 * Address ranges: 1005e42f-1005e455
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e42f(HWND param_1)

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

