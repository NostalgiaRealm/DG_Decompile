/*
 * FUN_10003fd1 at 10003fd1
 * undefined __thiscall FUN_10003fd1(void * this, HWND param_1)
 * Address ranges: 10003fd1-1000403d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10003fd1(void *this,HWND param_1)

{
  int *piVar1;
  BOOL BVar2;
  MSG local_20;
  
  if (param_1 == (HWND)0x0) {
    piVar1 = (int *)FUN_100038c6((int)this);
    if (piVar1 != (int *)0x0) {
      param_1 = (HWND)*piVar1;
    }
    if (param_1 == (HWND)0x0) {
      return;
    }
  }
  while( true ) {
    BVar2 = PeekMessageW(&local_20,param_1,0x400,0x7fff,1);
    if (BVar2 == 0) {
      return;
    }
    if (local_20.message == 0x12) break;
    TranslateMessage(&local_20);
    DispatchMessageW(&local_20);
  }
  PostMessageW(param_1,0x12,local_20.wParam,local_20.lParam);
  return;
}

