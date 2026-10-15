/*
 * FUN_10024821 at 10024821
 * undefined __thiscall FUN_10024821(void * this, LPWSTR param_1, int param_2)
 * Address ranges: 10024821-1002483d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10024821(void *this,LPWSTR param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = (HWND)(**(code **)(*(int *)this + 0x14))();
  if (hWnd != (HWND)0x0) {
    GetWindowTextW(hWnd,param_1,param_2);
  }
  return;
}

