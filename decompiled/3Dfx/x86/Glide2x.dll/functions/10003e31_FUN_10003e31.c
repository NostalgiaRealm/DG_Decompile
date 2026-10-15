/*
 * FUN_10003e31 at 10003e31
 * undefined __thiscall FUN_10003e31(void * this, HWND param_1, int param_2)
 * Address ranges: 10003e31-10003f2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10003e31(void *this,HWND param_1,int param_2)

{
  undefined4 *puVar1;
  HWND hWnd;
  int iVar2;
  uint uVar3;
  HWND pHVar4;
  uint uVar5;
  uint dwNewLong;
  bool bVar6;
  bool bVar7;
  
  hWnd = param_1;
  uVar3 = GetWindowLongW(param_1,-0x10);
  if ((uVar3 & 0x10000000) != 0) {
    uVar3 = *(uint *)((int)this + 0x826);
    param_1 = (HWND)0x40300;
    if ((uVar3 & 1) != 0) {
      param_1 = (HWND)0x40000;
    }
    dwNewLong = 0x10cf0000;
    if ((uVar3 & 1) != 0) {
      dwNewLong = 0x10000000;
    }
    pHVar4 = (HWND)GetWindowLongW(hWnd,-0x14);
    bVar6 = pHVar4 != param_1;
    if (bVar6) {
      SetWindowLongW(hWnd,-0x14,(LONG)param_1);
    }
    uVar5 = GetWindowLongW(hWnd,-0x10);
    bVar7 = (uVar5 & 0x10cf0000) != dwNewLong;
    if (bVar7) {
      SetWindowLongW(hWnd,-0x10,dwNewLong);
    }
    SetWindowPos(hWnd,(HWND)(uVar3 >> 1 | 0xfffffffe),0,0,0,0,0x41b);
    iVar2 = param_2;
    if ((bVar7 || bVar6) || ((*(int *)(param_2 + 0xc) == 0 && (*(int *)(param_2 + 0x10) == 0)))) {
      puVar1 = (undefined4 *)(param_2 + 8);
      param_2 = 0;
      param_1 = (HWND)0x0;
      (**(code **)(*(int *)*puVar1 + 8))(&param_2,&param_1);
      FUN_10003f2f(hWnd,iVar2,param_2,(int)param_1,*(char *)((int)this + 0x788));
    }
  }
  return;
}

