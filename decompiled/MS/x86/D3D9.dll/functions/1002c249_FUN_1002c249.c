/*
 * FUN_1002c249 at 1002c249
 * undefined __fastcall FUN_1002c249(int * param_1)
 * Address ranges: 1002c249-1002c277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002c249(int *param_1)

{
  char cVar1;
  HWND hWnd;
  
  cVar1 = FUN_1002bf92(param_1);
  FUN_1002c119(param_1,'\x01',cVar1);
  hWnd = (HWND)(**(code **)(*param_1 + 0x14))();
  if (hWnd != (HWND)0x0) {
    PostMessageW(hWnd,0x20,0,0);
  }
  return;
}

