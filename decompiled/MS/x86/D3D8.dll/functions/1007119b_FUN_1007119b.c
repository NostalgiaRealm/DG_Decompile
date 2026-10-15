/*
 * FUN_1007119b at 1007119b
 * undefined __thiscall FUN_1007119b(void * this, uint param_1, int param_2)
 * Address ranges: 1007119b-100714ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007119b(void *this,uint param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *this_00;
  LPRECT lprcDst;
  int iVar8;
  uint uVar9;
  tagRECT local_18;
  
  cVar2 = FUN_1006f16a((int)this);
  if (cVar2 == '\0') {
    FUN_1006c41d(this_00,param_1,param_2);
  }
  else {
    uVar9 = *(int *)((int)this + 0x2c) * param_2 + param_1;
    if ((*(int *)((int)this + 0x148) != 0) &&
       ((*(byte *)((int)this + ((int)(uVar9 & 0x1f) >> 3) + (uVar9 >> 5) * 4 + 0x1cc) >> (uVar9 & 7)
        & 1) == 0)) {
      iVar8 = uVar9 * 0x20;
      BVar3 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x150) + 0x10 + iVar8));
      if (BVar3 == 0) {
        iVar5 = *(int *)((int)this + 0x150);
        FUN_1007031a(this,param_1,param_2,(float)*(int *)(iVar5 + 0x14 + iVar8),
                     (float)*(int *)(iVar5 + 0x18 + iVar8),(float)*(int *)(iVar5 + 0x1c + iVar8),1);
      }
    }
    iVar8 = uVar9 * 0x20;
    BVar3 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x5c) + 0x10 + iVar8));
    if (BVar3 == 0) {
      if (*(int *)((int)this + 0x148) != 0) {
        lprcDst = (LPRECT)(*(int *)((int)this + 0x18c) + 0x10 + iVar8);
        UnionRect(lprcDst,lprcDst,(RECT *)(*(int *)((int)this + 0x5c) + 0x10 + iVar8));
        cVar2 = FUN_100306bf(*(int *)((int)this + 0x34));
        if (cVar2 == '\0') {
          if (*(int *)((int)this + 0x58) != 0) {
            iVar5 = 0x38;
            if (*(int *)((int)this + 0x1c) != 0x15) {
              iVar5 = 0x28;
            }
            FUN_1006952f(*(void **)((int)this + 0xe0),(int)this + 0x48,(int)this + 0x48,
                         *(uint *)((int)this + 0x58),*(uint *)((int)this + 0x54),0,0,uVar9,0,0,uVar9
                         ,0,0,*(undefined4 *)(iVar5 + (int)*(void **)((int)this + 0xe0)),0,0,
                         (int *)(*(int *)((int)this + 0x5c) + 0x10 + iVar8),
                         *(uint *)((int)this + 0x138),1,'\x01','\0');
          }
          pbVar1 = (byte *)((int)this + ((int)(uVar9 & 0x1f) >> 3) + (uVar9 >> 5) * 4 + 0x1c0);
          *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
          FUN_100706f1(this,param_1,param_2);
        }
        else {
          FUN_1006fb64(this,param_1,param_2,2);
          uVar4 = *(int *)((int)this + 0x2c) * param_2 + param_1;
          FUN_10069984(*(void **)((int)this + 0xe0),(int)this + 0x178,(int)this + 0x13c,uVar4,uVar4)
          ;
          if ((&DAT_100b0728)[*(int *)((int)this + 0x1c)] != '\0') {
            iVar5 = FUN_1006f182((int)this);
            if (((&DAT_100b0728)[iVar5] != '\0') &&
               (*(char *)(*(int *)((int)this + 0x10) * 0x18 + 0x531 + *(int *)((int)this + 0x40)) !=
                '\0')) {
              uVar4 = (*(int *)((int)this + 0x24) + param_2) * *(int *)((int)this + 0x2c) + param_1;
              FUN_10069984(*(void **)((int)this + 0xe0),(int)this + 0x178,(int)this + 0x13c,uVar4,
                           uVar4);
            }
          }
        }
        iVar5 = (int)this + 0x13c;
        if (*(int *)((int)this + 0x90) != 0) {
          FUN_1006c237(this,(int)this + 0x84,iVar5,iVar5,iVar5,param_1,param_2,
                       (RECT *)(*(int *)((int)this + 0x18c) + 0x10 + iVar8));
          *(undefined4 *)((int)this + 0xe8) = 0;
          *(undefined4 *)((int)this + 0xec) = 0;
        }
      }
      SetRectEmpty((LPRECT)(*(int *)((int)this + 0x5c) + 0x10 + iVar8));
    }
    else if ((*(byte *)((int)this + ((int)(uVar9 & 0x1f) >> 3) + (uVar9 >> 5) * 4 + 0x1cc) >>
              (uVar9 & 7) & 1) == 0) {
      if (*(int *)((int)this + 0x148) != 0) {
        uVar6 = *(uint *)((int)this + 0x14) >> ((byte)param_1 & 0x1f);
        uVar4 = 1;
        if (uVar6 != 0) {
          uVar4 = uVar6;
        }
        uVar7 = *(uint *)((int)this + 0x18) >> ((byte)param_1 & 0x1f);
        uVar6 = 1;
        if (uVar7 != 0) {
          uVar6 = uVar7;
        }
        SetRect(&local_18,0,0,uVar4,uVar6);
        FUN_1006c237(this,(int)this + 0x178,(int)this + 0x13c,&local_18,&local_18,param_1,param_2,
                     &local_18);
      }
      if (*(int *)((int)this + 0x90) != 0) {
        FUN_1006c237(this,(int)this + 0x84,(int)this + 0x13c,iVar8,iVar8,param_1,param_2,
                     (RECT *)(*(int *)((int)this + 0x18c) + 0x10 + iVar8));
        *(undefined4 *)((int)this + 0xe8) = 0;
        *(undefined4 *)((int)this + 0xec) = 0;
      }
    }
    pbVar1 = (byte *)((int)this + ((int)(uVar9 & 0x1f) >> 3) + (uVar9 >> 5) * 4 + 0x1cc);
    *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
  }
  return;
}

