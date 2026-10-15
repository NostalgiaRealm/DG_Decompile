/*
 * FUN_1000c350 at 1000c350
 * undefined FUN_1000c350(void)
 * Address ranges: 1000c350-1000cafb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1000c350(int param_1,float *param_2,int param_3,undefined4 param_4,uint param_5,
                 char param_6,char param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  code *pcVar8;
  char cVar9;
  undefined4 uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  uint extraout_w11_01;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  float *pfVar15;
  int iVar16;
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
  float local_b8;
  float *local_b4;
  float *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float *local_94;
  float *local_90;
  int local_8c;
  int *local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_90 = (float *)(param_1 + 0xc000);
  uVar14 = (ulonglong)param_5;
  local_8c = param_3;
  if (param_7 == '\0') {
    local_b0 = param_2 + 4;
    fVar17 = *local_b0;
    local_bc = param_2 + 6;
    fVar20 = *local_bc;
    pfVar15 = param_2 + 7;
    pfVar1 = param_2 + 5;
    fVar22 = *pfVar1;
    local_b4 = (float *)(((fVar20 - fVar17) / (param_2[2] - *param_2)) * 0.495);
    fVar19 = *pfVar15;
    local_b8 = ((fVar19 - fVar22) / (param_2[3] - param_2[1])) * 0.495;
    if ((int)param_5 < 0) {
      cVar9 = FUN_1002d9e8(uVar14);
      fVar19 = extraout_s17;
      fVar20 = extraout_s18;
      fVar22 = extraout_s19;
      fVar17 = extraout_s16;
    }
    else {
      cVar9 = param_5 - 4 < 2;
    }
    fVar24 = local_b8;
    pfVar23 = local_b4;
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
      fVar17 = (*local_b0 + fVar19) / fVar21;
      fVar20 = (*local_bc + fVar19) / fVar21;
      fVar19 = (*pfVar15 + fVar19) / fVar24;
      fVar24 = local_b8 / fVar24;
      pfVar23 = (float *)((float)local_b4 / fVar21);
    }
    *local_b0 = fVar17 - (float)pfVar23;
    *pfVar1 = fVar22 - fVar24;
    *local_bc = fVar20 - (float)pfVar23;
    *pfVar15 = fVar19 - fVar24;
  }
  if (((int)param_5 < 0) && ((param_5 & 0xf) == 2)) {
    FUN_10033e50(&local_bc,param_1,param_4);
    uVar14 = (ulonglong)
             (~(((uint)local_bc >> 0x16) << 0x1e) & 0x40000000 |
              ((uint)local_bc >> 8 & 0xff | ((uint)local_bc >> 0x10 & 0xf) << 8) << 0x12 |
             param_5 & 0x8003ffff);
  }
  uVar13 = (uint)uVar14;
  if ((int)uVar13 < 0) {
    local_b8 = 0.0;
    local_b0 = (float *)(param_1 + 0xcfb8);
    fVar19 = *local_b0;
    if (fVar19 != 0.0) {
      fVar20 = 0.0;
      fVar22 = fVar19;
      do {
        fVar17 = (float)((uint)((int)fVar22 + (int)fVar20) >> 1);
        uVar12 = *(ulonglong *)(*(int *)(param_1 + 0xcfb4) + (int)fVar17 * 0x10);
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
          (puVar3 = (ulonglong *)(*(int *)(param_1 + 0xcfb4) + (int)fVar17 * 0x10),
          *puVar3 == uVar14)) && (pfVar15 = (float *)((int)puVar3 + 0xc), pfVar15 != (float *)0x0))
      {
        local_b8 = *pfVar15;
        fVar19 = local_b8;
        goto LAB_1000c8c8;
      }
    }
    local_88 = (int *)(param_1 + 0xcfc0);
    local_bc = (float *)(*local_88 + *(int *)(param_1 + 0xcfc4) * 0x1510 + 0x510);
    local_a0 = CONCAT35(local_a0._5_3_,0x100000100);
    local_a8._0_4_ = (float)FUN_100914b0(0x100);
    uVar10 = 0x50;
    if ((int)local_bc[4] < 0xb000) {
      uVar10 = 0x40;
    }
    local_a8._4_4_ = (float)local_a8;
    uVar12 = FUN_1002da58(uVar14,uVar10,0,&local_a8);
    local_98 = (float)local_a8;
    local_84 = (float)local_a8;
    if ((uVar12 & 1) != 0) {
      local_94 = local_b0;
      local_b4 = local_b0;
      local_b0 = (float *)((int)local_a8._4_4_ - (int)(float)local_a8);
      FUN_10071e18(*local_88,(float)local_a8,local_b0);
      uVar10 = (*pcVar8)();
      (*extraout_w11_00)(uVar10,local_98,local_b0,0,&local_b8);
      fVar19 = *local_94;
      if (fVar19 == 0.0) {
        fVar20 = 0.0;
      }
      else {
        fVar22 = 0.0;
        fVar17 = fVar19;
        do {
          fVar20 = (float)((uint)((int)fVar17 + (int)fVar22) >> 1);
          uVar12 = *(ulonglong *)(*(int *)(param_1 + 0xcfb4) + (int)fVar20 * 0x10);
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
      pfVar15 = (float *)(param_1 + 0xcfb4);
      if ((fVar20 == fVar19) ||
         (puVar3 = (ulonglong *)((int)*pfVar15 + (int)fVar20 * 0x10), *puVar3 != uVar14)) {
        local_bc = (float *)(param_1 + 0xcfbc);
        fVar22 = *local_bc;
        if (fVar22 == fVar19) {
          local_98 = 2.24208e-44;
          if (fVar22 != 0.0) {
            local_98 = (float)((int)fVar22 << 1);
          }
          fVar19 = (float)FUN_100914b0((int)local_98 << 4);
          if (fVar19 != 0.0) {
            fVar22 = 0.0;
            if (*local_b4 != 0.0) {
              do {
                puVar4 = (undefined8 *)((int)*pfVar15 + (int)fVar22 * 0x10);
                puVar5 = (undefined8 *)((int)fVar19 + (int)fVar22 * 0x10);
                fVar22 = (float)((int)fVar22 + 1);
                uVar18 = *puVar4;
                puVar5[1] = puVar4[1];
                *puVar5 = uVar18;
              } while ((uint)fVar22 < (uint)*local_b4);
            }
            local_94 = local_90;
            FUN_100914d0(local_90[0x3ec]);
            *pfVar15 = fVar19;
            local_94[0x3ec] = fVar19;
            *local_bc = local_98;
          }
        }
        fVar19 = *local_b4;
        if (*local_bc != fVar19) {
          for (; (uint)fVar20 < (uint)fVar19; fVar19 = (float)((int)fVar19 - 1)) {
            puVar4 = (undefined8 *)((int)*pfVar15 + (int)fVar19 * 0x10);
            puVar4[1] = puVar4[-1];
            *puVar4 = puVar4[-2];
          }
          *local_b4 = (float)((int)*local_b4 + 1);
          *(uint *)((int)*pfVar15 + (int)fVar20 * 0x10 + 8) = uVar13;
          *(float *)((int)*pfVar15 + (int)fVar20 * 0x10 + 0xc) = local_b8;
          *(ulonglong *)((int)*pfVar15 + (int)fVar20 * 0x10) = uVar14;
        }
      }
      else {
        *(float *)((int)puVar3 + 0xc) = local_b8;
      }
    }
    FUN_100914d0(local_84);
    fVar19 = local_b8;
  }
  else {
    fVar19 = *(float *)(param_1 + uVar13 * 4 + 53000);
  }
LAB_1000c8c8:
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
      FUN_1000ff50(param_1,&local_a8,(int)&local_a8 + 4,&local_a0,(int)&local_a0 + 4,param_4);
      uVar11 = extraout_w11_01;
    }
    iVar16 = 1;
    if ((uVar11 >> 1 & 1) != 0) {
      fStack_7c = param_2[0x11];
      iVar16 = 2;
    }
    _local_80 = CONCAT44(fStack_7c,param_2[0x10]);
    if ((uVar11 >> 2 & 1) != 0) {
      pfVar15 = &local_80 + iVar16;
      iVar16 = iVar16 + 1;
      *pfVar15 = (float)local_a8;
    }
    if ((uVar11 >> 3 & 1) != 0) {
      pfVar15 = &local_80 + iVar16;
      iVar16 = iVar16 + 1;
      *pfVar15 = local_a8._4_4_;
    }
  }
  else {
    uVar14 = FUN_1000ff50(param_1,&local_80,&fStack_7c,&uStack_78,(int)&uStack_78 + 4,param_4);
    if ((uVar14 & 1) == 0) {
      _local_80 = 0;
      uStack_78 = 0;
    }
    if (local_8c == 0) {
      local_70 = local_90[0x439];
    }
    else {
      local_70 = 0.0;
    }
    fStack_6c = param_2[0x10];
    iVar16 = 7;
    local_68 = param_2[0x11];
  }
  local_a8 = 0;
  local_a0 = 0;
  FUN_1006bb00(*(undefined4 *)(param_1 + 0xcf00),*(undefined4 *)(param_1 + 0x14),4,&local_a8,0);
  FUN_100917d0(&local_80 + iVar16,0,iVar16 * -4 + 0x40);
  FUN_1006b748(*(undefined4 *)(param_1 + 0xcf00),*(undefined4 *)(param_1 + 0x14));
  param_2[0x10] = 0.0;
  param_2[0x11] = 0.0;
  FUN_100315f0(param_1,local_8c,0,0);
  puVar2 = (undefined4 *)(param_1 + 0x14);
  puVar6 = (undefined4 *)(param_1 + 0xcf00);
  FUN_1006abc0(*puVar6,*puVar2,&DAT_100b4f00);
  puVar7 = &DAT_100b50a0;
  if (param_2[0xc] == 0.0) {
    puVar7 = &DAT_100b5008;
  }
  FUN_1006af20(*puVar6,*puVar2,puVar7);
  FUN_1006b1e0(*puVar6,*puVar2);
  FUN_1006b640(*puVar6,*puVar2);
  FUN_1000ba20(param_1,param_2,fVar19);
  return;
}

