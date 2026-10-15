/*
 * FUN_180012790 at 180012790
 * undefined FUN_180012790(void)
 * Address ranges: 180012790-18001308b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012790(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint param_5
                  ,int param_6,uint param_7,int param_8,char param_9)

{
  char cVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  uint5 uVar18;
  bool bVar19;
  bool bVar20;
  char *pcVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  bool bVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined4 *puVar41;
  longlong lVar42;
  undefined4 *puVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  uint local_210;
  int local_20c;
  undefined4 *local_1f8;
  undefined4 *local_1f0;
  undefined4 *local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  char *local_1c8;
  undefined1 *local_1c0;
  longlong local_1b0;
  undefined *puStack_1a8;
  longlong local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *puStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 auStack_168 [7];
  undefined1 uStack_161;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong lStack_148;
  undefined8 local_140;
  longlong local_138;
  ulonglong local_130;
  
  cVar1 = *(char *)(param_4 + 0x3c);
  cVar2 = *(char *)(param_4 + 0x44);
  if ((cVar1 == -1 && cVar2 == -1) || ((param_5 >> 2 & 1) == 0)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if ((*(int *)(param_1 + 0x6a8) - 1U < 3) && (*(int *)(param_1 + 0x4e8) != 0)) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  bVar24 = cVar2 != -1 && bVar19;
  uVar32 = 0;
  do {
    if ((*(int *)(param_1 + 0x7c4 + uVar32 * 0x84) != 1) &&
       ((*(uint *)(param_1 + 0x7ec + uVar32 * 0x84) & 0x30000) != 0)) {
      bVar20 = true;
      goto LAB_180012868;
    }
    uVar31 = (int)uVar32 + 1;
    uVar32 = (ulonglong)uVar31;
  } while (uVar31 < 8);
  bVar20 = false;
LAB_180012868:
  if (bVar24 || bVar20) {
LAB_1800128a8:
    bVar17 = true;
    if (*(uint *)(param_1 + 0xde0) < param_7) {
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xdd0));
      *(undefined4 *)(param_1 + 0xde0) = 0;
      *(undefined8 *)(param_1 + 0xdc8) = 0;
      *(undefined8 *)(param_1 + 0xdd0) = 0;
      uVar32 = CONCAT44(0,param_7 << 1 | 1);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar32;
      lVar42 = uVar32 << 4;
      if (SUB168(auVar3 * ZEXT816(0x10),8) != 0) {
        lVar42 = -1;
      }
      lVar42 = thunk_FUN_180102f80(lVar42);
      *(longlong *)(param_1 + 0xdd0) = lVar42;
      if (lVar42 != 0) {
        *(uint *)(param_1 + 0xde0) = param_7;
        *(ulonglong *)(param_1 + 0xdc8) = lVar42 + 0xfU & 0xfffffffffffffff0;
      }
    }
  }
  else {
    if ((bVar17) && (*(uint *)(param_1 + 0x360) != 0)) {
      uVar31 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x358) + (ulonglong)uVar31 * 4) != -1)
        goto LAB_1800128a8;
        uVar31 = uVar31 + 1;
      } while (uVar31 < *(uint *)(param_1 + 0x360));
    }
    bVar17 = false;
  }
  local_1c8 = (char *)(param_4 + 0x14);
  uVar31 = *(uint *)(param_4 + 0xc);
  local_1a0 = 0;
  local_178 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_138 = 0;
  local_130 = (ulonglong)uVar31;
  if (*local_1c8 != -1) {
    local_138 = (ulonglong)(uVar31 * param_6) + (ulonglong)*(byte *)(param_4 + 0x17) * 4 + param_3;
  }
  uVar44 = *(uint *)(param_2 + 1);
  local_180 = (ulonglong)uVar44;
  local_1b0 = *param_2 + (ulonglong)(uVar44 * param_8);
  local_1c0 = (undefined1 *)((longlong)param_2 + 0xc);
  uVar30 = 2;
  puStack_1a8 = &DAT_180233888;
  if (param_2[6] != 0) {
    local_180 = CONCAT44((int)param_2[7],uVar44);
    puStack_1a8 = (undefined *)(param_2[6] + (ulonglong)(uint)((int)param_2[7] * param_8));
    uVar30 = *(undefined1 *)((longlong)param_2 + 0x3c);
  }
  local_198 = &DAT_180233888;
  auStack_168 = (undefined1  [7])((uint7)CONCAT11(uVar30,*local_1c0) << 0x20);
  _auStack_168 = CONCAT17(2,auStack_168);
  if (param_2[0x1e] != 0) {
    local_178 = (ulonglong)*(uint *)(param_2 + 0x1f);
    local_198 = (undefined *)(param_2[0x1e] + (ulonglong)(*(uint *)(param_2 + 0x1f) * param_8));
    _auStack_168 = CONCAT17(*(undefined1 *)((longlong)param_2 + 0xfc),auStack_168);
  }
  uVar10 = _auStack_168;
  local_190 = &DAT_180233888;
  uVar30 = 2;
  if (param_2[0x20] != 0) {
    local_178 = CONCAT44((int)param_2[0x21],(undefined4)local_178);
    local_190 = (undefined *)(param_2[0x20] + (ulonglong)(uint)((int)param_2[0x21] * param_8));
    uVar30 = *(undefined1 *)((longlong)param_2 + 0x10c);
  }
  puStack_188 = &DAT_180233894;
  local_170 = 0;
  local_160._0_2_ = CONCAT11(5,uVar30);
  if (param_2[2] != 0) {
    uVar44 = *(uint *)(param_2 + 3);
    local_1a0 = param_2[2] + (ulonglong)(uVar44 * param_8);
    local_170 = (ulonglong)uVar44 << 0x20;
    _auStack_168 = CONCAT44(stack0xfffffffffffffe9c,(uint)*(byte *)((longlong)param_2 + 0x1d));
    uVar23 = _auStack_168;
    uStack_161 = SUB81(uVar10,7);
    auStack_168 = (undefined1  [7])CONCAT16(*(undefined1 *)((longlong)param_2 + 0x1c),(int6)uVar23);
    if ((param_2[4] != 0) && (*(int *)(param_1 + 0x714) != 0)) {
      local_170 = CONCAT44(uVar44,(int)param_2[5]);
      puStack_188 = (undefined *)(param_2[4] + (ulonglong)(uint)((int)param_2[5] * param_8));
      local_160._0_2_ = CONCAT11(*(undefined1 *)((longlong)param_2 + 0x2c),uVar30);
    }
  }
  if (bVar17) {
    local_140 = *(undefined8 *)(param_1 + 0xdc8);
  }
  else {
    local_140 = 0;
  }
  lStack_148 = param_1 + 0x3d4;
  local_160._0_4_ = CONCAT22(0x101,(undefined2)local_160);
  uVar18 = CONCAT14((char)(param_5 >> 3),(undefined4)local_160);
  local_160 = (ulonglong)(CONCAT16(*(int *)(param_4 + 4) == 3,(uint6)uVar18) & 0xffff01ffffffff);
  puVar25 = (undefined4 *)FUN_180019ff0(param_1,&local_1b0,0,param_7);
  puVar43 = (undefined4 *)0x0;
  if (cVar2 != -1) {
    puVar43 = (undefined4 *)
              ((ulonglong)(uVar31 * param_6) + (ulonglong)*(byte *)(param_4 + 0x47) * 4 + param_3);
  }
  if ((DAT_180258cd8 & 1) == 0) {
    DAT_180258cd8 = DAT_180258cd8 | 1;
    DAT_180258cdc = *(uint *)(param_1 + 0xe1c) | 0xff000000;
  }
  local_20c = 0;
  local_1f0 = &DAT_180258cdc;
  if (param_2[0xc] != 0) {
    local_20c = (int)param_2[0xd];
    local_1f0 = (undefined4 *)(param_2[0xc] + (ulonglong)(uint)(local_20c * param_8));
  }
  if (bVar24) {
    puVar25 = (undefined4 *)
              FUN_1800131a0(param_1,*(undefined8 *)(param_1 + 0xdc8),local_1f0,local_20c,param_7,
                            puVar43,*(undefined4 *)(param_4 + 0xc));
  }
  if (cVar1 != -1 || cVar2 != -1) {
    puVar41 = (undefined4 *)0x0;
    uVar44 = 0;
    uVar30 = 4;
    if (param_2[10] == 0) {
      local_1f8 = (undefined4 *)0x0;
      uVar34 = 4;
      local_210 = 0;
    }
    else {
      local_210 = *(uint *)(param_2 + 0xb);
      uVar34 = *(undefined1 *)((longlong)param_2 + 0x5c);
      local_1f8 = (undefined4 *)(param_2[10] + (ulonglong)(local_210 * param_8));
    }
    if (param_2[0xc] != 0) {
      uVar44 = *(uint *)(param_2 + 0xd);
      uVar30 = *(undefined1 *)((longlong)param_2 + 0x6c);
      puVar41 = (undefined4 *)(param_2[0xc] + (ulonglong)(uVar44 * param_8));
    }
    local_1e8 = (undefined4 *)0x0;
    fVar45 = *(float *)(param_1 + 0x2ec) * 255.0;
    fVar46 = *(float *)(param_1 + 0x2e8) * 255.0;
    iVar47 = (int)fVar45;
    iVar48 = (int)fVar46;
    iVar49 = (int)(*(float *)(param_1 + 0x2e4) * 255.0);
    iVar50 = (int)(*(float *)(param_1 + 0x2f0) * 255.0);
    auVar11._4_4_ = iVar48;
    auVar11._0_4_ = iVar47;
    auVar11._8_4_ = iVar49;
    auVar11._12_4_ = iVar50;
    uVar10 = NEON_sqxtn(CONCAT44(fVar46,fVar45),auVar11,4);
    auVar12._4_4_ = iVar48;
    auVar12._0_4_ = iVar47;
    auVar12._8_4_ = iVar49;
    auVar12._12_4_ = iVar50;
    NEON_uqxtn(CONCAT44(iVar48,iVar47),auVar12,2);
    auVar5._8_4_ = (int)uVar10;
    auVar5._0_8_ = uVar10;
    auVar5._12_4_ = (int)((ulonglong)uVar10 >> 0x20);
    uVar10 = NEON_uqxtn(uVar10,auVar5,2);
    local_1d0 = (undefined4)uVar10;
    fVar45 = *(float *)(param_1 + 0x30c) * 255.0;
    fVar46 = *(float *)(param_1 + 0x308) * 255.0;
    iVar47 = (int)fVar45;
    iVar48 = (int)fVar46;
    iVar49 = (int)(*(float *)(param_1 + 0x304) * 255.0);
    iVar50 = (int)(*(float *)(param_1 + 0x310) * 255.0);
    auVar13._4_4_ = iVar48;
    auVar13._0_4_ = iVar47;
    auVar13._8_4_ = iVar49;
    auVar13._12_4_ = iVar50;
    uVar10 = NEON_sqxtn(CONCAT44(fVar46,fVar45),auVar13,4);
    auVar14._4_4_ = iVar48;
    auVar14._0_4_ = iVar47;
    auVar14._8_4_ = iVar49;
    auVar14._12_4_ = iVar50;
    NEON_uqxtn(CONCAT44(iVar48,iVar47),auVar14,2);
    auVar6._8_4_ = (int)uVar10;
    auVar6._0_8_ = uVar10;
    auVar6._12_4_ = (int)((ulonglong)uVar10 >> 0x20);
    uVar10 = NEON_uqxtn(uVar10,auVar6,2);
    local_1cc = (undefined4)uVar10;
    fVar45 = *(float *)(param_1 + 0x2dc) * 255.0;
    fVar46 = *(float *)(param_1 + 0x2d8) * 255.0;
    iVar47 = (int)fVar45;
    iVar48 = (int)fVar46;
    iVar49 = (int)(*(float *)(param_1 + 0x2d4) * 255.0);
    iVar50 = (int)(*(float *)(param_1 + 0x2e0) * 255.0);
    auVar15._4_4_ = iVar48;
    auVar15._0_4_ = iVar47;
    auVar15._8_4_ = iVar49;
    auVar15._12_4_ = iVar50;
    uVar10 = NEON_sqxtn(CONCAT44(fVar46,fVar45),auVar15,4);
    auVar16._4_4_ = iVar48;
    auVar16._0_4_ = iVar47;
    auVar16._8_4_ = iVar49;
    auVar16._12_4_ = iVar50;
    NEON_uqxtn(CONCAT44(iVar48,iVar47),auVar16,2);
    auVar7._8_4_ = (int)uVar10;
    auVar7._0_8_ = uVar10;
    auVar7._12_4_ = (int)((ulonglong)uVar10 >> 0x20);
    uVar10 = NEON_uqxtn(uVar10,auVar7,2);
    local_1d8 = (undefined4)uVar10;
    fVar45 = *(float *)(param_1 + 0x2fc) * 255.0;
    fVar46 = *(float *)(param_1 + 0x2f8) * 255.0;
    iVar47 = (int)fVar45;
    iVar48 = (int)fVar46;
    iVar49 = (int)(*(float *)(param_1 + 0x2f4) * 255.0);
    iVar50 = (int)(*(float *)(param_1 + 0x300) * 255.0);
    auVar8._4_4_ = iVar48;
    auVar8._0_4_ = iVar47;
    auVar8._8_4_ = iVar49;
    auVar8._12_4_ = iVar50;
    uVar10 = NEON_sqxtn(CONCAT17((char)((uint)fVar46 >> 0x18),
                                 CONCAT16((char)((uint)fVar46 >> 0x10),
                                          CONCAT15((char)((uint)fVar46 >> 8),
                                                   CONCAT14(SUB41(fVar46,0),fVar45)))),auVar8,4);
    auVar9._4_4_ = iVar48;
    auVar9._0_4_ = iVar47;
    auVar9._8_4_ = iVar49;
    auVar9._12_4_ = iVar50;
    NEON_uqxtn(CONCAT44(iVar48,iVar47),auVar9,2);
    auVar4[8] = (char)uVar10;
    auVar4._0_8_ = uVar10;
    auVar4[9] = (char)((ulonglong)uVar10 >> 8);
    auVar4[10] = (char)((ulonglong)uVar10 >> 0x10);
    auVar4[0xb] = (char)((ulonglong)uVar10 >> 0x18);
    auVar4[0xc] = (char)((ulonglong)uVar10 >> 0x20);
    auVar4[0xd] = (char)((ulonglong)uVar10 >> 0x28);
    auVar4[0xe] = (char)((ulonglong)uVar10 >> 0x30);
    auVar4[0xf] = (char)((ulonglong)uVar10 >> 0x38);
    uVar10 = NEON_uqxtn(uVar10,auVar4,2);
    local_1d4 = (undefined4)uVar10;
    if (*(char *)(param_4 + 0x3c) != -1) {
      local_1e8 = (undefined4 *)
                  ((ulonglong)(uVar31 * param_6) + (ulonglong)*(byte *)(param_4 + 0x3f) * 4 +
                  param_3);
    }
    if ((param_5 >> 2 & 1) == 0) {
      bVar17 = true;
      bVar24 = true;
    }
    else {
      uVar31 = 0;
      uVar40 = 0;
      uVar39 = 0;
      uVar36 = 4;
      uVar35 = 4;
      uVar33 = 4;
      puVar25 = &local_1d0;
      puVar26 = &local_1cc;
      puVar27 = &local_1d8;
      puVar28 = &local_1d4;
      uVar38 = 0;
      uVar29 = 4;
      if (*(int *)(param_1 + 0x6ac) != 0) {
        if (*(int *)(param_1 + 0x6bc) == 1) {
          uVar36 = 4;
          if (local_1f8 != (undefined4 *)0x0) {
            puVar27 = local_1f8;
            uVar31 = local_210;
            uVar36 = uVar34;
          }
        }
        else {
          puVar27 = puVar41;
          uVar31 = uVar44;
          uVar36 = uVar30;
          if (*(int *)(param_1 + 0x6bc) != 2 || puVar41 == (undefined4 *)0x0) {
            uVar31 = 0;
            uVar36 = 4;
            puVar27 = &local_1d8;
          }
        }
        if (*(int *)(param_1 + 0x6c0) == 1) {
          uVar35 = 4;
          if (local_1f8 != (undefined4 *)0x0) {
            puVar28 = local_1f8;
            uVar40 = local_210;
            uVar35 = uVar34;
          }
        }
        else {
          puVar28 = puVar41;
          uVar40 = uVar44;
          uVar35 = uVar30;
          if (*(int *)(param_1 + 0x6c0) != 2 || puVar41 == (undefined4 *)0x0) {
            uVar40 = 0;
            uVar35 = 4;
            puVar28 = &local_1d4;
          }
        }
        if (*(int *)(param_1 + 0x6c4) == 1) {
          uVar33 = 4;
          if (local_1f8 != (undefined4 *)0x0) {
            puVar25 = local_1f8;
            uVar39 = local_210;
            uVar33 = uVar34;
          }
        }
        else {
          puVar25 = puVar41;
          uVar39 = uVar44;
          uVar33 = uVar30;
          if (*(int *)(param_1 + 0x6c4) != 2 || puVar41 == (undefined4 *)0x0) {
            uVar39 = 0;
            uVar33 = 4;
            puVar25 = &local_1d0;
          }
        }
        if (*(int *)(param_1 + 0x6c8) == 1) {
          if (local_1f8 != (undefined4 *)0x0) {
            puVar26 = local_1f8;
            uVar38 = local_210;
            uVar29 = uVar34;
          }
        }
        else {
          puVar26 = puVar41;
          uVar38 = uVar44;
          uVar29 = uVar30;
          if (*(int *)(param_1 + 0x6c8) != 2 || puVar41 == (undefined4 *)0x0) {
            uVar38 = 0;
            uVar29 = 4;
            puVar26 = &local_1cc;
          }
        }
      }
      if (bVar19) {
        local_20c = *(int *)(param_4 + 0xc);
        local_1f0 = puVar43;
      }
      puVar25 = (undefined4 *)
                FUN_180013f20(param_1,*(undefined8 *)(param_1 + 0xdc8),0,local_180._4_4_,puVar25,
                              puVar26,puVar27,puVar28,local_1f0,uVar39,uVar38,uVar31,uVar40,
                              local_20c,uVar33,uVar29,uVar36,uVar35,local_1e8,puVar43,
                              *(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0xc),param_7)
      ;
      bVar17 = false;
      bVar24 = *(int *)(param_1 + 0x4ec) == 0;
    }
    if (param_9 == '\0') {
      if ((local_1e8 != (undefined4 *)0x0) && (bVar17)) {
        puVar25 = local_1f8;
        if (local_1f8 == (undefined4 *)0x0) {
          uVar34 = 4;
          local_210 = 0;
          puVar25 = (undefined4 *)(param_1 + 0xe18);
        }
        if (param_7 != 0) {
          puVar26 = puVar25;
          uVar31 = param_7;
          do {
            puVar25 = (undefined4 *)FUN_18001e2c0(puVar26,uVar34);
            puVar26 = (undefined4 *)((longlong)puVar26 + (ulonglong)local_210);
            uVar31 = uVar31 - 1;
            *local_1e8 = (int)puVar25;
            local_1e8 = (undefined4 *)((longlong)local_1e8 + (ulonglong)*(uint *)(param_4 + 0xc));
          } while (uVar31 != 0);
        }
      }
      if (((puVar43 != (undefined4 *)0x0) && (!bVar19)) && (bVar24)) {
        uVar31 = param_7;
        if (puVar41 == (undefined4 *)0x0) {
          uVar44 = 0;
          uVar30 = 4;
          puVar41 = (undefined4 *)(param_1 + 0xe1c);
        }
        for (; uVar31 != 0; uVar31 = uVar31 - 1) {
          puVar25 = (undefined4 *)FUN_18001e2c0(puVar41,uVar30);
          *puVar43 = (int)puVar25;
          puVar43 = (undefined4 *)((longlong)puVar43 + (ulonglong)*(uint *)(param_4 + 0xc));
          puVar41 = (undefined4 *)((longlong)puVar41 + (ulonglong)uVar44);
        }
      }
    }
  }
  puVar22 = local_1c0;
  pcVar21 = local_1c8;
  iVar47 = *(int *)(param_4 + 0xc);
  uVar32 = 0;
  while (((*(uint *)(param_1 + 0x7ec + uVar32 * 0x84) & 0x70000) == 0 &&
         ((*(uint *)(param_1 + 0x820 + uVar32 * 0x84) & 0xff) == 0))) {
    uVar31 = (int)uVar32 + 1;
    uVar32 = (ulonglong)uVar31;
    if (7 < uVar31) {
      if (param_9 == '\0') {
        lVar42 = 7;
        do {
          lVar37 = lVar42 * 8;
          if ((pcVar21[lVar37] != -1) && (param_2[lVar42 * 2] != 0)) {
            if (puVar22[lVar42 * 0x10] == *(char *)(param_4 + 0x18 + lVar37)) {
              puVar25 = (undefined4 *)FUN_1800148a8(param_1);
            }
            else {
              puVar25 = (undefined4 *)
                        FUN_180014a20(puVar25,param_2 + lVar42 * 2,pcVar21 + lVar37,
                                      param_3 + (ulonglong)(uint)(iVar47 * param_6),iVar47,param_7,
                                      param_8);
            }
          }
          lVar42 = lVar42 + 1;
        } while (lVar42 != 0xf);
      }
      return;
    }
  }
  FUN_180014b50(param_1,param_2,param_4,*(undefined8 *)(param_1 + 0xdc8),
                param_3 + (ulonglong)(uint)(iVar47 * param_6),iVar47,param_7,param_8,param_9);
  return;
}

