/*
 * FUN_1800f8bfc at 1800f8bfc
 * undefined __fastcall FUN_1800f8bfc(undefined8 param_1, HWND param_2, LONG_PTR param_3)
 * Address ranges: 1800f8bfc-1800f8c3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f8bfc(undefined8 param_1,HWND param_2,LONG_PTR param_3)

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

