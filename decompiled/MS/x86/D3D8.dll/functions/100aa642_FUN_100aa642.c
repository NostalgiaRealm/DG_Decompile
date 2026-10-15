/*
 * FUN_100aa642 at 100aa642
 * undefined __stdcall FUN_100aa642(HWND param_1, LONG param_2)
 * Address ranges: 100aa642-100aa66b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100aa642(HWND param_1,LONG param_2)

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

