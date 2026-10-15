/*
 * FUN_1002bf10 at 1002bf10
 * undefined FUN_1002bf10(void)
 * Address ranges: 1002bf10-1002f4cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002bf10(int param_1,int *param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  char *pcVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  float *pfVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined1 (*pauVar26) [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  char cVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int *piVar44;
  uint *puVar45;
  uint *puVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 in_register_00005008;
  byte bVar53;
  byte bVar72;
  byte bVar73;
  float fVar54;
  undefined1 auVar56 [12];
  undefined8 uVar55;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar57 [12];
  undefined1 auVar65 [16];
  undefined1 auVar58 [12];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  byte bVar74;
  undefined1 auVar59 [12];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  byte bVar75;
  byte bVar96;
  byte bVar97;
  float fVar76;
  float fVar77;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  undefined1 auVar79 [12];
  byte bVar107;
  byte bVar108;
  byte bVar109;
  undefined1 auVar84 [16];
  undefined1 auVar80 [12];
  undefined1 auVar86 [16];
  undefined1 auVar81 [12];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  byte bVar98;
  byte bVar106;
  undefined1 auVar82 [12];
  byte bVar110;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar111;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  float fStack_128;
  float fStack_124;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  byte local_d0;
  byte bStack_cf;
  byte bStack_ce;
  byte bStack_cd;
  byte bStack_cc;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  byte bStack_c8;
  byte bStack_c7;
  byte bStack_c6;
  byte bStack_c5;
  byte bStack_c4;
  byte bStack_c3;
  byte bStack_c2;
  byte bStack_c1;
  undefined8 local_c0;
  ulonglong uStack_b8;
  byte bStack_ae;
  byte bStack_ad;
  byte bStack_ac;
  byte bStack_ab;
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined8 uVar78;
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  
  puVar45 = (uint *)param_2[0x10];
  if (puVar45 == (uint *)0x0) {
    puVar45 = (uint *)(param_1 + 0x2c);
    param_2[0x10] = (int)puVar45;
  }
  uVar51 = uRam1012b128;
  uVar50 = _DAT_1012b120;
  uVar49 = puVar45[1];
  pfVar23 = (float *)(puVar45 + 4);
  uVar48 = puVar45[3];
  fVar54 = (float)*puVar45;
  fVar76 = (float)uVar49;
  auVar94._4_4_ = fVar76;
  auVar94._0_4_ = fVar54;
  fVar17 = *pfVar23;
  bStack_cc = SUB41(fVar76,0);
  bStack_cb = (byte)((uint)fVar76 >> 8);
  bStack_ca = (byte)((uint)fVar76 >> 0x10);
  bStack_c9 = (byte)((uint)fVar76 >> 0x18);
  fVar77 = (float)(uVar48 + uVar49);
  uVar49 = puVar45[2];
  auVar70._0_4_ = (float)(uVar49 + *puVar45);
  auVar70._4_4_ = fVar77;
  fVar76 = (float)puVar45[5];
  piVar1 = param_2 + 0x12;
  iVar18 = *piVar1;
  uVar78 = CONCAT44(*(undefined4 *)(iVar18 + 0x10),*(undefined4 *)(iVar18 + 8));
  uVar19 = *(undefined4 *)(iVar18 + 0x18);
  uVar55 = CONCAT44(*(undefined4 *)(iVar18 + 0x14),*(undefined4 *)(iVar18 + 0xc));
  uVar20 = *(uint *)(iVar18 + 0x1c);
  uStack_b8 = (ulonglong)uVar20;
  if (*(char *)((int)param_2 + 0x3a) == '\0') {
    if ((((char)param_2[0xf] != '\0') || (*(char *)((int)param_2 + 0x3b) != '\0')) &&
       (uVar49 = 0, param_4 != 0)) {
      auVar71._8_4_ = uVar20;
      auVar71._0_8_ = uVar55;
      auVar71._12_4_ = 0;
      auVar95._8_4_ = uVar19;
      auVar95._0_8_ = uVar78;
      auVar95._12_4_ = 0;
      do {
        pauVar26 = (undefined1 (*) [12])(*param_2 + param_2[6] * uVar49);
        fVar111 = (float)*(undefined8 *)(*pauVar26 + 8);
        fVar114 = (float)((ulonglong)*(undefined8 *)(*pauVar26 + 8) >> 0x20);
        auVar59 = *pauVar26;
        auVar82 = *pauVar26;
        fVar116 = (float)*(undefined8 *)*pauVar26;
        fVar118 = (float)((ulonglong)*(undefined8 *)*pauVar26 >> 0x20);
        if (*(char *)((int)param_2 + 0x3b) != '\0') {
          bVar96 = (byte)uVar50;
          bVar107 = (byte)((ulonglong)uVar50 >> 0x20);
          bVar75 = (byte)uVar51;
          bVar108 = (byte)((ulonglong)uVar51 >> 0x20);
          uVar20 = (uint)(byte)(-(fVar114 < 0.0) & bVar108 |
                                -(fVar118 <
                                 (float)(CONCAT17(bStack_c9,
                                                  CONCAT16(bStack_ca,
                                                           CONCAT15(bStack_cb,
                                                                    CONCAT14(bStack_cc,fVar54)))) >>
                                        0x20)) & bVar107 |
                               -(fVar111 < fVar17) & bVar75 | -(fVar116 < fVar54) & bVar96);
          bVar96 = -(0.0 <= fVar114) & bVar108 | -(fVar77 <= fVar118) & bVar107 |
                   -(fVar76 <= fVar111) & bVar75 | -(auVar70._0_4_ <= fVar116) & bVar96;
          uVar48 = *(uint *)(&DAT_1012b8b0 +
                            ((bVar96 & 2) << 2 | (uVar20 & 3) << 1 | bVar96 & 1) * 4);
          *(uint *)*piVar1 = uVar48 | *(uint *)*piVar1;
          *(uint *)(*piVar1 + 4) = (uVar48 | 0x2a) & *(uint *)(*piVar1 + 4);
          uVar48 = *(uint *)(&DAT_1012b8a0 + ((uVar20 & 4 | bVar96 >> 1 & 3) >> 1) * 4);
          *(uint *)*piVar1 = uVar48 | *(uint *)*piVar1;
          *(uint *)(*piVar1 + 4) = (uVar48 | 0x15) & *(uint *)(*piVar1 + 4);
        }
        uVar49 = uVar49 + 1;
        auVar28._12_4_ = fVar114;
        auVar28._0_12_ = auVar82;
        auVar95 = NEON_fmin(auVar95,auVar28,4);
        uVar78 = auVar95._0_8_;
        auVar29._12_4_ = fVar114;
        auVar29._0_12_ = auVar59;
        auVar71 = NEON_fmax(auVar71,auVar29,4);
        uVar55 = auVar71._0_8_;
      } while (uVar49 < param_4);
    }
    goto LAB_1002f470;
  }
  pfVar2 = (float *)(param_2 + 0x18);
  pfVar3 = (float *)(param_2 + 0x1c);
  pcVar4 = (char *)((int)param_2 + 0x3b);
  param_2[0x1a] = (int)((float)puVar45[5] - *pfVar23);
  param_2[0x1b] = 0x3f800000;
  *pfVar2 = (float)uVar49 * 0.5;
  param_2[0x19] = (int)((float)uVar48 * -0.5);
  uVar49 = puVar45[2];
  uVar48 = *puVar45;
  uVar47 = puVar45[3];
  uVar21 = puVar45[1];
  pauVar5 = (undefined1 (*) [16])(param_2 + 0x24);
  param_2[0x1e] = (int)*pfVar23;
  param_2[0x1f] = 0;
  *pfVar3 = (float)uVar49 * 0.5 + (float)uVar48;
  param_2[0x1d] = (int)((float)uVar47 * 0.5 + (float)uVar21);
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  *(int *)((int)pauVar5 + 0) = 0;
  *(int *)((int)pauVar5 + 4) = 0;
  pauVar6 = (undefined1 (*) [16])(param_2 + 0x20);
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *(int *)((int)pauVar6 + 0) = 0;
  *(int *)((int)pauVar6 + 4) = 0;
  puVar45 = (uint *)(param_1 + 0x4ec);
  uVar49 = *puVar45;
  piVar7 = param_2 + 0x48;
  *(bool *)piVar7 = (uVar49 & 0x3f) != 0;
  if (*pcVar4 != '\0') {
    if ((uVar49 & 0x3f) == 0) {
      *(uint *)(iVar18 + 4) = *(uint *)(iVar18 + 4) & 0xfffff03f;
    }
    else {
      uVar50 = *(undefined8 *)(param_1 + 0x22c);
      *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(param_1 + 0x234);
      *(undefined8 *)(param_2 + 0x28) = uVar50;
      uVar50 = *(undefined8 *)(param_1 + 0x23c);
      *(undefined8 *)(param_2 + 0x2e) = *(undefined8 *)(param_1 + 0x244);
      *(undefined8 *)(param_2 + 0x2c) = uVar50;
      uVar50 = *(undefined8 *)(param_1 + 0x24c);
      *(undefined8 *)(param_2 + 0x32) = *(undefined8 *)(param_1 + 0x254);
      *(undefined8 *)(param_2 + 0x30) = uVar50;
      uVar50 = *(undefined8 *)(param_1 + 0x25c);
      *(undefined8 *)(param_2 + 0x36) = *(undefined8 *)(param_1 + 0x264);
      *(undefined8 *)(param_2 + 0x34) = uVar50;
      uVar50 = *(undefined8 *)(param_1 + 0x26c);
      *(undefined8 *)(param_2 + 0x3a) = *(undefined8 *)(param_1 + 0x274);
      *(undefined8 *)(param_2 + 0x38) = uVar50;
      uVar50 = *(undefined8 *)(param_1 + 0x27c);
      *(undefined8 *)(param_2 + 0x3e) = *(undefined8 *)(param_1 + 0x284);
      *(undefined8 *)(param_2 + 0x3c) = uVar50;
    }
  }
  piVar8 = param_2 + 0x13;
  if ((*piVar8 == 0) && ((char)*piVar7 == '\0')) {
    cVar40 = '\0';
  }
  else {
    cVar40 = '\x01';
  }
  pcVar9 = (char *)((int)param_2 + 0x121);
  piVar10 = param_2 + 1;
  *pcVar9 = cVar40;
  pcVar11 = (char *)((int)param_2 + 0x122);
  *pcVar11 = *piVar10 != 0;
  uVar49 = *(uint *)(param_1 + 0x4e8);
  if (uVar49 == 0) {
LAB_1002c310:
    uVar48 = param_2[0xc];
    if (uVar49 < (uint)param_2[0xc]) {
      uVar48 = uVar49;
    }
    if (uVar48 != 0) goto LAB_1002c328;
    if (param_2[0x11] == 0) {
      FUN_100242b8(param_1);
      param_2[0x11] = *(int *)(param_1 + 0xabc) + 0x8600;
    }
  }
  else {
    if (uVar49 == 0xff) {
      fVar54 = *(float *)(param_1 + 0x534);
      uVar48 = 0x20;
      param_2[0x42] = (int)fVar54;
      param_2[0x43] = (int)fVar54;
      param_2[0x40] = (int)fVar54;
      param_2[0x41] = (int)fVar54;
      fVar54 = 1.0 - fVar54;
      param_2[0x46] = (int)fVar54;
      param_2[0x47] = (int)fVar54;
      param_2[0x44] = (int)fVar54;
      param_2[0x45] = (int)fVar54;
    }
    else {
      if (uVar49 != 0x100) goto LAB_1002c310;
      uVar48 = 0x10;
    }
LAB_1002c328:
    FUN_10024230(param_1);
  }
  piVar44 = param_2 + 0x11;
  switch(uVar48) {
  case 0:
    uVar49 = 0;
    if (param_4 != 0) {
      piVar15 = param_2 + 0x14;
      local_c0 = uVar55;
      do {
        puVar24 = (undefined8 *)(*param_2 + uVar49 * param_2[6]);
        uVar50 = *puVar24;
        fVar54 = *(float *)(puVar24 + 1);
        if (*pcVar11 != '\0') {
          puVar24 = (undefined8 *)(*piVar10 + param_2[7] * uVar49);
          local_c0 = *puVar24;
          uStack_b8 = (ulonglong)*(uint *)(puVar24 + 1) | 0x3f80000000000000;
        }
        auVar60 = ZEXT116(0) << 8;
        uStack_f8 = 0;
        local_100 = 0;
        fVar77 = (float)uVar50;
        fVar116 = (float)((ulonglong)uVar50 >> 0x20);
        if (*pcVar9 != '\0') {
          iVar18 = *(int *)(param_1 + 0xabc);
          uStack_f8 = CONCAT44(fVar54 * (float)*(undefined8 *)(iVar18 + 0x2b8) +
                               (float)((ulonglong)*(undefined8 *)(iVar18 + 0x2b8) >> 0x20) * 1.0 +
                               fVar77 * (float)*(undefined8 *)(iVar18 + 0x2b0) +
                               fVar116 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x2b0) >> 0x20)
                               ,fVar54 * (float)*(undefined8 *)(iVar18 + 0x2a8) +
                                (float)((ulonglong)*(undefined8 *)(iVar18 + 0x2a8) >> 0x20) * 1.0 +
                                fVar77 * (float)*(undefined8 *)(iVar18 + 0x2a0) +
                                fVar116 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x2a0) >> 0x20
                                                 ));
          local_100 = CONCAT44(fVar54 * (float)*(undefined8 *)(iVar18 + 0x298) +
                               (float)((ulonglong)*(undefined8 *)(iVar18 + 0x298) >> 0x20) * 1.0 +
                               fVar77 * (float)*(undefined8 *)(iVar18 + 0x290) +
                               fVar116 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x290) >> 0x20)
                               ,fVar54 * (float)*(undefined8 *)(iVar18 + 0x288) +
                                (float)((ulonglong)*(undefined8 *)(iVar18 + 0x288) >> 0x20) * 1.0 +
                                fVar77 * (float)*(undefined8 *)(iVar18 + 0x280) +
                                fVar116 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x280) >> 0x20
                                                 ));
        }
        if (*pcVar11 != '\0') {
          FUN_10024198(param_1,10);
          iVar18 = *(int *)(param_1 + 0xabc);
          fVar118 = (float)local_c0;
          fVar111 = (float)((ulonglong)local_c0 >> 0x20);
          fVar114 = (float)uStack_b8;
          fVar115 = (float)(uStack_b8 >> 0x20);
          auVar60._0_4_ =
               fVar114 * (float)*(undefined8 *)(iVar18 + 0x4508) +
               fVar115 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4508) >> 0x20) +
               fVar118 * (float)*(undefined8 *)(iVar18 + 0x4500) +
               fVar111 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4500) >> 0x20);
          auVar60._4_4_ =
               fVar114 * (float)*(undefined8 *)(iVar18 + 0x4518) +
               fVar115 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4518) >> 0x20) +
               fVar118 * (float)*(undefined8 *)(iVar18 + 0x4510) +
               fVar111 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4510) >> 0x20);
          auVar60._8_4_ =
               fVar114 * (float)*(undefined8 *)(iVar18 + 0x4528) +
               fVar115 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4528) >> 0x20) +
               fVar118 * (float)*(undefined8 *)(iVar18 + 0x4520) +
               fVar111 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4520) >> 0x20);
          auVar60._12_4_ =
               fVar114 * (float)*(undefined8 *)(iVar18 + 0x4538) +
               fVar115 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4538) >> 0x20) +
               fVar118 * (float)*(undefined8 *)(iVar18 + 0x4530) +
               fVar111 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4530) >> 0x20);
        }
        puVar24 = (undefined8 *)*piVar44;
        fVar118 = fVar54 * (float)puVar24[1] + (float)((ulonglong)puVar24[1] >> 0x20) * 1.0 +
                  fVar77 * (float)*puVar24 + fVar116 * (float)((ulonglong)*puVar24 >> 0x20);
        fVar111 = fVar54 * (float)puVar24[3] + (float)((ulonglong)puVar24[3] >> 0x20) * 1.0 +
                  fVar77 * (float)puVar24[2] + fVar116 * (float)((ulonglong)puVar24[2] >> 0x20);
        fVar114 = fVar54 * (float)puVar24[5] + (float)((ulonglong)puVar24[5] >> 0x20) * 1.0 +
                  fVar77 * (float)puVar24[4] + fVar116 * (float)((ulonglong)puVar24[4] >> 0x20);
        fVar54 = fVar54 * (float)puVar24[7] + (float)((ulonglong)puVar24[7] >> 0x20) * 1.0 +
                 fVar77 * (float)puVar24[6] + fVar116 * (float)((ulonglong)puVar24[6] >> 0x20);
        bStack_c8 = SUB41(fVar114,0);
        bStack_c4 = SUB41(fVar54,0);
        bStack_c3 = (byte)((uint)fVar54 >> 8);
        bStack_c2 = (byte)((uint)fVar54 >> 0x10);
        bStack_c1 = (byte)((uint)fVar54 >> 0x18);
        bStack_cc = SUB41(fVar111,0);
        bStack_cb = (byte)((uint)fVar111 >> 8);
        bStack_ca = (byte)((uint)fVar111 >> 0x10);
        bStack_c9 = (byte)((uint)fVar111 >> 0x18);
        if (*piVar8 != 0) {
          puVar24 = (undefined8 *)(*piVar8 + uVar49 * 0x20);
          puVar24[1] = uStack_f8;
          *puVar24 = local_100;
          iVar18 = *piVar8 + uVar49 * 0x20;
          *(longlong *)(iVar18 + 0x18) = auVar60._8_8_;
          *(longlong *)(iVar18 + 0x10) = auVar60._0_8_;
        }
        uVar48 = 0;
        if (*pcVar4 != '\0') {
          puVar22 = (uint *)*piVar1;
          piVar16 = param_2 + 0x28;
          if ((char)*piVar7 == '\0') {
            piVar16 = (int *)0x0;
          }
          if (piVar16 == (int *)0x0) {
            uVar47 = 0;
            uVar48 = puVar22[1] & 0xfffff03f;
          }
          else {
            bVar96 = 0;
            bVar75 = 0;
            bVar97 = 0;
            bVar98 = 0;
            bVar99 = 0;
            bVar100 = 0;
            bVar101 = 0;
            bVar102 = 0;
            bVar103 = 0;
            bVar104 = 0;
            bVar105 = 0;
            bVar106 = 0;
            bVar107 = 0;
            bVar108 = 0;
            bVar109 = 0;
            bVar110 = 0;
            uStack_108 = 0;
            local_110 = 0;
            fVar115 = (float)((ulonglong)uStack_f8 >> 0x20);
            fVar77 = (float)local_100;
            fVar116 = (float)((ulonglong)local_100 >> 0x20);
            if ((*puVar45 & 1) != 0) {
              uVar50 = FUN_1001f550();
              fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 2) >> 0x20) * fVar115 +
                        (float)((ulonglong)*(undefined8 *)piVar16 >> 0x20) * fVar116 +
                        (float)*(undefined8 *)(piVar16 + 2) * (float)uStack_f8 +
                        (float)*(undefined8 *)piVar16 * fVar77;
              bVar107 = SUB41(fVar117,0);
              bVar75 = bVar107 & (byte)uVar50;
              bVar108 = (byte)((uint)fVar117 >> 8);
              bVar96 = bVar108 & (byte)((ulonglong)uVar50 >> 8);
              bVar109 = (byte)((uint)fVar117 >> 0x10);
              bVar97 = bVar109 & (byte)((ulonglong)uVar50 >> 0x10);
              bVar110 = (byte)((uint)fVar117 >> 0x18);
              bVar98 = bVar110 & (byte)((ulonglong)uVar50 >> 0x18);
              bVar99 = bVar107 & (byte)((ulonglong)uVar50 >> 0x20);
              bVar100 = bVar108 & (byte)((ulonglong)uVar50 >> 0x28);
              bVar101 = bVar109 & (byte)((ulonglong)uVar50 >> 0x30);
              bVar102 = bVar110 & (byte)((ulonglong)uVar50 >> 0x38);
              bVar103 = bVar107 & (byte)in_register_00005008;
              bVar104 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 8);
              bVar105 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x10);
              bVar106 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x18);
              bVar107 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x20);
              bVar108 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x28);
              bVar109 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x30);
              bVar110 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x38);
            }
            uStack_e8._0_2_ = CONCAT11(bVar104,bVar103);
            uStack_e8._0_3_ = CONCAT12(bVar105,(undefined2)uStack_e8);
            uStack_e8._0_4_ = (float)CONCAT13(bVar106,(undefined3)uStack_e8);
            uStack_e8._0_5_ = CONCAT14(bVar107,(float)uStack_e8);
            uStack_e8._0_6_ = CONCAT15(bVar108,(undefined5)uStack_e8);
            uStack_e8._0_7_ = CONCAT16(bVar109,(undefined6)uStack_e8);
            uStack_e8 = CONCAT17(bVar110,(undefined7)uStack_e8);
            local_f0._0_2_ = CONCAT11(bVar96,bVar75);
            local_f0._0_3_ = CONCAT12(bVar97,(undefined2)local_f0);
            local_f0._0_4_ = CONCAT13(bVar98,(undefined3)local_f0);
            local_f0._0_5_ = CONCAT14(bVar99,(undefined4)local_f0);
            local_f0._0_6_ = CONCAT15(bVar100,(undefined5)local_f0);
            local_f0._0_7_ = CONCAT16(bVar101,(undefined6)local_f0);
            local_f0 = CONCAT17(bVar102,(undefined7)local_f0);
            if ((*puVar45 >> 1 & 1) != 0) {
              uVar50 = FUN_1001f560();
              fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x1a) >> 0x20) * fVar115 +
                        (float)((ulonglong)*(undefined8 *)(piVar16 + 0x18) >> 0x20) * fVar116 +
                        (float)*(undefined8 *)(piVar16 + 0x1a) * (float)uStack_f8 +
                        (float)*(undefined8 *)(piVar16 + 0x18) * fVar77;
              bVar53 = SUB41(fVar117,0);
              bVar72 = (byte)((uint)fVar117 >> 8);
              bVar73 = (byte)((uint)fVar117 >> 0x10);
              bVar74 = (byte)((uint)fVar117 >> 0x18);
              uStack_e8._0_2_ =
                   CONCAT11(bVar72 & (byte)((ulonglong)in_register_00005008 >> 8) | bVar104,
                            bVar53 & (byte)in_register_00005008 | bVar103);
              uStack_e8._0_3_ =
                   CONCAT12(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bVar105,
                            (undefined2)uStack_e8);
              uStack_e8._0_4_ =
                   (float)CONCAT13(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                   bVar106,(undefined3)uStack_e8);
              uStack_e8._0_5_ =
                   CONCAT14(bVar53 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bVar107,
                            (float)uStack_e8);
              uStack_e8._0_6_ =
                   CONCAT15(bVar72 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bVar108,
                            (undefined5)uStack_e8);
              uStack_e8._0_7_ =
                   CONCAT16(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bVar109,
                            (undefined6)uStack_e8);
              uStack_e8 = CONCAT17(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                   bVar110,(undefined7)uStack_e8);
              local_f0._0_2_ =
                   CONCAT11(bVar72 & (byte)((ulonglong)uVar50 >> 8) | bVar96,
                            bVar53 & (byte)uVar50 | bVar75);
              local_f0._0_3_ =
                   CONCAT12(bVar73 & (byte)((ulonglong)uVar50 >> 0x10) | bVar97,(undefined2)local_f0
                           );
              local_f0._0_4_ =
                   CONCAT13(bVar74 & (byte)((ulonglong)uVar50 >> 0x18) | bVar98,(undefined3)local_f0
                           );
              local_f0._0_5_ =
                   CONCAT14(bVar53 & (byte)((ulonglong)uVar50 >> 0x20) | bVar99,(undefined4)local_f0
                           );
              local_f0._0_6_ =
                   CONCAT15(bVar72 & (byte)((ulonglong)uVar50 >> 0x28) | bVar100,
                            (undefined5)local_f0);
              local_f0._0_7_ =
                   CONCAT16(bVar73 & (byte)((ulonglong)uVar50 >> 0x30) | bVar101,
                            (undefined6)local_f0);
              local_f0 = CONCAT17(bVar74 & (byte)((ulonglong)uVar50 >> 0x38) | bVar102,
                                  (undefined7)local_f0);
            }
            uVar48 = *puVar45;
            if ((uVar48 >> 2 & 1) != 0) {
              fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x32) >> 0x20) * fVar115 +
                        (float)((ulonglong)*(undefined8 *)(piVar16 + 0x30) >> 0x20) * fVar116 +
                        (float)*(undefined8 *)(piVar16 + 0x32) * (float)uStack_f8 +
                        (float)*(undefined8 *)(piVar16 + 0x30) * fVar77;
              uVar32 = (ulonglong)uStack_e8 >> 0x10;
              uVar33 = (ulonglong)uStack_e8 >> 0x18;
              uVar34 = (ulonglong)uStack_e8 >> 0x20;
              uVar35 = (ulonglong)uStack_e8 >> 0x28;
              uVar36 = (ulonglong)uStack_e8 >> 0x30;
              uVar37 = (ulonglong)uStack_e8 >> 0x38;
              uStack_e8._0_2_ =
                   CONCAT11((byte)((uint)fVar117 >> 8) | (byte)((ulonglong)uStack_e8 >> 8),
                            SUB41(fVar117,0) | (byte)uStack_e8);
              uStack_e8._0_3_ =
                   CONCAT12((byte)((uint)fVar117 >> 0x10) | (byte)uVar32,(undefined2)uStack_e8);
              uStack_e8._0_4_ =
                   (float)CONCAT13((byte)((uint)fVar117 >> 0x18) | (byte)uVar33,
                                   (undefined3)uStack_e8);
              uStack_e8._0_5_ = CONCAT14((char)uVar34,(float)uStack_e8);
              uStack_e8._0_6_ = CONCAT15((char)uVar35,(undefined5)uStack_e8);
              uStack_e8._0_7_ = CONCAT16((char)uVar36,(undefined6)uStack_e8);
              uStack_e8 = CONCAT17((char)uVar37,(undefined7)uStack_e8);
            }
            if ((uVar48 >> 3 & 1) != 0) {
              fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x4a) >> 0x20) * fVar115 +
                        (float)((ulonglong)*(undefined8 *)(piVar16 + 0x48) >> 0x20) * fVar116 +
                        (float)*(undefined8 *)(piVar16 + 0x4a) * (float)uStack_f8 +
                        (float)*(undefined8 *)(piVar16 + 0x48) * fVar77;
              uStack_e8 = CONCAT17((byte)((uint)fVar117 >> 0x18) |
                                   (byte)((ulonglong)uStack_e8 >> 0x38),
                                   CONCAT16((byte)((uint)fVar117 >> 0x10) |
                                            (byte)((ulonglong)uStack_e8 >> 0x30),
                                            CONCAT15((byte)((uint)fVar117 >> 8) |
                                                     (byte)((ulonglong)uStack_e8 >> 0x28),
                                                     CONCAT14(SUB41(fVar117,0) |
                                                              (byte)((ulonglong)uStack_e8 >> 0x20),
                                                              (int)uStack_e8))));
            }
            if ((uVar48 >> 4 & 1) != 0) {
              uVar50 = FUN_1001f550();
              fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x62) >> 0x20) * fVar115 +
                        (float)((ulonglong)*(undefined8 *)(piVar16 + 0x60) >> 0x20) * fVar116 +
                        (float)*(undefined8 *)(piVar16 + 0x62) * (float)uStack_f8 +
                        (float)*(undefined8 *)(piVar16 + 0x60) * fVar77;
              bVar96 = SUB41(fVar117,0);
              bVar107 = (byte)((uint)fVar117 >> 8);
              bVar75 = (byte)((uint)fVar117 >> 0x10);
              bVar108 = (byte)((uint)fVar117 >> 0x18);
              uStack_108 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38),
                                    CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30
                                                            ),
                                             CONCAT15(bVar107 & (byte)((ulonglong)
                                                                       in_register_00005008 >> 0x28)
                                                      ,CONCAT14(bVar96 & (byte)((ulonglong)
                                                                                in_register_00005008
                                                                               >> 0x20),
                                                                CONCAT13(bVar108 & (byte)((ulonglong
                                                                                          )
                                                  in_register_00005008 >> 0x18),
                                                  CONCAT12(bVar75 & (byte)((ulonglong)
                                                                           in_register_00005008 >>
                                                                          0x10),
                                                           CONCAT11(bVar107 & (byte)((ulonglong)
                                                                                                                                                                          
                                                  in_register_00005008 >> 8),
                                                  bVar96 & (byte)in_register_00005008)))))));
              local_110._0_3_ =
                   CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10),
                            CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8),bVar96 & (byte)uVar50)
                           );
              local_110._0_4_ =
                   CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18),(undefined3)local_110);
              local_110._0_5_ =
                   CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20),(undefined4)local_110);
              local_110._0_6_ =
                   CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28),(undefined5)local_110);
              local_110._0_7_ =
                   CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30),(undefined6)local_110);
              local_110 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38),(undefined7)local_110
                                  );
            }
            if ((*puVar45 >> 5 & 1) != 0) {
              uVar50 = FUN_1001f560();
              fVar77 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x7a) >> 0x20) * fVar115 +
                       (float)((ulonglong)*(undefined8 *)(piVar16 + 0x78) >> 0x20) * fVar116 +
                       (float)*(undefined8 *)(piVar16 + 0x7a) * (float)uStack_f8 +
                       (float)*(undefined8 *)(piVar16 + 0x78) * fVar77;
              bVar96 = SUB41(fVar77,0);
              bVar107 = (byte)((uint)fVar77 >> 8);
              bVar75 = (byte)((uint)fVar77 >> 0x10);
              bVar108 = (byte)((uint)fVar77 >> 0x18);
              bVar109 = (byte)local_110;
              uVar32 = (ulonglong)local_110 >> 8;
              bVar97 = bVar96 & (byte)in_register_00005008 | (byte)uStack_108;
              uVar33 = uStack_108 >> 8;
              uVar34 = uStack_108 >> 0x10;
              uVar35 = uStack_108 >> 0x18;
              uVar36 = uStack_108 >> 0x20;
              uVar37 = uStack_108 >> 0x28;
              uVar38 = uStack_108 >> 0x30;
              uVar39 = uStack_108 >> 0x38;
              uStack_108._0_4_ =
                   (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                   (byte)uVar35,
                                   CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10)
                                            | (byte)uVar34,
                                            CONCAT11(bVar107 & (byte)((ulonglong)
                                                                      in_register_00005008 >> 8) |
                                                     (byte)uVar33,bVar97)));
              uStack_108 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                    (byte)uVar39,
                                    CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30
                                                            ) | (byte)uVar38,
                                             CONCAT15(bVar107 & (byte)((ulonglong)
                                                                       in_register_00005008 >> 0x28)
                                                      | (byte)uVar37,
                                                      CONCAT14(bVar96 & (byte)((ulonglong)
                                                                               in_register_00005008
                                                                              >> 0x20) |
                                                               (byte)uVar36,(float)uStack_108))));
              local_110._0_3_ =
                   CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_110._2_1_,
                            CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) | (byte)uVar32,
                                     bVar96 & (byte)uVar50 | bVar109));
              local_110._0_4_ =
                   CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_110._3_1_,
                            (undefined3)local_110);
              local_110._0_5_ =
                   CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_110._4_1_,
                            (undefined4)local_110);
              local_110._0_6_ =
                   CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_110._5_1_,
                            (undefined5)local_110);
              local_110._0_7_ =
                   CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_110._6_1_,
                            (undefined6)local_110);
              local_110 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_110._7_1_,
                                   (undefined7)local_110);
            }
            bVar96 = (byte)((ulonglong)_DAT_1012b120 >> 0x20);
            bVar107 = (byte)((ulonglong)uRam1012b128 >> 0x20);
            uVar47 = *(uint *)(&DAT_1012b8f0 +
                              ((byte)(-((float)(uStack_108 >> 0x20) < 0.0) & bVar107 |
                                      -((float)((ulonglong)local_110 >> 0x20) < 0.0) & bVar96 |
                                     -((float)uStack_108 < 0.0) & (byte)uRam1012b128 |
                                     -((float)local_110 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                     *(uint *)(&DAT_1012b900 +
                              ((byte)(-((float)((ulonglong)uStack_e8 >> 0x20) < 0.0) & bVar107 |
                                      -((float)((ulonglong)local_f0 >> 0x20) < 0.0) & bVar96 |
                                     -((float)uStack_e8 < 0.0) & (byte)uRam1012b128 |
                                     -((float)local_f0 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4);
            uVar48 = (*(uint *)(&DAT_1012b900 +
                               ((byte)(-((float)((ulonglong)uStack_e8 >> 0x20) < 0.0) & bVar107 |
                                       -((float)((ulonglong)local_f0 >> 0x20) < 0.0) & bVar96 |
                                      -((float)uStack_e8 < 0.0) & (byte)uRam1012b128 |
                                      -((float)local_f0 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4) |
                     0xc3f) & (*(uint *)(&DAT_1012b8f0 +
                                        ((byte)(-((float)(uStack_108 >> 0x20) < 0.0) & bVar107 |
                                                -((float)((ulonglong)local_110 >> 0x20) < 0.0) &
                                                bVar96 | -((float)uStack_108 < 0.0) &
                                                         (byte)uRam1012b128 |
                                                         -((float)local_110 < 0.0) &
                                                         (byte)_DAT_1012b120) & 3) * 4) | 0x3ff) &
                     puVar22[1];
          }
          puVar46 = puVar22 + 1;
          *puVar46 = uVar48;
          uVar50 = FUN_1001f528();
          fVar77 = (float)(CONCAT17(bStack_c9,
                                    CONCAT16(bStack_ca,
                                             CONCAT15(bStack_cb,CONCAT14(bStack_cc,fVar118)))) >>
                          0x20);
          uVar48 = *(uint *)(&DAT_1012b8b0 +
                            ((byte)(-(fVar77 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                      fVar54 < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                    -(fVar118 * (float)((ulonglong)uVar50 >> 0x20) +
                                      (float)(CONCAT17(bStack_c1,
                                                       CONCAT16(bStack_c2,
                                                                CONCAT15(bStack_c3,
                                                                         CONCAT14(bStack_c4,fVar54))
                                                               )) >> 0x20) < 0.0) &
                                    (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                   -(fVar77 * (float)in_register_00005008 + fVar54 < 0.0) &
                                   (byte)uRam1012b128 |
                                   -(fVar118 * (float)uVar50 + fVar54 < 0.0) & (byte)_DAT_1012b120)
                            & 0xf) * 4);
          *puVar46 = (uVar48 | 0x30) & *puVar46;
          uVar51 = FUN_1001f528();
          uVar50 = in_register_00005008;
          uVar52 = FUN_1001f550();
          fVar77 = (float)CONCAT13(bStack_c1 & (byte)((ulonglong)uVar52 >> 0x18),
                                   CONCAT12(bStack_c2 & (byte)((ulonglong)uVar52 >> 0x10),
                                            CONCAT11(bStack_c3 & (byte)((ulonglong)uVar52 >> 8),
                                                     bStack_c4 & (byte)uVar52)));
          auVar79._0_8_ =
               CONCAT17(bStack_c1 & (byte)((ulonglong)uVar52 >> 0x38),
                        CONCAT16(bStack_c2 & (byte)((ulonglong)uVar52 >> 0x30),
                                 CONCAT15(bStack_c3 & (byte)((ulonglong)uVar52 >> 0x28),
                                          CONCAT14(bStack_c4 & (byte)((ulonglong)uVar52 >> 0x20),
                                                   fVar77))));
          auVar79[8] = bStack_c4 & (byte)uVar50;
          auVar79[9] = bStack_c3 & (byte)((ulonglong)uVar50 >> 8);
          auVar79[10] = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x10);
          auVar79[0xb] = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x18);
          auVar83[0xc] = bStack_c4 & (byte)((ulonglong)uVar50 >> 0x20);
          auVar83._0_12_ = auVar79;
          auVar83[0xd] = bStack_c3 & (byte)((ulonglong)uVar50 >> 0x28);
          auVar83[0xe] = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x30);
          auVar83[0xf] = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x38);
          uVar48 = uVar47 | *(uint *)(&DAT_1012b8a0 +
                                     ((byte)(-(fVar114 * (float)((ulonglong)in_register_00005008 >>
                                                                0x20) + auVar83._12_4_ < 0.0) &
                                             (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                             -(fVar114 * (float)((ulonglong)uVar51 >> 0x20) +
                                               (float)((ulonglong)auVar79._0_8_ >> 0x20) < 0.0) &
                                             (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                            -(fVar114 * (float)in_register_00005008 + auVar79._8_4_
                                             < 0.0) & (byte)uRam1012b128 |
                                            -(fVar114 * (float)uVar51 + fVar77 < 0.0) &
                                            (byte)_DAT_1012b120) & 3) * 4) | uVar48;
          *puVar46 = (*(uint *)(&DAT_1012b8a0 +
                               ((byte)(-(fVar114 * (float)((ulonglong)in_register_00005008 >> 0x20)
                                         + auVar83._12_4_ < 0.0) &
                                       (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                       -(fVar114 * (float)((ulonglong)uVar51 >> 0x20) +
                                         (float)((ulonglong)auVar79._0_8_ >> 0x20) < 0.0) &
                                       (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                      -(fVar114 * (float)in_register_00005008 + auVar79._8_4_ < 0.0)
                                      & (byte)uRam1012b128 |
                                      -(fVar114 * (float)uVar51 + fVar77 < 0.0) &
                                      (byte)_DAT_1012b120) & 3) * 4) | 0xf) & *puVar46;
          *puVar22 = uVar48 | *puVar22;
        }
        uVar50 = FUN_1001f540();
        auVar84._0_8_ =
             CONCAT44(((fVar111 + (float)((ulonglong)uVar50 >> 0x20)) /
                      (float)(CONCAT17(bStack_c1,
                                       CONCAT16(bStack_c2,
                                                CONCAT15(bStack_c3,CONCAT14(bStack_c4,fVar54)))) >>
                             0x20)) * (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20),
                      ((fVar118 + (float)uVar50) / fVar54) * (float)*(undefined8 *)pfVar2 +
                      (float)*(undefined8 *)pfVar3);
        auVar84._8_4_ =
             (((float)(CONCAT17((char)((uint)fVar114 >> 0x18),
                                CONCAT16((char)((uint)fVar114 >> 0x10),
                                         CONCAT15((char)((uint)fVar114 >> 8),
                                                  CONCAT14(bStack_c8,fVar111)))) >> 0x20) +
              (float)in_register_00005008) / fVar54) * (float)*(undefined8 *)(param_2 + 0x1a) +
             (float)*(undefined8 *)(param_2 + 0x1e);
        auVar84._12_4_ =
             (((float)((ulonglong)in_register_00005008 >> 0x20) + 0.0) / fVar54) *
             (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
             (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
        uVar50 = auVar84._8_8_;
        if (uVar49 == 0) {
          *(undefined8 *)(param_2 + 0x26) = uVar50;
          *(undefined8 *)*pauVar5 = auVar84._0_8_;
          *(undefined8 *)(param_2 + 0x22) = uVar50;
          *(undefined8 *)*pauVar6 = auVar84._0_8_;
        }
        else {
          auVar71 = NEON_fmin(*pauVar6,auVar84,4);
          *(longlong *)(param_2 + 0x22) = auVar71._8_8_;
          *(longlong *)*pauVar6 = auVar71._0_8_;
          auVar71 = NEON_fmax(*pauVar5,auVar84,4);
          *(longlong *)(param_2 + 0x26) = auVar71._8_8_;
          *(longlong *)*pauVar5 = auVar71._0_8_;
        }
        puVar24 = (undefined8 *)*piVar15;
        if (puVar24 != (undefined8 *)0x0) {
          if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar48 == 0)) {
            puVar24[1] = uVar50;
            *puVar24 = auVar84._0_8_;
          }
          else {
            *(float *)((int)puVar24 + 0xc) = auVar84._12_4_;
          }
          *piVar15 = param_2[0x15] + *piVar15;
        }
        uVar49 = uVar49 + 1;
      } while (uVar49 < param_4);
      break;
    }
LAB_1002f2e8:
    auVar113._8_4_ = uVar20;
    auVar113._0_8_ = uVar55;
    auVar113._12_4_ = 0;
    auVar93._8_4_ = uVar19;
    auVar93._0_8_ = uVar78;
    auVar93._12_4_ = 0;
    goto LAB_1002f2ec;
  case 1:
    uVar49 = 0;
    if (param_4 == 0) goto LAB_1002f2e8;
    piVar44 = param_2 + 0x14;
    do {
      puVar24 = (undefined8 *)(*param_2 + param_2[6] * uVar49);
      fVar54 = *(float *)((int)puVar24 + 4);
      fVar116 = (float)*puVar24;
      fVar77 = *(float *)(puVar24 + 1);
      if (*pcVar11 != '\0') {
        puVar24 = (undefined8 *)(*piVar10 + param_2[7] * uVar49);
        local_110 = *puVar24;
        uStack_108 = (ulonglong)*(uint *)(puVar24 + 1) | 0x3f80000000000000;
      }
      auVar61 = ZEXT116(0) << 8;
      pfVar23 = (float *)(param_2[2] + param_2[0xb] * uVar49);
      uVar47 = *(uint *)(param_2[5] + param_2[10] * uVar49);
      uVar48 = uVar47 & 0xff;
      iVar18 = uVar48 + 10;
      uVar47 = uVar47 >> 8 & 0xff;
      iVar12 = uVar47 + 10;
      fVar118 = *pfVar23;
      iVar41 = *(int *)(param_1 + 0xabc);
      puVar24 = (undefined8 *)(iVar41 + iVar12 * 0x40);
      puVar25 = (undefined8 *)(iVar41 + iVar18 * 0x40);
      auVar71 = NEON_fmov(0x3f800000,4);
      fVar111 = (fVar77 * (float)puVar25[1] + (float)((ulonglong)puVar25[1] >> 0x20) * 1.0 +
                fVar116 * (float)*puVar25 + fVar54 * (float)((ulonglong)*puVar25 >> 0x20)) * fVar118
                + (fVar77 * (float)puVar24[1] + (float)((ulonglong)puVar24[1] >> 0x20) * 1.0 +
                  fVar116 * (float)*puVar24 + fVar54 * (float)((ulonglong)*puVar24 >> 0x20)) *
                  (auVar71._0_4_ - fVar118);
      fVar114 = (fVar77 * (float)puVar25[3] + (float)((ulonglong)puVar25[3] >> 0x20) * 1.0 +
                fVar116 * (float)puVar25[2] + fVar54 * (float)((ulonglong)puVar25[2] >> 0x20)) *
                fVar118 + (fVar77 * (float)puVar24[3] + (float)((ulonglong)puVar24[3] >> 0x20) * 1.0
                          + fVar116 * (float)puVar24[2] +
                            fVar54 * (float)((ulonglong)puVar24[2] >> 0x20)) *
                          (auVar71._4_4_ - fVar118);
      uVar119 = SUB41(fVar114,0);
      uVar120 = (undefined1)((uint)fVar114 >> 8);
      uVar121 = (undefined1)((uint)fVar114 >> 0x10);
      uVar122 = (undefined1)((uint)fVar114 >> 0x18);
      fVar114 = (fVar77 * (float)puVar25[5] + (float)((ulonglong)puVar25[5] >> 0x20) * 1.0 +
                fVar116 * (float)puVar25[4] + fVar54 * (float)((ulonglong)puVar25[4] >> 0x20)) *
                fVar118 + (fVar77 * (float)puVar24[5] + (float)((ulonglong)puVar24[5] >> 0x20) * 1.0
                          + fVar116 * (float)puVar24[4] +
                            fVar54 * (float)((ulonglong)puVar24[4] >> 0x20)) *
                          (auVar71._8_4_ - fVar118);
      fVar54 = (fVar77 * (float)puVar25[7] + (float)((ulonglong)puVar25[7] >> 0x20) * 1.0 +
               fVar116 * (float)puVar25[6] + fVar54 * (float)((ulonglong)puVar25[6] >> 0x20)) *
               fVar118 + (fVar77 * (float)puVar24[7] + (float)((ulonglong)puVar24[7] >> 0x20) * 1.0
                         + fVar116 * (float)puVar24[6] +
                           fVar54 * (float)((ulonglong)puVar24[6] >> 0x20)) *
                         (auVar71._12_4_ - fVar118);
      fStack_124 = (float)(CONCAT17((char)((uint)fVar54 >> 0x18),
                                    CONCAT16((char)((uint)fVar54 >> 0x10),
                                             CONCAT15((char)((uint)fVar54 >> 8),
                                                      CONCAT14(SUB41(fVar54,0),fVar114)))) >> 0x20);
      if (*pcVar11 != '\0') {
        FUN_10024198(param_1,iVar18);
        FUN_10024198(param_1,iVar12);
        fVar54 = *pfVar23;
        fVar118 = (float)uStack_108;
        fVar115 = (float)(uStack_108 >> 0x20);
        fVar77 = (float)local_110;
        fVar116 = (float)((ulonglong)local_110 >> 0x20);
        iVar41 = *(int *)(param_1 + 0xabc);
        puVar24 = (undefined8 *)(iVar41 + (uVar47 + 0x114) * 0x40);
        puVar25 = (undefined8 *)(iVar41 + (uVar48 + 0x114) * 0x40);
        auVar71 = NEON_fmov(0x3f800000,4);
        auVar61._0_4_ =
             (fVar118 * (float)puVar25[1] + fVar115 * (float)((ulonglong)puVar25[1] >> 0x20) +
             fVar77 * (float)*puVar25 + fVar116 * (float)((ulonglong)*puVar25 >> 0x20)) * fVar54 +
             (fVar118 * (float)puVar24[1] + fVar115 * (float)((ulonglong)puVar24[1] >> 0x20) +
             fVar77 * (float)*puVar24 + fVar116 * (float)((ulonglong)*puVar24 >> 0x20)) *
             (auVar71._0_4_ - fVar54);
        auVar61._4_4_ =
             (fVar118 * (float)puVar25[3] + fVar115 * (float)((ulonglong)puVar25[3] >> 0x20) +
             fVar77 * (float)puVar25[2] + fVar116 * (float)((ulonglong)puVar25[2] >> 0x20)) * fVar54
             + (fVar118 * (float)puVar24[3] + fVar115 * (float)((ulonglong)puVar24[3] >> 0x20) +
               fVar77 * (float)puVar24[2] + fVar116 * (float)((ulonglong)puVar24[2] >> 0x20)) *
               (auVar71._4_4_ - fVar54);
        auVar61._8_4_ =
             (fVar118 * (float)puVar25[5] + fVar115 * (float)((ulonglong)puVar25[5] >> 0x20) +
             fVar77 * (float)puVar25[4] + fVar116 * (float)((ulonglong)puVar25[4] >> 0x20)) * fVar54
             + (fVar118 * (float)puVar24[5] + fVar115 * (float)((ulonglong)puVar24[5] >> 0x20) +
               fVar77 * (float)puVar24[4] + fVar116 * (float)((ulonglong)puVar24[4] >> 0x20)) *
               (auVar71._8_4_ - fVar54);
        auVar61._12_4_ =
             (fVar118 * (float)puVar25[7] + fVar115 * (float)((ulonglong)puVar25[7] >> 0x20) +
             fVar77 * (float)puVar25[6] + fVar116 * (float)((ulonglong)puVar25[6] >> 0x20)) * fVar54
             + (fVar118 * (float)puVar24[7] + fVar115 * (float)((ulonglong)puVar24[7] >> 0x20) +
               fVar77 * (float)puVar24[6] + fVar116 * (float)((ulonglong)puVar24[6] >> 0x20)) *
               (auVar71._12_4_ - fVar54);
      }
      uVar50 = CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,fVar111))));
      fVar54 = (float)((ulonglong)uVar50 >> 0x20);
      fVar77 = fVar114 * (float)*(undefined8 *)(iVar41 + 0x8588) +
               fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar41 + 0x8588) >> 0x20) +
               fVar111 * (float)*(undefined8 *)(iVar41 + 0x8580) +
               fVar54 * (float)((ulonglong)*(undefined8 *)(iVar41 + 0x8580) >> 0x20);
      fVar116 = fVar114 * (float)*(undefined8 *)(iVar41 + 0x8598) +
                fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar41 + 0x8598) >> 0x20) +
                fVar111 * (float)*(undefined8 *)(iVar41 + 0x8590) +
                fVar54 * (float)((ulonglong)*(undefined8 *)(iVar41 + 0x8590) >> 0x20);
      fVar118 = fVar114 * (float)*(undefined8 *)(iVar41 + 0x85a8) +
                fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar41 + 0x85a8) >> 0x20) +
                fVar111 * (float)*(undefined8 *)(iVar41 + 0x85a0) +
                fVar54 * (float)((ulonglong)*(undefined8 *)(iVar41 + 0x85a0) >> 0x20);
      fVar54 = fVar114 * (float)*(undefined8 *)(iVar41 + 0x85b8) +
               fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar41 + 0x85b8) >> 0x20) +
               fVar111 * (float)*(undefined8 *)(iVar41 + 0x85b0) +
               fVar54 * (float)((ulonglong)*(undefined8 *)(iVar41 + 0x85b0) >> 0x20);
      if (*piVar8 != 0) {
        puVar24 = (undefined8 *)(*piVar8 + uVar49 * 0x20);
        puVar24[1] = CONCAT44(fStack_124,fVar114);
        *puVar24 = uVar50;
        iVar18 = *piVar8 + uVar49 * 0x20;
        *(longlong *)(iVar18 + 0x18) = auVar61._8_8_;
        *(longlong *)(iVar18 + 0x10) = auVar61._0_8_;
      }
      uVar48 = 0;
      bStack_ae = (byte)((uint)fVar54 >> 0x10);
      bStack_ad = (byte)((uint)fVar54 >> 0x18);
      bStack_ac = SUB41(fVar54,0);
      bStack_ab = (byte)((uint)fVar54 >> 8);
      if (*pcVar4 != '\0') {
        puVar22 = (uint *)*piVar1;
        piVar15 = param_2 + 0x28;
        if ((char)*piVar7 == '\0') {
          piVar15 = (int *)0x0;
        }
        if (piVar15 == (int *)0x0) {
          uVar48 = 0;
          uVar47 = puVar22[1] & 0xfffff03f;
        }
        else {
          bVar96 = 0;
          bVar75 = 0;
          bVar97 = 0;
          bVar98 = 0;
          bVar99 = 0;
          bVar100 = 0;
          bVar101 = 0;
          bVar102 = 0;
          bVar103 = 0;
          bVar104 = 0;
          bVar105 = 0;
          bVar106 = 0;
          bVar107 = 0;
          bVar108 = 0;
          bVar109 = 0;
          bVar110 = 0;
          bStack_c8 = 0;
          bStack_c7 = 0;
          bStack_c6 = 0;
          bStack_c5 = 0;
          bStack_c4 = 0;
          bStack_c3 = 0;
          bStack_c2 = 0;
          bStack_c1 = 0;
          local_d0 = 0;
          bStack_cf = 0;
          bStack_ce = 0;
          bStack_cd = 0;
          bStack_cc = 0;
          bStack_cb = 0;
          bStack_ca = 0;
          bStack_c9 = 0;
          if ((*puVar45 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 2) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)piVar15 >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 2) * fVar114 +
                      (float)*(undefined8 *)piVar15 * fVar111;
            bVar107 = SUB41(fVar115,0);
            bVar75 = bVar107 & (byte)uVar50;
            bVar108 = (byte)((uint)fVar115 >> 8);
            bVar96 = bVar108 & (byte)((ulonglong)uVar50 >> 8);
            bVar109 = (byte)((uint)fVar115 >> 0x10);
            bVar97 = bVar109 & (byte)((ulonglong)uVar50 >> 0x10);
            bVar110 = (byte)((uint)fVar115 >> 0x18);
            bVar98 = bVar110 & (byte)((ulonglong)uVar50 >> 0x18);
            bVar99 = bVar107 & (byte)((ulonglong)uVar50 >> 0x20);
            bVar100 = bVar108 & (byte)((ulonglong)uVar50 >> 0x28);
            bVar101 = bVar109 & (byte)((ulonglong)uVar50 >> 0x30);
            bVar102 = bVar110 & (byte)((ulonglong)uVar50 >> 0x38);
            bVar103 = bVar107 & (byte)in_register_00005008;
            bVar104 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 8);
            bVar105 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bVar106 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bVar107 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bVar108 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bVar109 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bVar110 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          uStack_f8._0_2_ = CONCAT11(bVar104,bVar103);
          uStack_f8._0_3_ = CONCAT12(bVar105,(undefined2)uStack_f8);
          uStack_f8._0_4_ = (float)CONCAT13(bVar106,(undefined3)uStack_f8);
          uStack_f8._0_5_ = CONCAT14(bVar107,(float)uStack_f8);
          uStack_f8._0_6_ = CONCAT15(bVar108,(undefined5)uStack_f8);
          uStack_f8._0_7_ = CONCAT16(bVar109,(undefined6)uStack_f8);
          uStack_f8 = CONCAT17(bVar110,(undefined7)uStack_f8);
          local_100._0_2_ = CONCAT11(bVar96,bVar75);
          local_100._0_3_ = CONCAT12(bVar97,(undefined2)local_100);
          local_100._0_4_ = CONCAT13(bVar98,(undefined3)local_100);
          local_100._0_5_ = CONCAT14(bVar99,(undefined4)local_100);
          local_100._0_6_ = CONCAT15(bVar100,(undefined5)local_100);
          local_100._0_7_ = CONCAT16(bVar101,(undefined6)local_100);
          local_100 = CONCAT17(bVar102,(undefined7)local_100);
          if ((*puVar45 >> 1 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x1a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x18) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x1a) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x18) * fVar111;
            bVar53 = SUB41(fVar115,0);
            bVar72 = (byte)((uint)fVar115 >> 8);
            bVar73 = (byte)((uint)fVar115 >> 0x10);
            bVar74 = (byte)((uint)fVar115 >> 0x18);
            uStack_f8._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)in_register_00005008 >> 8) | bVar104,
                          bVar53 & (byte)in_register_00005008 | bVar103);
            uStack_f8._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bVar105,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bVar106,
                                 (undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bVar107,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bVar108,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bVar109,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bVar110,
                                 (undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)uVar50 >> 8) | bVar96,
                          bVar53 & (byte)uVar50 | bVar75);
            local_100._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)uVar50 >> 0x10) | bVar97,(undefined2)local_100)
            ;
            local_100._0_4_ =
                 CONCAT13(bVar74 & (byte)((ulonglong)uVar50 >> 0x18) | bVar98,(undefined3)local_100)
            ;
            local_100._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)uVar50 >> 0x20) | bVar99,(undefined4)local_100)
            ;
            local_100._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)uVar50 >> 0x28) | bVar100,(undefined5)local_100
                         );
            local_100._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)uVar50 >> 0x30) | bVar101,(undefined6)local_100
                         );
            local_100 = CONCAT17(bVar74 & (byte)((ulonglong)uVar50 >> 0x38) | bVar102,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 2 & 1) != 0) {
            uVar50 = FUN_1001f570();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x32) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x30) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x32) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x30) * fVar111;
            bVar96 = SUB41(fVar115,0);
            bVar107 = (byte)((uint)fVar115 >> 8);
            bVar75 = (byte)((uint)fVar115 >> 0x10);
            bVar108 = (byte)((uint)fVar115 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 3 & 1) != 0) {
            uVar50 = FUN_1001f580();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x4a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x48) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x4a) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x48) * fVar111;
            bVar96 = SUB41(fVar115,0);
            bVar107 = (byte)((uint)fVar115 >> 8);
            bVar75 = (byte)((uint)fVar115 >> 0x10);
            bVar108 = (byte)((uint)fVar115 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 4 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x62) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x60) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x62) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x60) * fVar111;
            bStack_c4 = SUB41(fVar115,0);
            local_d0 = bStack_c4 & (byte)uVar50;
            bStack_c3 = (byte)((uint)fVar115 >> 8);
            bStack_cf = bStack_c3 & (byte)((ulonglong)uVar50 >> 8);
            bStack_c2 = (byte)((uint)fVar115 >> 0x10);
            bStack_ce = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x10);
            bStack_c1 = (byte)((uint)fVar115 >> 0x18);
            bStack_cd = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x18);
            bStack_cc = bStack_c4 & (byte)((ulonglong)uVar50 >> 0x20);
            bStack_cb = bStack_c3 & (byte)((ulonglong)uVar50 >> 0x28);
            bStack_ca = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x30);
            bStack_c9 = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x38);
            bStack_c8 = bStack_c4 & (byte)in_register_00005008;
            bStack_c7 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 8);
            bStack_c6 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bStack_c5 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bStack_c4 = bStack_c4 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bStack_c3 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bStack_c2 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bStack_c1 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          if ((*puVar45 >> 5 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar111 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x7a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x78) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x7a) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x78) * fVar111;
            bVar96 = SUB41(fVar111,0);
            bVar107 = (byte)((uint)fVar111 >> 8);
            bVar75 = (byte)((uint)fVar111 >> 0x10);
            bVar108 = (byte)((uint)fVar111 >> 0x18);
            local_d0 = bVar96 & (byte)uVar50 | local_d0;
            bStack_cf = bVar107 & (byte)((ulonglong)uVar50 >> 8) | bStack_cf;
            bStack_ce = bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | bStack_ce;
            bStack_cd = bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | bStack_cd;
            bStack_cc = bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | bStack_cc;
            bStack_cb = bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | bStack_cb;
            bStack_ca = bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | bStack_ca;
            bStack_c9 = bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | bStack_c9;
            bStack_c8 = bVar96 & (byte)in_register_00005008 | bStack_c8;
            bStack_c7 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) | bStack_c7;
            bStack_c6 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bStack_c6;
            bStack_c5 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bStack_c5;
            bStack_c4 = bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bStack_c4;
            bStack_c3 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bStack_c3;
            bStack_c2 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bStack_c2;
            bStack_c1 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bStack_c1;
          }
          bVar96 = (byte)((ulonglong)_DAT_1012b120 >> 0x20);
          bVar107 = (byte)((ulonglong)uRam1012b128 >> 0x20);
          fVar114 = (float)CONCAT13(bStack_c5,CONCAT12(bStack_c6,CONCAT11(bStack_c7,bStack_c8)));
          fVar111 = (float)CONCAT13(bStack_cd,CONCAT12(bStack_ce,CONCAT11(bStack_cf,local_d0)));
          uVar48 = *(uint *)(&DAT_1012b8f0 +
                            ((byte)(-((float)(CONCAT17(bStack_c1,
                                                       CONCAT16(bStack_c2,
                                                                CONCAT15(bStack_c3,
                                                                         CONCAT14(bStack_c4,fVar114)
                                                                        ))) >> 0x20) < 0.0) &
                                    bVar107 | -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar111)))) >> 0x20) < 0.0) & bVar96 |
                                   -(fVar114 < 0.0) & (byte)uRam1012b128 |
                                   -(fVar111 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                   *(uint *)(&DAT_1012b900 +
                            ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                    -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                   -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                   -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4);
          uVar47 = (*(uint *)(&DAT_1012b900 +
                             ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                     -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                    -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                    -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4) |
                   0xc3f) & (*(uint *)(&DAT_1012b8f0 +
                                      ((byte)(-((float)(CONCAT17(bStack_c1,
                                                                 CONCAT16(bStack_c2,
                                                                          CONCAT15(bStack_c3,
                                                                                   CONCAT14(
                                                  bStack_c4,fVar114)))) >> 0x20) < 0.0) & bVar107 |
                                              -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar111)))) >> 0x20) < 0.0) & bVar96 |
                                             -(fVar114 < 0.0) & (byte)uRam1012b128 |
                                             -(fVar111 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                            0x3ff) & puVar22[1];
        }
        puVar46 = puVar22 + 1;
        *puVar46 = uVar47;
        uVar50 = FUN_1001f528();
        uVar47 = *(uint *)(&DAT_1012b8b0 +
                          ((byte)(-(fVar116 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                    fVar54 < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                  -(fVar77 * (float)((ulonglong)uVar50 >> 0x20) +
                                    (float)(CONCAT17(bStack_ad,
                                                     CONCAT16(bStack_ae,
                                                              CONCAT15(bStack_ab,
                                                                       CONCAT14(bStack_ac,fVar54))))
                                           >> 0x20) < 0.0) &
                                  (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                 -(fVar116 * (float)in_register_00005008 + fVar54 < 0.0) &
                                 (byte)uRam1012b128 |
                                 -(fVar77 * (float)uVar50 + fVar54 < 0.0) & (byte)_DAT_1012b120) &
                          0xf) * 4);
        *puVar46 = (uVar47 | 0x30) & *puVar46;
        uVar51 = FUN_1001f528();
        uVar50 = in_register_00005008;
        uVar52 = FUN_1001f550();
        fVar111 = (float)CONCAT13(bStack_ad & (byte)((ulonglong)uVar52 >> 0x18),
                                  CONCAT12(bStack_ae & (byte)((ulonglong)uVar52 >> 0x10),
                                           CONCAT11(bStack_ab & (byte)((ulonglong)uVar52 >> 8),
                                                    bStack_ac & (byte)uVar52)));
        auVar80._0_8_ =
             CONCAT17(bStack_ad & (byte)((ulonglong)uVar52 >> 0x38),
                      CONCAT16(bStack_ae & (byte)((ulonglong)uVar52 >> 0x30),
                               CONCAT15(bStack_ab & (byte)((ulonglong)uVar52 >> 0x28),
                                        CONCAT14(bStack_ac & (byte)((ulonglong)uVar52 >> 0x20),
                                                 fVar111))));
        auVar80[8] = bStack_ac & (byte)uVar50;
        auVar80[9] = bStack_ab & (byte)((ulonglong)uVar50 >> 8);
        auVar80[10] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x10);
        auVar80[0xb] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x18);
        auVar85[0xc] = bStack_ac & (byte)((ulonglong)uVar50 >> 0x20);
        auVar85._0_12_ = auVar80;
        auVar85[0xd] = bStack_ab & (byte)((ulonglong)uVar50 >> 0x28);
        auVar85[0xe] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x30);
        auVar85[0xf] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x38);
        uVar48 = *(uint *)(&DAT_1012b8a0 +
                          ((byte)(-(fVar118 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                    auVar85._12_4_ < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20)
                                  | -(fVar118 * (float)((ulonglong)uVar51 >> 0x20) +
                                      (float)((ulonglong)auVar80._0_8_ >> 0x20) < 0.0) &
                                    (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                 -(fVar118 * (float)in_register_00005008 + auVar80._8_4_ < 0.0) &
                                 (byte)uRam1012b128 |
                                 -(fVar118 * (float)uVar51 + fVar111 < 0.0) & (byte)_DAT_1012b120) &
                          3) * 4) | uVar47 | uVar48;
        *puVar46 = (*(uint *)(&DAT_1012b8a0 +
                             ((byte)(-(fVar118 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                       auVar85._12_4_ < 0.0) &
                                     (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                     -(fVar118 * (float)((ulonglong)uVar51 >> 0x20) +
                                       (float)((ulonglong)auVar80._0_8_ >> 0x20) < 0.0) &
                                     (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                    -(fVar118 * (float)in_register_00005008 + auVar80._8_4_ < 0.0) &
                                    (byte)uRam1012b128 |
                                    -(fVar118 * (float)uVar51 + fVar111 < 0.0) & (byte)_DAT_1012b120
                                    ) & 3) * 4) | 0xf) & *puVar46;
        *puVar22 = uVar48 | *puVar22;
      }
      uVar51 = FUN_1001f540();
      uVar50 = in_register_00005008;
      uVar52 = FUN_1001f590();
      fVar77 = (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & (byte)((ulonglong)uVar52 >> 0x18),
                               CONCAT12((byte)((uint)fVar77 >> 0x10) &
                                        (byte)((ulonglong)uVar52 >> 0x10),
                                        CONCAT11((byte)((uint)fVar77 >> 8) &
                                                 (byte)((ulonglong)uVar52 >> 8),
                                                 SUB41(fVar77,0) & (byte)uVar52)));
      auVar56._0_8_ =
           CONCAT17((byte)((uint)fVar116 >> 0x18) & (byte)((ulonglong)uVar52 >> 0x38),
                    CONCAT16((byte)((uint)fVar116 >> 0x10) & (byte)((ulonglong)uVar52 >> 0x30),
                             CONCAT15((byte)((uint)fVar116 >> 8) & (byte)((ulonglong)uVar52 >> 0x28)
                                      ,CONCAT14(SUB41(fVar116,0) & (byte)((ulonglong)uVar52 >> 0x20)
                                                ,fVar77))));
      auVar56[8] = SUB41(fVar118,0) & (byte)uVar50;
      auVar56[9] = (byte)((uint)fVar118 >> 8) & (byte)((ulonglong)uVar50 >> 8);
      auVar56[10] = (byte)((uint)fVar118 >> 0x10) & (byte)((ulonglong)uVar50 >> 0x10);
      auVar56[0xb] = (byte)((uint)fVar118 >> 0x18) & (byte)((ulonglong)uVar50 >> 0x18);
      auVar62[0xc] = bStack_ac & (byte)((ulonglong)uVar50 >> 0x20);
      auVar62._0_12_ = auVar56;
      auVar62[0xd] = bStack_ab & (byte)((ulonglong)uVar50 >> 0x28);
      auVar62[0xe] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x30);
      auVar62[0xf] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x38);
      auVar86._0_8_ =
           CONCAT44((((float)((ulonglong)auVar56._0_8_ >> 0x20) + (float)((ulonglong)uVar51 >> 0x20)
                     ) / (float)(CONCAT17(bStack_ad,
                                          CONCAT16(bStack_ae,
                                                   CONCAT15(bStack_ab,CONCAT14(bStack_ac,fVar54))))
                                >> 0x20)) * (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20),
                    ((fVar77 + (float)uVar51) / fVar54) * (float)*(undefined8 *)pfVar2 +
                    (float)*(undefined8 *)pfVar3);
      auVar86._8_4_ =
           ((auVar56._8_4_ + (float)in_register_00005008) / fVar54) *
           (float)*(undefined8 *)(param_2 + 0x1a) + (float)*(undefined8 *)(param_2 + 0x1e);
      auVar86._12_4_ =
           ((auVar62._12_4_ + (float)((ulonglong)in_register_00005008 >> 0x20)) / fVar54) *
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
      uVar50 = auVar86._8_8_;
      if (uVar49 == 0) {
        *(undefined8 *)(param_2 + 0x26) = uVar50;
        *(undefined8 *)*pauVar5 = auVar86._0_8_;
        *(undefined8 *)(param_2 + 0x22) = uVar50;
        *(undefined8 *)*pauVar6 = auVar86._0_8_;
      }
      else {
        auVar71 = NEON_fmin(*pauVar6,auVar86,4);
        *(longlong *)(param_2 + 0x22) = auVar71._8_8_;
        *(longlong *)*pauVar6 = auVar71._0_8_;
        auVar71 = NEON_fmax(*pauVar5,auVar86,4);
        *(longlong *)(param_2 + 0x26) = auVar71._8_8_;
        *(longlong *)*pauVar5 = auVar71._0_8_;
      }
      puVar24 = (undefined8 *)*piVar44;
      if (puVar24 != (undefined8 *)0x0) {
        if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar48 == 0)) {
          puVar24[1] = uVar50;
          *puVar24 = auVar86._0_8_;
        }
        else {
          *(float *)((int)puVar24 + 0xc) = auVar86._12_4_;
        }
        *piVar44 = param_2[0x15] + *piVar44;
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_4);
    break;
  case 2:
    uVar49 = 0;
    if (param_4 == 0) goto LAB_1002f2e8;
    piVar44 = param_2 + 0x14;
    do {
      puVar24 = (undefined8 *)(*param_2 + param_2[6] * uVar49);
      uVar50 = *puVar24;
      fVar54 = *(float *)(puVar24 + 1);
      if (*pcVar11 != '\0') {
        puVar24 = (undefined8 *)(*piVar10 + param_2[7] * uVar49);
        local_110 = *puVar24;
        uStack_108 = (ulonglong)*(uint *)(puVar24 + 1) | 0x3f80000000000000;
      }
      auVar63 = ZEXT116(0) << 8;
      puVar14 = (undefined8 *)(param_2[2] + uVar49 * param_2[0xb]);
      uVar48 = *(uint *)(param_2[5] + param_2[10] * uVar49);
      iVar18 = (uVar48 & 0xff) + 10;
      uVar47 = uVar48 >> 8 & 0xff;
      iVar12 = uVar47 + 10;
      uVar21 = uVar48 >> 0x10 & 0xff;
      iVar41 = uVar21 + 10;
      uVar51 = *puVar14;
      iVar42 = *(int *)(param_1 + 0xabc);
      fVar111 = (float)((ulonglong)uVar51 >> 0x20);
      puVar24 = (undefined8 *)(iVar42 + iVar12 * 0x40);
      fVar114 = (float)uVar50;
      fVar115 = (float)((ulonglong)uVar50 >> 0x20);
      puVar25 = (undefined8 *)(iVar42 + iVar41 * 0x40);
      puVar13 = (undefined8 *)(iVar42 + iVar18 * 0x40);
      auVar71 = NEON_fmov(0x3f800000,4);
      fVar77 = (float)uVar51;
      fVar116 = (fVar54 * (float)puVar13[1] + (float)((ulonglong)puVar13[1] >> 0x20) * 1.0 +
                fVar114 * (float)*puVar13 + fVar115 * (float)((ulonglong)*puVar13 >> 0x20)) * fVar77
                + (fVar54 * (float)puVar24[1] + (float)((ulonglong)puVar24[1] >> 0x20) * 1.0 +
                  fVar114 * (float)*puVar24 + fVar115 * (float)((ulonglong)*puVar24 >> 0x20)) *
                  fVar111 +
                (fVar54 * (float)puVar25[1] + (float)((ulonglong)puVar25[1] >> 0x20) * 1.0 +
                fVar114 * (float)*puVar25 + fVar115 * (float)((ulonglong)*puVar25 >> 0x20)) *
                ((auVar71._0_4_ - fVar77) - fVar111);
      fVar118 = (fVar54 * (float)puVar13[3] + (float)((ulonglong)puVar13[3] >> 0x20) * 1.0 +
                fVar114 * (float)puVar13[2] + fVar115 * (float)((ulonglong)puVar13[2] >> 0x20)) *
                fVar77 + (fVar54 * (float)puVar24[3] + (float)((ulonglong)puVar24[3] >> 0x20) * 1.0
                         + fVar114 * (float)puVar24[2] +
                           fVar115 * (float)((ulonglong)puVar24[2] >> 0x20)) * fVar111 +
                (fVar54 * (float)puVar25[3] + (float)((ulonglong)puVar25[3] >> 0x20) * 1.0 +
                fVar114 * (float)puVar25[2] + fVar115 * (float)((ulonglong)puVar25[2] >> 0x20)) *
                ((auVar71._4_4_ - fVar77) - fVar111);
      uVar119 = SUB41(fVar118,0);
      uVar120 = (undefined1)((uint)fVar118 >> 8);
      uVar121 = (undefined1)((uint)fVar118 >> 0x10);
      uVar122 = (undefined1)((uint)fVar118 >> 0x18);
      fVar118 = (fVar54 * (float)puVar13[5] + (float)((ulonglong)puVar13[5] >> 0x20) * 1.0 +
                fVar114 * (float)puVar13[4] + fVar115 * (float)((ulonglong)puVar13[4] >> 0x20)) *
                fVar77 + (fVar54 * (float)puVar24[5] + (float)((ulonglong)puVar24[5] >> 0x20) * 1.0
                         + fVar114 * (float)puVar24[4] +
                           fVar115 * (float)((ulonglong)puVar24[4] >> 0x20)) * fVar111 +
                (fVar54 * (float)puVar25[5] + (float)((ulonglong)puVar25[5] >> 0x20) * 1.0 +
                fVar114 * (float)puVar25[4] + fVar115 * (float)((ulonglong)puVar25[4] >> 0x20)) *
                ((auVar71._8_4_ - fVar77) - fVar111);
      fVar54 = (fVar54 * (float)puVar13[7] + (float)((ulonglong)puVar13[7] >> 0x20) * 1.0 +
               fVar114 * (float)puVar13[6] + fVar115 * (float)((ulonglong)puVar13[6] >> 0x20)) *
               fVar77 + (fVar54 * (float)puVar24[7] + (float)((ulonglong)puVar24[7] >> 0x20) * 1.0 +
                        fVar114 * (float)puVar24[6] +
                        fVar115 * (float)((ulonglong)puVar24[6] >> 0x20)) * fVar111 +
               (fVar54 * (float)puVar25[7] + (float)((ulonglong)puVar25[7] >> 0x20) * 1.0 +
               fVar114 * (float)puVar25[6] + fVar115 * (float)((ulonglong)puVar25[6] >> 0x20)) *
               ((auVar71._12_4_ - fVar77) - fVar111);
      fStack_124 = (float)(CONCAT17((char)((uint)fVar54 >> 0x18),
                                    CONCAT16((char)((uint)fVar54 >> 0x10),
                                             CONCAT15((char)((uint)fVar54 >> 8),
                                                      CONCAT14(SUB41(fVar54,0),fVar118)))) >> 0x20);
      if (*pcVar11 != '\0') {
        FUN_10024198(param_1,iVar18);
        FUN_10024198(param_1,iVar12);
        FUN_10024198(param_1,iVar41);
        uVar50 = *puVar14;
        iVar42 = *(int *)(param_1 + 0xabc);
        fVar77 = (float)((ulonglong)uVar50 >> 0x20);
        puVar24 = (undefined8 *)(iVar42 + (uVar47 + 0x114) * 0x40);
        fVar111 = (float)local_110;
        fVar114 = (float)((ulonglong)local_110 >> 0x20);
        fVar115 = (float)uStack_108;
        fVar117 = (float)(uStack_108 >> 0x20);
        puVar25 = (undefined8 *)(iVar42 + (uVar21 + 0x114) * 0x40);
        puVar13 = (undefined8 *)(iVar42 + ((uVar48 & 0xff) + 0x114) * 0x40);
        auVar71 = NEON_fmov(0x3f800000,4);
        fVar54 = (float)uVar50;
        auVar63._0_4_ =
             (fVar115 * (float)puVar13[1] + fVar117 * (float)((ulonglong)puVar13[1] >> 0x20) +
             fVar111 * (float)*puVar13 + fVar114 * (float)((ulonglong)*puVar13 >> 0x20)) * fVar54 +
             (fVar115 * (float)puVar24[1] + fVar117 * (float)((ulonglong)puVar24[1] >> 0x20) +
             fVar111 * (float)*puVar24 + fVar114 * (float)((ulonglong)*puVar24 >> 0x20)) * fVar77 +
             (fVar115 * (float)puVar25[1] + fVar117 * (float)((ulonglong)puVar25[1] >> 0x20) +
             fVar111 * (float)*puVar25 + fVar114 * (float)((ulonglong)*puVar25 >> 0x20)) *
             ((auVar71._0_4_ - fVar54) - fVar77);
        auVar63._4_4_ =
             (fVar115 * (float)puVar13[3] + fVar117 * (float)((ulonglong)puVar13[3] >> 0x20) +
             fVar111 * (float)puVar13[2] + fVar114 * (float)((ulonglong)puVar13[2] >> 0x20)) *
             fVar54 + (fVar115 * (float)puVar24[3] +
                       fVar117 * (float)((ulonglong)puVar24[3] >> 0x20) +
                      fVar111 * (float)puVar24[2] + fVar114 * (float)((ulonglong)puVar24[2] >> 0x20)
                      ) * fVar77 +
             (fVar115 * (float)puVar25[3] + fVar117 * (float)((ulonglong)puVar25[3] >> 0x20) +
             fVar111 * (float)puVar25[2] + fVar114 * (float)((ulonglong)puVar25[2] >> 0x20)) *
             ((auVar71._4_4_ - fVar54) - fVar77);
        auVar63._8_4_ =
             (fVar115 * (float)puVar13[5] + fVar117 * (float)((ulonglong)puVar13[5] >> 0x20) +
             fVar111 * (float)puVar13[4] + fVar114 * (float)((ulonglong)puVar13[4] >> 0x20)) *
             fVar54 + (fVar115 * (float)puVar24[5] +
                       fVar117 * (float)((ulonglong)puVar24[5] >> 0x20) +
                      fVar111 * (float)puVar24[4] + fVar114 * (float)((ulonglong)puVar24[4] >> 0x20)
                      ) * fVar77 +
             (fVar115 * (float)puVar25[5] + fVar117 * (float)((ulonglong)puVar25[5] >> 0x20) +
             fVar111 * (float)puVar25[4] + fVar114 * (float)((ulonglong)puVar25[4] >> 0x20)) *
             ((auVar71._8_4_ - fVar54) - fVar77);
        auVar63._12_4_ =
             (fVar115 * (float)puVar13[7] + fVar117 * (float)((ulonglong)puVar13[7] >> 0x20) +
             fVar111 * (float)puVar13[6] + fVar114 * (float)((ulonglong)puVar13[6] >> 0x20)) *
             fVar54 + (fVar115 * (float)puVar24[7] +
                       fVar117 * (float)((ulonglong)puVar24[7] >> 0x20) +
                      fVar111 * (float)puVar24[6] + fVar114 * (float)((ulonglong)puVar24[6] >> 0x20)
                      ) * fVar77 +
             (fVar115 * (float)puVar25[7] + fVar117 * (float)((ulonglong)puVar25[7] >> 0x20) +
             fVar111 * (float)puVar25[6] + fVar114 * (float)((ulonglong)puVar25[6] >> 0x20)) *
             ((auVar71._12_4_ - fVar54) - fVar77);
      }
      uVar50 = CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,fVar116))));
      fVar54 = (float)((ulonglong)uVar50 >> 0x20);
      fVar77 = fVar118 * (float)*(undefined8 *)(iVar42 + 0x8588) +
               fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar42 + 0x8588) >> 0x20) +
               fVar116 * (float)*(undefined8 *)(iVar42 + 0x8580) +
               fVar54 * (float)((ulonglong)*(undefined8 *)(iVar42 + 0x8580) >> 0x20);
      fVar111 = fVar118 * (float)*(undefined8 *)(iVar42 + 0x8598) +
                fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar42 + 0x8598) >> 0x20) +
                fVar116 * (float)*(undefined8 *)(iVar42 + 0x8590) +
                fVar54 * (float)((ulonglong)*(undefined8 *)(iVar42 + 0x8590) >> 0x20);
      fVar114 = fVar118 * (float)*(undefined8 *)(iVar42 + 0x85a8) +
                fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar42 + 0x85a8) >> 0x20) +
                fVar116 * (float)*(undefined8 *)(iVar42 + 0x85a0) +
                fVar54 * (float)((ulonglong)*(undefined8 *)(iVar42 + 0x85a0) >> 0x20);
      fVar54 = fVar118 * (float)*(undefined8 *)(iVar42 + 0x85b8) +
               fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar42 + 0x85b8) >> 0x20) +
               fVar116 * (float)*(undefined8 *)(iVar42 + 0x85b0) +
               fVar54 * (float)((ulonglong)*(undefined8 *)(iVar42 + 0x85b0) >> 0x20);
      if (*piVar8 != 0) {
        puVar24 = (undefined8 *)(*piVar8 + uVar49 * 0x20);
        puVar24[1] = CONCAT44(fStack_124,fVar118);
        *puVar24 = uVar50;
        iVar18 = *piVar8 + uVar49 * 0x20;
        *(longlong *)(iVar18 + 0x18) = auVar63._8_8_;
        *(longlong *)(iVar18 + 0x10) = auVar63._0_8_;
      }
      uVar48 = 0;
      bStack_ae = (byte)((uint)fVar54 >> 0x10);
      bStack_ad = (byte)((uint)fVar54 >> 0x18);
      bStack_ac = SUB41(fVar54,0);
      bStack_ab = (byte)((uint)fVar54 >> 8);
      if (*pcVar4 != '\0') {
        puVar22 = (uint *)*piVar1;
        piVar15 = param_2 + 0x28;
        if ((char)*piVar7 == '\0') {
          piVar15 = (int *)0x0;
        }
        if (piVar15 == (int *)0x0) {
          uVar47 = 0;
          uVar48 = puVar22[1] & 0xfffff03f;
        }
        else {
          bVar96 = 0;
          bVar75 = 0;
          bVar97 = 0;
          bVar98 = 0;
          bVar99 = 0;
          bVar100 = 0;
          bVar101 = 0;
          bVar102 = 0;
          bVar103 = 0;
          bVar104 = 0;
          bVar105 = 0;
          bVar106 = 0;
          bVar107 = 0;
          bVar108 = 0;
          bVar109 = 0;
          bVar110 = 0;
          bStack_c8 = 0;
          bStack_c7 = 0;
          bStack_c6 = 0;
          bStack_c5 = 0;
          bStack_c4 = 0;
          bStack_c3 = 0;
          bStack_c2 = 0;
          bStack_c1 = 0;
          local_d0 = 0;
          bStack_cf = 0;
          bStack_ce = 0;
          bStack_cd = 0;
          bStack_cc = 0;
          bStack_cb = 0;
          bStack_ca = 0;
          bStack_c9 = 0;
          if ((*puVar45 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 2) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)piVar15 >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar116)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 2) * fVar118 +
                      (float)*(undefined8 *)piVar15 * fVar116;
            bVar107 = SUB41(fVar115,0);
            bVar75 = bVar107 & (byte)uVar50;
            bVar108 = (byte)((uint)fVar115 >> 8);
            bVar96 = bVar108 & (byte)((ulonglong)uVar50 >> 8);
            bVar109 = (byte)((uint)fVar115 >> 0x10);
            bVar97 = bVar109 & (byte)((ulonglong)uVar50 >> 0x10);
            bVar110 = (byte)((uint)fVar115 >> 0x18);
            bVar98 = bVar110 & (byte)((ulonglong)uVar50 >> 0x18);
            bVar99 = bVar107 & (byte)((ulonglong)uVar50 >> 0x20);
            bVar100 = bVar108 & (byte)((ulonglong)uVar50 >> 0x28);
            bVar101 = bVar109 & (byte)((ulonglong)uVar50 >> 0x30);
            bVar102 = bVar110 & (byte)((ulonglong)uVar50 >> 0x38);
            bVar103 = bVar107 & (byte)in_register_00005008;
            bVar104 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 8);
            bVar105 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bVar106 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bVar107 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bVar108 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bVar109 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bVar110 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          uStack_f8._0_2_ = CONCAT11(bVar104,bVar103);
          uStack_f8._0_3_ = CONCAT12(bVar105,(undefined2)uStack_f8);
          uStack_f8._0_4_ = (float)CONCAT13(bVar106,(undefined3)uStack_f8);
          uStack_f8._0_5_ = CONCAT14(bVar107,(float)uStack_f8);
          uStack_f8._0_6_ = CONCAT15(bVar108,(undefined5)uStack_f8);
          uStack_f8._0_7_ = CONCAT16(bVar109,(undefined6)uStack_f8);
          uStack_f8 = CONCAT17(bVar110,(undefined7)uStack_f8);
          local_100._0_2_ = CONCAT11(bVar96,bVar75);
          local_100._0_3_ = CONCAT12(bVar97,(undefined2)local_100);
          local_100._0_4_ = CONCAT13(bVar98,(undefined3)local_100);
          local_100._0_5_ = CONCAT14(bVar99,(undefined4)local_100);
          local_100._0_6_ = CONCAT15(bVar100,(undefined5)local_100);
          local_100._0_7_ = CONCAT16(bVar101,(undefined6)local_100);
          local_100 = CONCAT17(bVar102,(undefined7)local_100);
          if ((*puVar45 >> 1 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x1a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x18) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar116)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x1a) * fVar118 +
                      (float)*(undefined8 *)(piVar15 + 0x18) * fVar116;
            bVar53 = SUB41(fVar115,0);
            bVar72 = (byte)((uint)fVar115 >> 8);
            bVar73 = (byte)((uint)fVar115 >> 0x10);
            bVar74 = (byte)((uint)fVar115 >> 0x18);
            uStack_f8._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)in_register_00005008 >> 8) | bVar104,
                          bVar53 & (byte)in_register_00005008 | bVar103);
            uStack_f8._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bVar105,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bVar106,
                                 (undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bVar107,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bVar108,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bVar109,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bVar110,
                                 (undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)uVar50 >> 8) | bVar96,
                          bVar53 & (byte)uVar50 | bVar75);
            local_100._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)uVar50 >> 0x10) | bVar97,(undefined2)local_100)
            ;
            local_100._0_4_ =
                 CONCAT13(bVar74 & (byte)((ulonglong)uVar50 >> 0x18) | bVar98,(undefined3)local_100)
            ;
            local_100._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)uVar50 >> 0x20) | bVar99,(undefined4)local_100)
            ;
            local_100._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)uVar50 >> 0x28) | bVar100,(undefined5)local_100
                         );
            local_100._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)uVar50 >> 0x30) | bVar101,(undefined6)local_100
                         );
            local_100 = CONCAT17(bVar74 & (byte)((ulonglong)uVar50 >> 0x38) | bVar102,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 2 & 1) != 0) {
            uVar50 = FUN_1001f570();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x32) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x30) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar116)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x32) * fVar118 +
                      (float)*(undefined8 *)(piVar15 + 0x30) * fVar116;
            bVar96 = SUB41(fVar115,0);
            bVar107 = (byte)((uint)fVar115 >> 8);
            bVar75 = (byte)((uint)fVar115 >> 0x10);
            bVar108 = (byte)((uint)fVar115 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 3 & 1) != 0) {
            uVar50 = FUN_1001f580();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x4a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x48) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar116)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x4a) * fVar118 +
                      (float)*(undefined8 *)(piVar15 + 0x48) * fVar116;
            bVar96 = SUB41(fVar115,0);
            bVar107 = (byte)((uint)fVar115 >> 8);
            bVar75 = (byte)((uint)fVar115 >> 0x10);
            bVar108 = (byte)((uint)fVar115 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 4 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x62) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x60) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar116)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x62) * fVar118 +
                      (float)*(undefined8 *)(piVar15 + 0x60) * fVar116;
            bStack_c4 = SUB41(fVar115,0);
            local_d0 = bStack_c4 & (byte)uVar50;
            bStack_c3 = (byte)((uint)fVar115 >> 8);
            bStack_cf = bStack_c3 & (byte)((ulonglong)uVar50 >> 8);
            bStack_c2 = (byte)((uint)fVar115 >> 0x10);
            bStack_ce = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x10);
            bStack_c1 = (byte)((uint)fVar115 >> 0x18);
            bStack_cd = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x18);
            bStack_cc = bStack_c4 & (byte)((ulonglong)uVar50 >> 0x20);
            bStack_cb = bStack_c3 & (byte)((ulonglong)uVar50 >> 0x28);
            bStack_ca = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x30);
            bStack_c9 = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x38);
            bStack_c8 = bStack_c4 & (byte)in_register_00005008;
            bStack_c7 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 8);
            bStack_c6 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bStack_c5 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bStack_c4 = bStack_c4 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bStack_c3 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bStack_c2 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bStack_c1 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          if ((*puVar45 >> 5 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar116 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x7a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x78) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar116)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x7a) * fVar118 +
                      (float)*(undefined8 *)(piVar15 + 0x78) * fVar116;
            bVar96 = SUB41(fVar116,0);
            bVar107 = (byte)((uint)fVar116 >> 8);
            bVar75 = (byte)((uint)fVar116 >> 0x10);
            bVar108 = (byte)((uint)fVar116 >> 0x18);
            local_d0 = bVar96 & (byte)uVar50 | local_d0;
            bStack_cf = bVar107 & (byte)((ulonglong)uVar50 >> 8) | bStack_cf;
            bStack_ce = bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | bStack_ce;
            bStack_cd = bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | bStack_cd;
            bStack_cc = bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | bStack_cc;
            bStack_cb = bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | bStack_cb;
            bStack_ca = bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | bStack_ca;
            bStack_c9 = bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | bStack_c9;
            bStack_c8 = bVar96 & (byte)in_register_00005008 | bStack_c8;
            bStack_c7 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) | bStack_c7;
            bStack_c6 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bStack_c6;
            bStack_c5 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bStack_c5;
            bStack_c4 = bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bStack_c4;
            bStack_c3 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bStack_c3;
            bStack_c2 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bStack_c2;
            bStack_c1 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bStack_c1;
          }
          bVar96 = (byte)((ulonglong)_DAT_1012b120 >> 0x20);
          bVar107 = (byte)((ulonglong)uRam1012b128 >> 0x20);
          fVar118 = (float)CONCAT13(bStack_c5,CONCAT12(bStack_c6,CONCAT11(bStack_c7,bStack_c8)));
          fVar116 = (float)CONCAT13(bStack_cd,CONCAT12(bStack_ce,CONCAT11(bStack_cf,local_d0)));
          uVar47 = *(uint *)(&DAT_1012b8f0 +
                            ((byte)(-((float)(CONCAT17(bStack_c1,
                                                       CONCAT16(bStack_c2,
                                                                CONCAT15(bStack_c3,
                                                                         CONCAT14(bStack_c4,fVar118)
                                                                        ))) >> 0x20) < 0.0) &
                                    bVar107 | -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar116)))) >> 0x20) < 0.0) & bVar96 |
                                   -(fVar118 < 0.0) & (byte)uRam1012b128 |
                                   -(fVar116 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                   *(uint *)(&DAT_1012b900 +
                            ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                    -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                   -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                   -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4);
          uVar48 = (*(uint *)(&DAT_1012b900 +
                             ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                     -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                    -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                    -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4) |
                   0xc3f) & (*(uint *)(&DAT_1012b8f0 +
                                      ((byte)(-((float)(CONCAT17(bStack_c1,
                                                                 CONCAT16(bStack_c2,
                                                                          CONCAT15(bStack_c3,
                                                                                   CONCAT14(
                                                  bStack_c4,fVar118)))) >> 0x20) < 0.0) & bVar107 |
                                              -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar116)))) >> 0x20) < 0.0) & bVar96 |
                                             -(fVar118 < 0.0) & (byte)uRam1012b128 |
                                             -(fVar116 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                            0x3ff) & puVar22[1];
        }
        puVar46 = puVar22 + 1;
        *puVar46 = uVar48;
        uVar50 = FUN_1001f528();
        uVar48 = *(uint *)(&DAT_1012b8b0 +
                          ((byte)(-(fVar111 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                    fVar54 < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                  -(fVar77 * (float)((ulonglong)uVar50 >> 0x20) +
                                    (float)(CONCAT17(bStack_ad,
                                                     CONCAT16(bStack_ae,
                                                              CONCAT15(bStack_ab,
                                                                       CONCAT14(bStack_ac,fVar54))))
                                           >> 0x20) < 0.0) &
                                  (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                 -(fVar111 * (float)in_register_00005008 + fVar54 < 0.0) &
                                 (byte)uRam1012b128 |
                                 -(fVar77 * (float)uVar50 + fVar54 < 0.0) & (byte)_DAT_1012b120) &
                          0xf) * 4);
        *puVar46 = (uVar48 | 0x30) & *puVar46;
        uVar51 = FUN_1001f528();
        uVar50 = in_register_00005008;
        uVar52 = FUN_1001f550();
        fVar116 = (float)CONCAT13(bStack_ad & (byte)((ulonglong)uVar52 >> 0x18),
                                  CONCAT12(bStack_ae & (byte)((ulonglong)uVar52 >> 0x10),
                                           CONCAT11(bStack_ab & (byte)((ulonglong)uVar52 >> 8),
                                                    bStack_ac & (byte)uVar52)));
        auVar81._0_8_ =
             CONCAT17(bStack_ad & (byte)((ulonglong)uVar52 >> 0x38),
                      CONCAT16(bStack_ae & (byte)((ulonglong)uVar52 >> 0x30),
                               CONCAT15(bStack_ab & (byte)((ulonglong)uVar52 >> 0x28),
                                        CONCAT14(bStack_ac & (byte)((ulonglong)uVar52 >> 0x20),
                                                 fVar116))));
        auVar81[8] = bStack_ac & (byte)uVar50;
        auVar81[9] = bStack_ab & (byte)((ulonglong)uVar50 >> 8);
        auVar81[10] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x10);
        auVar81[0xb] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x18);
        auVar87[0xc] = bStack_ac & (byte)((ulonglong)uVar50 >> 0x20);
        auVar87._0_12_ = auVar81;
        auVar87[0xd] = bStack_ab & (byte)((ulonglong)uVar50 >> 0x28);
        auVar87[0xe] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x30);
        auVar87[0xf] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x38);
        uVar48 = uVar47 | *(uint *)(&DAT_1012b8a0 +
                                   ((byte)(-(fVar114 * (float)((ulonglong)in_register_00005008 >>
                                                              0x20) + auVar87._12_4_ < 0.0) &
                                           (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                           -(fVar114 * (float)((ulonglong)uVar51 >> 0x20) +
                                             (float)((ulonglong)auVar81._0_8_ >> 0x20) < 0.0) &
                                           (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                          -(fVar114 * (float)in_register_00005008 + auVar81._8_4_ <
                                           0.0) & (byte)uRam1012b128 |
                                          -(fVar114 * (float)uVar51 + fVar116 < 0.0) &
                                          (byte)_DAT_1012b120) & 3) * 4) | uVar48;
        *puVar46 = (*(uint *)(&DAT_1012b8a0 +
                             ((byte)(-(fVar114 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                       auVar87._12_4_ < 0.0) &
                                     (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                     -(fVar114 * (float)((ulonglong)uVar51 >> 0x20) +
                                       (float)((ulonglong)auVar81._0_8_ >> 0x20) < 0.0) &
                                     (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                    -(fVar114 * (float)in_register_00005008 + auVar81._8_4_ < 0.0) &
                                    (byte)uRam1012b128 |
                                    -(fVar114 * (float)uVar51 + fVar116 < 0.0) & (byte)_DAT_1012b120
                                    ) & 3) * 4) | 0xf) & *puVar46;
        *puVar22 = uVar48 | *puVar22;
      }
      uVar51 = FUN_1001f540();
      uVar50 = in_register_00005008;
      uVar52 = FUN_1001f590();
      fVar77 = (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & (byte)((ulonglong)uVar52 >> 0x18),
                               CONCAT12((byte)((uint)fVar77 >> 0x10) &
                                        (byte)((ulonglong)uVar52 >> 0x10),
                                        CONCAT11((byte)((uint)fVar77 >> 8) &
                                                 (byte)((ulonglong)uVar52 >> 8),
                                                 SUB41(fVar77,0) & (byte)uVar52)));
      auVar57._0_8_ =
           CONCAT17((byte)((uint)fVar111 >> 0x18) & (byte)((ulonglong)uVar52 >> 0x38),
                    CONCAT16((byte)((uint)fVar111 >> 0x10) & (byte)((ulonglong)uVar52 >> 0x30),
                             CONCAT15((byte)((uint)fVar111 >> 8) & (byte)((ulonglong)uVar52 >> 0x28)
                                      ,CONCAT14(SUB41(fVar111,0) & (byte)((ulonglong)uVar52 >> 0x20)
                                                ,fVar77))));
      auVar57[8] = SUB41(fVar114,0) & (byte)uVar50;
      auVar57[9] = (byte)((uint)fVar114 >> 8) & (byte)((ulonglong)uVar50 >> 8);
      auVar57[10] = (byte)((uint)fVar114 >> 0x10) & (byte)((ulonglong)uVar50 >> 0x10);
      auVar57[0xb] = (byte)((uint)fVar114 >> 0x18) & (byte)((ulonglong)uVar50 >> 0x18);
      auVar64[0xc] = bStack_ac & (byte)((ulonglong)uVar50 >> 0x20);
      auVar64._0_12_ = auVar57;
      auVar64[0xd] = bStack_ab & (byte)((ulonglong)uVar50 >> 0x28);
      auVar64[0xe] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x30);
      auVar64[0xf] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x38);
      auVar88._0_8_ =
           CONCAT44((((float)((ulonglong)auVar57._0_8_ >> 0x20) + (float)((ulonglong)uVar51 >> 0x20)
                     ) / (float)(CONCAT17(bStack_ad,
                                          CONCAT16(bStack_ae,
                                                   CONCAT15(bStack_ab,CONCAT14(bStack_ac,fVar54))))
                                >> 0x20)) * (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20),
                    ((fVar77 + (float)uVar51) / fVar54) * (float)*(undefined8 *)pfVar2 +
                    (float)*(undefined8 *)pfVar3);
      auVar88._8_4_ =
           ((auVar57._8_4_ + (float)in_register_00005008) / fVar54) *
           (float)*(undefined8 *)(param_2 + 0x1a) + (float)*(undefined8 *)(param_2 + 0x1e);
      auVar88._12_4_ =
           ((auVar64._12_4_ + (float)((ulonglong)in_register_00005008 >> 0x20)) / fVar54) *
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
      uVar50 = auVar88._8_8_;
      if (uVar49 == 0) {
        *(undefined8 *)(param_2 + 0x26) = uVar50;
        *(undefined8 *)*pauVar5 = auVar88._0_8_;
        *(undefined8 *)(param_2 + 0x22) = uVar50;
        *(undefined8 *)*pauVar6 = auVar88._0_8_;
      }
      else {
        auVar71 = NEON_fmin(*pauVar6,auVar88,4);
        *(longlong *)(param_2 + 0x22) = auVar71._8_8_;
        *(longlong *)*pauVar6 = auVar71._0_8_;
        auVar71 = NEON_fmax(*pauVar5,auVar88,4);
        *(longlong *)(param_2 + 0x26) = auVar71._8_8_;
        *(longlong *)*pauVar5 = auVar71._0_8_;
      }
      puVar24 = (undefined8 *)*piVar44;
      if (puVar24 != (undefined8 *)0x0) {
        if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar48 == 0)) {
          puVar24[1] = uVar50;
          *puVar24 = auVar88._0_8_;
        }
        else {
          *(float *)((int)puVar24 + 0xc) = auVar88._12_4_;
        }
        *piVar44 = param_2[0x15] + *piVar44;
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_4);
    break;
  case 3:
    uVar49 = 0;
    if (param_4 == 0) goto LAB_1002f2e8;
    piVar44 = param_2 + 0x14;
    do {
      puVar24 = (undefined8 *)(*param_2 + uVar49 * param_2[6]);
      uVar50 = *puVar24;
      fVar54 = *(float *)(puVar24 + 1);
      if (*pcVar11 != '\0') {
        puVar24 = (undefined8 *)(*piVar10 + param_2[7] * uVar49);
        local_110 = *puVar24;
        uStack_108 = (ulonglong)*(uint *)(puVar24 + 1) | 0x3f80000000000000;
      }
      auVar65 = ZEXT116(0) << 8;
      pfVar23 = (float *)(param_2[2] + uVar49 * param_2[0xb]);
      uVar48 = *(uint *)(param_2[5] + uVar49 * param_2[10]);
      iVar18 = (uVar48 & 0xff) + 10;
      uVar47 = uVar48 >> 8 & 0xff;
      iVar12 = uVar47 + 10;
      uVar21 = uVar48 >> 0x10 & 0xff;
      iVar41 = uVar21 + 10;
      iVar42 = (uVar48 >> 0x18) + 10;
      fVar77 = pfVar23[1];
      fVar116 = *pfVar23;
      fVar118 = pfVar23[2];
      iVar43 = *(int *)(param_1 + 0xabc);
      puVar24 = (undefined8 *)(iVar43 + iVar12 * 0x40);
      fVar115 = (float)uVar50;
      fVar117 = (float)((ulonglong)uVar50 >> 0x20);
      puVar25 = (undefined8 *)(iVar43 + iVar41 * 0x40);
      puVar13 = (undefined8 *)(iVar43 + iVar42 * 0x40);
      puVar14 = (undefined8 *)(iVar43 + iVar18 * 0x40);
      auVar71 = NEON_fmov(0x3f800000,4);
      fVar111 = (fVar54 * (float)puVar14[1] + (float)((ulonglong)puVar14[1] >> 0x20) * 1.0 +
                fVar115 * (float)*puVar14 + fVar117 * (float)((ulonglong)*puVar14 >> 0x20)) *
                fVar116 + (fVar54 * (float)puVar24[1] + (float)((ulonglong)puVar24[1] >> 0x20) * 1.0
                          + fVar115 * (float)*puVar24 +
                            fVar117 * (float)((ulonglong)*puVar24 >> 0x20)) * fVar77 +
                (fVar54 * (float)puVar25[1] + (float)((ulonglong)puVar25[1] >> 0x20) * 1.0 +
                fVar115 * (float)*puVar25 + fVar117 * (float)((ulonglong)*puVar25 >> 0x20)) *
                fVar118 + (fVar54 * (float)puVar13[1] + (float)((ulonglong)puVar13[1] >> 0x20) * 1.0
                          + fVar115 * (float)*puVar13 +
                            fVar117 * (float)((ulonglong)*puVar13 >> 0x20)) *
                          (((auVar71._0_4_ - fVar116) - fVar77) - fVar118);
      fVar114 = (fVar54 * (float)puVar14[3] + (float)((ulonglong)puVar14[3] >> 0x20) * 1.0 +
                fVar115 * (float)puVar14[2] + fVar117 * (float)((ulonglong)puVar14[2] >> 0x20)) *
                fVar116 + (fVar54 * (float)puVar24[3] + (float)((ulonglong)puVar24[3] >> 0x20) * 1.0
                          + fVar115 * (float)puVar24[2] +
                            fVar117 * (float)((ulonglong)puVar24[2] >> 0x20)) * fVar77 +
                (fVar54 * (float)puVar25[3] + (float)((ulonglong)puVar25[3] >> 0x20) * 1.0 +
                fVar115 * (float)puVar25[2] + fVar117 * (float)((ulonglong)puVar25[2] >> 0x20)) *
                fVar118 + (fVar54 * (float)puVar13[3] + (float)((ulonglong)puVar13[3] >> 0x20) * 1.0
                          + fVar115 * (float)puVar13[2] +
                            fVar117 * (float)((ulonglong)puVar13[2] >> 0x20)) *
                          (((auVar71._4_4_ - fVar116) - fVar77) - fVar118);
      uVar119 = SUB41(fVar114,0);
      uVar120 = (undefined1)((uint)fVar114 >> 8);
      uVar121 = (undefined1)((uint)fVar114 >> 0x10);
      uVar122 = (undefined1)((uint)fVar114 >> 0x18);
      fVar114 = (fVar54 * (float)puVar14[5] + (float)((ulonglong)puVar14[5] >> 0x20) * 1.0 +
                fVar115 * (float)puVar14[4] + fVar117 * (float)((ulonglong)puVar14[4] >> 0x20)) *
                fVar116 + (fVar54 * (float)puVar24[5] + (float)((ulonglong)puVar24[5] >> 0x20) * 1.0
                          + fVar115 * (float)puVar24[4] +
                            fVar117 * (float)((ulonglong)puVar24[4] >> 0x20)) * fVar77 +
                (fVar54 * (float)puVar25[5] + (float)((ulonglong)puVar25[5] >> 0x20) * 1.0 +
                fVar115 * (float)puVar25[4] + fVar117 * (float)((ulonglong)puVar25[4] >> 0x20)) *
                fVar118 + (fVar54 * (float)puVar13[5] + (float)((ulonglong)puVar13[5] >> 0x20) * 1.0
                          + fVar115 * (float)puVar13[4] +
                            fVar117 * (float)((ulonglong)puVar13[4] >> 0x20)) *
                          (((auVar71._8_4_ - fVar116) - fVar77) - fVar118);
      fVar54 = (fVar54 * (float)puVar14[7] + (float)((ulonglong)puVar14[7] >> 0x20) * 1.0 +
               fVar115 * (float)puVar14[6] + fVar117 * (float)((ulonglong)puVar14[6] >> 0x20)) *
               fVar116 + (fVar54 * (float)puVar24[7] + (float)((ulonglong)puVar24[7] >> 0x20) * 1.0
                         + fVar115 * (float)puVar24[6] +
                           fVar117 * (float)((ulonglong)puVar24[6] >> 0x20)) * fVar77 +
               (fVar54 * (float)puVar25[7] + (float)((ulonglong)puVar25[7] >> 0x20) * 1.0 +
               fVar115 * (float)puVar25[6] + fVar117 * (float)((ulonglong)puVar25[6] >> 0x20)) *
               fVar118 + (fVar54 * (float)puVar13[7] + (float)((ulonglong)puVar13[7] >> 0x20) * 1.0
                         + fVar115 * (float)puVar13[6] +
                           fVar117 * (float)((ulonglong)puVar13[6] >> 0x20)) *
                         (((auVar71._12_4_ - fVar116) - fVar77) - fVar118);
      fStack_124 = (float)(CONCAT17((char)((uint)fVar54 >> 0x18),
                                    CONCAT16((char)((uint)fVar54 >> 0x10),
                                             CONCAT15((char)((uint)fVar54 >> 8),
                                                      CONCAT14(SUB41(fVar54,0),fVar114)))) >> 0x20);
      if (*pcVar11 != '\0') {
        FUN_10024198(param_1,iVar18);
        FUN_10024198(param_1,iVar12);
        FUN_10024198(param_1,iVar41);
        FUN_10024198(param_1,iVar42);
        fVar54 = pfVar23[1];
        fVar77 = *pfVar23;
        fVar116 = pfVar23[2];
        iVar43 = *(int *)(param_1 + 0xabc);
        puVar24 = (undefined8 *)(iVar43 + (uVar47 + 0x114) * 0x40);
        fVar118 = (float)local_110;
        fVar115 = (float)((ulonglong)local_110 >> 0x20);
        fVar117 = (float)uStack_108;
        fVar125 = (float)(uStack_108 >> 0x20);
        puVar25 = (undefined8 *)(iVar43 + (uVar21 + 0x114) * 0x40);
        puVar13 = (undefined8 *)(iVar43 + ((uVar48 >> 0x18) + 0x114) * 0x40);
        puVar14 = (undefined8 *)(iVar43 + ((uVar48 & 0xff) + 0x114) * 0x40);
        auVar71 = NEON_fmov(0x3f800000,4);
        auVar65._0_4_ =
             (fVar117 * (float)puVar14[1] + fVar125 * (float)((ulonglong)puVar14[1] >> 0x20) +
             fVar118 * (float)*puVar14 + fVar115 * (float)((ulonglong)*puVar14 >> 0x20)) * fVar77 +
             (fVar117 * (float)puVar24[1] + fVar125 * (float)((ulonglong)puVar24[1] >> 0x20) +
             fVar118 * (float)*puVar24 + fVar115 * (float)((ulonglong)*puVar24 >> 0x20)) * fVar54 +
             (fVar117 * (float)puVar25[1] + fVar125 * (float)((ulonglong)puVar25[1] >> 0x20) +
             fVar118 * (float)*puVar25 + fVar115 * (float)((ulonglong)*puVar25 >> 0x20)) * fVar116 +
             (fVar117 * (float)puVar13[1] + fVar125 * (float)((ulonglong)puVar13[1] >> 0x20) +
             fVar118 * (float)*puVar13 + fVar115 * (float)((ulonglong)*puVar13 >> 0x20)) *
             (((auVar71._0_4_ - fVar77) - fVar54) - fVar116);
        auVar65._4_4_ =
             (fVar117 * (float)puVar14[3] + fVar125 * (float)((ulonglong)puVar14[3] >> 0x20) +
             fVar118 * (float)puVar14[2] + fVar115 * (float)((ulonglong)puVar14[2] >> 0x20)) *
             fVar77 + (fVar117 * (float)puVar24[3] +
                       fVar125 * (float)((ulonglong)puVar24[3] >> 0x20) +
                      fVar118 * (float)puVar24[2] + fVar115 * (float)((ulonglong)puVar24[2] >> 0x20)
                      ) * fVar54 +
             (fVar117 * (float)puVar25[3] + fVar125 * (float)((ulonglong)puVar25[3] >> 0x20) +
             fVar118 * (float)puVar25[2] + fVar115 * (float)((ulonglong)puVar25[2] >> 0x20)) *
             fVar116 + (fVar117 * (float)puVar13[3] +
                        fVar125 * (float)((ulonglong)puVar13[3] >> 0x20) +
                       fVar118 * (float)puVar13[2] +
                       fVar115 * (float)((ulonglong)puVar13[2] >> 0x20)) *
                       (((auVar71._4_4_ - fVar77) - fVar54) - fVar116);
        auVar65._8_4_ =
             (fVar117 * (float)puVar14[5] + fVar125 * (float)((ulonglong)puVar14[5] >> 0x20) +
             fVar118 * (float)puVar14[4] + fVar115 * (float)((ulonglong)puVar14[4] >> 0x20)) *
             fVar77 + (fVar117 * (float)puVar24[5] +
                       fVar125 * (float)((ulonglong)puVar24[5] >> 0x20) +
                      fVar118 * (float)puVar24[4] + fVar115 * (float)((ulonglong)puVar24[4] >> 0x20)
                      ) * fVar54 +
             (fVar117 * (float)puVar25[5] + fVar125 * (float)((ulonglong)puVar25[5] >> 0x20) +
             fVar118 * (float)puVar25[4] + fVar115 * (float)((ulonglong)puVar25[4] >> 0x20)) *
             fVar116 + (fVar117 * (float)puVar13[5] +
                        fVar125 * (float)((ulonglong)puVar13[5] >> 0x20) +
                       fVar118 * (float)puVar13[4] +
                       fVar115 * (float)((ulonglong)puVar13[4] >> 0x20)) *
                       (((auVar71._8_4_ - fVar77) - fVar54) - fVar116);
        auVar65._12_4_ =
             (fVar117 * (float)puVar14[7] + fVar125 * (float)((ulonglong)puVar14[7] >> 0x20) +
             fVar118 * (float)puVar14[6] + fVar115 * (float)((ulonglong)puVar14[6] >> 0x20)) *
             fVar77 + (fVar117 * (float)puVar24[7] +
                       fVar125 * (float)((ulonglong)puVar24[7] >> 0x20) +
                      fVar118 * (float)puVar24[6] + fVar115 * (float)((ulonglong)puVar24[6] >> 0x20)
                      ) * fVar54 +
             (fVar117 * (float)puVar25[7] + fVar125 * (float)((ulonglong)puVar25[7] >> 0x20) +
             fVar118 * (float)puVar25[6] + fVar115 * (float)((ulonglong)puVar25[6] >> 0x20)) *
             fVar116 + (fVar117 * (float)puVar13[7] +
                        fVar125 * (float)((ulonglong)puVar13[7] >> 0x20) +
                       fVar118 * (float)puVar13[6] +
                       fVar115 * (float)((ulonglong)puVar13[6] >> 0x20)) *
                       (((auVar71._12_4_ - fVar77) - fVar54) - fVar116);
      }
      uVar50 = CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,fVar111))));
      fVar54 = (float)((ulonglong)uVar50 >> 0x20);
      fVar77 = fVar114 * (float)*(undefined8 *)(iVar43 + 0x8588) +
               fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x8588) >> 0x20) +
               fVar111 * (float)*(undefined8 *)(iVar43 + 0x8580) +
               fVar54 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x8580) >> 0x20);
      fVar116 = fVar114 * (float)*(undefined8 *)(iVar43 + 0x8598) +
                fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x8598) >> 0x20) +
                fVar111 * (float)*(undefined8 *)(iVar43 + 0x8590) +
                fVar54 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x8590) >> 0x20);
      fVar118 = fVar114 * (float)*(undefined8 *)(iVar43 + 0x85a8) +
                fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x85a8) >> 0x20) +
                fVar111 * (float)*(undefined8 *)(iVar43 + 0x85a0) +
                fVar54 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x85a0) >> 0x20);
      fVar54 = fVar114 * (float)*(undefined8 *)(iVar43 + 0x85b8) +
               fStack_124 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x85b8) >> 0x20) +
               fVar111 * (float)*(undefined8 *)(iVar43 + 0x85b0) +
               fVar54 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x85b0) >> 0x20);
      if (*piVar8 != 0) {
        puVar24 = (undefined8 *)(*piVar8 + uVar49 * 0x20);
        puVar24[1] = CONCAT44(fStack_124,fVar114);
        *puVar24 = uVar50;
        iVar18 = *piVar8 + uVar49 * 0x20;
        *(longlong *)(iVar18 + 0x18) = auVar65._8_8_;
        *(longlong *)(iVar18 + 0x10) = auVar65._0_8_;
      }
      uVar48 = 0;
      bStack_ae = (byte)((uint)fVar54 >> 0x10);
      bStack_ad = (byte)((uint)fVar54 >> 0x18);
      bStack_ac = SUB41(fVar54,0);
      bStack_ab = (byte)((uint)fVar54 >> 8);
      if (*pcVar4 != '\0') {
        puVar22 = (uint *)*piVar1;
        piVar15 = param_2 + 0x28;
        if ((char)*piVar7 == '\0') {
          piVar15 = (int *)0x0;
        }
        if (piVar15 == (int *)0x0) {
          uVar48 = 0;
          uVar47 = puVar22[1] & 0xfffff03f;
        }
        else {
          bVar96 = 0;
          bVar75 = 0;
          bVar97 = 0;
          bVar98 = 0;
          bVar99 = 0;
          bVar100 = 0;
          bVar101 = 0;
          bVar102 = 0;
          bVar103 = 0;
          bVar104 = 0;
          bVar105 = 0;
          bVar106 = 0;
          bVar107 = 0;
          bVar108 = 0;
          bVar109 = 0;
          bVar110 = 0;
          bStack_c8 = 0;
          bStack_c7 = 0;
          bStack_c6 = 0;
          bStack_c5 = 0;
          bStack_c4 = 0;
          bStack_c3 = 0;
          bStack_c2 = 0;
          bStack_c1 = 0;
          local_d0 = 0;
          bStack_cf = 0;
          bStack_ce = 0;
          bStack_cd = 0;
          bStack_cc = 0;
          bStack_cb = 0;
          bStack_ca = 0;
          bStack_c9 = 0;
          if ((*puVar45 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 2) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)piVar15 >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 2) * fVar114 +
                      (float)*(undefined8 *)piVar15 * fVar111;
            bVar107 = SUB41(fVar115,0);
            bVar75 = bVar107 & (byte)uVar50;
            bVar108 = (byte)((uint)fVar115 >> 8);
            bVar96 = bVar108 & (byte)((ulonglong)uVar50 >> 8);
            bVar109 = (byte)((uint)fVar115 >> 0x10);
            bVar97 = bVar109 & (byte)((ulonglong)uVar50 >> 0x10);
            bVar110 = (byte)((uint)fVar115 >> 0x18);
            bVar98 = bVar110 & (byte)((ulonglong)uVar50 >> 0x18);
            bVar99 = bVar107 & (byte)((ulonglong)uVar50 >> 0x20);
            bVar100 = bVar108 & (byte)((ulonglong)uVar50 >> 0x28);
            bVar101 = bVar109 & (byte)((ulonglong)uVar50 >> 0x30);
            bVar102 = bVar110 & (byte)((ulonglong)uVar50 >> 0x38);
            bVar103 = bVar107 & (byte)in_register_00005008;
            bVar104 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 8);
            bVar105 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bVar106 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bVar107 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bVar108 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bVar109 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bVar110 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          uStack_f8._0_2_ = CONCAT11(bVar104,bVar103);
          uStack_f8._0_3_ = CONCAT12(bVar105,(undefined2)uStack_f8);
          uStack_f8._0_4_ = (float)CONCAT13(bVar106,(undefined3)uStack_f8);
          uStack_f8._0_5_ = CONCAT14(bVar107,(float)uStack_f8);
          uStack_f8._0_6_ = CONCAT15(bVar108,(undefined5)uStack_f8);
          uStack_f8._0_7_ = CONCAT16(bVar109,(undefined6)uStack_f8);
          uStack_f8 = CONCAT17(bVar110,(undefined7)uStack_f8);
          local_100._0_2_ = CONCAT11(bVar96,bVar75);
          local_100._0_3_ = CONCAT12(bVar97,(undefined2)local_100);
          local_100._0_4_ = CONCAT13(bVar98,(undefined3)local_100);
          local_100._0_5_ = CONCAT14(bVar99,(undefined4)local_100);
          local_100._0_6_ = CONCAT15(bVar100,(undefined5)local_100);
          local_100._0_7_ = CONCAT16(bVar101,(undefined6)local_100);
          local_100 = CONCAT17(bVar102,(undefined7)local_100);
          if ((*puVar45 >> 1 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x1a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x18) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x1a) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x18) * fVar111;
            bVar53 = SUB41(fVar115,0);
            bVar72 = (byte)((uint)fVar115 >> 8);
            bVar73 = (byte)((uint)fVar115 >> 0x10);
            bVar74 = (byte)((uint)fVar115 >> 0x18);
            uStack_f8._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)in_register_00005008 >> 8) | bVar104,
                          bVar53 & (byte)in_register_00005008 | bVar103);
            uStack_f8._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bVar105,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bVar106,
                                 (undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bVar107,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bVar108,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bVar109,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bVar110,
                                 (undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)uVar50 >> 8) | bVar96,
                          bVar53 & (byte)uVar50 | bVar75);
            local_100._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)uVar50 >> 0x10) | bVar97,(undefined2)local_100)
            ;
            local_100._0_4_ =
                 CONCAT13(bVar74 & (byte)((ulonglong)uVar50 >> 0x18) | bVar98,(undefined3)local_100)
            ;
            local_100._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)uVar50 >> 0x20) | bVar99,(undefined4)local_100)
            ;
            local_100._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)uVar50 >> 0x28) | bVar100,(undefined5)local_100
                         );
            local_100._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)uVar50 >> 0x30) | bVar101,(undefined6)local_100
                         );
            local_100 = CONCAT17(bVar74 & (byte)((ulonglong)uVar50 >> 0x38) | bVar102,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 2 & 1) != 0) {
            uVar50 = FUN_1001f570();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x32) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x30) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x32) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x30) * fVar111;
            bVar96 = SUB41(fVar115,0);
            bVar107 = (byte)((uint)fVar115 >> 8);
            bVar75 = (byte)((uint)fVar115 >> 0x10);
            bVar108 = (byte)((uint)fVar115 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 3 & 1) != 0) {
            uVar50 = FUN_1001f580();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x4a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x48) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x4a) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x48) * fVar111;
            bVar96 = SUB41(fVar115,0);
            bVar107 = (byte)((uint)fVar115 >> 8);
            bVar75 = (byte)((uint)fVar115 >> 0x10);
            bVar108 = (byte)((uint)fVar115 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 4 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar115 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x62) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x60) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x62) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x60) * fVar111;
            bStack_c4 = SUB41(fVar115,0);
            local_d0 = bStack_c4 & (byte)uVar50;
            bStack_c3 = (byte)((uint)fVar115 >> 8);
            bStack_cf = bStack_c3 & (byte)((ulonglong)uVar50 >> 8);
            bStack_c2 = (byte)((uint)fVar115 >> 0x10);
            bStack_ce = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x10);
            bStack_c1 = (byte)((uint)fVar115 >> 0x18);
            bStack_cd = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x18);
            bStack_cc = bStack_c4 & (byte)((ulonglong)uVar50 >> 0x20);
            bStack_cb = bStack_c3 & (byte)((ulonglong)uVar50 >> 0x28);
            bStack_ca = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x30);
            bStack_c9 = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x38);
            bStack_c8 = bStack_c4 & (byte)in_register_00005008;
            bStack_c7 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 8);
            bStack_c6 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bStack_c5 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bStack_c4 = bStack_c4 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bStack_c3 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bStack_c2 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bStack_c1 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          if ((*puVar45 >> 5 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar111 = (float)((ulonglong)*(undefined8 *)(piVar15 + 0x7a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar15 + 0x78) >> 0x20) *
                      (float)(CONCAT17(uVar122,CONCAT16(uVar121,CONCAT15(uVar120,CONCAT14(uVar119,
                                                  fVar111)))) >> 0x20) +
                      (float)*(undefined8 *)(piVar15 + 0x7a) * fVar114 +
                      (float)*(undefined8 *)(piVar15 + 0x78) * fVar111;
            bVar96 = SUB41(fVar111,0);
            bVar107 = (byte)((uint)fVar111 >> 8);
            bVar75 = (byte)((uint)fVar111 >> 0x10);
            bVar108 = (byte)((uint)fVar111 >> 0x18);
            local_d0 = bVar96 & (byte)uVar50 | local_d0;
            bStack_cf = bVar107 & (byte)((ulonglong)uVar50 >> 8) | bStack_cf;
            bStack_ce = bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | bStack_ce;
            bStack_cd = bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | bStack_cd;
            bStack_cc = bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | bStack_cc;
            bStack_cb = bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | bStack_cb;
            bStack_ca = bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | bStack_ca;
            bStack_c9 = bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | bStack_c9;
            bStack_c8 = bVar96 & (byte)in_register_00005008 | bStack_c8;
            bStack_c7 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) | bStack_c7;
            bStack_c6 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bStack_c6;
            bStack_c5 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bStack_c5;
            bStack_c4 = bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bStack_c4;
            bStack_c3 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bStack_c3;
            bStack_c2 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bStack_c2;
            bStack_c1 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bStack_c1;
          }
          bVar96 = (byte)((ulonglong)_DAT_1012b120 >> 0x20);
          bVar107 = (byte)((ulonglong)uRam1012b128 >> 0x20);
          fVar114 = (float)CONCAT13(bStack_c5,CONCAT12(bStack_c6,CONCAT11(bStack_c7,bStack_c8)));
          fVar111 = (float)CONCAT13(bStack_cd,CONCAT12(bStack_ce,CONCAT11(bStack_cf,local_d0)));
          uVar48 = *(uint *)(&DAT_1012b8f0 +
                            ((byte)(-((float)(CONCAT17(bStack_c1,
                                                       CONCAT16(bStack_c2,
                                                                CONCAT15(bStack_c3,
                                                                         CONCAT14(bStack_c4,fVar114)
                                                                        ))) >> 0x20) < 0.0) &
                                    bVar107 | -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar111)))) >> 0x20) < 0.0) & bVar96 |
                                   -(fVar114 < 0.0) & (byte)uRam1012b128 |
                                   -(fVar111 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                   *(uint *)(&DAT_1012b900 +
                            ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                    -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                   -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                   -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4);
          uVar47 = (*(uint *)(&DAT_1012b900 +
                             ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                     -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                    -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                    -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4) |
                   0xc3f) & (*(uint *)(&DAT_1012b8f0 +
                                      ((byte)(-((float)(CONCAT17(bStack_c1,
                                                                 CONCAT16(bStack_c2,
                                                                          CONCAT15(bStack_c3,
                                                                                   CONCAT14(
                                                  bStack_c4,fVar114)))) >> 0x20) < 0.0) & bVar107 |
                                              -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar111)))) >> 0x20) < 0.0) & bVar96 |
                                             -(fVar114 < 0.0) & (byte)uRam1012b128 |
                                             -(fVar111 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                            0x3ff) & puVar22[1];
        }
        puVar46 = puVar22 + 1;
        *puVar46 = uVar47;
        uVar50 = FUN_1001f528();
        uVar47 = *(uint *)(&DAT_1012b8b0 +
                          ((byte)(-(fVar116 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                    fVar54 < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                  -(fVar77 * (float)((ulonglong)uVar50 >> 0x20) +
                                    (float)(CONCAT17(bStack_ad,
                                                     CONCAT16(bStack_ae,
                                                              CONCAT15(bStack_ab,
                                                                       CONCAT14(bStack_ac,fVar54))))
                                           >> 0x20) < 0.0) &
                                  (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                 -(fVar116 * (float)in_register_00005008 + fVar54 < 0.0) &
                                 (byte)uRam1012b128 |
                                 -(fVar77 * (float)uVar50 + fVar54 < 0.0) & (byte)_DAT_1012b120) &
                          0xf) * 4);
        *puVar46 = (uVar47 | 0x30) & *puVar46;
        uVar50 = FUN_1001f528();
        uVar48 = *(uint *)(&DAT_1012b8a0 +
                          ((byte)(-(fVar118 * (float)((ulonglong)in_register_00005008 >> 0x20) + 0.0
                                   < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                  -(fVar118 * (float)((ulonglong)uVar50 >> 0x20) + 0.0 < 0.0) &
                                  (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                 -(fVar118 * (float)in_register_00005008 + 0.0 < 0.0) &
                                 (byte)uRam1012b128 |
                                 -(fVar118 * (float)uVar50 + fVar54 < 0.0) & (byte)_DAT_1012b120) &
                          3) * 4) | uVar47 | uVar48;
        *puVar46 = (*(uint *)(&DAT_1012b8a0 +
                             ((byte)(-(fVar118 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                       0.0 < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                     -(fVar118 * (float)((ulonglong)uVar50 >> 0x20) + 0.0 < 0.0) &
                                     (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                    -(fVar118 * (float)in_register_00005008 + 0.0 < 0.0) &
                                    (byte)uRam1012b128 |
                                    -(fVar118 * (float)uVar50 + fVar54 < 0.0) & (byte)_DAT_1012b120)
                             & 3) * 4) | 0xf) & *puVar46;
        *puVar22 = uVar48 | *puVar22;
      }
      uVar51 = FUN_1001f540();
      uVar50 = in_register_00005008;
      uVar52 = FUN_1001f590();
      fVar77 = (float)CONCAT13((byte)((uint)fVar77 >> 0x18) & (byte)((ulonglong)uVar52 >> 0x18),
                               CONCAT12((byte)((uint)fVar77 >> 0x10) &
                                        (byte)((ulonglong)uVar52 >> 0x10),
                                        CONCAT11((byte)((uint)fVar77 >> 8) &
                                                 (byte)((ulonglong)uVar52 >> 8),
                                                 SUB41(fVar77,0) & (byte)uVar52)));
      auVar58._0_8_ =
           CONCAT17((byte)((uint)fVar116 >> 0x18) & (byte)((ulonglong)uVar52 >> 0x38),
                    CONCAT16((byte)((uint)fVar116 >> 0x10) & (byte)((ulonglong)uVar52 >> 0x30),
                             CONCAT15((byte)((uint)fVar116 >> 8) & (byte)((ulonglong)uVar52 >> 0x28)
                                      ,CONCAT14(SUB41(fVar116,0) & (byte)((ulonglong)uVar52 >> 0x20)
                                                ,fVar77))));
      auVar58[8] = SUB41(fVar118,0) & (byte)uVar50;
      auVar58[9] = (byte)((uint)fVar118 >> 8) & (byte)((ulonglong)uVar50 >> 8);
      auVar58[10] = (byte)((uint)fVar118 >> 0x10) & (byte)((ulonglong)uVar50 >> 0x10);
      auVar58[0xb] = (byte)((uint)fVar118 >> 0x18) & (byte)((ulonglong)uVar50 >> 0x18);
      auVar66[0xc] = bStack_ac & (byte)((ulonglong)uVar50 >> 0x20);
      auVar66._0_12_ = auVar58;
      auVar66[0xd] = bStack_ab & (byte)((ulonglong)uVar50 >> 0x28);
      auVar66[0xe] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x30);
      auVar66[0xf] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x38);
      auVar89._0_8_ =
           CONCAT44((((float)((ulonglong)auVar58._0_8_ >> 0x20) + (float)((ulonglong)uVar51 >> 0x20)
                     ) / (float)(CONCAT17(bStack_ad,
                                          CONCAT16(bStack_ae,
                                                   CONCAT15(bStack_ab,CONCAT14(bStack_ac,fVar54))))
                                >> 0x20)) * (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20),
                    ((fVar77 + (float)uVar51) / fVar54) * (float)*(undefined8 *)pfVar2 +
                    (float)*(undefined8 *)pfVar3);
      auVar89._8_4_ =
           ((auVar58._8_4_ + (float)in_register_00005008) / fVar54) *
           (float)*(undefined8 *)(param_2 + 0x1a) + (float)*(undefined8 *)(param_2 + 0x1e);
      auVar89._12_4_ =
           ((auVar66._12_4_ + (float)((ulonglong)in_register_00005008 >> 0x20)) / fVar54) *
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
      uVar50 = auVar89._8_8_;
      if (uVar49 == 0) {
        *(undefined8 *)(param_2 + 0x26) = uVar50;
        *(undefined8 *)*pauVar5 = auVar89._0_8_;
        *(undefined8 *)(param_2 + 0x22) = uVar50;
        *(undefined8 *)*pauVar6 = auVar89._0_8_;
      }
      else {
        auVar71 = NEON_fmin(*pauVar6,auVar89,4);
        *(longlong *)(param_2 + 0x22) = auVar71._8_8_;
        *(longlong *)*pauVar6 = auVar71._0_8_;
        auVar71 = NEON_fmax(*pauVar5,auVar89,4);
        *(longlong *)(param_2 + 0x26) = auVar71._8_8_;
        *(longlong *)*pauVar5 = auVar71._0_8_;
      }
      puVar24 = (undefined8 *)*piVar44;
      if (puVar24 != (undefined8 *)0x0) {
        if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar48 == 0)) {
          puVar24[1] = uVar50;
          *puVar24 = auVar89._0_8_;
        }
        else {
          *(float *)((int)puVar24 + 0xc) = auVar89._12_4_;
        }
        *piVar44 = param_2[0x15] + *piVar44;
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_4);
    break;
  default:
    if (param_4 == 0) goto LAB_1002f2e8;
    break;
  case 0x10:
    uVar49 = 0;
    if (param_4 == 0) goto LAB_1002f2e8;
    piVar15 = param_2 + 0x14;
    do {
      puVar24 = (undefined8 *)(*param_2 + uVar49 * param_2[6]);
      uVar50 = *puVar24;
      fVar54 = *(float *)(puVar24 + 1);
      if (*pcVar11 != '\0') {
        puVar24 = (undefined8 *)(*piVar10 + param_2[7] * uVar49);
        local_110 = *puVar24;
        uStack_108 = (ulonglong)*(uint *)(puVar24 + 1) | 0x3f80000000000000;
      }
      auVar67 = ZEXT116(0) << 8;
      uStack_e8 = 0;
      local_f0 = 0;
      bVar96 = *(byte *)(param_2[5] + uVar49 * param_2[10]);
      fVar77 = (float)uVar50;
      fVar116 = (float)((ulonglong)uVar50 >> 0x20);
      if (*pcVar9 != '\0') {
        puVar24 = (undefined8 *)(*(int *)(param_1 + 0xabc) + (bVar96 + 10) * 0x40);
        uStack_e8 = CONCAT44(fVar54 * (float)puVar24[7] +
                             (float)((ulonglong)puVar24[7] >> 0x20) * 1.0 +
                             fVar77 * (float)puVar24[6] +
                             fVar116 * (float)((ulonglong)puVar24[6] >> 0x20),
                             fVar54 * (float)puVar24[5] +
                             (float)((ulonglong)puVar24[5] >> 0x20) * 1.0 +
                             fVar77 * (float)puVar24[4] +
                             fVar116 * (float)((ulonglong)puVar24[4] >> 0x20));
        local_f0 = CONCAT44(fVar54 * (float)puVar24[3] +
                            (float)((ulonglong)puVar24[3] >> 0x20) * 1.0 +
                            fVar77 * (float)puVar24[2] +
                            fVar116 * (float)((ulonglong)puVar24[2] >> 0x20),
                            fVar54 * (float)puVar24[1] +
                            (float)((ulonglong)puVar24[1] >> 0x20) * 1.0 +
                            fVar77 * (float)*puVar24 +
                            fVar116 * (float)((ulonglong)*puVar24 >> 0x20));
      }
      if (*pcVar11 != '\0') {
        FUN_10024198(param_1,bVar96 + 10);
        puVar24 = (undefined8 *)(*(int *)(param_1 + 0xabc) + (bVar96 + 0x114) * 0x40);
        fVar118 = (float)local_110;
        fVar111 = (float)((ulonglong)local_110 >> 0x20);
        fVar114 = (float)uStack_108;
        fVar115 = (float)(uStack_108 >> 0x20);
        auVar67._0_4_ =
             fVar114 * (float)puVar24[1] + fVar115 * (float)((ulonglong)puVar24[1] >> 0x20) +
             fVar118 * (float)*puVar24 + fVar111 * (float)((ulonglong)*puVar24 >> 0x20);
        auVar67._4_4_ =
             fVar114 * (float)puVar24[3] + fVar115 * (float)((ulonglong)puVar24[3] >> 0x20) +
             fVar118 * (float)puVar24[2] + fVar111 * (float)((ulonglong)puVar24[2] >> 0x20);
        auVar67._8_4_ =
             fVar114 * (float)puVar24[5] + fVar115 * (float)((ulonglong)puVar24[5] >> 0x20) +
             fVar118 * (float)puVar24[4] + fVar111 * (float)((ulonglong)puVar24[4] >> 0x20);
        auVar67._12_4_ =
             fVar114 * (float)puVar24[7] + fVar115 * (float)((ulonglong)puVar24[7] >> 0x20) +
             fVar118 * (float)puVar24[6] + fVar111 * (float)((ulonglong)puVar24[6] >> 0x20);
      }
      puVar24 = (undefined8 *)*piVar44;
      fVar118 = fVar54 * (float)puVar24[1] + (float)((ulonglong)puVar24[1] >> 0x20) * 1.0 +
                fVar77 * (float)*puVar24 + fVar116 * (float)((ulonglong)*puVar24 >> 0x20);
      fVar111 = fVar54 * (float)puVar24[3] + (float)((ulonglong)puVar24[3] >> 0x20) * 1.0 +
                fVar77 * (float)puVar24[2] + fVar116 * (float)((ulonglong)puVar24[2] >> 0x20);
      fVar114 = fVar54 * (float)puVar24[5] + (float)((ulonglong)puVar24[5] >> 0x20) * 1.0 +
                fVar77 * (float)puVar24[4] + fVar116 * (float)((ulonglong)puVar24[4] >> 0x20);
      fVar54 = fVar54 * (float)puVar24[7] + (float)((ulonglong)puVar24[7] >> 0x20) * 1.0 +
               fVar77 * (float)puVar24[6] + fVar116 * (float)((ulonglong)puVar24[6] >> 0x20);
      uStack_12c = SUB41(fVar111,0);
      uStack_12b = (undefined1)((uint)fVar111 >> 8);
      uStack_12a = (undefined1)((uint)fVar111 >> 0x10);
      uStack_129 = (undefined1)((uint)fVar111 >> 0x18);
      if (*piVar8 != 0) {
        puVar24 = (undefined8 *)(*piVar8 + uVar49 * 0x20);
        puVar24[1] = uStack_e8;
        *puVar24 = local_f0;
        iVar18 = *piVar8 + uVar49 * 0x20;
        *(longlong *)(iVar18 + 0x18) = auVar67._8_8_;
        *(longlong *)(iVar18 + 0x10) = auVar67._0_8_;
      }
      uVar48 = 0;
      bStack_ae = (byte)((uint)fVar54 >> 0x10);
      bStack_ad = (byte)((uint)fVar54 >> 0x18);
      bStack_ac = SUB41(fVar54,0);
      bStack_ab = (byte)((uint)fVar54 >> 8);
      if (*pcVar4 != '\0') {
        puVar22 = (uint *)*piVar1;
        piVar16 = param_2 + 0x28;
        if ((char)*piVar7 == '\0') {
          piVar16 = (int *)0x0;
        }
        if (piVar16 == (int *)0x0) {
          uVar48 = 0;
          uVar47 = puVar22[1] & 0xfffff03f;
        }
        else {
          bVar96 = 0;
          bVar75 = 0;
          bVar97 = 0;
          bVar98 = 0;
          bVar99 = 0;
          bVar100 = 0;
          bVar101 = 0;
          bVar102 = 0;
          bVar103 = 0;
          bVar104 = 0;
          bVar105 = 0;
          bVar106 = 0;
          bVar107 = 0;
          bVar108 = 0;
          bVar109 = 0;
          bVar110 = 0;
          bStack_c8 = 0;
          bStack_c7 = 0;
          bStack_c6 = 0;
          bStack_c5 = 0;
          bStack_c4 = 0;
          bStack_c3 = 0;
          bStack_c2 = 0;
          bStack_c1 = 0;
          local_d0 = 0;
          bStack_cf = 0;
          bStack_ce = 0;
          bStack_cd = 0;
          bStack_cc = 0;
          bStack_cb = 0;
          bStack_ca = 0;
          bStack_c9 = 0;
          fVar115 = (float)((ulonglong)uStack_e8 >> 0x20);
          fVar77 = (float)local_f0;
          fVar116 = (float)((ulonglong)local_f0 >> 0x20);
          if ((*puVar45 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 2) >> 0x20) * fVar115 +
                      (float)((ulonglong)*(undefined8 *)piVar16 >> 0x20) * fVar116 +
                      (float)*(undefined8 *)(piVar16 + 2) * (float)uStack_e8 +
                      (float)*(undefined8 *)piVar16 * fVar77;
            bVar107 = SUB41(fVar117,0);
            bVar75 = bVar107 & (byte)uVar50;
            bVar108 = (byte)((uint)fVar117 >> 8);
            bVar96 = bVar108 & (byte)((ulonglong)uVar50 >> 8);
            bVar109 = (byte)((uint)fVar117 >> 0x10);
            bVar97 = bVar109 & (byte)((ulonglong)uVar50 >> 0x10);
            bVar110 = (byte)((uint)fVar117 >> 0x18);
            bVar98 = bVar110 & (byte)((ulonglong)uVar50 >> 0x18);
            bVar99 = bVar107 & (byte)((ulonglong)uVar50 >> 0x20);
            bVar100 = bVar108 & (byte)((ulonglong)uVar50 >> 0x28);
            bVar101 = bVar109 & (byte)((ulonglong)uVar50 >> 0x30);
            bVar102 = bVar110 & (byte)((ulonglong)uVar50 >> 0x38);
            bVar103 = bVar107 & (byte)in_register_00005008;
            bVar104 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 8);
            bVar105 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bVar106 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bVar107 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bVar108 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bVar109 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bVar110 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          uStack_f8._0_2_ = CONCAT11(bVar104,bVar103);
          uStack_f8._0_3_ = CONCAT12(bVar105,(undefined2)uStack_f8);
          uStack_f8._0_4_ = (float)CONCAT13(bVar106,(undefined3)uStack_f8);
          uStack_f8._0_5_ = CONCAT14(bVar107,(float)uStack_f8);
          uStack_f8._0_6_ = CONCAT15(bVar108,(undefined5)uStack_f8);
          uStack_f8._0_7_ = CONCAT16(bVar109,(undefined6)uStack_f8);
          uStack_f8 = CONCAT17(bVar110,(undefined7)uStack_f8);
          local_100._0_2_ = CONCAT11(bVar96,bVar75);
          local_100._0_3_ = CONCAT12(bVar97,(undefined2)local_100);
          local_100._0_4_ = CONCAT13(bVar98,(undefined3)local_100);
          local_100._0_5_ = CONCAT14(bVar99,(undefined4)local_100);
          local_100._0_6_ = CONCAT15(bVar100,(undefined5)local_100);
          local_100._0_7_ = CONCAT16(bVar101,(undefined6)local_100);
          local_100 = CONCAT17(bVar102,(undefined7)local_100);
          if ((*puVar45 >> 1 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x1a) >> 0x20) * fVar115 +
                      (float)((ulonglong)*(undefined8 *)(piVar16 + 0x18) >> 0x20) * fVar116 +
                      (float)*(undefined8 *)(piVar16 + 0x1a) * (float)uStack_e8 +
                      (float)*(undefined8 *)(piVar16 + 0x18) * fVar77;
            bVar53 = SUB41(fVar117,0);
            bVar72 = (byte)((uint)fVar117 >> 8);
            bVar73 = (byte)((uint)fVar117 >> 0x10);
            bVar74 = (byte)((uint)fVar117 >> 0x18);
            uStack_f8._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)in_register_00005008 >> 8) | bVar104,
                          bVar53 & (byte)in_register_00005008 | bVar103);
            uStack_f8._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bVar105,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bVar106,
                                 (undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bVar107,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bVar108,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bVar109,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bVar110,
                                 (undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)uVar50 >> 8) | bVar96,
                          bVar53 & (byte)uVar50 | bVar75);
            local_100._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)uVar50 >> 0x10) | bVar97,(undefined2)local_100)
            ;
            local_100._0_4_ =
                 CONCAT13(bVar74 & (byte)((ulonglong)uVar50 >> 0x18) | bVar98,(undefined3)local_100)
            ;
            local_100._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)uVar50 >> 0x20) | bVar99,(undefined4)local_100)
            ;
            local_100._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)uVar50 >> 0x28) | bVar100,(undefined5)local_100
                         );
            local_100._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)uVar50 >> 0x30) | bVar101,(undefined6)local_100
                         );
            local_100 = CONCAT17(bVar74 & (byte)((ulonglong)uVar50 >> 0x38) | bVar102,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 2 & 1) != 0) {
            uVar50 = FUN_1001f570();
            fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x32) >> 0x20) * fVar115 +
                      (float)((ulonglong)*(undefined8 *)(piVar16 + 0x30) >> 0x20) * fVar116 +
                      (float)*(undefined8 *)(piVar16 + 0x32) * (float)uStack_e8 +
                      (float)*(undefined8 *)(piVar16 + 0x30) * fVar77;
            bVar96 = SUB41(fVar117,0);
            bVar107 = (byte)((uint)fVar117 >> 8);
            bVar75 = (byte)((uint)fVar117 >> 0x10);
            bVar108 = (byte)((uint)fVar117 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 3 & 1) != 0) {
            uVar50 = FUN_1001f580();
            fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x4a) >> 0x20) * fVar115 +
                      (float)((ulonglong)*(undefined8 *)(piVar16 + 0x48) >> 0x20) * fVar116 +
                      (float)*(undefined8 *)(piVar16 + 0x4a) * (float)uStack_e8 +
                      (float)*(undefined8 *)(piVar16 + 0x48) * fVar77;
            bVar96 = SUB41(fVar117,0);
            bVar107 = (byte)((uint)fVar117 >> 8);
            bVar75 = (byte)((uint)fVar117 >> 0x10);
            bVar108 = (byte)((uint)fVar117 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 4 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar117 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x62) >> 0x20) * fVar115 +
                      (float)((ulonglong)*(undefined8 *)(piVar16 + 0x60) >> 0x20) * fVar116 +
                      (float)*(undefined8 *)(piVar16 + 0x62) * (float)uStack_e8 +
                      (float)*(undefined8 *)(piVar16 + 0x60) * fVar77;
            bStack_c4 = SUB41(fVar117,0);
            local_d0 = bStack_c4 & (byte)uVar50;
            bStack_c3 = (byte)((uint)fVar117 >> 8);
            bStack_cf = bStack_c3 & (byte)((ulonglong)uVar50 >> 8);
            bStack_c2 = (byte)((uint)fVar117 >> 0x10);
            bStack_ce = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x10);
            bStack_c1 = (byte)((uint)fVar117 >> 0x18);
            bStack_cd = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x18);
            bStack_cc = bStack_c4 & (byte)((ulonglong)uVar50 >> 0x20);
            bStack_cb = bStack_c3 & (byte)((ulonglong)uVar50 >> 0x28);
            bStack_ca = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x30);
            bStack_c9 = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x38);
            bStack_c8 = bStack_c4 & (byte)in_register_00005008;
            bStack_c7 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 8);
            bStack_c6 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bStack_c5 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bStack_c4 = bStack_c4 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bStack_c3 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bStack_c2 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bStack_c1 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          if ((*puVar45 >> 5 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar77 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x7a) >> 0x20) * fVar115 +
                     (float)((ulonglong)*(undefined8 *)(piVar16 + 0x78) >> 0x20) * fVar116 +
                     (float)*(undefined8 *)(piVar16 + 0x7a) * (float)uStack_e8 +
                     (float)*(undefined8 *)(piVar16 + 0x78) * fVar77;
            bVar96 = SUB41(fVar77,0);
            bVar107 = (byte)((uint)fVar77 >> 8);
            bVar75 = (byte)((uint)fVar77 >> 0x10);
            bVar108 = (byte)((uint)fVar77 >> 0x18);
            local_d0 = bVar96 & (byte)uVar50 | local_d0;
            bStack_cf = bVar107 & (byte)((ulonglong)uVar50 >> 8) | bStack_cf;
            bStack_ce = bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | bStack_ce;
            bStack_cd = bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | bStack_cd;
            bStack_cc = bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | bStack_cc;
            bStack_cb = bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | bStack_cb;
            bStack_ca = bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | bStack_ca;
            bStack_c9 = bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | bStack_c9;
            bStack_c8 = bVar96 & (byte)in_register_00005008 | bStack_c8;
            bStack_c7 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) | bStack_c7;
            bStack_c6 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bStack_c6;
            bStack_c5 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bStack_c5;
            bStack_c4 = bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bStack_c4;
            bStack_c3 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bStack_c3;
            bStack_c2 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bStack_c2;
            bStack_c1 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bStack_c1;
          }
          bVar96 = (byte)((ulonglong)_DAT_1012b120 >> 0x20);
          bVar107 = (byte)((ulonglong)uRam1012b128 >> 0x20);
          fVar116 = (float)CONCAT13(bStack_c5,CONCAT12(bStack_c6,CONCAT11(bStack_c7,bStack_c8)));
          fVar77 = (float)CONCAT13(bStack_cd,CONCAT12(bStack_ce,CONCAT11(bStack_cf,local_d0)));
          uVar48 = *(uint *)(&DAT_1012b8f0 +
                            ((byte)(-((float)(CONCAT17(bStack_c1,
                                                       CONCAT16(bStack_c2,
                                                                CONCAT15(bStack_c3,
                                                                         CONCAT14(bStack_c4,fVar116)
                                                                        ))) >> 0x20) < 0.0) &
                                    bVar107 | -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar77)))) >> 0x20) < 0.0) & bVar96 |
                                   -(fVar116 < 0.0) & (byte)uRam1012b128 |
                                   -(fVar77 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                   *(uint *)(&DAT_1012b900 +
                            ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                    -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                   -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                   -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4);
          uVar47 = (*(uint *)(&DAT_1012b900 +
                             ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                     -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                    -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                    -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4) |
                   0xc3f) & (*(uint *)(&DAT_1012b8f0 +
                                      ((byte)(-((float)(CONCAT17(bStack_c1,
                                                                 CONCAT16(bStack_c2,
                                                                          CONCAT15(bStack_c3,
                                                                                   CONCAT14(
                                                  bStack_c4,fVar116)))) >> 0x20) < 0.0) & bVar107 |
                                              -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar77)))) >> 0x20) < 0.0) & bVar96 |
                                             -(fVar116 < 0.0) & (byte)uRam1012b128 |
                                             -(fVar77 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                            0x3ff) & puVar22[1];
        }
        puVar46 = puVar22 + 1;
        *puVar46 = uVar47;
        uVar50 = FUN_1001f528();
        fVar77 = (float)(CONCAT17(uStack_129,
                                  CONCAT16(uStack_12a,
                                           CONCAT15(uStack_12b,CONCAT14(uStack_12c,fVar118)))) >>
                        0x20);
        uVar47 = *(uint *)(&DAT_1012b8b0 +
                          ((byte)(-(fVar77 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                    fVar54 < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                  -(fVar118 * (float)((ulonglong)uVar50 >> 0x20) +
                                    (float)(CONCAT17(bStack_ad,
                                                     CONCAT16(bStack_ae,
                                                              CONCAT15(bStack_ab,
                                                                       CONCAT14(bStack_ac,fVar54))))
                                           >> 0x20) < 0.0) &
                                  (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                 -(fVar77 * (float)in_register_00005008 + fVar54 < 0.0) &
                                 (byte)uRam1012b128 |
                                 -(fVar118 * (float)uVar50 + fVar54 < 0.0) & (byte)_DAT_1012b120) &
                          0xf) * 4);
        *puVar46 = (uVar47 | 0x30) & *puVar46;
        uVar50 = FUN_1001f528();
        uVar48 = *(uint *)(&DAT_1012b8a0 +
                          ((byte)(-(fVar114 * (float)((ulonglong)in_register_00005008 >> 0x20) + 0.0
                                   < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                  -(fVar114 * (float)((ulonglong)uVar50 >> 0x20) + 0.0 < 0.0) &
                                  (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                 -(fVar114 * (float)in_register_00005008 + 0.0 < 0.0) &
                                 (byte)uRam1012b128 |
                                 -(fVar114 * (float)uVar50 + fVar54 < 0.0) & (byte)_DAT_1012b120) &
                          3) * 4) | uVar47 | uVar48;
        *puVar46 = (*(uint *)(&DAT_1012b8a0 +
                             ((byte)(-(fVar114 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                       0.0 < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                     -(fVar114 * (float)((ulonglong)uVar50 >> 0x20) + 0.0 < 0.0) &
                                     (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                    -(fVar114 * (float)in_register_00005008 + 0.0 < 0.0) &
                                    (byte)uRam1012b128 |
                                    -(fVar114 * (float)uVar50 + fVar54 < 0.0) & (byte)_DAT_1012b120)
                             & 3) * 4) | 0xf) & *puVar46;
        *puVar22 = uVar48 | *puVar22;
      }
      uVar50 = FUN_1001f540();
      fStack_128._0_1_ = SUB41(fVar114,0);
      auVar90._0_8_ =
           CONCAT44(((fVar111 + (float)((ulonglong)uVar50 >> 0x20)) /
                    (float)(CONCAT17(bStack_ad,
                                     CONCAT16(bStack_ae,
                                              CONCAT15(bStack_ab,CONCAT14(bStack_ac,fVar54)))) >>
                           0x20)) * (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20),
                    ((fVar118 + (float)uVar50) / fVar54) * (float)*(undefined8 *)pfVar2 +
                    (float)*(undefined8 *)pfVar3);
      auVar90._8_4_ =
           (((float)(CONCAT17((char)((uint)fVar114 >> 0x18),
                              CONCAT16((char)((uint)fVar114 >> 0x10),
                                       CONCAT15((char)((uint)fVar114 >> 8),
                                                CONCAT14(fStack_128._0_1_,fVar111)))) >> 0x20) +
            (float)in_register_00005008) / fVar54) * (float)*(undefined8 *)(param_2 + 0x1a) +
           (float)*(undefined8 *)(param_2 + 0x1e);
      auVar90._12_4_ =
           (((float)((ulonglong)in_register_00005008 >> 0x20) + 0.0) / fVar54) *
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
      uVar50 = auVar90._8_8_;
      if (uVar49 == 0) {
        *(undefined8 *)(param_2 + 0x26) = uVar50;
        *(undefined8 *)*pauVar5 = auVar90._0_8_;
        *(undefined8 *)(param_2 + 0x22) = uVar50;
        *(undefined8 *)*pauVar6 = auVar90._0_8_;
      }
      else {
        auVar71 = NEON_fmin(*pauVar6,auVar90,4);
        *(longlong *)(param_2 + 0x22) = auVar71._8_8_;
        *(longlong *)*pauVar6 = auVar71._0_8_;
        auVar71 = NEON_fmax(*pauVar5,auVar90,4);
        *(longlong *)(param_2 + 0x26) = auVar71._8_8_;
        *(longlong *)*pauVar5 = auVar71._0_8_;
      }
      puVar24 = (undefined8 *)*piVar15;
      if (puVar24 != (undefined8 *)0x0) {
        if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar48 == 0)) {
          puVar24[1] = uVar50;
          *puVar24 = auVar90._0_8_;
        }
        else {
          *(float *)((int)puVar24 + 0xc) = auVar90._12_4_;
        }
        *piVar15 = param_2[0x15] + *piVar15;
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_4);
    break;
  case 0x20:
    uVar49 = 0;
    if (param_4 == 0) goto LAB_1002f2e8;
    piVar15 = param_2 + 0x14;
    do {
      puVar24 = (undefined8 *)(*param_2 + uVar49 * param_2[6]);
      uVar50 = *puVar24;
      cVar40 = *pcVar11;
      if (cVar40 != '\0') {
        puVar25 = (undefined8 *)(*piVar10 + param_2[7] * uVar49);
        local_110 = *puVar25;
        uStack_108 = (ulonglong)*(uint *)(puVar25 + 1) | 0x3f80000000000000;
      }
      fStack_128 = 0.0;
      fStack_124 = 0.0;
      local_130 = 0;
      uStack_12e = 0;
      uStack_12d = 0;
      uStack_12c = 0;
      uStack_12b = 0;
      uStack_12a = 0;
      uStack_129 = 0;
      auVar68 = ZEXT116(0) << 8;
      puVar25 = (undefined8 *)(param_2[3] + param_2[8] * uVar49);
      uVar51 = *puVar25;
      fVar127 = (float)*(undefined8 *)(param_2 + 0x42);
      fVar128 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x42) >> 0x20);
      fVar125 = (float)*(undefined8 *)(param_2 + 0x40);
      fVar126 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
      fVar54 = (float)*(undefined8 *)(param_2 + 0x44);
      fVar77 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x44) >> 0x20);
      fVar116 = (float)*(undefined8 *)(param_2 + 0x46);
      fVar118 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x46) >> 0x20);
      fVar111 = (float)uVar50 * fVar54 + (float)uVar51 * fVar125;
      fVar114 = (float)((ulonglong)uVar50 >> 0x20) * fVar77 +
                (float)((ulonglong)uVar51 >> 0x20) * fVar126;
      fVar115 = *(float *)(puVar24 + 1) * fVar116 + *(float *)(puVar25 + 1) * fVar127;
      fVar117 = fVar118 * 1.0 + fVar128 * 1.0;
      if (cVar40 != '\0') {
        puVar24 = (undefined8 *)(param_2[4] + param_2[9] * uVar49);
        uVar50 = *puVar24;
        uStack_108 = CONCAT44((float)(uStack_108 >> 0x20) * fVar118 + fVar128 * 1.0,
                              (float)uStack_108 * fVar116 + *(float *)(puVar24 + 1) * fVar127);
        local_110 = CONCAT44((float)((ulonglong)local_110 >> 0x20) * fVar77 +
                             (float)((ulonglong)uVar50 >> 0x20) * fVar126,
                             (float)local_110 * fVar54 + (float)uVar50 * fVar125);
      }
      if (*pcVar9 != '\0') {
        iVar18 = *(int *)(param_1 + 0xabc);
        fVar54 = fVar115 * (float)*(undefined8 *)(iVar18 + 0x288) +
                 fVar117 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x288) >> 0x20) +
                 fVar111 * (float)*(undefined8 *)(iVar18 + 0x280) +
                 fVar114 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x280) >> 0x20);
        fVar77 = fVar115 * (float)*(undefined8 *)(iVar18 + 0x298) +
                 fVar117 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x298) >> 0x20) +
                 fVar111 * (float)*(undefined8 *)(iVar18 + 0x290) +
                 fVar114 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x290) >> 0x20);
        fStack_128 = fVar115 * (float)*(undefined8 *)(iVar18 + 0x2a8) +
                     fVar117 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x2a8) >> 0x20) +
                     fVar111 * (float)*(undefined8 *)(iVar18 + 0x2a0) +
                     fVar114 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x2a0) >> 0x20);
        fStack_124 = fVar115 * (float)*(undefined8 *)(iVar18 + 0x2b8) +
                     fVar117 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x2b8) >> 0x20) +
                     fVar111 * (float)*(undefined8 *)(iVar18 + 0x2b0) +
                     fVar114 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x2b0) >> 0x20);
        local_130 = SUB42(fVar54,0);
        uStack_12e = (undefined1)((uint)fVar54 >> 0x10);
        uStack_12d = (undefined1)((uint)fVar54 >> 0x18);
        uStack_12c = SUB41(fVar77,0);
        uStack_12b = (undefined1)((uint)fVar77 >> 8);
        uStack_12a = (undefined1)((uint)fVar77 >> 0x10);
        uStack_129 = (undefined1)((uint)fVar77 >> 0x18);
      }
      if (cVar40 != '\0') {
        FUN_10024198(param_1,10);
        iVar18 = *(int *)(param_1 + 0xabc);
        fVar54 = (float)local_110;
        fVar77 = (float)((ulonglong)local_110 >> 0x20);
        fVar116 = (float)uStack_108;
        fVar118 = (float)(uStack_108 >> 0x20);
        auVar68._0_4_ =
             fVar116 * (float)*(undefined8 *)(iVar18 + 0x4508) +
             fVar118 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4508) >> 0x20) +
             fVar54 * (float)*(undefined8 *)(iVar18 + 0x4500) +
             fVar77 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4500) >> 0x20);
        auVar68._4_4_ =
             fVar116 * (float)*(undefined8 *)(iVar18 + 0x4518) +
             fVar118 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4518) >> 0x20) +
             fVar54 * (float)*(undefined8 *)(iVar18 + 0x4510) +
             fVar77 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4510) >> 0x20);
        auVar68._8_4_ =
             fVar116 * (float)*(undefined8 *)(iVar18 + 0x4528) +
             fVar118 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4528) >> 0x20) +
             fVar54 * (float)*(undefined8 *)(iVar18 + 0x4520) +
             fVar77 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4520) >> 0x20);
        auVar68._12_4_ =
             fVar116 * (float)*(undefined8 *)(iVar18 + 0x4538) +
             fVar118 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4538) >> 0x20) +
             fVar54 * (float)*(undefined8 *)(iVar18 + 0x4530) +
             fVar77 * (float)((ulonglong)*(undefined8 *)(iVar18 + 0x4530) >> 0x20);
      }
      puVar24 = (undefined8 *)*piVar44;
      fVar54 = fVar115 * (float)puVar24[1] + fVar117 * (float)((ulonglong)puVar24[1] >> 0x20) +
               fVar111 * (float)*puVar24 + fVar114 * (float)((ulonglong)*puVar24 >> 0x20);
      fVar77 = fVar115 * (float)puVar24[3] + fVar117 * (float)((ulonglong)puVar24[3] >> 0x20) +
               fVar111 * (float)puVar24[2] + fVar114 * (float)((ulonglong)puVar24[2] >> 0x20);
      fVar116 = fVar115 * (float)puVar24[5] + fVar117 * (float)((ulonglong)puVar24[5] >> 0x20) +
                fVar111 * (float)puVar24[4] + fVar114 * (float)((ulonglong)puVar24[4] >> 0x20);
      fVar118 = fVar115 * (float)puVar24[7] + fVar117 * (float)((ulonglong)puVar24[7] >> 0x20) +
                fVar111 * (float)puVar24[6] + fVar114 * (float)((ulonglong)puVar24[6] >> 0x20);
      if (*piVar8 != 0) {
        puVar24 = (undefined8 *)(*piVar8 + uVar49 * 0x20);
        puVar24[1] = CONCAT44(fStack_124,fStack_128);
        *puVar24 = CONCAT17(uStack_129,
                            CONCAT16(uStack_12a,
                                     CONCAT15(uStack_12b,
                                              CONCAT14(uStack_12c,
                                                       CONCAT13(uStack_12d,
                                                                CONCAT12(uStack_12e,local_130))))));
        iVar18 = *piVar8 + uVar49 * 0x20;
        *(longlong *)(iVar18 + 0x18) = auVar68._8_8_;
        *(longlong *)(iVar18 + 0x10) = auVar68._0_8_;
      }
      uVar48 = 0;
      bStack_ae = (byte)((uint)fVar118 >> 0x10);
      bStack_ad = (byte)((uint)fVar118 >> 0x18);
      bStack_ac = SUB41(fVar118,0);
      bStack_ab = (byte)((uint)fVar118 >> 8);
      if (*pcVar4 != '\0') {
        puVar22 = (uint *)*piVar1;
        piVar16 = param_2 + 0x28;
        if ((char)*piVar7 == '\0') {
          piVar16 = (int *)0x0;
        }
        if (piVar16 == (int *)0x0) {
          uVar48 = 0;
          uVar47 = puVar22[1] & 0xfffff03f;
        }
        else {
          bVar96 = 0;
          bVar75 = 0;
          bVar97 = 0;
          bVar98 = 0;
          bVar99 = 0;
          bVar100 = 0;
          bVar101 = 0;
          bVar102 = 0;
          bVar103 = 0;
          bVar104 = 0;
          bVar105 = 0;
          bVar106 = 0;
          bVar107 = 0;
          bVar108 = 0;
          bVar109 = 0;
          bVar110 = 0;
          bStack_c8 = 0;
          bStack_c7 = 0;
          bStack_c6 = 0;
          bStack_c5 = 0;
          bStack_c4 = 0;
          bStack_c3 = 0;
          bStack_c2 = 0;
          bStack_c1 = 0;
          local_d0 = 0;
          bStack_cf = 0;
          bStack_ce = 0;
          bStack_cd = 0;
          bStack_cc = 0;
          bStack_cb = 0;
          bStack_ca = 0;
          bStack_c9 = 0;
          if ((*puVar45 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar111 = (float)CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130));
            fVar111 = (float)((ulonglong)*(undefined8 *)(piVar16 + 2) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)piVar16 >> 0x20) *
                      (float)(CONCAT17(uStack_129,
                                       CONCAT16(uStack_12a,
                                                CONCAT15(uStack_12b,CONCAT14(uStack_12c,fVar111))))
                             >> 0x20) +
                      (float)*(undefined8 *)(piVar16 + 2) * fStack_128 +
                      (float)*(undefined8 *)piVar16 * fVar111;
            bVar107 = SUB41(fVar111,0);
            bVar75 = bVar107 & (byte)uVar50;
            bVar108 = (byte)((uint)fVar111 >> 8);
            bVar96 = bVar108 & (byte)((ulonglong)uVar50 >> 8);
            bVar109 = (byte)((uint)fVar111 >> 0x10);
            bVar97 = bVar109 & (byte)((ulonglong)uVar50 >> 0x10);
            bVar110 = (byte)((uint)fVar111 >> 0x18);
            bVar98 = bVar110 & (byte)((ulonglong)uVar50 >> 0x18);
            bVar99 = bVar107 & (byte)((ulonglong)uVar50 >> 0x20);
            bVar100 = bVar108 & (byte)((ulonglong)uVar50 >> 0x28);
            bVar101 = bVar109 & (byte)((ulonglong)uVar50 >> 0x30);
            bVar102 = bVar110 & (byte)((ulonglong)uVar50 >> 0x38);
            bVar103 = bVar107 & (byte)in_register_00005008;
            bVar104 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 8);
            bVar105 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bVar106 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bVar107 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bVar108 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bVar109 = bVar109 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bVar110 = bVar110 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          uStack_f8._0_2_ = CONCAT11(bVar104,bVar103);
          uStack_f8._0_3_ = CONCAT12(bVar105,(undefined2)uStack_f8);
          uStack_f8._0_4_ = (float)CONCAT13(bVar106,(undefined3)uStack_f8);
          uStack_f8._0_5_ = CONCAT14(bVar107,(float)uStack_f8);
          uStack_f8._0_6_ = CONCAT15(bVar108,(undefined5)uStack_f8);
          uStack_f8._0_7_ = CONCAT16(bVar109,(undefined6)uStack_f8);
          uStack_f8 = CONCAT17(bVar110,(undefined7)uStack_f8);
          local_100._0_2_ = CONCAT11(bVar96,bVar75);
          local_100._0_3_ = CONCAT12(bVar97,(undefined2)local_100);
          local_100._0_4_ = CONCAT13(bVar98,(undefined3)local_100);
          local_100._0_5_ = CONCAT14(bVar99,(undefined4)local_100);
          local_100._0_6_ = CONCAT15(bVar100,(undefined5)local_100);
          local_100._0_7_ = CONCAT16(bVar101,(undefined6)local_100);
          local_100 = CONCAT17(bVar102,(undefined7)local_100);
          if ((*puVar45 >> 1 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar111 = (float)CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130));
            fVar111 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x1a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar16 + 0x18) >> 0x20) *
                      (float)(CONCAT17(uStack_129,
                                       CONCAT16(uStack_12a,
                                                CONCAT15(uStack_12b,CONCAT14(uStack_12c,fVar111))))
                             >> 0x20) +
                      (float)*(undefined8 *)(piVar16 + 0x1a) * fStack_128 +
                      (float)*(undefined8 *)(piVar16 + 0x18) * fVar111;
            bVar53 = SUB41(fVar111,0);
            bVar72 = (byte)((uint)fVar111 >> 8);
            bVar73 = (byte)((uint)fVar111 >> 0x10);
            bVar74 = (byte)((uint)fVar111 >> 0x18);
            uStack_f8._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)in_register_00005008 >> 8) | bVar104,
                          bVar53 & (byte)in_register_00005008 | bVar103);
            uStack_f8._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bVar105,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bVar106,
                                 (undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bVar107,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bVar108,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bVar109,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar74 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bVar110,
                                 (undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar72 & (byte)((ulonglong)uVar50 >> 8) | bVar96,
                          bVar53 & (byte)uVar50 | bVar75);
            local_100._0_3_ =
                 CONCAT12(bVar73 & (byte)((ulonglong)uVar50 >> 0x10) | bVar97,(undefined2)local_100)
            ;
            local_100._0_4_ =
                 CONCAT13(bVar74 & (byte)((ulonglong)uVar50 >> 0x18) | bVar98,(undefined3)local_100)
            ;
            local_100._0_5_ =
                 CONCAT14(bVar53 & (byte)((ulonglong)uVar50 >> 0x20) | bVar99,(undefined4)local_100)
            ;
            local_100._0_6_ =
                 CONCAT15(bVar72 & (byte)((ulonglong)uVar50 >> 0x28) | bVar100,(undefined5)local_100
                         );
            local_100._0_7_ =
                 CONCAT16(bVar73 & (byte)((ulonglong)uVar50 >> 0x30) | bVar101,(undefined6)local_100
                         );
            local_100 = CONCAT17(bVar74 & (byte)((ulonglong)uVar50 >> 0x38) | bVar102,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 2 & 1) != 0) {
            uVar50 = FUN_1001f570();
            fVar111 = (float)CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130));
            fVar111 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x32) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar16 + 0x30) >> 0x20) *
                      (float)(CONCAT17(uStack_129,
                                       CONCAT16(uStack_12a,
                                                CONCAT15(uStack_12b,CONCAT14(uStack_12c,fVar111))))
                             >> 0x20) +
                      (float)*(undefined8 *)(piVar16 + 0x32) * fStack_128 +
                      (float)*(undefined8 *)(piVar16 + 0x30) * fVar111;
            bVar96 = SUB41(fVar111,0);
            bVar107 = (byte)((uint)fVar111 >> 8);
            bVar75 = (byte)((uint)fVar111 >> 0x10);
            bVar108 = (byte)((uint)fVar111 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 3 & 1) != 0) {
            uVar50 = FUN_1001f580();
            fVar111 = (float)CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130));
            fVar111 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x4a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar16 + 0x48) >> 0x20) *
                      (float)(CONCAT17(uStack_129,
                                       CONCAT16(uStack_12a,
                                                CONCAT15(uStack_12b,CONCAT14(uStack_12c,fVar111))))
                             >> 0x20) +
                      (float)*(undefined8 *)(piVar16 + 0x4a) * fStack_128 +
                      (float)*(undefined8 *)(piVar16 + 0x48) * fVar111;
            bVar96 = SUB41(fVar111,0);
            bVar107 = (byte)((uint)fVar111 >> 8);
            bVar75 = (byte)((uint)fVar111 >> 0x10);
            bVar108 = (byte)((uint)fVar111 >> 0x18);
            uVar32 = (ulonglong)uStack_f8 >> 0x10;
            uVar33 = (ulonglong)uStack_f8 >> 0x18;
            uVar34 = (ulonglong)uStack_f8 >> 0x20;
            uVar35 = (ulonglong)uStack_f8 >> 0x28;
            uVar36 = (ulonglong)uStack_f8 >> 0x30;
            uVar37 = (ulonglong)uStack_f8 >> 0x38;
            uStack_f8._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) |
                          (byte)((ulonglong)uStack_f8 >> 8),
                          bVar96 & (byte)in_register_00005008 | (byte)uStack_f8);
            uStack_f8._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | (byte)uVar32,
                          (undefined2)uStack_f8);
            uStack_f8._0_4_ =
                 (float)CONCAT13(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) |
                                 (byte)uVar33,(undefined3)uStack_f8);
            uStack_f8._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | (byte)uVar34,
                          (float)uStack_f8);
            uStack_f8._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | (byte)uVar35,
                          (undefined5)uStack_f8);
            uStack_f8._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | (byte)uVar36,
                          (undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) |
                                 (byte)uVar37,(undefined7)uStack_f8);
            local_100._0_2_ =
                 CONCAT11(bVar107 & (byte)((ulonglong)uVar50 >> 8) |
                          (byte)((ulonglong)local_100 >> 8),bVar96 & (byte)uVar50 | (byte)local_100)
            ;
            local_100._0_3_ =
                 CONCAT12(bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | local_100._2_1_,
                          (undefined2)local_100);
            local_100._0_4_ =
                 CONCAT13(bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | local_100._3_1_,
                          (undefined3)local_100);
            local_100._0_5_ =
                 CONCAT14(bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | local_100._4_1_,
                          (undefined4)local_100);
            local_100._0_6_ =
                 CONCAT15(bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | local_100._5_1_,
                          (undefined5)local_100);
            local_100._0_7_ =
                 CONCAT16(bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | local_100._6_1_,
                          (undefined6)local_100);
            local_100 = CONCAT17(bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | local_100._7_1_,
                                 (undefined7)local_100);
          }
          if ((*puVar45 >> 4 & 1) != 0) {
            uVar50 = FUN_1001f550();
            fVar111 = (float)CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130));
            fVar111 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x62) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar16 + 0x60) >> 0x20) *
                      (float)(CONCAT17(uStack_129,
                                       CONCAT16(uStack_12a,
                                                CONCAT15(uStack_12b,CONCAT14(uStack_12c,fVar111))))
                             >> 0x20) +
                      (float)*(undefined8 *)(piVar16 + 0x62) * fStack_128 +
                      (float)*(undefined8 *)(piVar16 + 0x60) * fVar111;
            bStack_c4 = SUB41(fVar111,0);
            local_d0 = bStack_c4 & (byte)uVar50;
            bStack_c3 = (byte)((uint)fVar111 >> 8);
            bStack_cf = bStack_c3 & (byte)((ulonglong)uVar50 >> 8);
            bStack_c2 = (byte)((uint)fVar111 >> 0x10);
            bStack_ce = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x10);
            bStack_c1 = (byte)((uint)fVar111 >> 0x18);
            bStack_cd = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x18);
            bStack_cc = bStack_c4 & (byte)((ulonglong)uVar50 >> 0x20);
            bStack_cb = bStack_c3 & (byte)((ulonglong)uVar50 >> 0x28);
            bStack_ca = bStack_c2 & (byte)((ulonglong)uVar50 >> 0x30);
            bStack_c9 = bStack_c1 & (byte)((ulonglong)uVar50 >> 0x38);
            bStack_c8 = bStack_c4 & (byte)in_register_00005008;
            bStack_c7 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 8);
            bStack_c6 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x10);
            bStack_c5 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x18);
            bStack_c4 = bStack_c4 & (byte)((ulonglong)in_register_00005008 >> 0x20);
            bStack_c3 = bStack_c3 & (byte)((ulonglong)in_register_00005008 >> 0x28);
            bStack_c2 = bStack_c2 & (byte)((ulonglong)in_register_00005008 >> 0x30);
            bStack_c1 = bStack_c1 & (byte)((ulonglong)in_register_00005008 >> 0x38);
          }
          if ((*puVar45 >> 5 & 1) != 0) {
            uVar50 = FUN_1001f560();
            fVar111 = (float)CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130));
            fVar111 = (float)((ulonglong)*(undefined8 *)(piVar16 + 0x7a) >> 0x20) * fStack_124 +
                      (float)((ulonglong)*(undefined8 *)(piVar16 + 0x78) >> 0x20) *
                      (float)(CONCAT17(uStack_129,
                                       CONCAT16(uStack_12a,
                                                CONCAT15(uStack_12b,CONCAT14(uStack_12c,fVar111))))
                             >> 0x20) +
                      (float)*(undefined8 *)(piVar16 + 0x7a) * fStack_128 +
                      (float)*(undefined8 *)(piVar16 + 0x78) * fVar111;
            bVar96 = SUB41(fVar111,0);
            bVar107 = (byte)((uint)fVar111 >> 8);
            bVar75 = (byte)((uint)fVar111 >> 0x10);
            bVar108 = (byte)((uint)fVar111 >> 0x18);
            local_d0 = bVar96 & (byte)uVar50 | local_d0;
            bStack_cf = bVar107 & (byte)((ulonglong)uVar50 >> 8) | bStack_cf;
            bStack_ce = bVar75 & (byte)((ulonglong)uVar50 >> 0x10) | bStack_ce;
            bStack_cd = bVar108 & (byte)((ulonglong)uVar50 >> 0x18) | bStack_cd;
            bStack_cc = bVar96 & (byte)((ulonglong)uVar50 >> 0x20) | bStack_cc;
            bStack_cb = bVar107 & (byte)((ulonglong)uVar50 >> 0x28) | bStack_cb;
            bStack_ca = bVar75 & (byte)((ulonglong)uVar50 >> 0x30) | bStack_ca;
            bStack_c9 = bVar108 & (byte)((ulonglong)uVar50 >> 0x38) | bStack_c9;
            bStack_c8 = bVar96 & (byte)in_register_00005008 | bStack_c8;
            bStack_c7 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 8) | bStack_c7;
            bStack_c6 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x10) | bStack_c6;
            bStack_c5 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x18) | bStack_c5;
            bStack_c4 = bVar96 & (byte)((ulonglong)in_register_00005008 >> 0x20) | bStack_c4;
            bStack_c3 = bVar107 & (byte)((ulonglong)in_register_00005008 >> 0x28) | bStack_c3;
            bStack_c2 = bVar75 & (byte)((ulonglong)in_register_00005008 >> 0x30) | bStack_c2;
            bStack_c1 = bVar108 & (byte)((ulonglong)in_register_00005008 >> 0x38) | bStack_c1;
          }
          bVar96 = (byte)((ulonglong)_DAT_1012b120 >> 0x20);
          bVar107 = (byte)((ulonglong)uRam1012b128 >> 0x20);
          fVar114 = (float)CONCAT13(bStack_c5,CONCAT12(bStack_c6,CONCAT11(bStack_c7,bStack_c8)));
          fVar111 = (float)CONCAT13(bStack_cd,CONCAT12(bStack_ce,CONCAT11(bStack_cf,local_d0)));
          uVar48 = *(uint *)(&DAT_1012b8f0 +
                            ((byte)(-((float)(CONCAT17(bStack_c1,
                                                       CONCAT16(bStack_c2,
                                                                CONCAT15(bStack_c3,
                                                                         CONCAT14(bStack_c4,fVar114)
                                                                        ))) >> 0x20) < 0.0) &
                                    bVar107 | -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar111)))) >> 0x20) < 0.0) & bVar96 |
                                   -(fVar114 < 0.0) & (byte)uRam1012b128 |
                                   -(fVar111 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                   *(uint *)(&DAT_1012b900 +
                            ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                    -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                   -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                   -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4);
          uVar47 = (*(uint *)(&DAT_1012b900 +
                             ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar107 |
                                     -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar96 |
                                    -((float)uStack_f8 < 0.0) & (byte)uRam1012b128 |
                                    -((float)local_100 < 0.0) & (byte)_DAT_1012b120) & 0xf) * 4) |
                   0xc3f) & (*(uint *)(&DAT_1012b8f0 +
                                      ((byte)(-((float)(CONCAT17(bStack_c1,
                                                                 CONCAT16(bStack_c2,
                                                                          CONCAT15(bStack_c3,
                                                                                   CONCAT14(
                                                  bStack_c4,fVar114)))) >> 0x20) < 0.0) & bVar107 |
                                              -((float)(CONCAT17(bStack_c9,
                                                                 CONCAT16(bStack_ca,
                                                                          CONCAT15(bStack_cb,
                                                                                   CONCAT14(
                                                  bStack_cc,fVar111)))) >> 0x20) < 0.0) & bVar96 |
                                             -(fVar114 < 0.0) & (byte)uRam1012b128 |
                                             -(fVar111 < 0.0) & (byte)_DAT_1012b120) & 3) * 4) |
                            0x3ff) & puVar22[1];
        }
        puVar46 = puVar22 + 1;
        *puVar46 = uVar47;
        uVar50 = FUN_1001f528();
        uVar47 = *(uint *)(&DAT_1012b8b0 +
                          ((byte)(-(fVar77 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                    fVar118 < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                  -(fVar54 * (float)((ulonglong)uVar50 >> 0x20) +
                                    (float)(CONCAT17(bStack_ad,
                                                     CONCAT16(bStack_ae,
                                                              CONCAT15(bStack_ab,
                                                                       CONCAT14(bStack_ac,fVar118)))
                                                    ) >> 0x20) < 0.0) &
                                  (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                 -(fVar77 * (float)in_register_00005008 + fVar118 < 0.0) &
                                 (byte)uRam1012b128 |
                                 -(fVar54 * (float)uVar50 + fVar118 < 0.0) & (byte)_DAT_1012b120) &
                          0xf) * 4);
        *puVar46 = (uVar47 | 0x30) & *puVar46;
        uVar51 = FUN_1001f528();
        uVar50 = in_register_00005008;
        uVar52 = FUN_1001f550();
        fVar111 = (float)CONCAT13(bStack_ad & (byte)((ulonglong)uVar52 >> 0x18),
                                  CONCAT12(bStack_ae & (byte)((ulonglong)uVar52 >> 0x10),
                                           CONCAT11(bStack_ab & (byte)((ulonglong)uVar52 >> 8),
                                                    bStack_ac & (byte)uVar52)));
        auVar82._0_8_ =
             CONCAT17(bStack_ad & (byte)((ulonglong)uVar52 >> 0x38),
                      CONCAT16(bStack_ae & (byte)((ulonglong)uVar52 >> 0x30),
                               CONCAT15(bStack_ab & (byte)((ulonglong)uVar52 >> 0x28),
                                        CONCAT14(bStack_ac & (byte)((ulonglong)uVar52 >> 0x20),
                                                 fVar111))));
        auVar82[8] = bStack_ac & (byte)uVar50;
        auVar82[9] = bStack_ab & (byte)((ulonglong)uVar50 >> 8);
        auVar82[10] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x10);
        auVar82[0xb] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x18);
        auVar91[0xc] = bStack_ac & (byte)((ulonglong)uVar50 >> 0x20);
        auVar91._0_12_ = auVar82;
        auVar91[0xd] = bStack_ab & (byte)((ulonglong)uVar50 >> 0x28);
        auVar91[0xe] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x30);
        auVar91[0xf] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x38);
        uVar48 = *(uint *)(&DAT_1012b8a0 +
                          ((byte)(-(fVar116 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                    auVar91._12_4_ < 0.0) & (byte)((ulonglong)uRam1012b128 >> 0x20)
                                  | -(fVar116 * (float)((ulonglong)uVar51 >> 0x20) +
                                      (float)((ulonglong)auVar82._0_8_ >> 0x20) < 0.0) &
                                    (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                 -(fVar116 * (float)in_register_00005008 + auVar82._8_4_ < 0.0) &
                                 (byte)uRam1012b128 |
                                 -(fVar116 * (float)uVar51 + fVar111 < 0.0) & (byte)_DAT_1012b120) &
                          3) * 4) | uVar47 | uVar48;
        *puVar46 = (*(uint *)(&DAT_1012b8a0 +
                             ((byte)(-(fVar116 * (float)((ulonglong)in_register_00005008 >> 0x20) +
                                       auVar91._12_4_ < 0.0) &
                                     (byte)((ulonglong)uRam1012b128 >> 0x20) |
                                     -(fVar116 * (float)((ulonglong)uVar51 >> 0x20) +
                                       (float)((ulonglong)auVar82._0_8_ >> 0x20) < 0.0) &
                                     (byte)((ulonglong)_DAT_1012b120 >> 0x20) |
                                    -(fVar116 * (float)in_register_00005008 + auVar82._8_4_ < 0.0) &
                                    (byte)uRam1012b128 |
                                    -(fVar116 * (float)uVar51 + fVar111 < 0.0) & (byte)_DAT_1012b120
                                    ) & 3) * 4) | 0xf) & *puVar46;
        *puVar22 = uVar48 | *puVar22;
      }
      uVar51 = FUN_1001f540();
      uVar50 = in_register_00005008;
      uVar52 = FUN_1001f590();
      fVar54 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & (byte)((ulonglong)uVar52 >> 0x18),
                               CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                        (byte)((ulonglong)uVar52 >> 0x10),
                                        CONCAT11((byte)((uint)fVar54 >> 8) &
                                                 (byte)((ulonglong)uVar52 >> 8),
                                                 SUB41(fVar54,0) & (byte)uVar52)));
      auVar59._0_8_ =
           CONCAT17((byte)((uint)fVar77 >> 0x18) & (byte)((ulonglong)uVar52 >> 0x38),
                    CONCAT16((byte)((uint)fVar77 >> 0x10) & (byte)((ulonglong)uVar52 >> 0x30),
                             CONCAT15((byte)((uint)fVar77 >> 8) & (byte)((ulonglong)uVar52 >> 0x28),
                                      CONCAT14(SUB41(fVar77,0) & (byte)((ulonglong)uVar52 >> 0x20),
                                               fVar54))));
      auVar59[8] = SUB41(fVar116,0) & (byte)uVar50;
      auVar59[9] = (byte)((uint)fVar116 >> 8) & (byte)((ulonglong)uVar50 >> 8);
      auVar59[10] = (byte)((uint)fVar116 >> 0x10) & (byte)((ulonglong)uVar50 >> 0x10);
      auVar59[0xb] = (byte)((uint)fVar116 >> 0x18) & (byte)((ulonglong)uVar50 >> 0x18);
      auVar69[0xc] = bStack_ac & (byte)((ulonglong)uVar50 >> 0x20);
      auVar69._0_12_ = auVar59;
      auVar69[0xd] = bStack_ab & (byte)((ulonglong)uVar50 >> 0x28);
      auVar69[0xe] = bStack_ae & (byte)((ulonglong)uVar50 >> 0x30);
      auVar69[0xf] = bStack_ad & (byte)((ulonglong)uVar50 >> 0x38);
      auVar92._0_8_ =
           CONCAT44((((float)((ulonglong)auVar59._0_8_ >> 0x20) + (float)((ulonglong)uVar51 >> 0x20)
                     ) / (float)(CONCAT17(bStack_ad,
                                          CONCAT16(bStack_ae,
                                                   CONCAT15(bStack_ab,CONCAT14(bStack_ac,fVar118))))
                                >> 0x20)) * (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                    (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20),
                    ((fVar54 + (float)uVar51) / fVar118) * (float)*(undefined8 *)pfVar2 +
                    (float)*(undefined8 *)pfVar3);
      auVar92._8_4_ =
           ((auVar59._8_4_ + (float)in_register_00005008) / fVar118) *
           (float)*(undefined8 *)(param_2 + 0x1a) + (float)*(undefined8 *)(param_2 + 0x1e);
      auVar92._12_4_ =
           ((auVar69._12_4_ + (float)((ulonglong)in_register_00005008 >> 0x20)) / fVar118) *
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
           (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
      uVar50 = auVar92._8_8_;
      if (uVar49 == 0) {
        *(undefined8 *)(param_2 + 0x26) = uVar50;
        *(undefined8 *)*pauVar5 = auVar92._0_8_;
        *(undefined8 *)(param_2 + 0x22) = uVar50;
        *(undefined8 *)*pauVar6 = auVar92._0_8_;
      }
      else {
        auVar71 = NEON_fmin(*pauVar6,auVar92,4);
        *(longlong *)(param_2 + 0x22) = auVar71._8_8_;
        *(longlong *)*pauVar6 = auVar71._0_8_;
        auVar71 = NEON_fmax(*pauVar5,auVar92,4);
        *(longlong *)(param_2 + 0x26) = auVar71._8_8_;
        *(longlong *)*pauVar5 = auVar71._0_8_;
      }
      puVar24 = (undefined8 *)*piVar15;
      if (puVar24 != (undefined8 *)0x0) {
        if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar48 == 0)) {
          puVar24[1] = uVar50;
          *puVar24 = auVar92._0_8_;
        }
        else {
          *(float *)((int)puVar24 + 0xc) = auVar92._12_4_;
        }
        *piVar15 = param_2[0x15] + *piVar15;
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 < param_4);
  }
  fVar54 = (float)*(undefined8 *)*pauVar6 + -0.5;
  fVar77 = (float)((ulonglong)*(undefined8 *)*pauVar6 >> 0x20) + -0.5;
  uVar119 = (undefined1)((uint)fVar77 >> 8);
  uVar120 = (undefined1)((uint)fVar77 >> 0x10);
  uVar121 = (undefined1)((uint)fVar77 >> 0x18);
  fVar116 = (float)*(undefined8 *)(param_2 + 0x22) + 0.0;
  fVar118 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x22) >> 0x20) + 0.0;
  uVar122 = (undefined1)((uint)fVar118 >> 8);
  uVar123 = (undefined1)((uint)fVar118 >> 0x10);
  uVar124 = (undefined1)((uint)fVar118 >> 0x18);
  *(ulonglong *)(param_2 + 0x22) =
       CONCAT17(uVar124,CONCAT16(uVar123,CONCAT15(uVar122,CONCAT14(SUB41(fVar118,0),fVar116))));
  *(ulonglong *)*pauVar6 =
       CONCAT17(uVar121,CONCAT16(uVar120,CONCAT15(uVar119,CONCAT14(SUB41(fVar77,0),fVar54))));
  auVar112._0_8_ =
       CONCAT44((float)((ulonglong)*(undefined8 *)*pauVar5 >> 0x20) + 0.5,
                (float)*(undefined8 *)*pauVar5 + 0.5);
  auVar112._8_4_ = (float)*(undefined8 *)(param_2 + 0x26) + 0.0;
  auVar112._12_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 0x26) >> 0x20) + 0.0;
  auVar31._8_4_ = uVar19;
  auVar31._0_8_ = uVar78;
  auVar31._12_4_ = 0;
  *(longlong *)(param_2 + 0x26) = auVar112._8_8_;
  *(undefined8 *)*pauVar5 = auVar112._0_8_;
  auVar27[4] = SUB41(fVar77,0);
  auVar27._0_4_ = fVar54;
  auVar27[5] = uVar119;
  auVar27[6] = uVar120;
  auVar27[7] = uVar121;
  auVar27[8] = SUB41(fVar116,0);
  auVar27[9] = (char)((uint)fVar116 >> 8);
  auVar27[10] = (char)((uint)fVar116 >> 0x10);
  auVar27[0xb] = (char)((uint)fVar116 >> 0x18);
  auVar27[0xc] = SUB41(fVar118,0);
  auVar27[0xd] = uVar122;
  auVar27[0xe] = uVar123;
  auVar27[0xf] = uVar124;
  auVar93 = NEON_fmin(auVar27,auVar31,4);
  auVar30._8_4_ = uVar20;
  auVar30._0_8_ = uVar55;
  auVar30._12_4_ = 0;
  auVar113 = NEON_fmax(auVar112,auVar30,4);
LAB_1002f2ec:
  auVar94._8_4_ = fVar17;
  auVar94._12_4_ = 0;
  auVar94 = NEON_fmax(auVar93,auVar94,4);
  uVar78 = auVar94._0_8_;
  auVar70._8_4_ = fVar76;
  auVar70._12_4_ = 0;
  auVar94 = NEON_fmin(auVar113,auVar70,4);
  uVar55 = auVar94._0_8_;
LAB_1002f470:
  if ((char)param_2[0xf] != '\0') {
    *(int *)(*piVar1 + 8) = (int)uVar78;
    *(int *)(*piVar1 + 0x10) = (int)((ulonglong)uVar78 >> 0x20);
    *(int *)(*piVar1 + 0xc) = (int)uVar55;
    *(int *)(*piVar1 + 0x14) = (int)((ulonglong)uVar55 >> 0x20);
  }
  return;
}

