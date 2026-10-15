/*
 * FUN_10003414 at 10003414
 * undefined __stdcall FUN_10003414(HWND param_1, LONG param_2)
 * Address ranges: 10003414-1000343d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003414(HWND param_1,LONG param_2)

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

