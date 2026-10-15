/*
 * FUN_100044ed at 100044ed
 * undefined __fastcall FUN_100044ed(int * param_1)
 * Address ranges: 100044ed-1000451b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100044ed(int *param_1)

{
  char cVar1;
  HWND hWnd;
  
  cVar1 = FUN_10004193(param_1);
  FUN_1000431a(param_1,'\x01',cVar1);
  hWnd = (HWND)(**(code **)(*param_1 + 0x14))();
  if (hWnd != (HWND)0x0) {
    PostMessageW(hWnd,0x20,0,0);
  }
  return;
}

