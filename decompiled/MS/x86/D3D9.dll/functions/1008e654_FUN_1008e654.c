/*
 * FUN_1008e654 at 1008e654
 * LPRECT __thiscall FUN_1008e654(void * this, LPRECT param_1, int * param_2)
 * Address ranges: 1008e654-1008e6ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPRECT __thiscall FUN_1008e654(void *this,LPRECT param_1,int *param_2)

{
  int iVar1;
  BOOL BVar2;
  LONG unaff_ESI;
  int *unaff_EDI;
  LONG LStack_d8;
  undefined1 auStack_74 [80];
  HMONITOR pHStack_24;
  
  SetRectEmpty(param_1);
  iVar1 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x18) + 0x1c))
                    ((int *)**(undefined4 **)((int)this + 0x18));
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*unaff_EDI + 0x1c))(unaff_EDI,auStack_74);
    if (-1 < iVar1) {
      FUN_100cfed0((int *)&stack0xffffff20,0,100);
      BVar2 = GetMonitorInfoW(pHStack_24,(LPMONITORINFO)&stack0xffffff1c);
      if (BVar2 != 0) {
        param_1->left = (LONG)unaff_EDI;
        param_1->top = unaff_ESI;
        param_1->right = LStack_d8;
        param_1->bottom = 0;
      }
    }
    (**(code **)(*param_2 + 8))(param_2);
  }
  return param_1;
}

