/*
 * FUN_10070a6f at 10070a6f
 * undefined1 __thiscall FUN_10070a6f(void * this, uint param_1, undefined4 * param_2, int param_3)
 * Address ranges: 10070a6f-10071021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10070a6f(void *this,uint param_1,undefined4 *param_2,int param_3)

{
  void *pvVar1;
  byte *pbVar2;
  char cVar3;
  BOOL BVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float *pfVar20;
  uint uVar21;
  byte bVar22;
  undefined4 local_70 [5];
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  void *local_4c;
  void *local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  void *local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  uint local_10;
  void *local_c;
  undefined1 local_5;
  
  local_5 = 0;
  uVar12 = *(int *)((int)this + 0x2c) * (int)param_2 + param_1;
  local_10 = uVar12;
  local_c = this;
  if (*(int *)((int)this + 0x150) != 0) {
    uVar10 = uVar12 * 0x20;
    local_50 = uVar10;
    BVar4 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x150) + 0x10 + uVar10));
    if (BVar4 == 0) {
      iVar9 = *(int *)((int)this + 0x150);
      local_5 = 1;
      fVar14 = (float)*(int *)(iVar9 + 0x10 + uVar10);
      fVar15 = (float)*(int *)(iVar9 + 0x14 + uVar10);
      fVar16 = (float)*(int *)(iVar9 + 0x18 + uVar10);
      fVar13 = (float)*(int *)(iVar9 + 0x1c + uVar10);
      local_20 = fVar14;
      local_1c = fVar15;
      local_18 = fVar16;
      local_14 = fVar13;
      cVar3 = FUN_100306bf(*(int *)((int)this + 0x34));
      if (cVar3 == '\0') {
        FUN_1007031a(this,param_1,(int)param_2,fVar15,fVar16,fVar13,0);
      }
      else {
        bVar22 = 1;
        uVar10 = 0x17;
        local_24 = *(int *)((int)this + 0x58);
        if (local_24 == 0) {
          local_24 = *(int *)((int)this + 0x54);
        }
        uVar12 = *(uint *)((int)this + 400);
        uVar21 = *(uint *)((int)this + 0x154);
        pvVar1 = *(void **)(*(int *)((int)this + 0x44) + 0x15d8);
        local_34 = *(float *)((int)local_c + 0x1b8) * fVar13;
        local_28 = *(void **)(*(int *)((int)local_c + 0x44) + 0x15d8);
        local_2c = *(int *)((int)local_c + 0x184);
        local_30 = *(float *)((int)local_c + 0x148);
        local_44 = *(int *)((int)local_c + 0x1c);
        local_48 = *(void **)((int)local_c + 0xe0);
        pfVar20 = (float *)0x0;
        uVar19 = *(undefined4 *)((int)local_c + 0x7c);
        uVar18 = 0;
        uVar17 = 0;
        local_38 = *(float *)((int)local_c + 0x1b4) * fVar16;
        local_3c = *(float *)((int)local_c + 0x1b8) * fVar15;
        local_40 = *(float *)((int)local_c + 0x1b4) * fVar14;
        piVar5 = FUN_10097b61(*(void **)(*(int *)((int)this + 0x44) + 0x15e0),(int *)&local_4c,
                              *(uint *)((int)local_c + 0x68),local_10);
        piVar6 = FUN_10097b61(pvVar1,&local_54,uVar12,0);
        piVar7 = FUN_10097b61(local_28,&local_58,uVar21,0);
        uVar12 = local_10;
        FUN_1006937d(local_48,local_44,local_44,param_1,local_10,param_1,param_2,local_10,local_40,
                     local_3c,local_38,local_34,local_20,local_1c,local_18,local_14,0,0,local_30,
                     local_2c,local_24,(undefined4 *)&DAT_100b0400,(undefined4 *)&DAT_100b0400,
                     piVar7,piVar6,piVar5,uVar17,uVar18,uVar19,pfVar20,uVar10,bVar22);
        this = local_c;
        iVar9 = *(int *)((int)local_c + 0x10);
        if ((((&DAT_100b0728)[*(int *)((int)local_c + 0x1c)] != '\0') &&
            (iVar8 = FUN_1006f182((int)local_c), (&DAT_100b0728)[iVar8] != '\0')) &&
           (*(char *)(iVar9 * 0x18 + 0x531 + *(int *)((int)this + 0x40)) != '\0')) {
          local_2c = (*(int *)((int)this + 0x24) + (int)param_2) * *(int *)((int)this + 0x2c) +
                     param_1;
          local_24 = *(int *)((int)this + 0x58);
          if (local_24 == 0) {
            local_24 = *(int *)((int)this + 0x54);
          }
          bVar22 = 1;
          uVar21 = 0x27;
          local_3c = *(float *)((int)local_c + 0x1b8) * local_14;
          pvVar1 = *(void **)(*(int *)((int)this + 0x44) + 0x15d8);
          local_34 = *(float *)((int)local_c + 0x1b8) * local_1c;
          uVar12 = *(uint *)((int)this + 400);
          uVar10 = *(uint *)((int)this + 0x154);
          local_48 = *(void **)(*(int *)((int)local_c + 0x44) + 0x15d8);
          local_44 = *(int *)((int)local_c + 0x184);
          local_40 = *(float *)((int)local_c + 0x148);
          local_28 = *(void **)((int)local_c + 0x1c);
          local_4c = *(void **)((int)local_c + 0xe0);
          pfVar20 = (float *)0x0;
          uVar19 = *(undefined4 *)((int)local_c + 0x7c);
          local_38 = *(float *)((int)local_c + 0x1b4) * local_18;
          uVar18 = 0;
          local_30 = *(float *)((int)local_c + 0x1b4) * local_20;
          uVar17 = 0;
          piVar5 = FUN_10097b61(*(void **)(*(int *)((int)this + 0x44) + 0x15e0),&local_58,
                                *(uint *)((int)local_c + 0x68),local_10);
          piVar6 = FUN_10097b61(pvVar1,&local_54,uVar12,1);
          piVar7 = FUN_10097b61(local_48,&local_5c,uVar10,1);
          FUN_1006937d(local_4c,(int)local_28,(uint)local_28,param_1,local_2c,param_1,param_2,
                       local_2c,local_30,local_34,local_38,local_3c,local_20,local_1c,local_18,
                       local_14,0,0,local_40,local_44,local_24,(undefined4 *)&DAT_100b0400,
                       (undefined4 *)&DAT_100b0400,piVar7,piVar6,piVar5,uVar17,uVar18,uVar19,pfVar20
                       ,uVar21,bVar22);
          this = local_c;
          uVar12 = local_10;
        }
        iVar9 = (int)(uVar12 & 0x1f) >> 3;
        pbVar2 = (byte *)((int)this + iVar9 + (uVar12 >> 5) * 4 + 0x1c0);
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar12 & 7));
        pbVar2 = (byte *)((int)this + iVar9 + (uVar12 >> 5) * 4 + 0x1e4);
        *pbVar2 = *pbVar2 | '\x01' << (uVar12 & 7);
        uVar10 = local_50;
      }
      SetRectEmpty((LPRECT)(*(int *)((int)this + 0x150) + 0x10 + uVar10));
      goto LAB_10070eec;
    }
  }
  if (((*(int *)((int)this + 0x1c) == 0) &&
      ((*(byte *)((int)this + ((int)(uVar12 & 0x1f) >> 3) + (uVar12 >> 5) * 4 + 0x1d8) >>
        (uVar12 & 7) & 1) != 0)) && (*(int *)((int)this + 0x150) != 0)) {
    uVar21 = *(uint *)((int)this + 0x18) >> ((byte)param_1 & 0x1f);
    uVar11 = *(uint *)((int)this + 0x14) >> ((byte)param_1 & 0x1f);
    uVar10 = 1;
    if (uVar21 != 0) {
      uVar10 = uVar21;
    }
    uVar21 = 1;
    if (uVar11 != 0) {
      uVar21 = uVar11;
    }
    FUN_1007031a(this,param_1,(int)param_2,0.0,(float)(int)uVar21,(float)(int)uVar10,0);
    local_5 = 1;
  }
LAB_10070eec:
  cVar3 = FUN_100306bf(*(int *)((int)this + 0x34));
  if (cVar3 == '\0') {
    if ((param_3 == 1) && (uVar10 = *(uint *)((int)this + 0x58), uVar10 != 0)) {
      local_50 = uVar12 & 0x1f;
      if ((*(byte *)((int)this + ((int)local_50 >> 3) + (uVar12 >> 5) * 4 + 0x1c0) >> (uVar12 & 7) &
          1) == 0) {
        if (*(char *)((int)this + 0x1bc) == '\0') {
          iVar9 = FUN_1007923c(this,local_70);
          param_1 = *(uint *)(iVar9 + 4);
        }
        else {
          iVar9 = 0x38;
          if (*(int *)((int)this + 0x1c) != 0x15) {
            iVar9 = 0x28;
          }
          param_1 = *(uint *)(iVar9 + *(int *)((int)this + 0xe0));
        }
        param_2 = (undefined4 *)((int)this + 0xe0);
        FUN_1006952f((void *)*param_2,(int)this + 0x48,(int)this + 0x48,uVar10,
                     *(uint *)((int)this + 0x54),0,0,uVar12,0,0,uVar12,0,0,param_1,0,0,
                     (int *)(*(int *)((int)this + 0x5c) + uVar12 * 0x20 + 0x10),
                     *(uint *)((int)this + 0x138),1,'\x01','\0');
        pbVar2 = (byte *)((int)this + ((int)local_50 >> 3) + (uVar12 >> 5) * 4 + 0x1c0);
        *pbVar2 = *pbVar2 | '\x01' << (local_50 & 7);
      }
    }
  }
  else if (*(int *)((int)this + 0x58) != 0) {
    if (param_3 == 2) {
      if (*(int *)((int)this + 0x184) == 0) {
        return local_5;
      }
      if ((*(byte *)((int)this + ((int)(uVar12 & 0x1f) >> 3) + (uVar12 >> 5) * 4 + 0x1e4) >>
           (uVar12 & 7) & 1) != 0) {
        return local_5;
      }
      iVar9 = 2;
    }
    else {
      if (param_3 != 1) {
        return local_5;
      }
      if (*(int *)((int)this + 0xfc) == 0) {
        return local_5;
      }
      if ((*(byte *)((int)this + ((int)(uVar12 & 0x1f) >> 3) + (uVar12 >> 5) * 4 + 0x1c0) >>
           (uVar12 & 7) & 1) != 0) {
        return local_5;
      }
      iVar9 = 1;
    }
    FUN_1006fb64(this,param_1,(int)param_2,iVar9);
  }
  return local_5;
}

