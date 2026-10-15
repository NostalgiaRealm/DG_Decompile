/*
 * FUN_1000e536 at 1000e536
 * undefined __thiscall FUN_1000e536(void * this, uint param_1, int param_2)
 * Address ranges: 1000e536-1000e7ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e536(void *this,uint param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  BOOL BVar4;
  uint yBottom;
  void *this_00;
  int iVar5;
  undefined4 extraout_ECX;
  LPRECT lprcDst;
  int iVar6;
  uint xRight;
  uint uVar7;
  tagRECT local_18;
  
  cVar3 = FUN_1000ce28((int)this);
  if (cVar3 == '\0') {
    FUN_1000b3d6(this_00,param_1,param_2);
  }
  else {
    uVar7 = *(int *)((int)this + 0x2c) * param_2 + param_1;
    if (*(int *)((int)this + 0xfc) != 0) {
      iVar5 = uVar7 * 0x1c;
      BVar4 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x100) + 0xc + iVar5));
      if (BVar4 == 0) {
        iVar6 = *(int *)((int)this + 0x100);
        FUN_1000d99e(this,param_1,param_2,(float)*(int *)(iVar6 + 0x10 + iVar5),
                     (float)*(int *)(iVar6 + 0x14 + iVar5),(float)*(int *)(iVar6 + 0x18 + iVar5),1);
      }
    }
    iVar5 = uVar7 * 0x1c;
    BVar4 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x60) + 0xc + iVar5));
    if (BVar4 == 0) {
      if ((*(int *)((int)this + 0xfc) != 0) && (*(int *)((int)this + 0x74) != 0)) {
        FUN_10048d82(*(void **)((int)this + 0x40),extraout_ECX,(int)this);
        lprcDst = (LPRECT)(iVar5 + 0xc + *(int *)((int)this + 0x120));
        UnionRect(lprcDst,lprcDst,(RECT *)(*(int *)((int)this + 0x60) + iVar5 + 0xc));
        cVar3 = FUN_10006992(*(int *)((int)this + 0x34));
        if (cVar3 == '\0') {
          if (*(int *)((int)this + 0x58) != 0) {
            piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
            iVar6 = 0x38;
            if (*(int *)((int)this + 0x1c) != 0x15) {
              iVar6 = 0x28;
            }
            (**(code **)(*piVar1 + 0xe4))
                      (piVar1,*(undefined4 *)((int)this + 0x54),uVar7,
                       *(undefined4 *)((int)this + 0x58),uVar7,
                       *(undefined4 *)(iVar6 + *(int *)((int)this + 4)));
          }
          pbVar2 = (byte *)((int)this + ((int)(uVar7 & 0x1f) >> 3) + (uVar7 >> 5) * 4 + 0x154);
          *pbVar2 = *pbVar2 | '\x01' << (uVar7 & 7);
          FUN_1000db95(this,param_1,param_2);
        }
        else {
          FUN_1000d790(this,param_1,param_2,2);
          piVar1 = *(int **)(*(int *)((int)this + 0x44) + 4);
          (**(code **)(*piVar1 + 0xbc))
                    (piVar1,*(undefined4 *)((int)this + 0xf4),*(undefined4 *)((int)this + 0x114));
        }
        FUN_1000b205(this,*(int **)((int)this + 0x74),*(int **)((int)this + 0xf4),param_1,param_2,
                     (RECT *)(*(int *)((int)this + 0x120) + iVar5 + 0xc));
        LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x40) + 0x4a0));
      }
      SetRectEmpty((LPRECT)(*(int *)((int)this + 0x60) + iVar5 + 0xc));
    }
    else if ((*(byte *)((int)this + ((int)(uVar7 & 0x1f) >> 3) + (uVar7 >> 5) * 4 + 0x160) >>
              (uVar7 & 7) & 1) == 0) {
      yBottom = *(uint *)((int)this + 0x18) >> ((byte)param_1 & 0x1f);
      xRight = *(uint *)((int)this + 0x14) >> ((byte)param_1 & 0x1f);
      if (yBottom == 0) {
        yBottom = 1;
      }
      if (xRight == 0) {
        xRight = 1;
      }
      SetRect(&local_18,0,0,xRight,yBottom);
      if (*(int **)((int)this + 0xf4) != (int *)0x0) {
        FUN_1000b205(this,*(int **)((int)this + 0x114),*(int **)((int)this + 0xf4),param_1,param_2,
                     &local_18);
      }
      if (*(int *)((int)this + 0x74) != 0) {
        FUN_1000b205(this,*(int **)((int)this + 0x74),*(int **)((int)this + 0xf4),param_1,param_2,
                     (RECT *)(*(int *)((int)this + 0x120) + iVar5 + 0xc));
      }
    }
    pbVar2 = (byte *)((int)this + ((int)(uVar7 & 0x1f) >> 3) + (uVar7 >> 5) * 4 + 0x160);
    *pbVar2 = *pbVar2 | '\x01' << (uVar7 & 7);
  }
  return;
}

