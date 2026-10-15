/*
 * FUN_180030718 at 180030718
 * undefined __fastcall FUN_180030718(longlong * param_1, LPWSTR param_2, int param_3)
 * Address ranges: 180030718-18003074c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030718(longlong *param_1,LPWSTR param_2,int param_3)

{
  HWND hWnd;
  
  hWnd = (HWND)(**(code **)(*param_1 + 0x28))();
  if (hWnd != (HWND)0x0) {
    GetWindowTextW(hWnd,param_2,param_3);
  }
  return;
}

