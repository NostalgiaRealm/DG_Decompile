/*
 * FUN_10083497 at 10083497
 * uint __thiscall FUN_10083497(void * this, void * param_1, int param_2, int param_3, int param_4, uint param_5, int * param_6, LPRECT param_7, byte * param_8)
 * Address ranges: 10083497-10083eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10083497(void *this,void *param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6,
            LPRECT param_7,byte *param_8)

{
  undefined3 uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  byte extraout_var;
  uint uVar13;
  byte extraout_var_00;
  void *pvVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 extraout_ECX;
  void *this_00;
  undefined4 extraout_ECX_00;
  void *this_01;
  undefined4 extraout_ECX_01;
  void *this_02;
  int extraout_EDX;
  undefined1 uVar17;
  undefined4 unaff_EBX;
  undefined4 *puVar18;
  undefined4 *puVar19;
  void *pvVar20;
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
  uVar9 = 0;
  uVar17 = 0;
  local_80 = this;
  iVar6 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x38))
                    (*(int **)((int)param_1 + 0xc),local_54,0);
  if (iVar6 < 0) goto LAB_10083ee5;
  iStack_90 = *(int *)((int)this + 0x2c) * param_3 + param_2;
  FUN_10082991(this,&iStack_a8,param_2,param_3);
  iVar6 = *param_6;
  local_80 = (void *)param_6[3];
  pvVar20 = (void *)param_6[1];
  iStack_ac = param_6[2];
  iVar8 = *(int *)((int)this + 0x34);
  *param_8 = 1;
  cVar2 = FUN_1003a4d0(iVar8);
  if (((cVar2 != '\0') &&
      (*(char *)(*(int *)((int)this + 0x10) * 0x18 + 0x532 + *(int *)((int)this + 0x40)) == '\0'))
     && ((iVar6 != 0 || pvVar20 != (void *)0x0 ||
         ((iStack_ac != iStack_98 || (extraout_EDX != uStack_9c - 1)))))) {
    (**(code **)(**(int **)((int)param_1 + 0xc) + 0x28))(*(int **)((int)param_1 + 0xc),auStack_4c);
    *param_8 = ~(byte)(uStack_1c >> 1) & 1;
  }
  if ((((*(int *)(*(int *)((int)this + 0x44) + 0x12e8) == 0) && (iStack_60 == 4)) &&
      (cVar2 = FUN_1003a4d0(*(int *)((int)this + 0x34)), cVar2 == '\0')) &&
     (cVar2 = FUN_100c18c8(*(void **)(*(int *)((int)this + 0x40) + 0x172c0)), cVar2 != '\0')) {
    uVar7 = FUN_10081654(param_1,iStack_90);
    if ((char)uVar7 != '\0') {
      iStack_b4 = 0;
      uStack_c0 = 0;
      FUN_10082a54(this,param_2,param_3,&iStack_b4,&uStack_c0,(uint *)0x0);
      uVar9 = CONCAT31(uVar1,1);
      if (iVar6 != 0) {
        puVar18 = (undefined4 *)((int)pvVar20 * param_5 + iStack_a4 * iVar6 + param_4);
        uStack_88 = (int)pvVar20 + 1;
        iVar8 = iStack_ac;
        if (local_80 != pvVar20) {
          iVar8 = iStack_98;
        }
        FUN_10082a13((int *)&uStack_7c,iVar6,(int)pvVar20,iVar8,uStack_88,uStack_a0,uStack_9c);
        uVar9 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x30))
                          (*(int **)((int)param_1 + 0xc),iStack_90,&uStack_7c,puVar18,param_5,0);
        uVar13 = uStack_c0;
        uStack_b8 = uStack_7c / uStack_a0;
        uVar9 = uVar9 >> 0x1f ^ 1;
        uVar10 = uStack_78 / uStack_9c;
        uVar11 = uStack_6c / uStack_9c;
        pvVar20 = (void *)uStack_88;
        uStack_b0 = uVar9;
        if (iStack_b4 != 0) {
          puVar19 = (undefined4 *)(iStack_a4 * uStack_b8 + uStack_c0 * uVar10 + iStack_b4);
          uVar15 = (uStack_70 / uStack_a0 - uStack_b8) * iStack_a4;
          if ((param_5 == uStack_c0) && (uVar15 - param_5 == 0)) {
            FUN_100cff00(puVar19,puVar18,(uVar11 - uVar10) * param_5);
            pvVar20 = (void *)uStack_88;
          }
          else {
            for (; uStack_b0 = uVar9, uStack_88 = (uint)pvVar20, (int)uVar10 < (int)uVar11;
                uVar10 = uVar10 + 1) {
              FUN_100cff00(puVar19,puVar18,uVar15);
              puVar18 = (undefined4 *)((int)puVar18 + param_5);
              puVar19 = (undefined4 *)((int)puVar19 + uVar13);
              uVar9 = uStack_b0;
              this = pvStack_8c;
              pvVar20 = (void *)uStack_88;
            }
          }
        }
      }
      if (pvVar20 < local_80) {
        puVar18 = (undefined4 *)((int)pvVar20 * param_5 + param_4);
        pvVar12 = local_80;
        if (iStack_ac == iStack_98) {
          pvVar12 = (void *)((int)local_80 + 1);
        }
        FUN_10082a13((int *)&uStack_7c,0,(int)pvVar20,iStack_98,(int)pvVar12,uStack_a0,uStack_9c);
        (**(code **)(**(int **)((int)param_1 + 0xc) + 0x30))
                  (*(int **)((int)param_1 + 0xc),iStack_90,&uStack_7c,puVar18,param_5,0);
        uVar9 = CONCAT31((int3)(uVar9 >> 8),(byte)uVar9 & (extraout_var >> 7 ^ 1));
        uStack_b8 = uStack_7c / uStack_a0;
        uVar10 = uStack_78 / uStack_9c;
        uVar13 = uStack_6c / uStack_9c;
        uStack_b0 = uVar9;
        if (iStack_b4 != 0) {
          puVar19 = (undefined4 *)(iStack_a4 * uStack_b8 + uStack_c0 * uVar10 + iStack_b4);
          uVar11 = (uStack_70 / uStack_a0 - uStack_b8) * iStack_a4;
          if ((param_5 == uStack_c0) && (uVar11 - param_5 == 0)) {
            FUN_100cff00(puVar19,puVar18,(uVar13 - uVar10) * param_5);
          }
          else {
            for (; uStack_b0 = uVar9, (int)uVar10 < (int)uVar13; uVar10 = uVar10 + 1) {
              FUN_100cff00(puVar19,puVar18,uVar11);
              puVar18 = (undefined4 *)((int)puVar18 + param_5);
              puVar19 = (undefined4 *)((int)puVar19 + uStack_c0);
              uVar9 = uStack_b0;
              this = pvStack_8c;
            }
          }
        }
        pvVar20 = local_80;
        if (iStack_ac == iStack_98) {
          pvVar20 = (void *)((int)local_80 + 1);
          goto LAB_1008387c;
        }
LAB_10083884:
        puVar18 = (undefined4 *)((int)pvVar20 * param_5 + param_4);
        FUN_10082a13((int *)&uStack_7c,0,(int)pvVar20,iStack_ac,(int)local_80 + 1,uStack_a0,
                     uStack_9c);
        (**(code **)(**(int **)((int)param_1 + 0xc) + 0x30))
                  (*(int **)((int)param_1 + 0xc),iStack_90,&uStack_7c,puVar18,param_5,0);
        uVar9 = CONCAT31((int3)(uVar9 >> 8),(byte)uVar9 & (extraout_var_00 >> 7 ^ 1));
        uStack_b8 = uStack_7c / uStack_a0;
        uStack_78 = uStack_78 / uStack_9c;
        uStack_6c = uStack_6c / uStack_9c;
        uStack_b0 = uVar9;
        if (iStack_b4 != 0) {
          puVar19 = (undefined4 *)(iStack_a4 * uStack_b8 + uStack_c0 * uStack_78 + iStack_b4);
          uVar10 = (uStack_70 / uStack_a0 - uStack_b8) * iStack_a4;
          if ((param_5 == uStack_c0) && (uVar10 - param_5 == 0)) {
            FUN_100cff00(puVar19,puVar18,(uStack_6c - uStack_78) * param_5);
          }
          else {
            for (; uStack_b0 = uVar9, (int)uStack_78 < (int)uStack_6c; uStack_78 = uStack_78 + 1) {
              FUN_100cff00(puVar19,puVar18,uVar10);
              puVar18 = (undefined4 *)((int)puVar18 + param_5);
              puVar19 = (undefined4 *)((int)puVar19 + uStack_c0);
              uVar9 = uStack_b0;
              this = pvStack_8c;
            }
          }
        }
      }
      else {
LAB_1008387c:
        if (local_80 == pvVar20) goto LAB_10083884;
      }
      goto LAB_10083ea6;
    }
  }
  else {
    uVar9 = CONCAT31(uVar1,1);
    if (*param_8 == 0) {
      uStack_b0 = uVar9;
      bVar3 = FUN_100828d9(this);
      uVar9 = CONCAT31(uVar1,bVar3);
      uStack_b0 = uVar9;
      if (!bVar3) goto LAB_10083eb3;
    }
    uStack_b8 = (*(int *)((int)this + 0x24) + param_3) * *(int *)((int)this + 0x2c) + param_2;
    pvVar12 = *(void **)(*(int *)((int)this + 0x44) + 0x1304);
    iStack_b4 = 0;
    uStack_c0 = 0;
    uStack_b0 = uVar9;
    FUN_10082a54(this,param_2,param_3,&iStack_b4,&uStack_c0,(uint *)0x0);
    if (iVar6 != 0) {
      puVar16 = (uint *)((int)pvVar20 * param_5 + iStack_a4 * iVar6 + param_4);
      uStack_84 = (int)pvVar20 + 1;
      iVar8 = iStack_ac;
      if (local_80 != pvVar20) {
        iVar8 = iStack_98;
      }
      FUN_10082a13((int *)&uStack_7c,iVar6,(int)pvVar20,iVar8,uStack_84,uStack_a0,uStack_9c);
      if (*param_8 != 0) {
        bVar4 = FUN_10082bc5(this,pvVar12,*(int **)((int)param_1 + 0xc),iStack_90,
                             (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,puVar16
                             ,param_5,extraout_ECX,0);
        bVar4 = (byte)uVar9 & bVar4;
        iVar6 = FUN_10082974((int)this);
        if ((char)iVar6 != '\0') {
          bVar5 = FUN_10082bc5(this_00,pvVar12,*(int **)((int)param_1 + 0xc),uStack_b8,
                               (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,
                               puVar16,param_5,this_00,1);
          bVar4 = bVar4 & bVar5;
        }
        uVar9 = CONCAT31((int3)(uVar9 >> 8),bVar4);
        uStack_b0 = uVar9;
      }
      puStack_bc = (uint *)(uStack_7c / uStack_a0);
      uVar10 = uStack_78 / uStack_9c;
      uVar13 = uStack_6c / uStack_9c;
      pvVar20 = (void *)uStack_84;
      if (iStack_b4 != 0) {
        puVar18 = (undefined4 *)(iStack_a4 * (int)puStack_bc + uStack_c0 * uVar10 + iStack_b4);
        uVar11 = (uStack_70 / uStack_a0 - (int)puStack_bc) * iStack_a4;
        if ((param_5 == uStack_c0) && (uVar11 == param_5)) {
          FUN_100cff00(puVar18,puVar16,(uVar13 - uVar10) * param_5);
          pvVar20 = (void *)uStack_84;
        }
        else {
          for (; uStack_84 = (uint)pvVar20, (int)uVar10 < (int)uVar13; uVar10 = uVar10 + 1) {
            FUN_100cff00(puVar18,puVar16,uVar11);
            puVar16 = (uint *)((int)puVar16 + param_5);
            puVar18 = (undefined4 *)((int)puVar18 + uStack_c0);
            this = pvStack_8c;
            uVar9 = uStack_b0;
            pvVar20 = (void *)uStack_84;
          }
        }
      }
    }
    if (pvVar20 < local_80) {
      puStack_bc = (uint *)((int)pvVar20 * param_5 + param_4);
      pvVar14 = local_80;
      if (iStack_ac == iStack_98) {
        pvVar14 = (void *)((int)local_80 + 1);
      }
      FUN_10082a13((int *)&uStack_7c,0,(int)pvVar20,iStack_98,(int)pvVar14,uStack_a0,uStack_9c);
      puVar16 = puStack_bc;
      bVar4 = (byte)uVar9;
      if (*param_8 != 0) {
        bVar5 = FUN_10082bc5(this,pvVar12,*(int **)((int)param_1 + 0xc),iStack_90,
                             (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,
                             puStack_bc,param_5,extraout_ECX_00,0);
        bVar4 = bVar4 & bVar5;
        iVar6 = FUN_10082974((int)this);
        if ((char)iVar6 != '\0') {
          bVar5 = FUN_10082bc5(this_01,pvVar12,*(int **)((int)param_1 + 0xc),uStack_b8,
                               (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,
                               puVar16,param_5,this_01,1);
          bVar4 = bVar5 & bVar4;
        }
      }
      puStack_bc = (uint *)(uStack_7c / uStack_a0);
      uVar9 = uStack_78 / uStack_9c;
      uVar10 = uStack_6c / uStack_9c;
      if (iStack_b4 != 0) {
        puVar18 = (undefined4 *)(uStack_c0 * uVar9 + iStack_a4 * (int)puStack_bc + iStack_b4);
        uVar13 = (uStack_70 / uStack_a0 - (int)puStack_bc) * iStack_a4;
        if ((param_5 == uStack_c0) && (uVar13 == param_5)) {
          FUN_100cff00(puVar18,puVar16,(uVar10 - uVar9) * param_5);
        }
        else {
          for (; (int)uVar9 < (int)uVar10; uVar9 = uVar9 + 1) {
            FUN_100cff00(puVar18,puVar16,uVar13);
            puVar16 = (uint *)((int)puVar16 + param_5);
            puVar18 = (undefined4 *)((int)puVar18 + uStack_c0);
            this = pvStack_8c;
          }
        }
      }
      uVar9 = (uint)bVar4;
      pvVar20 = local_80;
      if (iStack_ac == iStack_98) {
        pvVar20 = (void *)((int)local_80 + 1);
        goto LAB_10083d22;
      }
    }
    else {
LAB_10083d22:
      bVar4 = (byte)uVar9;
      if (local_80 != pvVar20) goto LAB_10083ea6;
    }
    puStack_bc = (uint *)((int)pvVar20 * param_5 + param_4);
    FUN_10082a13((int *)&uStack_7c,0,(int)pvVar20,iStack_ac,(int)local_80 + 1,uStack_a0,uStack_9c);
    puVar16 = puStack_bc;
    uVar9 = CONCAT31((int3)((uint)extraout_ECX_01 >> 8),bVar4);
    if (*param_8 != 0) {
      bVar5 = FUN_10082bc5(this,pvVar12,*(int **)((int)param_1 + 0xc),iStack_90,
                           (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,
                           puStack_bc,param_5,uVar9,0);
      bVar4 = bVar4 & bVar5;
      iVar6 = FUN_10082974((int)this);
      if ((char)iVar6 == '\0') {
        uVar9 = (uint)bVar4;
      }
      else {
        bVar5 = FUN_10082bc5(this_02,pvVar12,*(int **)((int)param_1 + 0xc),uStack_b8,
                             (void *)(*(int *)((int)this + 0x44) + 0x1430),(int *)&uStack_7c,puVar16
                             ,param_5,this_02,1);
        bVar4 = bVar5 & bVar4;
        uVar9 = (uint)bVar4;
      }
    }
    uStack_84 = uStack_7c / uStack_a0;
    uVar13 = uStack_78 / uStack_9c;
    uStack_b8 = uStack_70 / uStack_a0;
    uVar10 = uStack_6c / uStack_9c;
    uVar9 = uVar9 & 0xff;
    if (iStack_b4 != 0) {
      puVar18 = (undefined4 *)(iStack_a4 * uStack_84 + uStack_c0 * uVar13 + iStack_b4);
      uStack_b8 = (uStack_b8 - uStack_84) * iStack_a4;
      this = pvStack_8c;
      if ((param_5 == uStack_c0) && (uStack_b8 - param_5 == 0)) {
        FUN_100cff00(puVar18,puVar16,(uVar10 - uVar13) * param_5);
        uVar9 = (uint)bVar4;
      }
      else {
        uVar9 = (uint)bVar4;
        if ((int)uVar13 < (int)uVar10) {
          do {
            FUN_100cff00(puVar18,puVar16,uStack_b8);
            puVar16 = (uint *)((int)puVar16 + param_5);
            puVar18 = (undefined4 *)((int)puVar18 + uStack_c0);
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uVar10);
          uVar9 = (uint)bVar4;
          this = pvStack_8c;
        }
      }
    }
LAB_10083ea6:
    FUN_10082b76(this,param_2,param_3);
  }
LAB_10083eb3:
  uVar17 = (undefined1)uVar9;
  uVar9 = *(uint *)((int)this + 0x14) >> ((byte)param_2 & 0x1f);
  if (uVar9 == 0) {
    uVar9 = 1;
  }
  iVar6 = SetRect(param_7,0,param_6[1] * uStack_9c,uVar9,(param_6[3] + 1) * uStack_9c);
LAB_10083ee5:
  return CONCAT31((int3)((uint)iVar6 >> 8),uVar17);
}

