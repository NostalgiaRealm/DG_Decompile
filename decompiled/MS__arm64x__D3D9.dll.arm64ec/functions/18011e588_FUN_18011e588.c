/*
 * FUN_18011e588 at 18011e588
 * undefined FUN_18011e588(void)
 * Address ranges: 18011e588-18011eeaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011e588(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint param_5
                  ,int param_6,uint param_7,int param_8,char param_9)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  bool bVar18;
  uint5 uVar19;
  bool bVar20;
  bool bVar21;
  char *pcVar22;
  undefined8 uVar23;
  bool bVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined1 uVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  longlong lVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  longlong lVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  float fVar49;
  float fVar50;
  uint local_208;
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  char *local_1b0;
  byte *local_1a8;
  longlong local_1a0;
  undefined *puStack_198;
  longlong local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 auStack_158 [6];
  undefined1 uStack_152;
  undefined1 uStack_151;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  longlong lStack_138;
  undefined8 local_130;
  longlong local_128;
  ulonglong local_120;
  
  cVar2 = *(char *)(param_4 + 0x3c);
  cVar3 = *(char *)(param_4 + 0x44);
  if ((cVar2 == -1 && cVar3 == -1) || ((param_5 >> 2 & 1) == 0)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  if ((*(int *)(param_1 + 0x6a8) - 1U < 3) && (*(int *)(param_1 + 0x4e8) != 0)) {
    bVar20 = true;
  }
  else {
    bVar20 = false;
  }
  bVar24 = cVar3 != -1 && bVar20;
  uVar33 = 0;
  do {
    if ((*(int *)(param_1 + 0x7c4 + uVar33 * 0x84) != 1) &&
       ((*(uint *)(param_1 + 0x7ec + uVar33 * 0x84) & 0x30000) != 0)) {
      bVar21 = true;
      goto LAB_18011e654;
    }
    uVar32 = (int)uVar33 + 1;
    uVar33 = (ulonglong)uVar32;
  } while (uVar32 < 8);
  bVar21 = false;
LAB_18011e654:
  if (bVar24 || bVar21) {
LAB_18011e694:
    bVar18 = true;
    if (*(uint *)(param_1 + 0xde0) < param_7) {
      FUN_1802229d8(*(undefined8 *)(param_1 + 0xdd0));
      *(undefined4 *)(param_1 + 0xde0) = 0;
      *(undefined8 *)(param_1 + 0xdc8) = 0;
      *(undefined8 *)(param_1 + 0xdd0) = 0;
      uVar33 = CONCAT44(0,param_7 << 1 | 1);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar33;
      lVar44 = uVar33 << 4;
      if (SUB168(auVar4 * ZEXT816(0x10),8) != 0) {
        lVar44 = -1;
      }
      lVar44 = FUN_1802229a8(lVar44);
      *(longlong *)(param_1 + 0xdd0) = lVar44;
      if (lVar44 != 0) {
        *(uint *)(param_1 + 0xde0) = param_7;
        *(ulonglong *)(param_1 + 0xdc8) = lVar44 + 0xfU & 0xfffffffffffffff0;
      }
    }
  }
  else {
    if ((bVar18) && (*(uint *)(param_1 + 0x360) != 0)) {
      uVar32 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x358) + (ulonglong)uVar32 * 4) != -1)
        goto LAB_18011e694;
        uVar32 = uVar32 + 1;
      } while (uVar32 < *(uint *)(param_1 + 0x360));
    }
    bVar18 = false;
  }
  local_1b0 = (char *)(param_4 + 0x14);
  uVar32 = *(uint *)(param_4 + 0xc);
  local_190 = 0;
  local_168 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_128 = 0;
  local_120 = (ulonglong)uVar32;
  if (*local_1b0 != -1) {
    local_128 = (ulonglong)(uVar32 * param_6) + (ulonglong)*(byte *)(param_4 + 0x17) * 4 + param_3;
  }
  uVar40 = *(uint *)(param_2 + 1);
  local_170 = (ulonglong)uVar40;
  local_1a0 = *param_2 + (ulonglong)(uVar40 * param_8);
  local_1a8 = (byte *)((longlong)param_2 + 0xc);
  auStack_158._0_5_ = (uint5)*local_1a8 << 0x20;
  puStack_198 = &DAT_18022a480;
  auStack_158[5] = 2;
  if (param_2[6] != 0) {
    local_170 = CONCAT44((int)param_2[7],uVar40);
    puStack_198 = (undefined *)(param_2[6] + (ulonglong)(uint)((int)param_2[7] * param_8));
    auStack_158 = (undefined1  [6])
                  ((uint6)CONCAT11(*(undefined1 *)((longlong)param_2 + 0x3c),*local_1a8) << 0x20);
  }
  local_188 = &DAT_18022a480;
  _auStack_158 = (uint7)(uint6)auStack_158;
  _auStack_158 = CONCAT17(2,_auStack_158);
  if (param_2[0x1e] != 0) {
    local_168 = (ulonglong)*(uint *)(param_2 + 0x1f);
    local_188 = (undefined *)(param_2[0x1e] + (ulonglong)(*(uint *)(param_2 + 0x1f) * param_8));
    _auStack_158 = CONCAT17(*(undefined1 *)((longlong)param_2 + 0xfc),_auStack_158);
  }
  uVar16 = _auStack_158;
  local_180 = &DAT_18022a480;
  uVar1 = 2;
  if (param_2[0x20] != 0) {
    local_168 = CONCAT44((int)param_2[0x21],(undefined4)local_168);
    local_180 = (undefined *)(param_2[0x20] + (ulonglong)(uint)((int)param_2[0x21] * param_8));
    uVar1 = *(undefined1 *)((longlong)param_2 + 0x10c);
  }
  puStack_178 = &DAT_18022a47c;
  local_160 = 0;
  local_150._0_2_ = CONCAT11(5,uVar1);
  if (param_2[2] != 0) {
    uVar40 = *(uint *)(param_2 + 3);
    local_190 = param_2[2] + (ulonglong)(uVar40 * param_8);
    local_160 = (ulonglong)uVar40 << 0x20;
    _auStack_158 = CONCAT44(stack0xfffffffffffffeac,(uint)*(byte *)((longlong)param_2 + 0x1d));
    uVar23 = _auStack_158;
    uStack_151 = SUB81(uVar16,7);
    auStack_158 = SUB86(uVar23,0);
    _auStack_158 = CONCAT16(*(undefined1 *)((longlong)param_2 + 0x1c),auStack_158);
    if ((param_2[4] != 0) && (*(int *)(param_1 + 0x714) != 0)) {
      local_160 = CONCAT44(uVar40,(int)param_2[5]);
      puStack_178 = (undefined *)(param_2[4] + (ulonglong)(uint)((int)param_2[5] * param_8));
      local_150._0_2_ = CONCAT11(*(undefined1 *)((longlong)param_2 + 0x2c),uVar1);
    }
  }
  if (bVar18) {
    local_130 = *(undefined8 *)(param_1 + 0xdc8);
  }
  else {
    local_130 = 0;
  }
  lStack_138 = param_1 + 0x3d4;
  local_150._0_4_ = CONCAT22(0x101,(undefined2)local_150);
  uVar19 = CONCAT14((char)(param_5 >> 3),(undefined4)local_150);
  local_150 = (ulonglong)(CONCAT16(*(int *)(param_4 + 4) == 3,(uint6)uVar19) & 0xffff01ffffffff);
  puVar25 = (undefined4 *)FUN_1801260c8(param_1,&local_1a0,0,param_7);
  local_1e8 = (undefined4 *)0x0;
  if (cVar3 != -1) {
    local_1e8 = (undefined4 *)
                ((ulonglong)(uVar32 * param_6) + (ulonglong)*(byte *)(param_4 + 0x47) * 4 + param_3)
    ;
  }
  if ((DAT_180258ccc & 1) == 0) {
    DAT_180258ccc = DAT_180258ccc | 1;
    DAT_180258cd0 = *(uint *)(param_1 + 0xe1c) | 0xff000000;
  }
  puVar43 = &DAT_180258cd0;
  iVar41 = 0;
  if (param_2[0xc] != 0) {
    iVar41 = (int)param_2[0xd];
    puVar43 = (undefined4 *)(param_2[0xc] + (ulonglong)(uint)(iVar41 * param_8));
  }
  if (bVar24) {
    puVar25 = (undefined4 *)
              FUN_18011efc0(param_1,*(undefined8 *)(param_1 + 0xdc8),puVar43,iVar41,param_7,
                            local_1e8,*(undefined4 *)(param_4 + 0xc));
  }
  if (cVar2 != -1 || cVar3 != -1) {
    local_1e0 = (undefined4 *)0x0;
    local_208 = 0;
    uVar1 = 4;
    if (param_2[10] == 0) {
      puVar42 = (undefined4 *)0x0;
      uVar35 = 4;
      uVar40 = 0;
    }
    else {
      uVar40 = *(uint *)(param_2 + 0xb);
      uVar35 = *(undefined1 *)((longlong)param_2 + 0x5c);
      puVar42 = (undefined4 *)(param_2[10] + (ulonglong)(uVar40 * param_8));
    }
    if (param_2[0xc] != 0) {
      local_208 = *(uint *)(param_2 + 0xd);
      local_1e0 = (undefined4 *)(param_2[0xc] + (ulonglong)(local_208 * param_8));
      uVar1 = *(undefined1 *)((longlong)param_2 + 0x6c);
    }
    local_1d8 = (undefined4 *)0x0;
    fVar49 = *(float *)(param_1 + 0x2ec) * 255.0;
    fVar50 = *(float *)(param_1 + 0x2e8) * 255.0;
    iVar45 = (int)fVar49;
    iVar46 = (int)fVar50;
    iVar47 = (int)(*(float *)(param_1 + 0x2e4) * 255.0);
    iVar48 = (int)(*(float *)(param_1 + 0x2f0) * 255.0);
    auVar5._4_4_ = iVar46;
    auVar5._0_4_ = iVar45;
    auVar5._8_4_ = iVar47;
    auVar5._12_4_ = iVar48;
    uVar16 = NEON_sqxtn(CONCAT44(fVar50,fVar49),auVar5,4);
    auVar6._4_4_ = iVar46;
    auVar6._0_4_ = iVar45;
    auVar6._8_4_ = iVar47;
    auVar6._12_4_ = iVar48;
    NEON_uqxtn(CONCAT44(iVar46,iVar45),auVar6,2);
    auVar11._8_4_ = (int)uVar16;
    auVar11._0_8_ = uVar16;
    auVar11._12_4_ = (int)((ulonglong)uVar16 >> 0x20);
    uVar16 = NEON_uqxtn(uVar16,auVar11,2);
    local_1b8 = (undefined4)uVar16;
    fVar49 = *(float *)(param_1 + 0x30c) * 255.0;
    fVar50 = *(float *)(param_1 + 0x308) * 255.0;
    iVar45 = (int)fVar49;
    iVar46 = (int)fVar50;
    iVar47 = (int)(*(float *)(param_1 + 0x304) * 255.0);
    iVar48 = (int)(*(float *)(param_1 + 0x310) * 255.0);
    auVar7._4_4_ = iVar46;
    auVar7._0_4_ = iVar45;
    auVar7._8_4_ = iVar47;
    auVar7._12_4_ = iVar48;
    uVar16 = NEON_sqxtn(CONCAT44(fVar50,fVar49),auVar7,4);
    auVar8._4_4_ = iVar46;
    auVar8._0_4_ = iVar45;
    auVar8._8_4_ = iVar47;
    auVar8._12_4_ = iVar48;
    NEON_uqxtn(CONCAT44(iVar46,iVar45),auVar8,2);
    auVar12._8_4_ = (int)uVar16;
    auVar12._0_8_ = uVar16;
    auVar12._12_4_ = (int)((ulonglong)uVar16 >> 0x20);
    uVar16 = NEON_uqxtn(uVar16,auVar12,2);
    local_1b4 = (undefined4)uVar16;
    fVar49 = *(float *)(param_1 + 0x2dc) * 255.0;
    fVar50 = *(float *)(param_1 + 0x2d8) * 255.0;
    iVar45 = (int)fVar49;
    iVar46 = (int)fVar50;
    iVar47 = (int)(*(float *)(param_1 + 0x2d4) * 255.0);
    iVar48 = (int)(*(float *)(param_1 + 0x2e0) * 255.0);
    auVar9._4_4_ = iVar46;
    auVar9._0_4_ = iVar45;
    auVar9._8_4_ = iVar47;
    auVar9._12_4_ = iVar48;
    uVar16 = NEON_sqxtn(CONCAT44(fVar50,fVar49),auVar9,4);
    auVar10._4_4_ = iVar46;
    auVar10._0_4_ = iVar45;
    auVar10._8_4_ = iVar47;
    auVar10._12_4_ = iVar48;
    NEON_uqxtn(CONCAT44(iVar46,iVar45),auVar10,2);
    auVar13._8_4_ = (int)uVar16;
    auVar13._0_8_ = uVar16;
    auVar13._12_4_ = (int)((ulonglong)uVar16 >> 0x20);
    uVar16 = NEON_uqxtn(uVar16,auVar13,2);
    local_1c0 = (undefined4)uVar16;
    fVar49 = *(float *)(param_1 + 0x2fc) * 255.0;
    fVar50 = *(float *)(param_1 + 0x2f8) * 255.0;
    iVar45 = (int)fVar49;
    iVar46 = (int)fVar50;
    iVar47 = (int)(*(float *)(param_1 + 0x2f4) * 255.0);
    iVar48 = (int)(*(float *)(param_1 + 0x300) * 255.0);
    auVar14._4_4_ = iVar46;
    auVar14._0_4_ = iVar45;
    auVar14._8_4_ = iVar47;
    auVar14._12_4_ = iVar48;
    uVar16 = NEON_sqxtn(CONCAT17((char)((uint)fVar50 >> 0x18),
                                 CONCAT16((char)((uint)fVar50 >> 0x10),
                                          CONCAT15((char)((uint)fVar50 >> 8),
                                                   CONCAT14(SUB41(fVar50,0),fVar49)))),auVar14,4);
    auVar15._4_4_ = iVar46;
    auVar15._0_4_ = iVar45;
    auVar15._8_4_ = iVar47;
    auVar15._12_4_ = iVar48;
    NEON_uqxtn(CONCAT44(iVar46,iVar45),auVar15,2);
    auVar17[8] = (char)uVar16;
    auVar17._0_8_ = uVar16;
    auVar17[9] = (char)((ulonglong)uVar16 >> 8);
    auVar17[10] = (char)((ulonglong)uVar16 >> 0x10);
    auVar17[0xb] = (char)((ulonglong)uVar16 >> 0x18);
    auVar17[0xc] = (char)((ulonglong)uVar16 >> 0x20);
    auVar17[0xd] = (char)((ulonglong)uVar16 >> 0x28);
    auVar17[0xe] = (char)((ulonglong)uVar16 >> 0x30);
    auVar17[0xf] = (char)((ulonglong)uVar16 >> 0x38);
    uVar16 = NEON_uqxtn(uVar16,auVar17,2);
    local_1bc = (undefined4)uVar16;
    if (*(char *)(param_4 + 0x3c) != -1) {
      local_1d8 = (undefined4 *)
                  ((ulonglong)(uVar32 * param_6) + (ulonglong)*(byte *)(param_4 + 0x3f) * 4 +
                  param_3);
    }
    if ((param_5 >> 2 & 1) == 0) {
      bVar18 = true;
      bVar24 = true;
    }
    else {
      puVar25 = &local_1c0;
      puVar30 = &local_1bc;
      puVar28 = &local_1b8;
      uVar26 = 0;
      uVar27 = 0;
      uVar39 = 0;
      uVar32 = 0;
      uVar37 = 4;
      uVar36 = 4;
      uVar34 = 4;
      uVar31 = 4;
      puVar29 = &local_1b4;
      if (*(int *)(param_1 + 0x6ac) != 0) {
        uVar26 = 0;
        uVar37 = 4;
        if (*(int *)(param_1 + 0x6bc) == 1) {
          if (puVar42 != (undefined4 *)0x0) {
            puVar25 = puVar42;
            uVar26 = uVar40;
            uVar37 = uVar35;
          }
        }
        else if (*(int *)(param_1 + 0x6bc) == 2 && local_1e0 != (undefined4 *)0x0) {
          puVar25 = local_1e0;
          uVar26 = local_208;
          uVar37 = uVar1;
        }
        uVar27 = 0;
        uVar36 = 4;
        if (*(int *)(param_1 + 0x6c0) == 1) {
          if (puVar42 != (undefined4 *)0x0) {
            puVar30 = puVar42;
            uVar27 = uVar40;
            uVar36 = uVar35;
          }
        }
        else if (*(int *)(param_1 + 0x6c0) == 2 && local_1e0 != (undefined4 *)0x0) {
          puVar30 = local_1e0;
          uVar27 = local_208;
          uVar36 = uVar1;
        }
        uVar39 = 0;
        uVar34 = 4;
        if (*(int *)(param_1 + 0x6c4) == 1) {
          if (puVar42 != (undefined4 *)0x0) {
            puVar28 = puVar42;
            uVar39 = uVar40;
            uVar34 = uVar35;
          }
        }
        else if (*(int *)(param_1 + 0x6c4) == 2 && local_1e0 != (undefined4 *)0x0) {
          puVar28 = local_1e0;
          uVar39 = local_208;
          uVar34 = uVar1;
        }
        if (*(int *)(param_1 + 0x6c8) == 1) {
          if (puVar42 != (undefined4 *)0x0) {
            puVar29 = puVar42;
            uVar32 = uVar40;
            uVar31 = uVar35;
          }
        }
        else if (*(int *)(param_1 + 0x6c8) == 2 && local_1e0 != (undefined4 *)0x0) {
          puVar29 = local_1e0;
          uVar32 = local_208;
          uVar31 = uVar1;
        }
      }
      if (bVar20) {
        iVar41 = *(int *)(param_4 + 0xc);
        puVar43 = local_1e8;
      }
      puVar25 = (undefined4 *)
                FUN_18011fd68(param_1,*(undefined8 *)(param_1 + 0xdc8),0,local_170._4_4_,puVar28,
                              puVar29,puVar25,puVar30,puVar43,uVar39,uVar32,uVar26,uVar27,iVar41,
                              uVar34,uVar31,uVar37,uVar36,local_1d8,local_1e8,
                              *(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_4 + 0xc),param_7)
      ;
      bVar18 = false;
      bVar24 = *(int *)(param_1 + 0x4ec) == 0;
    }
    if (param_9 == '\0') {
      puVar25 = local_1d8;
      if ((local_1d8 != (undefined4 *)0x0) && (bVar18)) {
        uVar32 = param_7;
        if (puVar42 == (undefined4 *)0x0) {
          uVar40 = 0;
          uVar35 = 4;
          puVar42 = (undefined4 *)(param_1 + 0xe18);
        }
        for (; uVar32 != 0; uVar32 = uVar32 - 1) {
          puVar25 = (undefined4 *)FUN_18012a458(puVar42,uVar35);
          *local_1d8 = (int)puVar25;
          local_1d8 = (undefined4 *)((longlong)local_1d8 + (ulonglong)*(uint *)(param_4 + 0xc));
          puVar42 = (undefined4 *)((longlong)puVar42 + (ulonglong)uVar40);
        }
      }
      if (((local_1e8 != (undefined4 *)0x0) && (!bVar20)) && (bVar24)) {
        uVar32 = param_7;
        if (local_1e0 == (undefined4 *)0x0) {
          local_208 = 0;
          uVar1 = 4;
          local_1e0 = (undefined4 *)(param_1 + 0xe1c);
        }
        for (; uVar32 != 0; uVar32 = uVar32 - 1) {
          puVar25 = (undefined4 *)FUN_18012a458(local_1e0,uVar1);
          *local_1e8 = (int)puVar25;
          local_1e8 = (undefined4 *)((longlong)local_1e8 + (ulonglong)*(uint *)(param_4 + 0xc));
          local_1e0 = (undefined4 *)((longlong)local_1e0 + (ulonglong)local_208);
        }
      }
    }
  }
  pcVar22 = local_1b0;
  iVar41 = *(int *)(param_4 + 0xc);
  uVar33 = 0;
  while (((*(uint *)(param_1 + 0x7ec + uVar33 * 0x84) & 0x70000) == 0 &&
         ((*(uint *)(param_1 + 0x820 + uVar33 * 0x84) & 0xff) == 0))) {
    uVar32 = (int)uVar33 + 1;
    uVar33 = (ulonglong)uVar32;
    if (7 < uVar32) {
      if (param_9 == '\0') {
        lVar44 = 7;
        do {
          lVar38 = lVar44 * 8;
          if ((pcVar22[lVar38] != -1) && (param_2[lVar44 * 2] != 0)) {
            if (local_1a8[lVar44 * 0x10] == *(byte *)(param_4 + 0x18 + lVar38)) {
              puVar25 = (undefined4 *)FUN_180120748(param_1);
            }
            else {
              puVar25 = (undefined4 *)
                        FUN_1801208c0(puVar25,param_2 + lVar44 * 2,pcVar22 + lVar38,
                                      param_3 + (ulonglong)(uint)(iVar41 * param_6),iVar41,param_7,
                                      param_8);
            }
          }
          lVar44 = lVar44 + 1;
        } while (lVar44 != 0xf);
      }
      return;
    }
  }
  FUN_1801209f0(param_1,param_2,param_4,*(undefined8 *)(param_1 + 0xdc8),
                param_3 + (ulonglong)(uint)(iVar41 * param_6),iVar41,param_7,param_8,param_9);
  return;
}

