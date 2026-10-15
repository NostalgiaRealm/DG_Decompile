/*
 * FUN_10064baf at 10064baf
 * undefined1 __thiscall FUN_10064baf(void * this, uint param_1, int param_2, int param_3)
 * Address ranges: 10064baf-10064ff2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10064baf(void *this,uint param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  char cVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  RECT *pRVar10;
  int iVar11;
  undefined4 extraout_ECX;
  undefined4 uVar12;
  int *extraout_EDX;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_31;
  int local_20;
  undefined4 local_1c [6];
  
  local_31 = 0;
  uVar15 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  iVar14 = uVar15 * 0x1c;
  bVar9 = (byte)param_1;
  if ((*(int *)((int)this + 0x80) == 0) ||
     (BVar5 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x80) + 0xc + iVar14)), BVar5 != 0)) {
    if (*(int *)((int)this + 0x1c) == 0) {
      iVar8 = (int)(uVar15 & 0x1f) >> 3;
      if (((*(byte *)((int)this + iVar8 + (uVar15 >> 5) * 4 + 0x16c) >> (uVar15 & 7) & 1) != 0) ||
         (BVar5 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x100) + 0xc + iVar14)), BVar5 == 0)) {
        iVar1 = *(int *)((int)this + 0x100);
        local_20 = *(int *)(iVar1 + 0x10 + iVar14);
        uVar6 = *(uint *)(iVar1 + 0x14 + iVar14);
        uVar7 = *(uint *)(iVar1 + 0x18 + iVar14);
        if ((*(byte *)((int)this + iVar8 + (uVar15 >> 5) * 4 + 0x16c) >> (uVar15 & 7) & 1) != 0) {
          uVar7 = *(uint *)((int)this + 0x14) >> (bVar9 & 0x1f);
          uVar13 = *(uint *)((int)this + 0x18) >> (bVar9 & 0x1f);
          local_20 = 0;
          uVar6 = 1;
          if (uVar7 != 0) {
            uVar6 = uVar7;
          }
          uVar7 = 1;
          if (uVar13 != 0) {
            uVar7 = uVar13;
          }
        }
        FUN_1006480a(this,param_1,param_2,(float)local_20,(float)(int)uVar6,(float)(int)uVar7,0);
        local_31 = 1;
      }
    }
  }
  else {
    if ((*(int *)((int)this + 0xf4) != 0) && (*(int *)((int)this + 0x74) != 0)) {
      iVar8 = *(int *)((int)this + 0x80);
      local_31 = 1;
      pRVar10 = (RECT *)(iVar8 + 0xc + iVar14);
      iVar1 = pRVar10->left;
      fVar16 = (float)*(int *)(iVar8 + 0x10 + iVar14);
      fVar17 = (float)*(int *)(iVar8 + 0x14 + iVar14);
      fVar18 = (float)*(int *)(iVar8 + 0x18 + iVar14);
      cVar4 = FUN_100306bf(*(int *)((int)this + 0x34));
      if (cVar4 == '\0') {
        FUN_10062071(this,extraout_EDX,*(int **)((int)this + 0x74),param_1,param_2,pRVar10);
        FUN_1006480a(this,param_1,param_2,fVar16,fVar17,fVar18,0);
      }
      else {
        FUN_10062071(this,extraout_EDX,*(int **)((int)this + 0x74),uVar15,0,pRVar10);
        iVar8 = *(int *)((int)this + 0x58);
        if (iVar8 == 0) {
          iVar8 = *(int *)((int)this + 0x54);
        }
        iVar11 = *(int *)((int)this + 0xf8);
        if (iVar11 == 0) {
          iVar11 = *(int *)((int)this + 0xf4);
        }
        FUN_1006118c(*(void **)((int)this + 0xa8),*(int *)((int)this + 0x1c),
                     *(uint *)((int)this + 0x1c),param_1,param_2,param_1,param_2,
                     *(float *)((int)this + 0x148) * (float)iVar1,
                     *(float *)((int)this + 0x14c) * fVar16,*(float *)((int)this + 0x148) * fVar17,
                     *(float *)((int)this + 0x14c) * fVar18,(float)iVar1,fVar16,fVar17,fVar18,0,0,0,
                     iVar11,*(undefined4 *)((int)this + 0xfc),*(undefined4 *)((int)this + 0x11c),
                     iVar8,*(undefined4 *)(*(int *)((int)this + 0x60) + 4 + iVar14),'\0',0x17,1);
        uVar6 = uVar15 >> 5;
        iVar8 = (int)(uVar15 & 0x1f) >> 3;
        pbVar3 = (byte *)((int)this + iVar8 + uVar6 * 4 + 0x154);
        *pbVar3 = *pbVar3 & ~('\x01' << (uVar15 & 7));
        pbVar3 = (byte *)((int)this + iVar8 + uVar6 * 4 + 0x178);
        *pbVar3 = *pbVar3 | '\x01' << (uVar15 & 7);
        pbVar3 = (byte *)((int)this + iVar8 + uVar6 * 4 + 0x90);
        *pbVar3 = *pbVar3 | '\x01' << (uVar15 & 7);
        SetRect((LPRECT)(*(int *)((int)this + 0x60) + 0xc + iVar14),0,0,
                *(uint *)((int)this + 0x14) >> (bVar9 & 0x1f),
                *(uint *)((int)this + 0x18) >> (bVar9 & 0x1f));
      }
    }
    SetRectEmpty((LPRECT)(*(int *)((int)this + 0x80) + 0xc + iVar14));
  }
  cVar4 = FUN_100306bf(*(int *)((int)this + 0x34));
  if (cVar4 == '\0') {
    if ((param_3 == 1) && (*(int *)((int)this + 0x58) != 0)) {
      iVar14 = (int)(uVar15 & 0x1f) >> 3;
      if ((*(byte *)((int)this + iVar14 + (uVar15 >> 5) * 4 + 0x154) >> (uVar15 & 7) & 1) == 0) {
        FUN_10096014(*(void **)((int)this + 0x40),extraout_ECX,(int)this);
        if (*(char *)((int)this + 0x150) == '\0') {
          iVar8 = FUN_1007923c(this,local_1c);
          uVar12 = *(undefined4 *)(iVar8 + 4);
        }
        else {
          iVar8 = 0x38;
          if (*(int *)((int)this + 0x1c) != 0x15) {
            iVar8 = 0x28;
          }
          uVar12 = *(undefined4 *)(iVar8 + *(int *)((int)this + 4));
        }
        piVar2 = *(int **)(*(int *)((int)this + 0x44) + 4);
        (**(code **)(*piVar2 + 0xe4))
                  (piVar2,*(undefined4 *)((int)this + 0x54),uVar15,*(undefined4 *)((int)this + 0x58)
                   ,uVar15,uVar12);
        pbVar3 = (byte *)((int)this + iVar14 + (uVar15 >> 5) * 4 + 0x154);
        *pbVar3 = *pbVar3 | '\x01' << (uVar15 & 7);
        LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x40) + 0x4a0));
      }
    }
  }
  else if (*(int *)((int)this + 0x58) != 0) {
    if (param_3 == 2) {
      if (*(int *)((int)this + 0x11c) == 0) {
        return local_31;
      }
      if ((*(byte *)((int)this + ((int)(uVar15 & 0x1f) >> 3) + (uVar15 >> 5) * 4 + 0x178) >>
           (uVar15 & 7) & 1) != 0) {
        return local_31;
      }
      iVar14 = 2;
    }
    else {
      if (param_3 != 1) {
        return local_31;
      }
      if (*(int *)((int)this + 0xc0) == 0) {
        return local_31;
      }
      if ((*(byte *)((int)this + ((int)(uVar15 & 0x1f) >> 3) + (uVar15 >> 5) * 4 + 0x154) >>
           (uVar15 & 7) & 1) != 0) {
        return local_31;
      }
      iVar14 = 1;
    }
    FUN_100645fc(this,param_1,param_2,iVar14);
  }
  return local_31;
}

