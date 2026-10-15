/*
 * FUN_100cceea at 100cceea
 * undefined __stdcall FUN_100cceea(HWND param_1)
 * Address ranges: 100cceea-100ccf10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cceea(HWND param_1)

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

