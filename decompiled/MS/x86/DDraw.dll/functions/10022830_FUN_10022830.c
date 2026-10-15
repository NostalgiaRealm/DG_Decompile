/*
 * FUN_10022830 at 10022830
 * HDC __thiscall FUN_10022830(void * this, HWND param_1, int * param_2, HDC param_3)
 * Address ranges: 10022830-100228c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HDC __thiscall FUN_10022830(void *this,HWND param_1,int *param_2,HDC param_3)

{
  int *piVar1;
  HDC hdc;
  int iVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    hdc = (HDC)0x0;
  }
  else {
    piVar1 = (int *)((int)this + -0x28);
    if (this == (void *)0x38) {
      piVar1 = (int *)0x0;
    }
    hdc = FUN_10002cc4(*(int *)((int)this + 0xe4),param_1,param_2,piVar1,param_3);
    if ((hdc != (HDC)0x0) && (*(void **)((int)this + 0xbc) != (void *)0x0)) {
      param_3 = (HDC)0x0;
      iVar2 = FUN_10032df8(*(void **)((int)this + 0xbc),&param_3);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(**(int **)((int)this + 0xbc) + 0x38))();
        BitBlt(hdc,0,0,*(int *)(iVar2 + 0xc),*(int *)(iVar2 + 8),param_3,0,0,0xcc0020);
        FUN_10032e6e(*(void **)((int)this + 0xbc),(int)param_3);
      }
    }
  }
  return hdc;
}

