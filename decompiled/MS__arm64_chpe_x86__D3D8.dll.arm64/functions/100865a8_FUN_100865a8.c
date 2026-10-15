/*
 * FUN_100865a8 at 100865a8
 * undefined FUN_100865a8(void)
 * Address ranges: 100865a8-10086d57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100865a8(int param_1,float *param_2,int param_3,undefined4 param_4,uint param_5,
                 char param_6,char param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  code *pcVar8;
  char cVar9;
  undefined4 uVar10;
  uint extraout_w10;
  uint uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int *piVar16;
  float fVar17;
  float extraout_s16;
  undefined8 uVar18;
  float fVar19;
  float extraout_s17;
  float fVar20;
  float extraout_s18;
  float fVar21;
  float fVar22;
  float extraout_s19;
  float *pfVar23;
  float fVar24;
  float *local_bc;
  float *local_b8;
  float local_b4;
  float *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float *local_98;
  int local_94;
  int *local_90;
  int local_8c;
  int local_88;
  float local_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined4 local_70;
  float fStack_6c;
  float local_68;
  
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar14 = (ulonglong)param_5;
  local_94 = param_3;
  if (param_7 == '\0') {
    local_bc = param_2 + 6;
    local_b8 = param_2 + 4;
    fVar20 = *local_bc;
    fVar17 = *local_b8;
    pfVar2 = param_2 + 7;
    pfVar1 = param_2 + 5;
    fVar22 = *pfVar1;
    local_b0 = (float *)(((fVar20 - fVar17) / (param_2[2] - *param_2)) * 0.495);
    fVar19 = *pfVar2;
    local_b4 = ((fVar19 - fVar22) / (param_2[3] - param_2[1])) * 0.495;
    if ((int)param_5 < 0) {
      cVar9 = FUN_100a8168(uVar14);
      fVar19 = extraout_s17;
      fVar20 = extraout_s18;
      fVar22 = extraout_s19;
      fVar17 = extraout_s16;
    }
    else {
      cVar9 = param_5 - 4 < 2;
    }
    fVar24 = local_b4;
    pfVar23 = local_b0;
    if (cVar9 != '\0') {
      uVar10 = (*pcVar8)();
      (*extraout_w11)(uVar10,&local_80);
      uVar13 = (uint)local_80 >> (ulonglong)((uint)param_2[10] & 0x1f);
      uVar11 = (uint)fStack_7c >> (ulonglong)((uint)param_2[10] & 0x1f);
      if (uVar13 == 0) {
        uVar13 = 1;
      }
      fVar21 = (float)uVar13;
      if (uVar11 == 0) {
        uVar11 = 1;
      }
      fVar24 = (float)uVar11;
      fVar19 = 1.0;
      if (param_6 == '\0') {
        fVar19 = 0.5;
      }
      fVar22 = (*pfVar1 + fVar19) / fVar24;
      fVar17 = (*local_b8 + fVar19) / fVar21;
      fVar20 = (*local_bc + fVar19) / fVar21;
      fVar19 = (*pfVar2 + fVar19) / fVar24;
      fVar24 = local_b4 / fVar24;
      pfVar23 = (float *)((float)local_b0 / fVar21);
    }
    *local_b8 = fVar17 - (float)pfVar23;
    *pfVar1 = fVar22 - fVar24;
    *local_bc = fVar20 - (float)pfVar23;
    *pfVar2 = fVar19 - fVar24;
  }
  if (((int)param_5 < 0) && ((param_5 & 0xf) == 2)) {
    FUN_100ae290(&local_bc,param_1,param_4);
    uVar14 = (ulonglong)
             (~(((uint)local_bc >> 0x16) << 0x1e) & 0x40000000 |
              ((uint)local_bc >> 8 & 0xff | ((uint)local_bc >> 0x10 & 0xf) << 8) << 0x12 |
             param_5 & 0x8003ffff);
  }
  uVar13 = (uint)uVar14;
  if ((int)uVar13 < 0) {
    local_b8 = (float *)(param_1 + 0x1cfb8);
    fVar19 = *local_b8;
    local_b4 = 0.0;
    if (fVar19 != 0.0) {
      fVar20 = 0.0;
      fVar22 = fVar19;
      do {
        fVar17 = (float)((uint)((int)fVar22 + (int)fVar20) >> 1);
        uVar12 = *(ulonglong *)(*(int *)(param_1 + 0x1cfb4) + (int)fVar17 * 0x10);
        fVar24 = fVar17;
        if (uVar12 <= uVar14) {
          if (uVar14 <= uVar12) break;
          fVar20 = (float)((int)fVar17 + 1);
          fVar17 = fVar20;
          fVar24 = fVar22;
        }
        fVar22 = fVar24;
      } while (fVar22 != fVar20);
      if (((fVar17 != fVar19) &&
          (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x1cfb4) + (int)fVar17 * 0x10),
          *puVar5 == uVar14)) && (pfVar2 = (float *)((int)puVar5 + 0xc), pfVar2 != (float *)0x0)) {
        local_b4 = *pfVar2;
        fVar19 = local_b4;
        goto LAB_10086b08;
      }
    }
    local_90 = (int *)(param_1 + 0x1cfc0);
    local_bc = (float *)(*local_90 + *(int *)(param_1 + 0x1cfc4) * 0x1510 + 0x510);
    local_a0 = CONCAT35(local_a0._5_3_,0x100000100);
    local_a8._0_4_ = (float)FUN_100fece0(0x100);
    uVar10 = 0x50;
    if ((int)local_bc[4] < 0xb000) {
      uVar10 = 0x40;
    }
    local_a8._4_4_ = (float)local_a8;
    uVar12 = FUN_100a81d8(uVar14,uVar10,0,&local_a8);
    local_8c = (int)(float)local_a8;
    local_88 = (int)(float)local_a8;
    if ((uVar12 & 1) != 0) {
      local_98 = local_b8;
      local_b0 = local_b8;
      local_b8 = (float *)((int)local_a8._4_4_ - (int)(float)local_a8);
      FUN_100ee3e8(*local_90,(float)local_a8,local_b8);
      uVar10 = (*pcVar8)();
      (*extraout_w11_00)(uVar10,local_8c,local_b8,0,&local_b4);
      fVar19 = *local_98;
      if (fVar19 == 0.0) {
        fVar20 = 0.0;
      }
      else {
        fVar22 = 0.0;
        fVar17 = fVar19;
        do {
          fVar20 = (float)((uint)((int)fVar17 + (int)fVar22) >> 1);
          uVar12 = *(ulonglong *)(*(int *)(param_1 + 0x1cfb4) + (int)fVar20 * 0x10);
          fVar24 = fVar20;
          if (uVar12 <= uVar14) {
            if (uVar14 <= uVar12) break;
            fVar22 = (float)((int)fVar20 + 1);
            fVar20 = fVar22;
            fVar24 = fVar17;
          }
          fVar17 = fVar24;
        } while (fVar17 != fVar22);
      }
      piVar16 = (int *)(param_1 + 0x1cfb4);
      if ((fVar20 == fVar19) ||
         (puVar5 = (ulonglong *)(*piVar16 + (int)fVar20 * 0x10), *puVar5 != uVar14)) {
        local_b8 = (float *)(param_1 + 0x1cfbc);
        fVar22 = *local_b8;
        if (fVar22 == fVar19) {
          local_98 = (float *)&DAT_00000010;
          if (fVar22 != 0.0) {
            local_98 = (float *)((int)fVar22 << 1);
          }
          local_bc = (float *)FUN_100fece0((int)local_98 << 4);
          if (local_bc != (float *)0x0) {
            fVar19 = 0.0;
            if (*local_b0 != 0.0) {
              do {
                puVar6 = (undefined8 *)(*piVar16 + (int)fVar19 * 0x10);
                iVar15 = (int)fVar19 * 4;
                fVar19 = (float)((int)fVar19 + 1);
                uVar18 = *puVar6;
                *(undefined8 *)(local_bc + iVar15 + 2) = puVar6[1];
                *(undefined8 *)(local_bc + iVar15) = uVar18;
              } while ((uint)fVar19 < (uint)*local_b0);
            }
            FUN_100fed00(*(int *)(param_1 + 0x1cfb0));
            *(int *)(param_1 + 0x1cfb0) = (int)local_bc;
            *piVar16 = (int)local_bc;
            *local_b8 = (float)local_98;
          }
        }
        fVar19 = *local_b0;
        if (*local_b8 != fVar19) {
          for (; (uint)fVar20 < (uint)fVar19; fVar19 = (float)((int)fVar19 - 1)) {
            puVar6 = (undefined8 *)(*piVar16 + (int)fVar19 * 0x10);
            puVar6[1] = puVar6[-1];
            *puVar6 = puVar6[-2];
          }
          *local_b0 = (float)((int)*local_b0 + 1);
          *(uint *)(*piVar16 + (int)fVar20 * 0x10 + 8) = uVar13;
          *(float *)(*piVar16 + (int)fVar20 * 0x10 + 0xc) = local_b4;
          *(ulonglong *)(*piVar16 + (int)fVar20 * 0x10) = uVar14;
        }
      }
      else {
        *(float *)((int)puVar5 + 0xc) = local_b4;
      }
    }
    FUN_100fed00(local_88);
    fVar19 = local_b4;
  }
  else {
    fVar19 = *(float *)(param_1 + uVar13 * 4 + 0x1cf08);
  }
LAB_10086b08:
  local_a8 = 0;
  if ((int)uVar13 < 0) {
    uVar11 = uVar13 >> 9 & 2;
    if ((uVar13 & 0xf) != 2) {
      if ((uVar13 & 0xf) == 1) {
        uVar11 = uVar11 | 0xc;
      }
      else if ((uVar14 & 0xf) == 0) {
        uVar11 = uVar11 | 4;
      }
    }
    if ((uVar11 & 0x3c) != 0) {
      FUN_1008a7e0(param_1,&local_a8,(int)&local_a8 + 4,&local_a0,(int)&local_a0 + 4,param_4);
      uVar11 = extraout_w10;
    }
    iVar15 = 1;
    if ((uVar11 >> 1 & 1) != 0) {
      fStack_7c = param_2[0x11];
      iVar15 = 2;
    }
    _local_80 = CONCAT44(fStack_7c,param_2[0x10]);
    if ((uVar11 >> 2 & 1) != 0) {
      pfVar2 = &local_80 + iVar15;
      iVar15 = iVar15 + 1;
      *pfVar2 = (float)local_a8;
    }
    if ((uVar11 >> 3 & 1) != 0) {
      pfVar2 = &local_80 + iVar15;
      iVar15 = iVar15 + 1;
      *pfVar2 = local_a8._4_4_;
    }
  }
  else {
    uVar14 = FUN_1008a7e0(param_1,&local_80,&fStack_7c,&uStack_78,(int)&uStack_78 + 4,param_4);
    if ((uVar14 & 1) == 0) {
      _local_80 = 0;
      uStack_78 = 0;
    }
    if (local_94 == 0) {
      local_70 = *(undefined4 *)(param_1 + 0x1d0e4);
    }
    else {
      local_70 = 0;
    }
    fStack_6c = param_2[0x10];
    iVar15 = 7;
    local_68 = param_2[0x11];
  }
  local_a8 = 0;
  local_a0 = 0;
  FUN_100d8a98(*(undefined4 *)(param_1 + 0x1cf00),*(undefined4 *)(param_1 + 0x14),4,&local_a8,0);
  FUN_100ff690(&local_80 + iVar15,0,iVar15 * -4 + 0x40);
  FUN_100d8638(*(undefined4 *)(param_1 + 0x1cf00),*(undefined4 *)(param_1 + 0x14),0,0x10,&local_80);
  param_2[0x10] = 0.0;
  param_2[0x11] = 0.0;
  FUN_100ab978(param_1,local_94,0,0);
  puVar3 = (undefined4 *)(param_1 + 0x14);
  puVar4 = (undefined4 *)(param_1 + 0x1cf00);
  FUN_100d7a20(*puVar4,*puVar3,&DAT_1012e6e0);
  puVar7 = &DAT_1012e880;
  if (param_2[0xc] == 0.0) {
    puVar7 = (undefined *)0x1012e7e8;
  }
  FUN_100d7d88(*puVar4,*puVar3,puVar7,0);
  FUN_100d8060(*puVar4,*puVar3,&DAT_1012e858);
  FUN_100d84d0(*puVar4,*puVar3);
  FUN_100860b0(param_1,param_2,fVar19);
  return;
}

