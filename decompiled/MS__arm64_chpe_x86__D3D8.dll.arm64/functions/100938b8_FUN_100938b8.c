/*
 * FUN_100938b8 at 100938b8
 * undefined FUN_100938b8(void)
 * Address ranges: 100938b8-1009443b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100938b8(int param_1,float *param_2,float param_3,float param_4,uint param_5,char param_6,
                 char param_7,byte param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  int iVar10;
  longlong lVar11;
  undefined *puVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
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
  int *piVar23;
  float *pfVar24;
  float fVar25;
  float *local_e0;
  char local_dc;
  char local_db;
  int *local_d8;
  float *local_d4;
  float *local_d0;
  code *local_cc;
  undefined8 local_c8;
  float local_c0;
  float *local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float *local_a8;
  float *local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [16];
  uint local_70;
  uint local_68;
  
  uVar16 = (ulonglong)param_5;
  local_cc = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_dc = param_7;
  local_db = param_6;
  local_b8 = param_4;
  local_b0 = param_3;
  if ((param_8 & 1) == 0) {
    fVar20 = param_2[6];
    local_c8 = CONCAT44(local_c8._4_4_,param_2 + 6);
    pfVar2 = param_2 + 4;
    fVar17 = *pfVar2;
    pfVar9 = param_2 + 7;
    pfVar1 = param_2 + 5;
    fVar22 = *pfVar1;
    local_d4 = (float *)(((fVar20 - fVar17) / (param_2[2] - *param_2)) * 0.495);
    fVar19 = *pfVar9;
    local_d8 = (int *)(((fVar19 - fVar22) / (param_2[3] - param_2[1])) * 0.495);
    if ((int)param_5 < 0) {
      param_8 = FUN_100a8168(uVar16);
      fVar19 = extraout_s17;
      fVar20 = extraout_s18;
      fVar22 = extraout_s19;
      fVar17 = extraout_s16;
    }
    else {
      param_8 = param_5 - 4 < 2;
    }
    piVar23 = local_d8;
    pfVar24 = local_d4;
    if (param_8 != 0) {
      uVar8 = (*local_cc)();
      (*extraout_w11)(uVar8,auStack_80);
      local_70 = local_70 >> (ulonglong)((uint)param_2[0xb] & 0x1f);
      local_68 = local_68 >> (ulonglong)((uint)param_2[0xb] & 0x1f);
      if (local_70 == 0) {
        local_70 = 1;
      }
      fVar21 = (float)local_70;
      if (local_68 == 0) {
        local_68 = 1;
      }
      fVar25 = (float)local_68;
      fVar19 = 1.0;
      if (local_dc == '\0') {
        fVar19 = 0.5;
      }
      fVar22 = (*pfVar1 + fVar19) / fVar25;
      fVar17 = (*pfVar2 + fVar19) / fVar21;
      fVar20 = (fVar19 + *(float *)local_c8) / fVar21;
      fVar19 = (fVar19 + *pfVar9) / fVar25;
      piVar23 = (int *)((float)local_d8 / fVar25);
      pfVar24 = (float *)((float)local_d4 / fVar21);
    }
    *pfVar2 = fVar17 - (float)pfVar24;
    *pfVar1 = fVar22 - (float)piVar23;
    *(float *)local_c8 = fVar20 - (float)pfVar24;
    *pfVar9 = fVar19 - (float)piVar23;
  }
  if (((int)param_5 < 0) && ((param_5 & 0xf) == 2)) {
    FUN_100ae290(&local_e0,param_1,local_b8);
    uVar16 = (ulonglong)
             (~(((uint)local_e0 >> 0x16) << 0x1e) & 0x40000000 |
              ((uint)local_e0 >> 8 & 0xff | ((uint)local_e0 >> 0x10 & 0xf) << 8) << 0x12 |
             param_5 & 0x8003ffff);
  }
  iVar15 = (int)uVar16;
  if (iVar15 < 0) {
    local_d8 = (int *)(param_1 + 0x1d02c);
    pfVar2 = (float *)(param_1 + 0x1d034);
    fVar19 = *pfVar2;
    if (fVar19 != 0.0) {
      fVar20 = 0.0;
      fVar22 = fVar19;
      do {
        fVar17 = (float)((uint)((int)fVar22 + (int)fVar20) >> 1);
        uVar13 = *(ulonglong *)(*(int *)(param_1 + 0x1d030) + (int)fVar17 * 0x10);
        fVar21 = fVar17;
        if (uVar13 <= uVar16) {
          if (uVar16 <= uVar13) break;
          fVar20 = (float)((int)fVar17 + 1);
          fVar17 = fVar20;
          fVar21 = fVar22;
        }
        fVar22 = fVar21;
      } while (fVar22 != fVar20);
      if (((fVar17 != fVar19) &&
          (puVar4 = (ulonglong *)(*(int *)(param_1 + 0x1d030) + (int)fVar17 * 0x10),
          *puVar4 == uVar16)) &&
         (puVar3 = (undefined4 *)((int)puVar4 + 0xc), puVar3 != (undefined4 *)0x0)) {
        local_e0 = (float *)*puVar3;
        goto LAB_10093dfc;
      }
    }
    piVar23 = (int *)(param_1 + 0x1d030);
    pfVar9 = (float *)0x0;
    local_c8 = CONCAT44(local_c8._4_4_,(int *)(param_1 + 0x1d03c));
    local_e0 = (float *)(*(int *)(param_1 + 0x1d03c) + *(int *)(param_1 + 0x1d040) * 0x16c0 + 0x6c0)
    ;
    local_a0 = 0x100;
    local_9c = 1;
    local_d0 = (float *)local_d8;
    local_a8 = (float *)FUN_100fece0(0x100);
    uVar8 = 0x50;
    if (0xbfff < (int)*local_e0) {
      uVar8 = 0x51;
    }
    local_a4 = local_a8;
    uVar13 = FUN_100a81d8(uVar16,uVar8,1,&local_a8);
    local_e0 = local_a8;
    local_bc = local_a8;
    if ((uVar13 & 1) != 0) {
      iVar10 = (int)local_a4 - (int)local_a8;
      local_d4 = pfVar2;
      FUN_100ee3e8(*(float *)local_c8,local_a8,iVar10);
      pfVar9 = (float *)FUN_100f2160(iVar10,local_e0);
      fVar19 = *pfVar2;
      if (fVar19 == 0.0) {
        fVar20 = 0.0;
      }
      else {
        fVar22 = 0.0;
        piVar23 = (int *)(local_d0 + 1);
        fVar17 = fVar19;
        do {
          fVar20 = (float)((uint)((int)fVar17 + (int)fVar22) >> 1);
          uVar13 = *(ulonglong *)(*piVar23 + (int)fVar20 * 0x10);
          fVar21 = fVar20;
          if (uVar13 <= uVar16) {
            if (uVar16 <= uVar13) break;
            fVar22 = (float)((int)fVar20 + 1);
            fVar20 = fVar22;
            fVar21 = fVar17;
          }
          fVar17 = fVar21;
        } while (fVar17 != fVar22);
      }
      if ((fVar20 == fVar19) ||
         (puVar4 = (ulonglong *)(*piVar23 + (int)fVar20 * 0x10), *puVar4 != uVar16)) {
        local_e0 = (float *)(local_d8 + 3);
        fVar22 = *local_e0;
        if (fVar22 == fVar19) {
          local_c0 = 2.24208e-44;
          if (fVar22 != 0.0) {
            local_c0 = (float)((int)fVar22 << 1);
          }
          iVar10 = FUN_100fece0((int)local_c0 << 4);
          local_c8 = CONCAT44(local_c8._4_4_,iVar10);
          if (iVar10 != 0) {
            fVar19 = 0.0;
            if (*local_d4 != 0.0) {
              do {
                puVar5 = (undefined8 *)(*piVar23 + (int)fVar19 * 0x10);
                puVar6 = (undefined8 *)(iVar10 + (int)fVar19 * 0x10);
                fVar19 = (float)((int)fVar19 + 1);
                uVar18 = *puVar5;
                puVar6[1] = puVar5[1];
                *puVar6 = uVar18;
              } while ((uint)fVar19 < (uint)*local_d4);
            }
            local_d0 = (float *)local_d8;
            FUN_100fed00(*local_d8);
            *piVar23 = (int)(float *)local_c8;
            *local_d0 = (float)(float *)local_c8;
            *local_e0 = local_c0;
          }
        }
        fVar19 = *local_d4;
        if (*local_e0 != fVar19) {
          for (; (uint)fVar20 < (uint)fVar19; fVar19 = (float)((int)fVar19 - 1)) {
            puVar5 = (undefined8 *)(*piVar23 + (int)fVar19 * 0x10);
            puVar5[1] = puVar5[-1];
            *puVar5 = puVar5[-2];
          }
          *local_d4 = (float)((int)*local_d4 + 1);
          *(int *)(*piVar23 + (int)fVar20 * 0x10 + 8) = iVar15;
          *(float **)(*piVar23 + (int)fVar20 * 0x10 + 0xc) = pfVar9;
          *(ulonglong *)(*piVar23 + (int)fVar20 * 0x10) = uVar16;
        }
      }
      else {
        *(float **)((int)puVar4 + 0xc) = pfVar9;
      }
    }
    FUN_100fed00(local_bc);
    local_e0 = pfVar9;
  }
  else {
    local_e0 = *(float **)(param_1 + iVar15 * 4 + 0x1cf84);
  }
LAB_10093dfc:
  piVar23 = (int *)(param_1 + 0x1cf04);
  *(int *)(*(int *)(*piVar23 + 0x1304) + 0x948) = param_1;
  piVar14 = (int *)(*(int *)(*piVar23 + 0x1304) + 0x634);
  *piVar14 = *piVar14 + 1;
  iVar10 = *(int *)(*piVar23 + 0x1304);
  FUN_100ec3e0(*(undefined4 *)(iVar10 + 0x8e4),*(undefined4 *)(param_1 + 0x1cf0c),
               *(undefined4 *)(iVar10 + 0x8e0),iVar10,*(undefined8 *)(iVar10 + 0x938));
  FUN_100e2330(*(undefined4 *)(*piVar23 + 0x1304),*(undefined4 *)(param_1 + 0x1cf0c));
  uVar16 = 0;
  FUN_100ab978(param_1,local_b0,0,0);
  FUN_100e1588(*(undefined4 *)(*piVar23 + 0x1304),*(undefined4 *)(param_1 + 0x1cf08),
               uVar16 & 0xffffffff,1,0x80);
  FUN_100e1588(*(undefined4 *)(*piVar23 + 0x1304),param_2[0x12],param_2[0xd],0,0x80);
  if (param_2[0x13] != 0.0) {
    FUN_100e1588(*(undefined4 *)(*piVar23 + 0x1304),param_2[0x13],param_2[0xd],0,0x80);
  }
  pfVar2 = param_2 + 10;
  if (param_2[0xe] != 0.0) {
    FUN_100e1588(*(undefined4 *)(*piVar23 + 0x1304),param_2[0xe],*pfVar2,0,4);
  }
  local_d0 = param_2 + 0xf;
  if (*local_d0 != 0.0) {
    FUN_100e1588(*(undefined4 *)(*piVar23 + 0x1304),*local_d0,*pfVar2,0,4);
  }
  if (param_2[0x16] != 0.0) {
    FUN_100e1588(*(undefined4 *)(*(int *)(param_1 + 0x1cf04) + 0x1304),param_2[0x16],*pfVar2,0,0x10)
    ;
  }
  fVar19 = local_b8;
  piVar14 = (int *)(param_1 + 0x1cf04);
  if ((iVar15 - 4U & 0xfffffffd) != 0) {
    if ((iVar15 - 5U & 0xfffffffd) != 0) {
      if (param_8 == 0) {
        if ((uint)local_b8 < 0xe) {
          uVar8 = (*local_cc)();
          lVar11 = (*extraout_w11_00)(uVar8);
          iVar15 = param_1 + (int)fVar19 * 4;
          FUN_100e28f0(*(undefined4 *)(*piVar14 + 0x1304),1,
                       lVar11 + (ulonglong)(uint)((int)*(char *)(iVar15 + 0x3c) << 0xc));
          FUN_100e28f0(*(undefined4 *)(*piVar14 + 0x1304),2,
                       lVar11 + (ulonglong)(uint)((int)*(char *)(iVar15 + 0x3d) << 0xc));
          FUN_100e28f0(*(undefined4 *)(*piVar14 + 0x1304),3,
                       lVar11 + (ulonglong)(uint)((int)*(char *)(iVar15 + 0x3e) << 0xc));
          FUN_100e28f0(*(undefined4 *)(*piVar14 + 0x1304),4,
                       lVar11 + (ulonglong)(uint)((int)*(char *)(iVar15 + 0x3f) << 0xc));
        }
        if (local_b0 == 0.0) {
          uVar8 = (*local_cc)();
          lVar11 = (*extraout_w11_01)(uVar8);
          FUN_100e28f0(*(undefined4 *)(*piVar14 + 0x1304),5,lVar11 + 0x2000);
        }
      }
      goto LAB_10094178;
    }
    FUN_100e25a0(*(undefined4 *)(*(int *)(param_1 + 0x1cf04) + 0x1304),7,(float)(uint)param_2[0xc],1
                );
  }
  FUN_100e25a0(*(undefined4 *)(*(int *)(param_1 + 0x1cf04) + 0x1304),7,(float)(uint)param_2[0xb],0);
LAB_10094178:
  piVar14 = (int *)(param_1 + 0x1cf04);
  iVar15 = *piVar14;
  uVar16 = FUN_100ed630(*(undefined4 *)(iVar15 + 0x15e8),2,
                        *(undefined4 *)(*(int *)(iVar15 + 0x1300) + 0xc),
                        *(undefined8 *)(*(int *)(iVar15 + 0x1304) + 0x938),&local_98);
  if ((uVar16 & 1) != 0) {
    FUN_100e2240(*(undefined4 *)(*piVar14 + 0x1304),1,auStack_8c);
    local_b0 = param_2[0x14];
    fStack_ac = param_2[0x15];
    local_c8 = 0x100000001;
    local_bc = (float *)0x1;
    if (fStack_ac != 0.0) {
      local_bc = (float *)0x2;
    }
    uVar16 = ZEXT48(local_bc);
    uVar8 = (*local_cc)();
    (*extraout_w11_02)(uVar8,1,auStack_90,&local_bc,uVar16 & 0xffffffff,&local_b0,&local_c8,0);
    FUN_100e2850(*(undefined4 *)(*piVar14 + 0x1304),6,local_98);
    local_b8 = param_2[0x10];
    fStack_b4 = param_2[0x11];
    local_c0 = param_2[0x17];
    pfVar2 = &local_c0;
    if (local_c0 == 0.0) {
      pfVar2 = (float *)0x0;
    }
    uVar7 = local_b8 != 0.0;
    if (fStack_b4 != 0.0) {
      uVar7 = 2;
    }
    FUN_100e2fd0(*(undefined4 *)(*piVar14 + 0x1304),uVar7,&local_b8,0,pfVar2);
    uVar8 = FUN_10097610(*piVar14 + 0x1600,&DAT_1012f0e0);
    *(undefined4 *)(param_1 + 0x1cf28) = uVar8;
    if (local_db == '\0') {
      puVar12 = &DAT_1012f078;
      if (param_2[0xe] == 0.0) {
        puVar12 = &DAT_1012f260;
      }
    }
    else {
      puVar12 = (undefined *)0x1012f228;
    }
    uVar8 = FUN_100514b8(*piVar14 + 0x15f0,puVar12);
    *(undefined4 *)(param_1 + 0x1cf34) = uVar8;
    uVar8 = FUN_10050958(*piVar14 + 0x1620,&DAT_1012f0b0);
    *(undefined4 *)(param_1 + 0x1cf30) = uVar8;
    *(undefined4 *)(param_1 + 0x1cf38) = *(undefined4 *)(param_1 + 0x1d028);
    *(float *)(param_1 + 0x1cf48) = param_2[0x18];
    *(float *)(param_1 + 0x1cf4c) = param_2[0x19];
    *(float *)(param_1 + 0x1cf68) = param_2[0x1a];
    if (param_2[0xe] == 0.0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      if (*local_d0 != 0.0) {
        uVar8 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0x1cf44) = uVar8;
    FUN_10093400(param_1,param_2,local_e0);
  }
  FUN_100e14f0(*(int *)(*piVar23 + 0x1304) + 4,0);
  return;
}

