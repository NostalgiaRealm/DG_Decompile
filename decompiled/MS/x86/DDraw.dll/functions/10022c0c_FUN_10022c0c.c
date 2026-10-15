/*
 * FUN_10022c0c at 10022c0c
 * undefined __thiscall FUN_10022c0c(void * this, HICON param_1)
 * Address ranges: 10022c0c-10022d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10022c0c(void *this,HICON param_1)

{
  void *this_00;
  uint *puVar1;
  char cVar2;
  HWND pHVar3;
  int *piVar4;
  int iVar5;
  char cStack_85;
  HBITMAP pHStack_84;
  void *pvStack_80;
  BOOL BStack_7c;
  DWORD DStack_78;
  DWORD DVar6;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  DWORD DStack_48;
  DWORD DStack_44;
  uint uStack_40;
  int iStack_3c;
  void *pvStack_38;
  int iStack_34;
  void *pvStack_30;
  
  this_00 = (void *)((int)this + -0x10);
  DStack_78 = 0x10022c2a;
  pHVar3 = FUN_100245b0(this_00,'\0');
  if (pHVar3 != (HWND)0x0) {
    DVar6 = 0;
    DStack_78 = 0;
    BStack_7c = 0;
    pvStack_80 = (void *)0x2;
    pHStack_84 = (HBITMAP)0x2;
    cStack_85 = '\0';
    piVar4 = (int *)(**(code **)(**(int **)((int)this + 0x108) + 0x30))(pHVar3,0,0);
    if (piVar4 != (int *)0x0) {
      cVar2 = FUN_10025316(this_00);
      if (cVar2 == '\0') {
        if (param_1 == (HICON)0x0) {
          uStack_40 = 1;
          iStack_50 = 0;
          uStack_4c = 0;
          DStack_48 = 0;
          DStack_44 = 0;
          iStack_3c = 0;
          pvStack_38 = (void *)0x0;
          iStack_34 = 0;
          pvStack_30 = (void *)0x0;
          (**(code **)(*piVar4 + 0x2c))(&iStack_50);
        }
        else {
          cStack_85 = cVar2;
          pHStack_84 = FUN_10004585(param_1,(PICONINFO)&BStack_7c,&cStack_85);
          if (pHStack_84 != (HBITMAP)0x0) {
            GetObjectW(pHStack_84,0x18,&stack0xffffff98);
            if (cStack_85 == '\0') {
              iVar5 = 0;
            }
            else {
              iVar5 = (iStack_64 * 4) / 2 + iStack_54;
            }
            uStack_40 = FUN_10024e6a((int)this_00);
            uStack_4c = uStack_60;
            iStack_50 = iStack_64 / 2;
            iStack_3c = iStack_54;
            DStack_48 = DStack_78;
            pvStack_30 = (void *)0x0;
            if (cStack_85 != '\0') {
              pvStack_30 = this;
            }
            DStack_44 = DVar6;
            pvStack_38 = this;
            iStack_34 = iVar5;
            (**(code **)(*piVar4 + 0x2c))(&iStack_50);
            DeleteObject(pHStack_84);
            this = pvStack_80;
          }
        }
        if (*(int *)((int)this + 0xe4) != 0) {
          puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0xe4) + 4) + 200);
          *puVar1 = *puVar1 | 0x40;
        }
      }
      (**(code **)(*piVar4 + 0x10))();
    }
  }
  return;
}

