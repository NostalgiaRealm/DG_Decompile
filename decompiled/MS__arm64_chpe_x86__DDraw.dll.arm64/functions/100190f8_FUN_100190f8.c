/*
 * FUN_100190f8 at 100190f8
 * undefined FUN_100190f8(void)
 * Address ranges: 100190f8-10019c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100190f8(int param_1,float *param_2,float param_3,float param_4,uint param_5,char param_6,
                 char param_7,char param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  float *pfVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  float fVar23;
  float extraout_s16;
  undefined8 uVar24;
  float fVar25;
  float extraout_s17;
  float fVar26;
  float extraout_s18;
  float fVar27;
  float fVar28;
  float extraout_s19;
  uint *puVar29;
  float fVar30;
  char local_e0;
  int *local_dc;
  int *local_d8;
  char local_d4;
  char local_d3;
  uint *local_d0;
  undefined8 local_c8;
  code *local_c0;
  float *local_bc;
  float local_b8;
  int *local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  int *local_a0;
  int *local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  uint local_68;
  uint local_60;
  
  uVar22 = (ulonglong)param_5;
  local_c0 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_e0 = param_8;
  local_d4 = param_7;
  local_d3 = param_6;
  local_b0 = param_4;
  local_a8 = param_3;
  if (param_8 == '\0') {
    fVar26 = param_2[6];
    local_c8 = CONCAT44(local_c8._4_4_,param_2 + 6);
    pfVar8 = param_2 + 4;
    fVar23 = *pfVar8;
    pfVar1 = param_2 + 7;
    pfVar2 = param_2 + 5;
    fVar28 = *pfVar2;
    local_d0 = (uint *)(((fVar26 - fVar23) / (param_2[2] - *param_2)) * 0.495);
    fVar25 = *pfVar1;
    local_d8 = (int *)(((fVar25 - fVar28) / (param_2[3] - param_2[1])) * 0.495);
    if ((int)param_5 < 0) {
      local_e0 = FUN_1002d9e8(uVar22);
      fVar25 = extraout_s17;
      fVar26 = extraout_s18;
      fVar28 = extraout_s19;
      fVar23 = extraout_s16;
    }
    else {
      local_e0 = param_5 - 4 < 2;
    }
    piVar12 = local_d8;
    puVar29 = local_d0;
    if (local_e0 != '\0') {
      uVar11 = (*local_c0)();
      (*extraout_w11)(uVar11,auStack_78);
      local_68 = local_68 >> (ulonglong)((uint)param_2[0xb] & 0x1f);
      local_60 = local_60 >> (ulonglong)((uint)param_2[0xb] & 0x1f);
      if (local_68 == 0) {
        local_68 = 1;
      }
      fVar27 = (float)local_68;
      if (local_60 == 0) {
        local_60 = 1;
      }
      fVar30 = (float)local_60;
      fVar25 = 1.0;
      if (local_d4 == '\0') {
        fVar25 = 0.5;
      }
      fVar28 = (*pfVar2 + fVar25) / fVar30;
      fVar23 = (*pfVar8 + fVar25) / fVar27;
      fVar26 = (fVar25 + *(float *)local_c8) / fVar27;
      fVar25 = (fVar25 + *pfVar1) / fVar30;
      piVar12 = (int *)((float)local_d8 / fVar30);
      puVar29 = (uint *)((float)local_d0 / fVar27);
    }
    *pfVar8 = fVar23 - (float)puVar29;
    *pfVar2 = fVar28 - (float)piVar12;
    *(float *)local_c8 = fVar26 - (float)puVar29;
    *pfVar1 = fVar25 - (float)piVar12;
  }
  if (((int)param_5 < 0) && ((param_5 & 0xf) == 2)) {
    FUN_10033e50(&local_dc,param_1,local_b0);
    uVar22 = (ulonglong)
             (~(((uint)local_dc >> 0x16) << 0x1e) & 0x40000000 |
              ((uint)local_dc >> 8 & 0xff | ((uint)local_dc >> 0x10 & 0xf) << 8) << 0x12 |
             param_5 & 0x8003ffff);
  }
  iVar21 = (int)uVar22;
  if (iVar21 < 0) {
    puVar29 = (uint *)(param_1 + 0xd034);
    uVar16 = *puVar29;
    if (uVar16 != 0) {
      uVar17 = 0;
      uVar18 = uVar16;
      do {
        uVar19 = uVar18 + uVar17 >> 1;
        uVar20 = *(ulonglong *)(*(int *)(param_1 + 0xd030) + uVar19 * 0x10);
        uVar9 = uVar19;
        if (uVar20 <= uVar22) {
          if (uVar22 <= uVar20) break;
          uVar17 = uVar19 + 1;
          uVar19 = uVar17;
          uVar9 = uVar18;
        }
        uVar18 = uVar9;
      } while (uVar18 != uVar17);
      if (((uVar19 != uVar16) &&
          (puVar4 = (ulonglong *)(*(int *)(param_1 + 0xd030) + uVar19 * 0x10), *puVar4 == uVar22))
         && (puVar3 = (undefined4 *)((int)puVar4 + 0xc), puVar3 != (undefined4 *)0x0)) {
        local_dc = (int *)*puVar3;
        goto LAB_1001963c;
      }
    }
    local_c8 = CONCAT44(local_c8._4_4_,param_1 + 0xd030);
    local_d8 = (int *)(param_1 + 0xd03c);
    piVar12 = (int *)0x0;
    local_dc = (int *)(*local_d8 + *(int *)(param_1 + 0xd040) * 0x16c0 + 0x6c0);
    local_98 = 0x100;
    local_94 = 1;
    local_a0 = (int *)FUN_100914b0(0x100);
    uVar11 = 0x50;
    if (0xbfff < *local_dc) {
      uVar11 = 0x51;
    }
    local_9c = local_a0;
    uVar20 = FUN_1002da58(uVar22,uVar11,1,&local_a0);
    local_dc = local_a0;
    local_b4 = local_a0;
    if ((uVar20 & 1) != 0) {
      iVar13 = (int)local_9c - (int)local_a0;
      local_d0 = puVar29;
      FUN_10071e18(*local_d8,local_a0,iVar13);
      piVar12 = (int *)FUN_10077d90(iVar13,local_dc);
      uVar16 = *puVar29;
      if (uVar16 == 0) {
        uVar17 = 0;
        local_d8 = (int *)(float *)local_c8;
      }
      else {
        local_d8 = (int *)(param_1 + 0xd030);
        uVar18 = 0;
        uVar19 = uVar16;
        do {
          uVar17 = uVar19 + uVar18 >> 1;
          uVar20 = *(ulonglong *)(*local_d8 + uVar17 * 0x10);
          uVar9 = uVar17;
          if (uVar20 <= uVar22) {
            if (uVar22 <= uVar20) break;
            uVar18 = uVar17 + 1;
            uVar17 = uVar18;
            uVar9 = uVar19;
          }
          uVar19 = uVar9;
        } while (uVar19 != uVar18);
      }
      if ((uVar17 == uVar16) ||
         (puVar4 = (ulonglong *)(*local_d8 + uVar17 * 0x10), *puVar4 != uVar22)) {
        local_c8 = CONCAT44(local_c8._4_4_,(uint *)(param_1 + 0xd038));
        uVar18 = *(uint *)(param_1 + 0xd038);
        local_bc = (float *)local_d8;
        local_dc = local_d8;
        if (uVar18 == uVar16) {
          local_b8 = 2.24208e-44;
          if (uVar18 != 0) {
            local_b8 = (float)(uVar18 << 1);
          }
          iVar13 = FUN_100914b0((int)local_b8 << 4);
          if (iVar13 != 0) {
            uVar16 = 0;
            if (*local_d0 != 0) {
              do {
                puVar5 = (undefined8 *)((int)*local_bc + uVar16 * 0x10);
                puVar6 = (undefined8 *)(iVar13 + uVar16 * 0x10);
                uVar16 = uVar16 + 1;
                uVar24 = *puVar5;
                puVar6[1] = puVar5[1];
                *puVar6 = uVar24;
              } while (uVar16 < *local_d0);
            }
            FUN_100914d0(*(undefined4 *)(param_1 + 0xd02c));
            *(int *)(param_1 + 0xd02c) = iVar13;
            *local_dc = iVar13;
            *(float *)local_c8 = local_b8;
          }
        }
        uVar16 = *local_d0;
        if (*(float *)local_c8 != (float)uVar16) {
          for (; uVar17 < uVar16; uVar16 = uVar16 - 1) {
            puVar5 = (undefined8 *)(*local_dc + uVar16 * 0x10);
            puVar5[1] = puVar5[-1];
            *puVar5 = puVar5[-2];
          }
          *local_d0 = *local_d0 + 1;
          *(int *)(*local_d8 + uVar17 * 0x10 + 8) = iVar21;
          *(int **)(*local_d8 + uVar17 * 0x10 + 0xc) = piVar12;
          *(ulonglong *)(*local_d8 + uVar17 * 0x10) = uVar22;
        }
      }
      else {
        *(int **)((int)puVar4 + 0xc) = piVar12;
      }
    }
    FUN_100914d0(local_b4);
    local_dc = piVar12;
  }
  else {
    local_dc = *(int **)(param_1 + iVar21 * 4 + 0xcf84);
  }
LAB_1001963c:
  piVar7 = (int *)(param_1 + 0xcf04);
  *(int *)(*(int *)(*piVar7 + 0x1304) + 0x948) = param_1;
  piVar12 = (int *)(*(int *)(*piVar7 + 0x1304) + 0x634);
  *piVar12 = *piVar12 + 1;
  FUN_1007d4d8(*(undefined4 *)(*piVar7 + 0x1304),*(undefined4 *)(param_1 + 0xcf0c));
  FUN_1007e490(*(undefined4 *)(*piVar7 + 0x1304),*(undefined4 *)(param_1 + 0xcf0c));
  uVar22 = 0;
  FUN_100315f0(param_1,local_a8,0,0);
  FUN_1007d820(*(undefined4 *)(*piVar7 + 0x1304),*(undefined4 *)(param_1 + 53000),
               uVar22 & 0xffffffff,1,0x80);
  FUN_1007d820(*(undefined4 *)(*piVar7 + 0x1304),param_2[0x12],param_2[0xd],0,0x80);
  if (param_2[0x13] != 0.0) {
    FUN_1007d820(*(undefined4 *)(*piVar7 + 0x1304),param_2[0x13],param_2[0xd],0,0x80);
  }
  pfVar8 = param_2 + 10;
  if (param_2[0xe] != 0.0) {
    FUN_1007d820(*(undefined4 *)(*piVar7 + 0x1304),param_2[0xe],*pfVar8,0,4);
  }
  local_bc = param_2 + 0xf;
  if (*local_bc != 0.0) {
    FUN_1007d820(*(undefined4 *)(*piVar7 + 0x1304),*local_bc,*pfVar8,0,4);
  }
  if (param_2[0x16] != 0.0) {
    FUN_1007d820(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),param_2[0x16],*pfVar8,0,0x10);
  }
  fVar25 = local_b0;
  piVar12 = (int *)(param_1 + 0xcf04);
  if ((iVar21 - 4U & 0xfffffffd) != 0) {
    if ((iVar21 - 5U & 0xfffffffd) != 0) {
      if (local_e0 == '\0') {
        if ((uint)local_b0 < 0xe) {
          uVar11 = (*local_c0)();
          lVar14 = (*extraout_w11_00)(uVar11);
          iVar21 = param_1 + (int)fVar25 * 4;
          FUN_1007ea50(*(undefined4 *)(*piVar12 + 0x1304),1,
                       lVar14 + (ulonglong)(uint)((int)*(char *)(iVar21 + 0x3c) << 0xc));
          FUN_1007ea50(*(undefined4 *)(*piVar12 + 0x1304),2,
                       lVar14 + (ulonglong)(uint)((int)*(char *)(iVar21 + 0x3d) << 0xc));
          FUN_1007ea50(*(undefined4 *)(*piVar12 + 0x1304),3,
                       lVar14 + (ulonglong)(uint)((int)*(char *)(iVar21 + 0x3e) << 0xc));
          FUN_1007ea50(*(undefined4 *)(*piVar12 + 0x1304),4,
                       lVar14 + (ulonglong)(uint)((int)*(char *)(iVar21 + 0x3f) << 0xc));
        }
        if (local_a8 == 0.0) {
          uVar11 = (*local_c0)();
          lVar14 = (*extraout_w11_01)(uVar11);
          FUN_1007ea50(*(undefined4 *)(*piVar12 + 0x1304),5,lVar14 + 0x2000);
        }
      }
      goto LAB_10019998;
    }
    FUN_1007e700(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),7,(float)(uint)param_2[0xc],1)
    ;
  }
  FUN_1007e700(*(undefined4 *)(*(int *)(param_1 + 0xcf04) + 0x1304),7,(float)(uint)param_2[0xb],0);
LAB_10019998:
  piVar12 = (int *)(param_1 + 0xcf04);
  iVar21 = *piVar12;
  uVar22 = FUN_1007c0d0(*(undefined4 *)(iVar21 + 0x15e8),2,
                        *(undefined4 *)(*(int *)(iVar21 + 0x1300) + 0xc),
                        *(undefined8 *)(*(int *)(iVar21 + 0x1304) + 0x938),&local_90);
  if ((uVar22 & 1) != 0) {
    FUN_1007e3a0(*(undefined4 *)(*piVar12 + 0x1304),1,auStack_84);
    local_a8 = param_2[0x14];
    fStack_a4 = param_2[0x15];
    local_c8 = 0x100000001;
    local_b4 = (int *)0x1;
    if (fStack_a4 != 0.0) {
      local_b4 = (int *)0x2;
    }
    uVar22 = ZEXT48(local_b4);
    uVar11 = (*local_c0)();
    (*extraout_w11_02)(uVar11,1,auStack_88,&local_b4,uVar22 & 0xffffffff,&local_a8,&local_c8,0);
    FUN_1007e9b0(*(undefined4 *)(*piVar12 + 0x1304),6,local_90);
    local_b0 = param_2[0x10];
    fStack_ac = param_2[0x11];
    local_b8 = param_2[0x17];
    pfVar8 = &local_b8;
    if (local_b8 == 0.0) {
      pfVar8 = (float *)0x0;
    }
    uVar10 = local_b0 != 0.0;
    if (fStack_ac != 0.0) {
      uVar10 = 2;
    }
    FUN_1007f130(*(undefined4 *)(*piVar12 + 0x1304),uVar10,&local_b0,0,pfVar8);
    uVar11 = FUN_1001cbb0(*piVar12 + 0x1600,&DAT_100b57d0);
    *(undefined4 *)(param_1 + 0xcf28) = uVar11;
    if (local_d3 == '\0') {
      puVar15 = &DAT_100b5760;
      if (param_2[0xe] == 0.0) {
        puVar15 = &DAT_100b5950;
      }
    }
    else {
      puVar15 = (undefined *)0x100b5918;
    }
    uVar11 = FUN_1001d200(*piVar12 + 0x15f0,puVar15);
    *(undefined4 *)(param_1 + 0xcf34) = uVar11;
    uVar11 = FUN_1001cf08(*piVar12 + 0x1620,&DAT_100b5798);
    *(undefined4 *)(param_1 + 0xcf30) = uVar11;
    *(undefined4 *)(param_1 + 0xcf38) = *(undefined4 *)(param_1 + 0xd028);
    *(float *)(param_1 + 0xcf48) = param_2[0x18];
    *(float *)(param_1 + 0xcf4c) = param_2[0x19];
    *(float *)(param_1 + 0xcf68) = param_2[0x1a];
    if (param_2[0xe] == 0.0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
      if (*local_bc != 0.0) {
        uVar11 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xcf44) = uVar11;
    FUN_100187b8(param_1,param_2,local_dc);
  }
  FUN_1007d440(*(int *)(*piVar7 + 0x1304) + 4,0);
  return;
}

