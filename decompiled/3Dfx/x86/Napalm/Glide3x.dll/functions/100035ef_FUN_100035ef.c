/*
 * FUN_100035ef at 100035ef
 * undefined __stdcall FUN_100035ef(HWND param_1)
 * Address ranges: 100035ef-10003615
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100035ef(HWND param_1)

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

