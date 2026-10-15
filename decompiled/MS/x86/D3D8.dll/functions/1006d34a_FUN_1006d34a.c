/*
 * FUN_1006d34a at 1006d34a
 * uint __thiscall FUN_1006d34a(void * this, void * param_1, int param_2, int param_3, int param_4, uint param_5, int * param_6, LPRECT param_7, byte * param_8)
 * Address ranges: 1006d34a-1006dda2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_1006d34a(void *this,void *param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6,
            LPRECT param_7,byte *param_8)

{
  undefined3 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  byte extraout_var;
  uint uVar12;
  byte extraout_var_00;
  void *pvVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 extraout_ECX;
  void *this_00;
  undefined4 extraout_ECX_00;
  void *this_01;
  undefined4 extraout_ECX_01;
  void *this_02;
  int extraout_EDX;
  undefined1 uVar16;
  undefined4 unaff_EBX;
  undefined4 *puVar17;
  undefined4 *puVar18;
  void *pvVar19;
  uint uStack_c0;
  uint *puStack_bc;
  uint uStack_b8;
  int iStack_b4;
  uint uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  int iStack_98;
  int iStack_90;
  void *pvStack_8c;
  uint uStack_88;
  uint uStack_84;
  void *local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_70;
  uint uStack_6c;
  int iStack_60;
  undefined1 local_54 [8];
  undefined1 auStack_4c [48];
  uint uStack_1c;
  
  uVar1 = (undefined3)((uint)unaff_EBX >> 8);
  uVar8 = 0;
  uVar16 = 0;
  local_80 = this;
  iVar5 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x38))
                    (*(int **)((int)param_1 + 0xc),local_54,0);
  if (iVar5 < 0) goto LAB_1006dd98;
  iStack_90 = *(int *)((int)this + 0x2c) * param_3 + param_2;
  FUN_1006c7e5(this,&iStack_a8,param_2,param_3);
  iVar5 = *param_6;
  local_80 = (void *)param_6[3];
  pvVar19 = (void *)param_6[1];
  iStack_ac = param_6[2];
  iVar7 = *(int *)((int)this + 0x34);
  *param_8 = 1;
  cVar2 = FUN_100306bf(iVar7);
  if (((cVar2 != '\0') &&
      (*(char *)(*(int *)((int)this + 0x10) * 0x18 + 0x532 + *(int *)((int)this + 0x40)) == '\0'))
     && ((iVar5 != 0 || pvVar19 != (void *)0x0 ||
         ((iStack_ac != iStack_98 || (extraout_EDX != uStack_9c - 1)))))) {
    (**(code **)(**(int **)((int)param_1 + 0xc) + 0x28))(*(int **)((int)param_1 + 0xc),auStack_4c);
    *param_8 = ~(byte)(uStack_1c >> 1) & 1;
  }
  if ((((*(int *)(*(int *)((int)this + 0x44) + 0x12e8) == 0) && (iStack_60 == 4)) &&
      (cVar2 = FUN_100306bf(*(int *)((int)this + 0x34)), cVar2 == '\0')) &&
     (cVar2 = FUN_1009f300(*(void **)(*(int *)((int)this + 0x40) + 0x172c0)), cVar2 != '\0')) {
    uVar6 = FUN_1006b761(param_1,iStack_90);
    if ((char)uVar6 != '\0') {
      iStack_b4 = 0;
      uStack_c0 = 0;
      FUN_1006c8a8(this,param_2,param_3,&iStack_b4,&uStack_c0,(uint *)0x0);
      uVar8 = CONCAT31(uVar1,1);
      if (iVar5 != 0) {
        puVar17 = (undefined4 *)((int)pvVar19 * param_5 + iStack_a4 * iVar5 + param_4);
        uStack_88 = (int)pvVar19 + 1;
        iVar7 = iStack_ac;
        if (local_80 != pvVar19) {
          iVar7 = iStack_98;
        }
        FUN_1006c867((int *)&uStack_7c,iVar5,(int)pvVar19,iVar7,uStack_88,uStack_a0,uStack_9c);
        uVar8 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x30))
                          (*(int **)((int)param_1 + 0xc),iStack_90,&uStack_7c,puVar17,param_5,0);
        uVar12 = uStack_c0;
        uStack_b8 = uStack_7c / uStack_a0;
        uVar8 = uVar8 >> 0x1f ^ 1;
        uVar9 = uStack_78 / uStack_9c;
        uVar10 = uStack_6c / uStack_9c;
        pvVar19 = (void *)uStack_88;
        uStack_b0 = uVar8;
        if (iStack_b4 != 0) {
          puVar18 = (undefined4 *)(iStack_a4 * uStack_b8 + uStack_c0 * uVar9 + iStack_b4);
          uVar14 = (uStack_70 / uStack_a0 - uStack_b8) * iStack_a4;
          if ((param_5 == uStack_c0) && (uVar14 - param_5 == 0)) {
            FUN_100adac0(puVar18,puVar17,(uVar10 - uVar9) * param_5);
            pvVar19 = (void *)uStack_88;
          }
          else {
            for (; uStack_b0 = uVar8, uStack_88 = (uint)pvVar19, (int)uVar9 < (int)uVar10;
                uVar9 = uVar9 + 1) {
              FUN_100adac0(puVar18,puVar17,uVar14);
              puVar17 = (undefined4 *)((int)puVar17 + param_5);
              puVar18 = (undefined4 *)((int)puVar18 + uVar12);
              uVar8 = uStack_b0;
              this = pvStack_8c;
              pvVar19 = (void *)uStack_88;
            }
          }
        }
      }
      if (pvVar19 < local_80) {
        puVar17 = (undefined4 *)((int)pvVar19 * param_5 + param_4);
        pvVar11 = local_80;
        if (iStack_ac == iStack_98) {
          pvVar11 = (void *)((int)local_80 + 1);
        }
        FUN_1006c867((int *)&uStack_7c,0,(int)pvVar19,iStack_98,(int)pvVar11,uStack_a0,uStack_9c);
        (**(code **)(**(int **)((int)param_1 + 0xc) + 0x30))
                  (*(int **)((int)param_1 + 0xc),iStack_90,&uStack_7c,puVar17,param_5,0);
        uVar8 = CONCAT31((int3)(uVar8 >> 8),(byte)uVar8 & (extraout_var >> 7 ^ 1));
        uStack_b8 = uStack_7c / uStack_a0;
        uVar9 = uStack_78 / uStack_9c;
        uVar12 = uStack_6c / uStack_9c;
        uStack_b0 = uVar8;
        if (iStack_b4 != 0) {
          puVar18 = (undefined4 *)(iStack_a4 * uStack_b8 + uStack_c0 * uVar9 + iStack_b4);
          uVar10 = (uStack_70 / uStack_a0 - uStack_b8) * iStack_a4;
          if ((param_5 == uStack_c0) && (uVar10 - param_5 == 0)) {
            FUN_100adac0(puVar18,puVar17,(uVar12 - uVar9) * param_5);
          }
          else {
            for (; uStack_b0 = uVar8, (int)uVar9 < (int)uVar12; uVar9 = uVar9 + 1) {
              FUN_100adac0(puVar18,puVar17,uVar10);
              puVar17 = (undefined4 *)((int)puVar17 + param_5);
              puVar18 = (undefined4 *)((int)puVar18 + uStack_c0);
              uVar8 = uStack_b0;
              this = pvStack_8c;
            }
          }
        }
        pvVar19 = local_80;
        if (iStack_ac == iStack_98) {
          pvVar19 = (void *)((int)local_80 + 1);
          goto LAB_1006d72f;
        }
LAB_1006d737:
        puVar17 = (undefined4 *)((int)pvVar19 * param_5 + param_4);
        FUN_1006c867((int *)&uStack_7c,0,(int)pvVar19,iStack_ac,(int)local_80 + 1,uStack_a0,
                     uStack_9c);
        (**(code **)(**(int **)((int)param_1 + 0xc) + 0x30))
                  (*(int **)((int)param_1 + 0xc),iStack_90,&uStack_7c,puVar17,param_5,0);
        uVar8 = CONCAT31((int3)(uVar8 >> 8),(byte)uVar8 & (extraout_var_00 >> 7 ^ 1));
        uStack_b8 = uStack_7c / uStack_a0;
        uStack_78 = uStack_78 / uStack_9c;
        uStack_6c = uStack_6c / uStack_9c;
        uStack_b0 = uVar8;
        if (iStack_b4 != 0) {
          puVar18 = (undefined4 *)(iStack_a4 * uStack_b8 + uStack_c0 * uStack_78 + iStack_b4);
          uVar9 = (uStack_70 / uStack_a0 - uStack_b8) * iStack_a4;
          if ((param_5 == uStack_c0) && (uVar9 - param_5 == 0)) {
            FUN_100adac0(puVar18,puVar17,(uStack_6c - uStack_78) * param_5);
          }
          else {
            for (; uStack_b0 = uVar8, (int)uStack_78 < (int)uStack_6c; uStack_78 = uStack_78 + 1) {
              FUN_100adac0(puVar18,puVar17,uVar9);
              puVar17 = (undefined4 *)((int)puVar17 + param_5);
              puVar18 = (undefined4 *)((int)puVar18 + uStack_c0);
              uVar8 = uStack_b0;
              this = pvStack_8c;
            }
          }
        }
      }
      else {
LAB_1006d72f:
        if (local_80 == pvVar19) goto LAB_1006d737;
      }
      goto LAB_1006dd59;
    }
  }
  else {
    uVar8 = CONCAT31(uVar1,1);
    if (*param_8 == 0) {
      uStack_b0 = uVar8;
      uVar6 = FUN_1006c738(this);
      uVar8 = CONCAT31(uVar1,(char)uVar6);
      uStack_b0 = uVar8;
      if ((char)uVar6 == '\0') goto LAB_1006dd66;
    }
    uStack_b8 = (*(int *)((int)this + 0x24) + param_3) * *(int *)((int)this + 0x2c) + param_2;
    pvVar11 = *(void **)(*(int *)((int)this + 0x44) + 0x1304);
    iStack_b4 = 0;
    uStack_c0 = 0;
    uStack_b0 = uVar8;
    FUN_1006c8a8(this,param_2,param_3,&iStack_b4,&uStack_c0,(uint *)0x0);
    if (iVar5 != 0) {
      puVar15 = (uint *)((int)pvVar19 * param_5 + iStack_a4 * iVar5 + param_4);
      uStack_84 = (int)pvVar19 + 1;
      iVar7 = iStack_ac;
      if (local_80 != pvVar19) {
        iVar7 = iStack_98;
      }
      FUN_1006c867((int *)&uStack_7c,iVar5,(int)pvVar19,iVar7,uStack_84,uStack_a0,uStack_9c);
      if (*param_8 != 0) {
        bVar3 = FUN_1006ca19(this,pvVar11,*(int **)((int)param_1 + 0xc),iStack_90,
                             (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,puVar15
                             ,param_5,extraout_ECX,0);
        bVar3 = (byte)uVar8 & bVar3;
        cVar2 = FUN_1006c7d3((int)this);
        if (cVar2 != '\0') {
          bVar4 = FUN_1006ca19(this_00,pvVar11,*(int **)((int)param_1 + 0xc),uStack_b8,
                               (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,
                               puVar15,param_5,this_00,1);
          bVar3 = bVar3 & bVar4;
        }
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar3);
        uStack_b0 = uVar8;
      }
      puStack_bc = (uint *)(uStack_7c / uStack_a0);
      uVar9 = uStack_78 / uStack_9c;
      uVar12 = uStack_6c / uStack_9c;
      pvVar19 = (void *)uStack_84;
      if (iStack_b4 != 0) {
        puVar17 = (undefined4 *)(iStack_a4 * (int)puStack_bc + uStack_c0 * uVar9 + iStack_b4);
        uVar10 = (uStack_70 / uStack_a0 - (int)puStack_bc) * iStack_a4;
        if ((param_5 == uStack_c0) && (uVar10 == param_5)) {
          FUN_100adac0(puVar17,puVar15,(uVar12 - uVar9) * param_5);
          pvVar19 = (void *)uStack_84;
        }
        else {
          for (; uStack_84 = (uint)pvVar19, (int)uVar9 < (int)uVar12; uVar9 = uVar9 + 1) {
            FUN_100adac0(puVar17,puVar15,uVar10);
            puVar15 = (uint *)((int)puVar15 + param_5);
            puVar17 = (undefined4 *)((int)puVar17 + uStack_c0);
            this = pvStack_8c;
            uVar8 = uStack_b0;
            pvVar19 = (void *)uStack_84;
          }
        }
      }
    }
    if (pvVar19 < local_80) {
      puStack_bc = (uint *)((int)pvVar19 * param_5 + param_4);
      pvVar13 = local_80;
      if (iStack_ac == iStack_98) {
        pvVar13 = (void *)((int)local_80 + 1);
      }
      FUN_1006c867((int *)&uStack_7c,0,(int)pvVar19,iStack_98,(int)pvVar13,uStack_a0,uStack_9c);
      puVar15 = puStack_bc;
      bVar3 = (byte)uVar8;
      if (*param_8 != 0) {
        bVar4 = FUN_1006ca19(this,pvVar11,*(int **)((int)param_1 + 0xc),iStack_90,
                             (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,
                             puStack_bc,param_5,extraout_ECX_00,0);
        bVar3 = bVar3 & bVar4;
        cVar2 = FUN_1006c7d3((int)this);
        if (cVar2 != '\0') {
          bVar4 = FUN_1006ca19(this_01,pvVar11,*(int **)((int)param_1 + 0xc),uStack_b8,
                               (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,
                               puVar15,param_5,this_01,1);
          bVar3 = bVar4 & bVar3;
        }
      }
      puStack_bc = (uint *)(uStack_7c / uStack_a0);
      uVar8 = uStack_78 / uStack_9c;
      uVar9 = uStack_6c / uStack_9c;
      if (iStack_b4 != 0) {
        puVar17 = (undefined4 *)(uStack_c0 * uVar8 + iStack_a4 * (int)puStack_bc + iStack_b4);
        uVar12 = (uStack_70 / uStack_a0 - (int)puStack_bc) * iStack_a4;
        if ((param_5 == uStack_c0) && (uVar12 == param_5)) {
          FUN_100adac0(puVar17,puVar15,(uVar9 - uVar8) * param_5);
        }
        else {
          for (; (int)uVar8 < (int)uVar9; uVar8 = uVar8 + 1) {
            FUN_100adac0(puVar17,puVar15,uVar12);
            puVar15 = (uint *)((int)puVar15 + param_5);
            puVar17 = (undefined4 *)((int)puVar17 + uStack_c0);
            this = pvStack_8c;
          }
        }
      }
      uVar8 = (uint)bVar3;
      pvVar19 = local_80;
      if (iStack_ac == iStack_98) {
        pvVar19 = (void *)((int)local_80 + 1);
        goto LAB_1006dbd5;
      }
    }
    else {
LAB_1006dbd5:
      bVar3 = (byte)uVar8;
      if (local_80 != pvVar19) goto LAB_1006dd59;
    }
    puStack_bc = (uint *)((int)pvVar19 * param_5 + param_4);
    FUN_1006c867((int *)&uStack_7c,0,(int)pvVar19,iStack_ac,(int)local_80 + 1,uStack_a0,uStack_9c);
    puVar15 = puStack_bc;
    uVar8 = CONCAT31((int3)((uint)extraout_ECX_01 >> 8),bVar3);
    if (*param_8 != 0) {
      bVar4 = FUN_1006ca19(this,pvVar11,*(int **)((int)param_1 + 0xc),iStack_90,
                           (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,
                           puStack_bc,param_5,uVar8,0);
      bVar3 = bVar3 & bVar4;
      cVar2 = FUN_1006c7d3((int)this);
      if (cVar2 == '\0') {
        uVar8 = (uint)bVar3;
      }
      else {
        bVar4 = FUN_1006ca19(this_02,pvVar11,*(int **)((int)param_1 + 0xc),uStack_b8,
                             (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,puVar15
                             ,param_5,this_02,1);
        bVar3 = bVar4 & bVar3;
        uVar8 = (uint)bVar3;
      }
    }
    uStack_84 = uStack_7c / uStack_a0;
    uVar12 = uStack_78 / uStack_9c;
    uStack_b8 = uStack_70 / uStack_a0;
    uVar9 = uStack_6c / uStack_9c;
    uVar8 = uVar8 & 0xff;
    if (iStack_b4 != 0) {
      puVar17 = (undefined4 *)(iStack_a4 * uStack_84 + uStack_c0 * uVar12 + iStack_b4);
      uStack_b8 = (uStack_b8 - uStack_84) * iStack_a4;
      this = pvStack_8c;
      if ((param_5 == uStack_c0) && (uStack_b8 - param_5 == 0)) {
        FUN_100adac0(puVar17,puVar15,(uVar9 - uVar12) * param_5);
        uVar8 = (uint)bVar3;
      }
      else {
        uVar8 = (uint)bVar3;
        if ((int)uVar12 < (int)uVar9) {
          do {
            FUN_100adac0(puVar17,puVar15,uStack_b8);
            puVar15 = (uint *)((int)puVar15 + param_5);
            puVar17 = (undefined4 *)((int)puVar17 + uStack_c0);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar9);
          uVar8 = (uint)bVar3;
          this = pvStack_8c;
        }
      }
    }
LAB_1006dd59:
    FUN_1006c9ca(this,param_2,param_3);
  }
LAB_1006dd66:
  uVar16 = (undefined1)uVar8;
  uVar8 = *(uint *)((int)this + 0x14) >> ((byte)param_2 & 0x1f);
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  iVar5 = SetRect(param_7,0,param_6[1] * uStack_9c,uVar8,(param_6[3] + 1) * uStack_9c);
LAB_1006dd98:
  return CONCAT31((int3)((uint)iVar5 >> 8),uVar16);
}

