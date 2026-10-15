/*
 * FUN_1000364c at 1000364c
 * undefined __stdcall FUN_1000364c(HWND param_1, LONG param_2)
 * Address ranges: 1000364c-10003675
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000364c(HWND param_1,LONG param_2)

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

