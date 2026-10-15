/*
 * FUN_100033ed at 100033ed
 * undefined __stdcall FUN_100033ed(HWND param_1)
 * Address ranges: 100033ed-10003413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100033ed(HWND param_1)

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

