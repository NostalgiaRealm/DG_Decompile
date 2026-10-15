/*
 * FUN_180004cec at 180004cec
 * undefined __fastcall FUN_180004cec(undefined8 param_1, HWND param_2, LONG_PTR param_3)
 * Address ranges: 180004cec-180004d2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180004cec(undefined8 param_1,HWND param_2,LONG_PTR param_3)

{
  BOOL BVar1;
  
  BVar1 = IsWindowUnicode(param_2);
  if (BVar1 == 0) {
    SetWindowLongPtrA(param_2,-4,param_3);
  }
  else {
    SetWindowLongPtrW(param_2,-4,param_3);
  }
  return;
}

