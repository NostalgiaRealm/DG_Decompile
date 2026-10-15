/*
 * FUN_1002c50d at 1002c50d
 * LRESULT __thiscall FUN_1002c50d(void * this, int param_1, HWND param_2, UINT param_3, WPARAM param_4, LPARAM param_5)
 * Address ranges: 1002c50d-1002c644
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT __thiscall
FUN_1002c50d(void *this,int param_1,HWND param_2,UINT param_3,WPARAM param_4,LPARAM param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  HCURSOR pHVar4;
  HCURSOR pHVar5;
  LRESULT LVar6;
  
  LVar6 = 1;
  bVar1 = FUN_1002c695(0);
  if (!bVar1) {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x45) = 1;
  if (((short)param_5 == 1) || (bVar1 = false, *(char *)((int)this + 0x27) != '\0')) {
    bVar1 = true;
  }
  iVar3 = (**(code **)(*(int *)this + 0x38))();
  pHVar4 = (HCURSOR)FUN_1002c4e7();
  if ((iVar3 == 0) || (!bVar1)) {
    if ((short)param_5 != 0) {
      LVar6 = CallWindowProcW(*(WNDPROC *)(param_1 + 0x14),param_2,param_3,param_4,param_5);
    }
    if ((iVar3 == 0) || (!bVar1)) {
      cVar2 = (**(code **)(*(int *)this + 0x3c))();
      pHVar5 = *(HCURSOR *)((int)this + 0x18);
      if (cVar2 == '\0') {
        if (pHVar5 == (HCURSOR)0xffffffff) {
          pHVar5 = GetCursor();
        }
        if (pHVar5 == pHVar4) {
          (**(code **)(*(int *)this + 0x48))();
        }
        else {
          FUN_1002c67c();
          (**(code **)(*(int *)this + 0x40))(pHVar5,pHVar4);
        }
        param_5._3_1_ = FUN_1002c278();
      }
      else {
        if (pHVar5 != (HCURSOR)0xffffffff) {
          FUN_1002c67c();
          *(undefined4 *)((int)this + 0x18) = 0xffffffff;
        }
        param_5._3_1_ = '\0';
      }
      (**(code **)(*(int *)this + 0x44))(param_5._3_1_);
      goto LAB_1002c5fe;
    }
  }
  pHVar5 = GetCursor();
  cVar2 = (**(code **)(*(int *)this + 0x3c))();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)this + 0x44))(0);
  }
  if (pHVar5 != pHVar4) {
    FUN_1002c67c();
  }
LAB_1002c5fe:
  *(undefined1 *)(param_1 + 0x45) = 0;
  FUN_1002c703();
  return LVar6;
}

