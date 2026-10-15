/*
 * FUN_1005ec09 at 1005ec09
 * undefined __thiscall FUN_1005ec09(void * this, HWND param_1, int param_2, int param_3)
 * Address ranges: 1005ec09-1005ed0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005ec09(void *this,HWND param_1,int param_2,int param_3)

{
  HWND hWnd;
  int iVar1;
  uint uVar2;
  LONG LVar3;
  uint uVar4;
  IMAGE_DOS_HEADER *pIVar5;
  bool bVar6;
  bool bVar7;
  
  hWnd = param_1;
  uVar2 = GetWindowLongW(param_1,-0x10);
  if (((uVar2 & 0x10000000) != 0) || ((char)param_3 != '\0')) {
    uVar2 = *(uint *)((int)this + 0x826);
    param_3 = 0x40300;
    if ((uVar2 & 1) != 0) {
      param_3 = 0x40000;
    }
    pIVar5 = (IMAGE_DOS_HEADER *)0x10cf0000;
    if ((uVar2 & 1) != 0) {
      pIVar5 = &IMAGE_DOS_HEADER_10000000;
    }
    param_1 = (HWND)pIVar5;
    LVar3 = GetWindowLongW(hWnd,-0x14);
    bVar6 = LVar3 != param_3;
    if (bVar6) {
      SetWindowLongW(hWnd,-0x14,param_3);
    }
    uVar4 = GetWindowLongW(hWnd,-0x10);
    bVar7 = (HWND)(uVar4 & 0x10cf0000) != param_1;
    if (bVar7) {
      SetWindowLongW(hWnd,-0x10,(LONG)param_1);
    }
    SetWindowPos(hWnd,(HWND)(uVar2 >> 1 | 0xfffffffe),0,0,0,0,0x41b);
    iVar1 = param_2;
    if ((bVar7 || bVar6) || ((*(int *)(param_2 + 0xc) == 0 && (*(int *)(param_2 + 0x10) == 0)))) {
      param_1 = (HWND)0x0;
      param_3 = 0;
      (**(code **)(**(int **)(param_2 + 8) + 8))(&param_1,&param_3);
      FUN_1005ed0c(hWnd,iVar1,(int)param_1,param_3,*(char *)((int)this + 0x788));
    }
  }
  return;
}

