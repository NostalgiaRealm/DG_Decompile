/*
 * FUN_180190040 at 180190040
 * undefined FUN_180190040(void)
 * Address ranges: 180190040-18019071f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180190040(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_198;
  float local_190;
  float local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 *local_178;
  float local_170;
  float fStack_16c;
  undefined8 uStack_168;
  float local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 local_a0;
  code *local_98;
  longlong local_90 [2];
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x20);
  local_98 = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_178 = param_2;
  if (uVar4 != 0) {
    fVar21 = (float)uVar4;
    fVar29 = *(float *)(param_2 + 5);
    fVar28 = fVar29 * fVar21;
    if (fVar28 != 0.0) {
      fVar27 = *(float *)((longlong)param_2 + 0x2c);
      fVar21 = fVar27 * fVar21;
      if (fVar21 != 0.0) {
        uVar1 = *(uint *)(param_2 + 2);
        uVar2 = *(uint *)((longlong)param_2 + 0x14);
        fVar26 = *(float *)(param_2 + 6);
        fVar25 = *(float *)((longlong)param_2 + 0x34);
        local_198 = 0;
        uVar18 = param_2[1];
        local_188 = 0;
        local_184 = 0x3f800000;
        uVar4 = *(uint *)(*(longlong *)(param_1 + 8) + 0x28);
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1cf10);
        lVar14 = lVar16 + (ulonglong)uVar4 * 0x18c0;
        fVar24 = (float)*(uint *)(param_2 + 3);
        fVar23 = (float)*(uint *)((longlong)param_2 + 0x1c);
        local_190 = fVar24;
        local_18c = fVar23;
        FUN_1801ffba8(lVar16,uVar4,&local_198);
        FUN_1801ff3a8(lVar16,uVar4,&DAT_1802387c0,0);
        FUN_1801fec48(lVar16,uVar4,&DAT_180238620,0,0xffffffff,0);
        FUN_1801ff6a0(lVar16,uVar4,&DAT_180238798);
        FUN_1801fff80(lVar16,uVar4,5,*(undefined8 *)(lVar14 + 0xe88),*(undefined8 *)(lVar14 + 0xe78)
                      ,*(undefined8 *)(lVar14 + 0xe60),0);
        local_c8 = 0.0;
        uStack_c4 = 0;
        local_c0 = 0;
        uStack_bc = 0;
        uStack_b8 = 0;
        uStack_b4 = 0;
        local_d0 = uVar18;
        FUN_1802000e0(lVar16,uVar4,4,&local_d0,0);
        FUN_1801ffe20(lVar16,uVar4);
        FUN_1801fff08(lVar16,uVar4,0,0);
        uVar4 = 0;
        if (*(uint *)(lVar14 + 0xea0) + 10 < 0x401) {
          uVar4 = *(uint *)(lVar14 + 0xea0);
        }
        *(uint *)(lVar14 + 0xea0) = uVar4 + 10;
        uVar18 = (*(code *)puVar5)(0x180224000);
        iVar7 = (*extraout_x11)(uVar18,*(undefined8 *)(lVar14 + 0xe98),0);
        if (-1 < iVar7) {
          uStack_168 = 0;
          local_158 = 0;
          uStack_148 = 0;
          local_138 = 0;
          uStack_128 = 0;
          local_118 = 0;
          uStack_108 = 0;
          puVar17 = (undefined8 *)(local_90[0] + (ulonglong)uVar4 * 0x10);
          local_f8 = 0;
          uStack_e8 = 0;
          local_d8 = 0;
          fVar20 = (float)uVar2 * fVar27 + fVar25;
          fVar22 = (float)uVar1 * fVar29 + fVar26;
          fVar28 = (fVar28 + fVar28) / fVar24;
          fVar21 = (fVar21 + fVar21) / fVar23;
          fVar26 = fVar29 * 0.0 + fVar26;
          fVar25 = fVar27 * 0.0 + fVar25;
          fVar29 = ((fVar22 + fVar22) - fVar24) / fVar24;
          local_160 = ((fVar26 + fVar26) - fVar24) / fVar24;
          local_15c = (fVar23 - (fVar25 + fVar25)) / fVar23;
          fStack_fc = (fVar23 - (fVar20 + fVar20)) / fVar23;
          local_170 = fVar28 + local_160;
          fStack_16c = local_15c - fVar21;
          fVar28 = fVar29 - fVar28;
          local_140 = CONCAT44(local_15c,fVar29);
          local_150 = CONCAT44(fStack_16c,fVar28);
          local_120 = CONCAT44(fStack_fc,fVar29);
          fVar21 = fVar21 + fStack_fc;
          puVar17[1] = 0;
          *puVar17 = CONCAT44(fStack_16c,local_170);
          puVar17[3] = 0;
          puVar17[2] = CONCAT44(local_15c,local_160);
          local_130 = CONCAT44(fVar21,fVar28);
          local_110 = CONCAT44(fVar21,local_170);
          puVar17[5] = 0;
          puVar17[4] = local_150;
          puVar17[7] = 0;
          puVar17[6] = local_140;
          puVar17[9] = 0;
          puVar17[8] = local_130;
          puVar17[0xb] = 0;
          puVar17[10] = local_120;
          puVar17[0xd] = 0;
          puVar17[0xc] = local_110;
          puVar17[0xf] = 0;
          puVar17[0xe] = CONCAT44(fStack_fc,local_160);
          puVar17[0x11] = 0;
          puVar17[0x10] = CONCAT44(fStack_16c,local_170);
          puVar17[0x13] = 0;
          puVar17[0x12] = CONCAT44(local_15c,local_160);
          local_100 = local_160;
          local_f0 = local_170;
          fStack_ec = fStack_16c;
          local_e0 = local_160;
          fStack_dc = local_15c;
          uVar18 = (*(code *)puVar5)(0x180224000);
          (*extraout_x11_00)(uVar18,*(undefined8 *)(lVar14 + 0xe98),0);
          uVar18 = (*(code *)puVar5)(0x180224000);
          (*extraout_x11_01)(uVar18,10,uVar4);
        }
      }
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x24) != '\0') {
    lVar14 = *(longlong *)(param_1 + 8);
    piVar12 = (int *)local_178[4];
    uVar4 = piVar12[2] - *piVar12;
    uVar1 = piVar12[3] - piVar12[1];
    if ((uVar4 != *(uint *)(lVar14 + 0xa8)) || (uVar1 != *(uint *)(lVar14 + 0xac))) {
      *(uint *)(lVar14 + 0xa8) = uVar4;
      *(uint *)(lVar14 + 0xac) = uVar1;
      if (uVar4 < 0x321 && uVar1 < 0x259) {
        plVar19 = &DAT_18024d9a0;
        puVar17 = &DAT_18024d9a8;
        pfVar15 = (float *)&DAT_18024d9b0;
        piVar12 = &DAT_18024d9b4;
        pfVar13 = (float *)&DAT_18024d9b8;
        uVar18 = 0x1f5;
        lVar16 = DAT_18024d9a0;
      }
      else {
        plVar19 = &DAT_18024d9c0;
        puVar17 = (undefined8 *)0x18024d9c8;
        pfVar15 = (float *)0x18024d9d0;
        piVar12 = (int *)0x18024d9d4;
        pfVar13 = (float *)0x18024d9d8;
        uVar18 = 500;
        lVar16 = DAT_18024d9c0;
      }
      if (((lVar16 == 0) &&
          (lVar16 = thunk_FUN_180223fa4(DAT_180258908,uVar18,0,0,0,0x2000), lVar16 != 0)) &&
         (iVar7 = thunk_FUN_18022424c(lVar16,0x20,&local_198), iVar7 != 0)) {
        lVar8 = thunk_FUN_180224238(0);
        if (lVar8 != 0) {
          lVar9 = thunk_FUN_180224238(0);
          if (lVar9 != 0) {
            uStack_bc = 0;
            uStack_b8 = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            uStack_ac = 0;
            local_c8 = local_190;
            uStack_c4 = 0x200001;
            local_c0 = 0;
            local_d0 = CONCAT44(local_198._4_4_,0x28);
            lVar10 = thunk_FUN_180224224(0,&local_d0,0,local_90,0,0);
            *plVar19 = lVar10;
            if (lVar10 != 0) {
              local_a0 = thunk_FUN_180224260(lVar8,lVar10);
              uVar18 = thunk_FUN_180224260(lVar9,lVar16);
              thunk_FUN_180224274(lVar8,0,0,local_198._4_4_,local_190,lVar9,0,0,0xcc0020);
              thunk_FUN_180224260(lVar8,local_a0);
              thunk_FUN_180224260(lVar9,uVar18);
            }
            thunk_FUN_1802242c4(lVar9);
          }
          thunk_FUN_1802242c4(lVar8);
        }
        if (*plVar19 != 0) {
          iVar7 = thunk_FUN_18022424c(*plVar19,0x20,&local_198);
          if (iVar7 == 0) {
            thunk_FUN_180224288(*plVar19);
            *plVar19 = 0;
          }
          else {
            *puVar17 = local_180;
            *pfVar15 = local_18c;
            *piVar12 = local_198._4_4_;
            *pfVar13 = local_190;
          }
        }
      }
      if (*plVar19 != 0) {
        iVar7 = *piVar12;
        fVar21 = *pfVar13;
        if ((*(int *)(lVar14 + 0xa0) != iVar7) || (*(float *)(lVar14 + 0xa4) != fVar21)) {
          (*local_98)(0x180224000);
          cVar6 = (*extraout_x11_02)(lVar14,iVar7,fVar21,*puVar17,*pfVar15);
          if (cVar6 == '\0') {
            *(undefined4 *)(lVar14 + 0xa0) = 0;
            *(undefined4 *)(lVar14 + 0xa4) = 0;
          }
          else {
            *(int *)(lVar14 + 0xa0) = iVar7;
            *(float *)(lVar14 + 0xa4) = fVar21;
          }
        }
      }
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 8) + 0x1d4f8) != 0) &&
       (uVar11 = FUN_1801b8600(), (uVar11 & 1) != 0)) {
      FUN_1801fec48(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28),&DAT_180247f60,0,0xffffffff,0
                   );
      FUN_1801ff3a8(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28),&DAT_1802387c0,0);
      FUN_1801ff6a0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28),&DAT_180238798);
      FUN_1801ffc68(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1cf10),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28));
      lVar14 = *(longlong *)(param_1 + 8);
      local_160 = 0.0;
      local_150 = 0;
      uStack_148 = 0;
      local_110 = 0;
      uStack_108 = 0;
      iVar7 = *(int *)(local_178[4] + 8);
      iVar3 = *(int *)(local_178[4] + 0xc);
      local_170 = (float)((iVar7 - *(int *)(lVar14 + 0xa0)) + -10);
      fStack_16c = (float)((iVar3 - *(int *)(lVar14 + 0xa4)) + -10);
      local_140 = *local_178;
      local_138 = local_178[1];
      uStack_128 = *(undefined8 *)(lVar14 + 0x1d4f0);
      local_130 = 0;
      uStack_168 = CONCAT44((float)(iVar3 + -10),(float)(iVar7 + -10));
      local_120 = *(undefined8 *)(lVar14 + 0x1d4f8);
      local_15c = 1.0;
      local_158 = 0x3f800000;
      local_118 = 0;
      FUN_180190800(lVar14,&local_170,*(undefined8 *)(lVar14 + 0x1d010));
    }
  }
  return;
}

