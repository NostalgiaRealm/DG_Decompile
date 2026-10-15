/*
 * FUN_10003659 at 10003659
 * undefined __stdcall FUN_10003659(HWND param_1)
 * Address ranges: 10003659-1000367f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003659(HWND param_1)

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

