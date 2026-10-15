/*
 * FUN_100ccf11 at 100ccf11
 * undefined __stdcall FUN_100ccf11(HWND param_1, LONG param_2)
 * Address ranges: 100ccf11-100ccf3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ccf11(HWND param_1,LONG param_2)

{
  BOOL BVar1;
  
  BVar1 = IsWindowUnicode(param_1);
  if (BVar1 == 0) {
    SetWindowLongA(param_1,-4,param_2);
  }
  else {
    SetWindowLongW(param_1,-4,param_2);
  }
  return;
}

