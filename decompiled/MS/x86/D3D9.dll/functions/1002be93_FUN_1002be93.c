/*
 * FUN_1002be93 at 1002be93
 * undefined __thiscall FUN_1002be93(void * this, LPWSTR param_1, int param_2)
 * Address ranges: 1002be93-1002beaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002be93(void *this,LPWSTR param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = (HWND)(**(code **)(*(int *)this + 0x14))();
  if (hWnd != (HWND)0x0) {
    GetWindowTextW(hWnd,param_1,param_2);
  }
  return;
}

