/*
 * FUN_10024bd7 at 10024bd7
 * undefined __fastcall FUN_10024bd7(int * param_1)
 * Address ranges: 10024bd7-10024c05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10024bd7(int *param_1)

{
  char cVar1;
  HWND hWnd;
  
  cVar1 = FUN_10024920(param_1);
  FUN_10024aa7(param_1,'\x01',cVar1);
  hWnd = (HWND)(**(code **)(*param_1 + 0x14))();
  if (hWnd != (HWND)0x0) {
    PostMessageW(hWnd,0x20,0,0);
  }
  return;
}

