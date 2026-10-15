/*
 * FUN_10004094 at 10004094
 * undefined __thiscall FUN_10004094(void * this, LPWSTR param_1, int param_2)
 * Address ranges: 10004094-100040b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10004094(void *this,LPWSTR param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = (HWND)(**(code **)(*(int *)this + 0x14))();
  if (hWnd != (HWND)0x0) {
    GetWindowTextW(hWnd,param_1,param_2);
  }
  return;
}

