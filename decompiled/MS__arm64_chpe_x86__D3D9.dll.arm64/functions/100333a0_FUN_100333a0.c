/*
 * FUN_100333a0 at 100333a0
 * undefined FUN_100333a0(void)
 * Address ranges: 100333a0-10036e57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100333a0(int param_1,int *param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  float *pfVar2;
  char *pcVar3;
  float *pfVar4;
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
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  int *piVar18;
  float fVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  float *pfVar25;
  ulonglong *puVar26;
  undefined8 *puVar27;
  undefined1 (*pauVar28) [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint uVar41;
  char cVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  ulonglong uVar46;
  uint *puVar47;
  uint *puVar48;
  uint uVar49;
  uint uVar50;
  int *piVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  ulonglong in_register_00005008;
  byte bVar54;
  undefined8 uVar55;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined1 auVar58 [12];
  undefined1 auVar64 [16];
  undefined1 auVar59 [12];
  undefined1 auVar66 [16];
  undefined1 auVar60 [12];
  undefined1 auVar68 [16];
  float fVar78;
  float fVar79;
  undefined1 auVar61 [12];
  undefined1 auVar69 [16];
  undefined1 auVar62 [12];
  undefined1 auVar70 [16];
  undefined8 uVar56;
  undefined1 auVar63 [12];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar57;
  undefined1 auVar74 [16];
  byte bVar80;
  byte bVar100;
  byte bVar102;
  float fVar81;
  float fVar82;
  undefined1 auVar84 [12];
  byte bVar104;
  float fVar105;
  byte bVar107;
  byte bVar108;
  byte bVar110;
  byte bVar113;
  byte bVar114;
  byte bVar116;
  byte bVar120;
  byte bVar121;
  undefined1 auVar89 [16];
  undefined1 auVar91 [16];
  undefined1 auVar85 [12];
  undefined1 auVar86 [12];
  undefined1 auVar87 [12];
  undefined1 auVar95 [16];
  byte bVar101;
  byte bVar103;
  float fVar106;
  byte bVar109;
  float fVar111;
  float fVar112;
  byte bVar115;
  undefined1 auVar88 [12];
  byte bVar117;
  float fVar118;
  float fVar119;
  byte bVar122;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar125;
  float fVar126;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 uVar127;
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  float fVar133;
  byte bStack_13e;
  byte bStack_13d;
  byte bStack_13c;
  byte bStack_13b;
  byte bStack_13a;
  byte bStack_139;
  float fStack_138;
  float fStack_134;
  undefined8 local_120;
  undefined8 uStack_118;
  byte local_110;
  byte bStack_10f;
  byte bStack_10e;
  byte bStack_10d;
  byte bStack_10c;
  byte bStack_10b;
  byte bStack_10a;
  byte bStack_109;
  byte bStack_108;
  byte bStack_107;
  byte bStack_106;
  byte bStack_105;
  byte bStack_104;
  byte bStack_103;
  byte bStack_102;
  byte bStack_101;
  undefined8 local_100;
  undefined8 uStack_f8;
  byte local_e0;
  byte bStack_df;
  byte bStack_de;
  byte bStack_dd;
  byte bStack_dc;
  byte bStack_db;
  byte bStack_da;
  byte bStack_d9;
  byte bStack_d8;
  byte bStack_d7;
  byte bStack_d6;
  byte bStack_d5;
  byte bStack_d4;
  byte bStack_d3;
  byte bStack_d2;
  byte bStack_d1;
  undefined8 local_d0;
  ulonglong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined8 uVar83;
  undefined1 auVar90 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar96 [16];
  
  puVar47 = (uint *)param_2[0x10];
  if (puVar47 == (uint *)0x0) {
    puVar47 = (uint *)(param_1 + 0x2c);
    param_2[0x10] = (int)puVar47;
  }
  uVar53 = uRam10160a88;
  uVar52 = _DAT_10160a80;
  uVar50 = puVar47[1];
  pfVar25 = (float *)(puVar47 + 4);
  uVar41 = puVar47[3];
  auVar98._0_4_ = (float)*puVar47;
  fVar81 = (float)uVar50;
  auVar98._4_4_ = fVar81;
  fVar19 = *pfVar25;
  bStack_dc = SUB41(fVar81,0);
  bStack_db = (byte)((uint)fVar81 >> 8);
  bStack_da = (byte)((uint)fVar81 >> 0x10);
  bStack_d9 = (byte)((uint)fVar81 >> 0x18);
  fVar82 = (float)(uVar41 + uVar50);
  uVar50 = puVar47[2];
  auVar73._0_4_ = (float)(uVar50 + *puVar47);
  auVar73._4_4_ = fVar82;
  fVar81 = (float)puVar47[5];
  piVar1 = param_2 + 0x12;
  iVar20 = *piVar1;
  uVar83 = CONCAT44(*(undefined4 *)(iVar20 + 0x10),*(undefined4 *)(iVar20 + 8));
  uVar21 = *(undefined4 *)(iVar20 + 0x18);
  uVar57 = CONCAT44(*(undefined4 *)(iVar20 + 0x14),*(undefined4 *)(iVar20 + 0xc));
  uVar22 = *(uint *)(iVar20 + 0x1c);
  uStack_c8 = (ulonglong)uVar22;
  if (*(char *)((int)param_2 + 0x3a) == '\0') {
    if ((((char)param_2[0xf] != '\0') || (*(char *)((int)param_2 + 0x3b) != '\0')) &&
       (uVar50 = 0, param_4 != 0)) {
      auVar74._8_4_ = uVar22;
      auVar74._0_8_ = uVar57;
      auVar74._12_4_ = 0;
      auVar99._8_4_ = uVar21;
      auVar99._0_8_ = uVar83;
      auVar99._12_4_ = 0;
      do {
        pauVar28 = (undefined1 (*) [12])(*param_2 + param_2[6] * uVar50);
        fVar118 = (float)*(undefined8 *)(*pauVar28 + 8);
        fVar119 = (float)((ulonglong)*(undefined8 *)(*pauVar28 + 8) >> 0x20);
        auVar63 = *pauVar28;
        auVar88 = *pauVar28;
        fVar105 = (float)*(undefined8 *)*pauVar28;
        fVar111 = (float)((ulonglong)*(undefined8 *)*pauVar28 >> 0x20);
        if (*(char *)((int)param_2 + 0x3b) != '\0') {
          bVar100 = (byte)uVar52;
          bVar116 = (byte)((ulonglong)uVar52 >> 0x20);
          bVar101 = (byte)uVar53;
          bVar117 = (byte)((ulonglong)uVar53 >> 0x20);
          uVar22 = (uint)(byte)(-(fVar119 < 0.0) & bVar117 |
                                -(fVar111 <
                                 (float)(CONCAT17(bStack_d9,
                                                  CONCAT16(bStack_da,
                                                           CONCAT15(bStack_db,
                                                                    CONCAT14(bStack_dc,auVar98._0_4_
                                                                            )))) >> 0x20)) & bVar116
                               | -(fVar118 < fVar19) & bVar101 |
                                 -(fVar105 < auVar98._0_4_) & bVar100);
          bVar100 = -(0.0 <= fVar119) & bVar117 | -(fVar82 <= fVar111) & bVar116 |
                    -(fVar81 <= fVar118) & bVar101 | -(auVar73._0_4_ <= fVar105) & bVar100;
          uVar41 = *(uint *)(&DAT_10161230 +
                            ((bVar100 & 2) << 2 | (uVar22 & 3) << 1 | bVar100 & 1) * 4);
          *(uint *)*piVar1 = uVar41 | *(uint *)*piVar1;
          *(uint *)(*piVar1 + 4) = (uVar41 | 0x2a) & *(uint *)(*piVar1 + 4);
          uVar41 = *(uint *)(&DAT_10161220 + ((uVar22 & 4 | bVar100 >> 1 & 3) >> 1) * 4);
          *(uint *)*piVar1 = uVar41 | *(uint *)*piVar1;
          *(uint *)(*piVar1 + 4) = (uVar41 | 0x15) & *(uint *)(*piVar1 + 4);
        }
        uVar50 = uVar50 + 1;
        auVar30._12_4_ = fVar119;
        auVar30._0_12_ = auVar88;
        auVar99 = NEON_fmin(auVar99,auVar30,4);
        uVar83 = auVar99._0_8_;
        auVar31._12_4_ = fVar119;
        auVar31._0_12_ = auVar63;
        auVar74 = NEON_fmax(auVar74,auVar31,4);
        uVar57 = auVar74._0_8_;
      } while (uVar50 < param_4);
    }
    goto LAB_10036dfc;
  }
  pfVar2 = (float *)(param_2 + 0x18);
  pcVar3 = (char *)((int)param_2 + 0x3b);
  param_2[0x1a] = (int)((float)puVar47[5] - *pfVar25);
  param_2[0x1b] = 0x3f800000;
  *pfVar2 = (float)uVar50 * 0.5;
  param_2[0x19] = (int)((float)uVar41 * -0.5);
  uVar50 = puVar47[2];
  uVar41 = *puVar47;
  uVar49 = puVar47[3];
  uVar23 = puVar47[1];
  pfVar4 = (float *)(param_2 + 0x1c);
  param_2[0x1e] = (int)*pfVar25;
  param_2[0x1f] = 0;
  *pfVar4 = (float)uVar50 * 0.5 + (float)uVar41;
  param_2[0x1d] = (int)((float)uVar49 * 0.5 + (float)uVar23);
  pauVar5 = (undefined1 (*) [16])(param_2 + 0x24);
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  *(int *)((int)pauVar5 + 0) = 0;
  *(int *)((int)pauVar5 + 4) = 0;
  pauVar6 = (undefined1 (*) [16])(param_2 + 0x20);
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *(int *)((int)pauVar6 + 0) = 0;
  *(int *)((int)pauVar6 + 4) = 0;
  puVar47 = (uint *)(param_1 + 0x690);
  uVar50 = *puVar47;
  piVar7 = param_2 + 0x48;
  *(bool *)piVar7 = (uVar50 & 0x3f) != 0;
  if (*pcVar3 != '\0') {
    if ((uVar50 & 0x3f) == 0) {
      *(uint *)(iVar20 + 4) = *(uint *)(iVar20 + 4) & 0xfffff03f;
    }
    else {
      uVar52 = *(undefined8 *)(param_1 + 0x3d0);
      *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(param_1 + 0x3d8);
      *(undefined8 *)(param_2 + 0x28) = uVar52;
      uVar52 = *(undefined8 *)(param_1 + 0x3e0);
      *(undefined8 *)(param_2 + 0x2e) = *(undefined8 *)(param_1 + 1000);
      *(undefined8 *)(param_2 + 0x2c) = uVar52;
      uVar52 = *(undefined8 *)(param_1 + 0x3f0);
      *(undefined8 *)(param_2 + 0x32) = *(undefined8 *)(param_1 + 0x3f8);
      *(undefined8 *)(param_2 + 0x30) = uVar52;
      uVar52 = *(undefined8 *)(param_1 + 0x400);
      *(undefined8 *)(param_2 + 0x36) = *(undefined8 *)(param_1 + 0x408);
      *(undefined8 *)(param_2 + 0x34) = uVar52;
      uVar52 = *(undefined8 *)(param_1 + 0x410);
      *(undefined8 *)(param_2 + 0x3a) = *(undefined8 *)(param_1 + 0x418);
      *(undefined8 *)(param_2 + 0x38) = uVar52;
      uVar52 = *(undefined8 *)(param_1 + 0x420);
      *(undefined8 *)(param_2 + 0x3e) = *(undefined8 *)(param_1 + 0x428);
      *(undefined8 *)(param_2 + 0x3c) = uVar52;
    }
  }
  piVar8 = param_2 + 0x13;
  if ((*piVar8 == 0) && ((char)*piVar7 == '\0')) {
    cVar42 = '\0';
  }
  else {
    cVar42 = '\x01';
  }
  pcVar9 = (char *)((int)param_2 + 0x121);
  piVar10 = param_2 + 1;
  *pcVar9 = cVar42;
  pcVar11 = (char *)((int)param_2 + 0x122);
  *pcVar11 = *piVar10 != 0;
  uVar50 = *(uint *)(param_1 + 0x68c);
  if (uVar50 == 0) {
LAB_10033798:
    uVar41 = param_2[0xc];
    if (uVar50 < (uint)param_2[0xc]) {
      uVar41 = uVar50;
    }
    if (uVar41 != 0) goto LAB_100337b0;
    if (param_2[0x11] == 0) {
      FUN_10029d50(param_1);
      param_2[0x11] = *(int *)(param_1 + 0xd80) + 0x8600;
    }
  }
  else {
    if (uVar50 == 0xff) {
      fVar82 = *(float *)(param_1 + 0x6d8);
      uVar41 = 0x20;
      param_2[0x42] = (int)fVar82;
      param_2[0x43] = (int)fVar82;
      param_2[0x40] = (int)fVar82;
      param_2[0x41] = (int)fVar82;
      fVar82 = 1.0 - fVar82;
      param_2[0x46] = (int)fVar82;
      param_2[0x47] = (int)fVar82;
      param_2[0x44] = (int)fVar82;
      param_2[0x45] = (int)fVar82;
    }
    else {
      if (uVar50 != 0x100) goto LAB_10033798;
      uVar41 = 0x10;
    }
LAB_100337b0:
    FUN_10029cc8(param_1);
  }
  piVar51 = param_2 + 0x11;
  switch(uVar41) {
  case 0:
    uVar50 = 0;
    if (param_4 == 0) break;
    piVar17 = param_2 + 0x14;
    local_d0 = uVar57;
    do {
      puVar27 = (undefined8 *)(*param_2 + param_2[6] * uVar50);
      if ((char)param_2[0xd] == '\x02') {
        uVar52 = *puVar27;
        in_register_00005008 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
      }
      else {
        uVar52 = FUN_10036ee8(puVar27,(char)param_2[0xd]);
      }
      if (*pcVar11 != '\0') {
        puVar27 = (undefined8 *)(*piVar10 + param_2[7] * uVar50);
        if (*(char *)((int)param_2 + 0x35) == '\x02') {
          local_d0 = *puVar27;
          uStack_c8 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
        }
        else {
          uStack_c8 = in_register_00005008;
          local_d0 = FUN_10036ee8(puVar27,*(char *)((int)param_2 + 0x35));
        }
      }
      if (*(char *)((int)param_2 + 0x39) != '\x05') {
        FUN_10037828(param_2[5] + param_2[10] * uVar50,*(char *)((int)param_2 + 0x39));
      }
      auVar89 = ZEXT516(0) << 8;
      uStack_f8 = 0;
      local_100 = 0;
      fVar82 = (float)uVar52;
      fVar105 = (float)((ulonglong)uVar52 >> 0x20);
      fVar111 = (float)in_register_00005008;
      fVar118 = (float)(in_register_00005008 >> 0x20);
      if (*pcVar9 != '\0') {
        iVar20 = *(int *)(param_1 + 0xd80);
        uStack_f8 = CONCAT44(fVar111 * (float)*(undefined8 *)(iVar20 + 0x2b8) +
                             fVar118 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x2b8) >> 0x20) +
                             fVar82 * (float)*(undefined8 *)(iVar20 + 0x2b0) +
                             fVar105 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x2b0) >> 0x20),
                             fVar111 * (float)*(undefined8 *)(iVar20 + 0x2a8) +
                             fVar118 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x2a8) >> 0x20) +
                             fVar82 * (float)*(undefined8 *)(iVar20 + 0x2a0) +
                             fVar105 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x2a0) >> 0x20));
        local_100 = CONCAT44(fVar111 * (float)*(undefined8 *)(iVar20 + 0x298) +
                             fVar118 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x298) >> 0x20) +
                             fVar82 * (float)*(undefined8 *)(iVar20 + 0x290) +
                             fVar105 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x290) >> 0x20),
                             fVar111 * (float)*(undefined8 *)(iVar20 + 0x288) +
                             fVar118 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x288) >> 0x20) +
                             fVar82 * (float)*(undefined8 *)(iVar20 + 0x280) +
                             fVar105 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x280) >> 0x20));
      }
      if (*pcVar11 != '\0') {
        FUN_10029c30(param_1,10);
        iVar20 = *(int *)(param_1 + 0xd80);
        fVar119 = (float)local_d0;
        fVar106 = (float)((ulonglong)local_d0 >> 0x20);
        fVar112 = (float)uStack_c8;
        fVar126 = (float)(uStack_c8 >> 0x20);
        auVar89._0_4_ =
             fVar112 * (float)*(undefined8 *)(iVar20 + 0x4508) +
             fVar126 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4508) >> 0x20) +
             fVar119 * (float)*(undefined8 *)(iVar20 + 0x4500) +
             fVar106 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4500) >> 0x20);
        auVar89._4_4_ =
             fVar112 * (float)*(undefined8 *)(iVar20 + 0x4518) +
             fVar126 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4518) >> 0x20) +
             fVar119 * (float)*(undefined8 *)(iVar20 + 0x4510) +
             fVar106 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4510) >> 0x20);
        auVar89._8_4_ =
             fVar112 * (float)*(undefined8 *)(iVar20 + 0x4528) +
             fVar126 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4528) >> 0x20) +
             fVar119 * (float)*(undefined8 *)(iVar20 + 0x4520) +
             fVar106 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4520) >> 0x20);
        auVar89._12_4_ =
             fVar112 * (float)*(undefined8 *)(iVar20 + 0x4538) +
             fVar126 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4538) >> 0x20) +
             fVar119 * (float)*(undefined8 *)(iVar20 + 0x4530) +
             fVar106 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4530) >> 0x20);
      }
      puVar27 = (undefined8 *)*piVar51;
      fVar119 = fVar111 * (float)puVar27[1] + fVar118 * (float)((ulonglong)puVar27[1] >> 0x20) +
                fVar82 * (float)*puVar27 + fVar105 * (float)((ulonglong)*puVar27 >> 0x20);
      fVar106 = fVar111 * (float)puVar27[3] + fVar118 * (float)((ulonglong)puVar27[3] >> 0x20) +
                fVar82 * (float)puVar27[2] + fVar105 * (float)((ulonglong)puVar27[2] >> 0x20);
      fVar112 = fVar111 * (float)puVar27[5] + fVar118 * (float)((ulonglong)puVar27[5] >> 0x20) +
                fVar82 * (float)puVar27[4] + fVar105 * (float)((ulonglong)puVar27[4] >> 0x20);
      fVar82 = fVar111 * (float)puVar27[7] + fVar118 * (float)((ulonglong)puVar27[7] >> 0x20) +
               fVar82 * (float)puVar27[6] + fVar105 * (float)((ulonglong)puVar27[6] >> 0x20);
      bStack_d8 = SUB41(fVar112,0);
      bStack_d7 = (byte)((uint)fVar112 >> 8);
      bStack_d6 = (byte)((uint)fVar112 >> 0x10);
      bStack_d5 = (byte)((uint)fVar112 >> 0x18);
      bStack_d4 = SUB41(fVar82,0);
      bStack_d3 = (byte)((uint)fVar82 >> 8);
      bStack_d2 = (byte)((uint)fVar82 >> 0x10);
      bStack_d1 = (byte)((uint)fVar82 >> 0x18);
      bStack_dc = SUB41(fVar106,0);
      bStack_db = (byte)((uint)fVar106 >> 8);
      bStack_da = (byte)((uint)fVar106 >> 0x10);
      bStack_d9 = (byte)((uint)fVar106 >> 0x18);
      if (*piVar8 != 0) {
        puVar27 = (undefined8 *)(*piVar8 + uVar50 * 0x20);
        puVar27[1] = uStack_f8;
        *puVar27 = local_100;
        iVar20 = *piVar8 + uVar50 * 0x20;
        *(longlong *)(iVar20 + 0x18) = auVar89._8_8_;
        *(longlong *)(iVar20 + 0x10) = auVar89._0_8_;
      }
      uVar41 = 0;
      if (*pcVar3 != '\0') {
        puVar24 = (uint *)*piVar1;
        piVar18 = param_2 + 0x28;
        if ((char)*piVar7 == '\0') {
          piVar18 = (int *)0x0;
        }
        if (piVar18 == (int *)0x0) {
          uVar49 = 0;
          uVar41 = puVar24[1] & 0xfffff03f;
        }
        else {
          bStack_10f = 0;
          local_110 = 0;
          bStack_10e = 0;
          bStack_10d = 0;
          bStack_10c = 0;
          bStack_10b = 0;
          bStack_10a = 0;
          bStack_109 = 0;
          bStack_108 = 0;
          bStack_107 = 0;
          bStack_106 = 0;
          bStack_105 = 0;
          bStack_104 = 0;
          bStack_103 = 0;
          bStack_102 = 0;
          bStack_101 = 0;
          uStack_118 = 0;
          local_120 = 0;
          fVar105 = (float)local_100;
          fVar111 = (float)((ulonglong)local_100 >> 0x20);
          fVar118 = (float)uStack_f8;
          fVar106 = (float)((ulonglong)uStack_f8 >> 0x20);
          if ((*puVar47 & 1) != 0) {
            uVar52 = FUN_10024f58();
            fVar126 = (float)((ulonglong)*(undefined8 *)(piVar18 + 2) >> 0x20) * fVar106 +
                      (float)((ulonglong)*(undefined8 *)piVar18 >> 0x20) * fVar111 +
                      (float)*(undefined8 *)(piVar18 + 2) * fVar118 +
                      (float)*(undefined8 *)piVar18 * fVar105;
            bStack_104 = SUB41(fVar126,0);
            local_110 = bStack_104 & (byte)uVar52;
            bStack_103 = (byte)((uint)fVar126 >> 8);
            bStack_10f = bStack_103 & (byte)((ulonglong)uVar52 >> 8);
            bStack_102 = (byte)((uint)fVar126 >> 0x10);
            bStack_10e = bStack_102 & (byte)((ulonglong)uVar52 >> 0x10);
            bStack_101 = (byte)((uint)fVar126 >> 0x18);
            bStack_10d = bStack_101 & (byte)((ulonglong)uVar52 >> 0x18);
            bStack_10c = bStack_104 & (byte)((ulonglong)uVar52 >> 0x20);
            bStack_10b = bStack_103 & (byte)((ulonglong)uVar52 >> 0x28);
            bStack_10a = bStack_102 & (byte)((ulonglong)uVar52 >> 0x30);
            bStack_109 = bStack_101 & (byte)((ulonglong)uVar52 >> 0x38);
            bStack_108 = bStack_104 & (byte)in_register_00005008;
            bStack_107 = bStack_103 & (byte)(in_register_00005008 >> 8);
            bStack_106 = bStack_102 & (byte)(in_register_00005008 >> 0x10);
            bStack_105 = bStack_101 & (byte)(in_register_00005008 >> 0x18);
            bStack_104 = bStack_104 & (byte)(in_register_00005008 >> 0x20);
            bStack_103 = bStack_103 & (byte)(in_register_00005008 >> 0x28);
            bStack_102 = bStack_102 & (byte)(in_register_00005008 >> 0x30);
            bStack_101 = bStack_101 & (byte)(in_register_00005008 >> 0x38);
          }
          if ((*puVar47 >> 1 & 1) != 0) {
            uVar52 = FUN_10024f68();
            fVar126 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x1a) >> 0x20) * fVar106 +
                      (float)((ulonglong)*(undefined8 *)(piVar18 + 0x18) >> 0x20) * fVar111 +
                      (float)*(undefined8 *)(piVar18 + 0x1a) * fVar118 +
                      (float)*(undefined8 *)(piVar18 + 0x18) * fVar105;
            bVar100 = SUB41(fVar126,0);
            bVar116 = (byte)((uint)fVar126 >> 8);
            bVar101 = (byte)((uint)fVar126 >> 0x10);
            bVar117 = (byte)((uint)fVar126 >> 0x18);
            local_110 = bVar100 & (byte)uVar52 | local_110;
            bStack_10f = bVar116 & (byte)((ulonglong)uVar52 >> 8) | bStack_10f;
            bStack_10e = bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | bStack_10e;
            bStack_10d = bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | bStack_10d;
            bStack_10c = bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | bStack_10c;
            bStack_10b = bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | bStack_10b;
            bStack_10a = bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | bStack_10a;
            bStack_109 = bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | bStack_109;
            bStack_108 = bVar100 & (byte)in_register_00005008 | bStack_108;
            bStack_107 = bVar116 & (byte)(in_register_00005008 >> 8) | bStack_107;
            bStack_106 = bVar101 & (byte)(in_register_00005008 >> 0x10) | bStack_106;
            bStack_105 = bVar117 & (byte)(in_register_00005008 >> 0x18) | bStack_105;
            bStack_104 = bVar100 & (byte)(in_register_00005008 >> 0x20) | bStack_104;
            bStack_103 = bVar116 & (byte)(in_register_00005008 >> 0x28) | bStack_103;
            bStack_102 = bVar101 & (byte)(in_register_00005008 >> 0x30) | bStack_102;
            bStack_101 = bVar117 & (byte)(in_register_00005008 >> 0x38) | bStack_101;
          }
          uVar41 = *puVar47;
          if ((uVar41 >> 2 & 1) != 0) {
            fVar126 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x32) >> 0x20) * fVar106 +
                      (float)((ulonglong)*(undefined8 *)(piVar18 + 0x30) >> 0x20) * fVar111 +
                      (float)*(undefined8 *)(piVar18 + 0x32) * fVar118 +
                      (float)*(undefined8 *)(piVar18 + 0x30) * fVar105;
            bStack_108 = SUB41(fVar126,0) | bStack_108;
            bStack_107 = (byte)((uint)fVar126 >> 8) | bStack_107;
            bStack_106 = (byte)((uint)fVar126 >> 0x10) | bStack_106;
            bStack_105 = (byte)((uint)fVar126 >> 0x18) | bStack_105;
          }
          if ((uVar41 >> 3 & 1) != 0) {
            fVar126 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x4a) >> 0x20) * fVar106 +
                      (float)((ulonglong)*(undefined8 *)(piVar18 + 0x48) >> 0x20) * fVar111 +
                      (float)*(undefined8 *)(piVar18 + 0x4a) * fVar118 +
                      (float)*(undefined8 *)(piVar18 + 0x48) * fVar105;
            bStack_104 = SUB41(fVar126,0) | bStack_104;
            bStack_103 = (byte)((uint)fVar126 >> 8) | bStack_103;
            bStack_102 = (byte)((uint)fVar126 >> 0x10) | bStack_102;
            bStack_101 = (byte)((uint)fVar126 >> 0x18) | bStack_101;
          }
          if ((uVar41 >> 4 & 1) != 0) {
            uVar52 = FUN_10024f58();
            fVar126 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x62) >> 0x20) * fVar106 +
                      (float)((ulonglong)*(undefined8 *)(piVar18 + 0x60) >> 0x20) * fVar111 +
                      (float)*(undefined8 *)(piVar18 + 0x62) * fVar118 +
                      (float)*(undefined8 *)(piVar18 + 0x60) * fVar105;
            bVar100 = SUB41(fVar126,0);
            bVar116 = (byte)((uint)fVar126 >> 8);
            bVar101 = (byte)((uint)fVar126 >> 0x10);
            bVar117 = (byte)((uint)fVar126 >> 0x18);
            uStack_118 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38),
                                  CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30),
                                           CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28),
                                                    CONCAT14(bVar100 & (byte)(in_register_00005008
                                                                             >> 0x20),
                                                             CONCAT13(bVar117 & (byte)(
                                                  in_register_00005008 >> 0x18),
                                                  CONCAT12(bVar101 & (byte)(in_register_00005008 >>
                                                                           0x10),
                                                           CONCAT11(bVar116 & (byte)(
                                                  in_register_00005008 >> 8),
                                                  bVar100 & (byte)in_register_00005008)))))));
            local_120._0_3_ =
                 CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10),
                          CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8),bVar100 & (byte)uVar52))
            ;
            local_120._0_4_ =
                 CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18),(undefined3)local_120);
            local_120._0_5_ =
                 CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20),(undefined4)local_120);
            local_120._0_6_ =
                 CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28),(undefined5)local_120);
            local_120._0_7_ =
                 CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30),(undefined6)local_120);
            local_120 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38),(undefined7)local_120);
          }
          if ((*puVar47 >> 5 & 1) != 0) {
            uVar52 = FUN_10024f68();
            fVar105 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x7a) >> 0x20) * fVar106 +
                      (float)((ulonglong)*(undefined8 *)(piVar18 + 0x78) >> 0x20) * fVar111 +
                      (float)*(undefined8 *)(piVar18 + 0x7a) * fVar118 +
                      (float)*(undefined8 *)(piVar18 + 0x78) * fVar105;
            bVar100 = SUB41(fVar105,0);
            bVar116 = (byte)((uint)fVar105 >> 8);
            bVar101 = (byte)((uint)fVar105 >> 0x10);
            bVar117 = (byte)((uint)fVar105 >> 0x18);
            bVar80 = (byte)local_120;
            uVar46 = (ulonglong)local_120 >> 8;
            bVar120 = bVar100 & (byte)in_register_00005008 | (byte)uStack_118;
            uVar34 = uStack_118 >> 8;
            uVar35 = uStack_118 >> 0x10;
            uVar36 = uStack_118 >> 0x18;
            uVar37 = uStack_118 >> 0x20;
            uVar38 = uStack_118 >> 0x28;
            uVar39 = uStack_118 >> 0x30;
            uVar40 = uStack_118 >> 0x38;
            uStack_118._0_4_ =
                 (float)CONCAT13(bVar117 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar36,
                                 CONCAT12(bVar101 & (byte)(in_register_00005008 >> 0x10) |
                                          (byte)uVar35,
                                          CONCAT11(bVar116 & (byte)(in_register_00005008 >> 8) |
                                                   (byte)uVar34,bVar120)));
            uStack_118 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar40,
                                  CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30) |
                                           (byte)uVar39,
                                           CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28) |
                                                    (byte)uVar38,
                                                    CONCAT14(bVar100 & (byte)(in_register_00005008
                                                                             >> 0x20) | (byte)uVar37
                                                             ,(float)uStack_118))));
            local_120._0_3_ =
                 CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | local_120._2_1_,
                          CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8) | (byte)uVar46,
                                   bVar100 & (byte)uVar52 | bVar80));
            local_120._0_4_ =
                 CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | local_120._3_1_,
                          (undefined3)local_120);
            local_120._0_5_ =
                 CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | local_120._4_1_,
                          (undefined4)local_120);
            local_120._0_6_ =
                 CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | local_120._5_1_,
                          (undefined5)local_120);
            local_120._0_7_ =
                 CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | local_120._6_1_,
                          (undefined6)local_120);
            local_120 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | local_120._7_1_,
                                 (undefined7)local_120);
          }
          fVar111 = (float)CONCAT13(bStack_105,CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108)))
          ;
          fVar105 = (float)CONCAT13(bStack_10d,CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
          bVar100 = (byte)((ulonglong)_DAT_10160a80 >> 0x20);
          bVar116 = (byte)((ulonglong)uRam10160a88 >> 0x20);
          uVar49 = *(uint *)(&DAT_10161270 +
                            ((byte)(-((float)(uStack_118 >> 0x20) < 0.0) & bVar116 |
                                    -((float)((ulonglong)local_120 >> 0x20) < 0.0) & bVar100 |
                                   -((float)uStack_118 < 0.0) & (byte)uRam10160a88 |
                                   -((float)local_120 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                   *(uint *)(&DAT_10161280 +
                            ((byte)(-((float)(CONCAT17(bStack_101,
                                                       CONCAT16(bStack_102,
                                                                CONCAT15(bStack_103,
                                                                         CONCAT14(bStack_104,fVar111
                                                                                 )))) >> 0x20) < 0.0
                                     ) & bVar116 |
                                    -((float)(CONCAT17(bStack_109,
                                                       CONCAT16(bStack_10a,
                                                                CONCAT15(bStack_10b,
                                                                         CONCAT14(bStack_10c,fVar105
                                                                                 )))) >> 0x20) < 0.0
                                     ) & bVar100 |
                                   -(fVar111 < 0.0) & (byte)uRam10160a88 |
                                   -(fVar105 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4);
          uVar41 = (*(uint *)(&DAT_10161280 +
                             ((byte)(-((float)(CONCAT17(bStack_101,
                                                        CONCAT16(bStack_102,
                                                                 CONCAT15(bStack_103,
                                                                          CONCAT14(bStack_104,
                                                                                   fVar111)))) >>
                                              0x20) < 0.0) & bVar116 |
                                     -((float)(CONCAT17(bStack_109,
                                                        CONCAT16(bStack_10a,
                                                                 CONCAT15(bStack_10b,
                                                                          CONCAT14(bStack_10c,
                                                                                   fVar105)))) >>
                                              0x20) < 0.0) & bVar100 |
                                    -(fVar111 < 0.0) & (byte)uRam10160a88 |
                                    -(fVar105 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4) | 0xc3f) &
                   (*(uint *)(&DAT_10161270 +
                             ((byte)(-((float)(uStack_118 >> 0x20) < 0.0) & bVar116 |
                                     -((float)((ulonglong)local_120 >> 0x20) < 0.0) & bVar100 |
                                    -((float)uStack_118 < 0.0) & (byte)uRam10160a88 |
                                    -((float)local_120 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                   0x3ff) & puVar24[1];
        }
        puVar48 = puVar24 + 1;
        *puVar48 = uVar41;
        uVar52 = FUN_10024f30();
        fVar105 = (float)(CONCAT17(bStack_d9,
                                   CONCAT16(bStack_da,
                                            CONCAT15(bStack_db,CONCAT14(bStack_dc,fVar119)))) >>
                         0x20);
        uVar41 = *(uint *)(&DAT_10161230 +
                          ((byte)(-(fVar105 * (float)(in_register_00005008 >> 0x20) + fVar82 < 0.0)
                                  & (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                  -(fVar119 * (float)((ulonglong)uVar52 >> 0x20) + fVar82 < 0.0) &
                                  (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                 -(fVar105 * (float)in_register_00005008 + fVar82 < 0.0) &
                                 (byte)uRam10160a88 |
                                 -(fVar119 * (float)uVar52 + fVar82 < 0.0) & (byte)_DAT_10160a80) &
                          0xf) * 4);
        *puVar48 = (uVar41 | 0x30) & *puVar48;
        uVar52 = FUN_10024f30();
        uVar46 = in_register_00005008;
        uVar53 = FUN_10024f58();
        fVar105 = (float)CONCAT13(bStack_d1 & (byte)((ulonglong)uVar53 >> 0x18),
                                  CONCAT12(bStack_d2 & (byte)((ulonglong)uVar53 >> 0x10),
                                           CONCAT11(bStack_d3 & (byte)((ulonglong)uVar53 >> 8),
                                                    bStack_d4 & (byte)uVar53)));
        auVar84._0_8_ =
             CONCAT17(bStack_d1 & (byte)((ulonglong)uVar53 >> 0x38),
                      CONCAT16(bStack_d2 & (byte)((ulonglong)uVar53 >> 0x30),
                               CONCAT15(bStack_d3 & (byte)((ulonglong)uVar53 >> 0x28),
                                        CONCAT14(bStack_d4 & (byte)((ulonglong)uVar53 >> 0x20),
                                                 fVar105))));
        auVar84[8] = bStack_d4 & (byte)uVar46;
        auVar84[9] = bStack_d3 & (byte)(uVar46 >> 8);
        auVar84[10] = bStack_d2 & (byte)(uVar46 >> 0x10);
        auVar84[0xb] = bStack_d1 & (byte)(uVar46 >> 0x18);
        auVar90[0xc] = bStack_d4 & (byte)(uVar46 >> 0x20);
        auVar90._0_12_ = auVar84;
        auVar90[0xd] = bStack_d3 & (byte)(uVar46 >> 0x28);
        auVar90[0xe] = bStack_d2 & (byte)(uVar46 >> 0x30);
        auVar90[0xf] = bStack_d1 & (byte)(uVar46 >> 0x38);
        uVar41 = uVar49 | *(uint *)(&DAT_10161220 +
                                   ((byte)(-(fVar112 * (float)(in_register_00005008 >> 0x20) +
                                             auVar90._12_4_ < 0.0) &
                                           (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                           -(fVar112 * (float)((ulonglong)uVar52 >> 0x20) +
                                             (float)((ulonglong)auVar84._0_8_ >> 0x20) < 0.0) &
                                           (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                          -(fVar112 * (float)in_register_00005008 + auVar84._8_4_ <
                                           0.0) & (byte)uRam10160a88 |
                                          -(fVar112 * (float)uVar52 + fVar105 < 0.0) &
                                          (byte)_DAT_10160a80) & 3) * 4) | uVar41;
        *puVar48 = (*(uint *)(&DAT_10161220 +
                             ((byte)(-(fVar112 * (float)(in_register_00005008 >> 0x20) +
                                       auVar90._12_4_ < 0.0) &
                                     (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                     -(fVar112 * (float)((ulonglong)uVar52 >> 0x20) +
                                       (float)((ulonglong)auVar84._0_8_ >> 0x20) < 0.0) &
                                     (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                    -(fVar112 * (float)in_register_00005008 + auVar84._8_4_ < 0.0) &
                                    (byte)uRam10160a88 |
                                    -(fVar112 * (float)uVar52 + fVar105 < 0.0) & (byte)_DAT_10160a80
                                    ) & 3) * 4) | 0xf) & *puVar48;
        *puVar24 = uVar41 | *puVar24;
      }
      if (*(char *)((int)param_2 + 0x3e) == '\0') {
        uVar53 = FUN_10024f48();
        uVar52 = CONCAT17(bStack_d9,
                          CONCAT16(bStack_da,CONCAT15(bStack_db,CONCAT14(bStack_dc,fVar119))));
        auVar58[8] = bStack_d8;
        auVar58._0_8_ = uVar52;
        auVar58[9] = bStack_d7;
        auVar58[10] = bStack_d6;
        auVar58[0xb] = bStack_d5;
        auVar64._0_8_ =
             CONCAT44((((float)((ulonglong)uVar52 >> 0x20) + (float)((ulonglong)uVar53 >> 0x20)) /
                      fVar82) * (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20),
                      ((fVar119 + (float)uVar53) / fVar82) * (float)*(undefined8 *)pfVar2 +
                      (float)*(undefined8 *)pfVar4);
        auVar64._8_4_ =
             ((auVar58._8_4_ + (float)in_register_00005008) / fVar82) *
             (float)*(undefined8 *)(param_2 + 0x1a) + (float)param_2[0x1e];
        auVar64._12_4_ =
             (((float)(in_register_00005008 >> 0x20) + 0.0) / fVar82) *
             (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
             (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
        if (uVar50 == 0) {
          *(longlong *)(param_2 + 0x26) = auVar64._8_8_;
          *(undefined8 *)*pauVar5 = auVar64._0_8_;
          *(longlong *)(param_2 + 0x22) = auVar64._8_8_;
          *(undefined8 *)*pauVar6 = auVar64._0_8_;
        }
        else {
          auVar74 = NEON_fmin(*pauVar6,auVar64,4);
          *(longlong *)(param_2 + 0x22) = auVar74._8_8_;
          *(longlong *)*pauVar6 = auVar74._0_8_;
          auVar74 = NEON_fmax(*pauVar5,auVar64,4);
          *(longlong *)(param_2 + 0x26) = auVar74._8_8_;
          *(longlong *)*pauVar5 = auVar74._0_8_;
        }
      }
      else {
        auVar64[4] = bStack_dc;
        auVar64._0_4_ = fVar119;
        auVar64[5] = bStack_db;
        auVar64[6] = bStack_da;
        auVar64[7] = bStack_d9;
        auVar64[8] = bStack_d8;
        auVar64[9] = bStack_d7;
        auVar64[10] = bStack_d6;
        auVar64[0xb] = bStack_d5;
        auVar64[0xc] = bStack_d4;
        auVar64[0xd] = bStack_d3;
        auVar64[0xe] = bStack_d2;
        auVar64[0xf] = bStack_d1;
      }
      puVar27 = (undefined8 *)*piVar17;
      if (puVar27 != (undefined8 *)0x0) {
        if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar41 == 0)) {
          puVar27[1] = auVar64._8_8_;
          *puVar27 = auVar64._0_8_;
        }
        else {
          *(int *)((int)puVar27 + 0xc) = auVar64._12_4_;
        }
        *piVar17 = param_2[0x15] + *piVar17;
      }
      uVar50 = uVar50 + 1;
    } while (uVar50 < param_4);
LAB_10036c28:
    fVar82 = (float)*(undefined8 *)*pauVar6 + -0.5;
    fVar105 = (float)((ulonglong)*(undefined8 *)*pauVar6 >> 0x20) + -0.5;
    uVar127 = (undefined1)((uint)fVar105 >> 8);
    uVar128 = (undefined1)((uint)fVar105 >> 0x10);
    uVar129 = (undefined1)((uint)fVar105 >> 0x18);
    fVar111 = (float)*(undefined8 *)(param_2 + 0x22) + 0.0;
    fVar118 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x22) >> 0x20) + 0.0;
    uVar130 = (undefined1)((uint)fVar118 >> 8);
    uVar131 = (undefined1)((uint)fVar118 >> 0x10);
    uVar132 = (undefined1)((uint)fVar118 >> 0x18);
    *(ulonglong *)(param_2 + 0x22) =
         CONCAT17(uVar132,CONCAT16(uVar131,CONCAT15(uVar130,CONCAT14(SUB41(fVar118,0),fVar111))));
    *(ulonglong *)*pauVar6 =
         CONCAT17(uVar129,CONCAT16(uVar128,CONCAT15(uVar127,CONCAT14(SUB41(fVar105,0),fVar82))));
    auVar123._0_8_ =
         CONCAT44((float)((ulonglong)*(undefined8 *)*pauVar5 >> 0x20) + 0.5,
                  (float)*(undefined8 *)*pauVar5 + 0.5);
    auVar123._8_4_ = (float)*(undefined8 *)(param_2 + 0x26) + 0.0;
    auVar123._12_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 0x26) >> 0x20) + 0.0;
    auVar33._8_4_ = uVar21;
    auVar33._0_8_ = uVar83;
    auVar33._12_4_ = 0;
    *(longlong *)(param_2 + 0x26) = auVar123._8_8_;
    *(undefined8 *)*pauVar5 = auVar123._0_8_;
    auVar29[4] = SUB41(fVar105,0);
    auVar29._0_4_ = fVar82;
    auVar29[5] = uVar127;
    auVar29[6] = uVar128;
    auVar29[7] = uVar129;
    auVar29[8] = SUB41(fVar111,0);
    auVar29[9] = (char)((uint)fVar111 >> 8);
    auVar29[10] = (char)((uint)fVar111 >> 0x10);
    auVar29[0xb] = (char)((uint)fVar111 >> 0x18);
    auVar29[0xc] = SUB41(fVar118,0);
    auVar29[0xd] = uVar130;
    auVar29[0xe] = uVar131;
    auVar29[0xf] = uVar132;
    auVar97 = NEON_fmin(auVar29,auVar33,4);
    auVar32._8_4_ = uVar22;
    auVar32._0_8_ = uVar57;
    auVar32._12_4_ = 0;
    auVar124 = NEON_fmax(auVar123,auVar32,4);
    goto LAB_10036c78;
  case 1:
    uVar50 = 0;
    if (param_4 != 0) {
      piVar51 = param_2 + 0x14;
      do {
        puVar27 = (undefined8 *)(*param_2 + uVar50 * param_2[6]);
        if ((char)param_2[0xd] == '\x02') {
          uVar52 = *puVar27;
          in_register_00005008 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
        }
        else {
          uVar52 = FUN_10036ee8(puVar27,(char)param_2[0xd]);
        }
        if (*pcVar11 != '\0') {
          puVar27 = (undefined8 *)(*piVar10 + param_2[7] * uVar50);
          if (*(char *)((int)param_2 + 0x35) == '\x02') {
            local_120 = *puVar27;
            uStack_118 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
          }
          else {
            uStack_118 = in_register_00005008;
            local_120 = FUN_10036ee8(puVar27,*(char *)((int)param_2 + 0x35));
          }
        }
        pfVar25 = (float *)(param_2[2] + uVar50 * param_2[0xb]);
        puVar24 = (uint *)(param_2[5] + param_2[10] * uVar50);
        if (*(char *)((int)param_2 + 0x39) == '\x05') {
          uVar41 = *puVar24;
        }
        else {
          uVar41 = FUN_10037828(puVar24,*(char *)((int)param_2 + 0x39));
        }
        auVar91 = ZEXT516(0) << 8;
        iVar20 = (uVar41 & 0xff) + 10;
        uVar49 = uVar41 >> 8 & 0xff;
        iVar12 = uVar49 + 10;
        fVar82 = *pfVar25;
        iVar43 = *(int *)(param_1 + 0xd80);
        puVar27 = (undefined8 *)(iVar43 + iVar12 * 0x40);
        fVar118 = (float)uVar52;
        fVar119 = (float)((ulonglong)uVar52 >> 0x20);
        fVar106 = (float)in_register_00005008;
        fVar112 = (float)(in_register_00005008 >> 0x20);
        puVar13 = (undefined8 *)(iVar43 + iVar20 * 0x40);
        auVar74 = NEON_fmov(0x3f800000,4);
        fVar105 = (fVar106 * (float)puVar13[1] + fVar112 * (float)((ulonglong)puVar13[1] >> 0x20) +
                  fVar118 * (float)*puVar13 + fVar119 * (float)((ulonglong)*puVar13 >> 0x20)) *
                  fVar82 + (fVar106 * (float)puVar27[1] +
                            fVar112 * (float)((ulonglong)puVar27[1] >> 0x20) +
                           fVar118 * (float)*puVar27 +
                           fVar119 * (float)((ulonglong)*puVar27 >> 0x20)) *
                           (auVar74._0_4_ - fVar82);
        fVar111 = (fVar106 * (float)puVar13[3] + fVar112 * (float)((ulonglong)puVar13[3] >> 0x20) +
                  fVar118 * (float)puVar13[2] + fVar119 * (float)((ulonglong)puVar13[2] >> 0x20)) *
                  fVar82 + (fVar106 * (float)puVar27[3] +
                            fVar112 * (float)((ulonglong)puVar27[3] >> 0x20) +
                           fVar118 * (float)puVar27[2] +
                           fVar119 * (float)((ulonglong)puVar27[2] >> 0x20)) *
                           (auVar74._4_4_ - fVar82);
        uVar127 = SUB41(fVar111,0);
        uVar128 = (undefined1)((uint)fVar111 >> 8);
        uVar129 = (undefined1)((uint)fVar111 >> 0x10);
        uVar130 = (undefined1)((uint)fVar111 >> 0x18);
        fVar111 = (fVar106 * (float)puVar13[5] + fVar112 * (float)((ulonglong)puVar13[5] >> 0x20) +
                  fVar118 * (float)puVar13[4] + fVar119 * (float)((ulonglong)puVar13[4] >> 0x20)) *
                  fVar82 + (fVar106 * (float)puVar27[5] +
                            fVar112 * (float)((ulonglong)puVar27[5] >> 0x20) +
                           fVar118 * (float)puVar27[4] +
                           fVar119 * (float)((ulonglong)puVar27[4] >> 0x20)) *
                           (auVar74._8_4_ - fVar82);
        fVar82 = (fVar106 * (float)puVar13[7] + fVar112 * (float)((ulonglong)puVar13[7] >> 0x20) +
                 fVar118 * (float)puVar13[6] + fVar119 * (float)((ulonglong)puVar13[6] >> 0x20)) *
                 fVar82 + (fVar106 * (float)puVar27[7] +
                           fVar112 * (float)((ulonglong)puVar27[7] >> 0x20) +
                          fVar118 * (float)puVar27[6] +
                          fVar119 * (float)((ulonglong)puVar27[6] >> 0x20)) *
                          (auVar74._12_4_ - fVar82);
        fStack_134 = (float)(CONCAT17((char)((uint)fVar82 >> 0x18),
                                      CONCAT16((char)((uint)fVar82 >> 0x10),
                                               CONCAT15((char)((uint)fVar82 >> 8),
                                                        CONCAT14(SUB41(fVar82,0),fVar111)))) >> 0x20
                            );
        if (*pcVar11 != '\0') {
          FUN_10029c30(param_1,iVar20);
          FUN_10029c30(param_1,iVar12);
          fVar82 = *pfVar25;
          fVar106 = (float)uStack_118;
          fVar112 = (float)(uStack_118 >> 0x20);
          fVar118 = (float)local_120;
          fVar119 = (float)((ulonglong)local_120 >> 0x20);
          iVar43 = *(int *)(param_1 + 0xd80);
          puVar27 = (undefined8 *)(iVar43 + (uVar49 + 0x114) * 0x40);
          puVar13 = (undefined8 *)(iVar43 + ((uVar41 & 0xff) + 0x114) * 0x40);
          auVar74 = NEON_fmov(0x3f800000,4);
          auVar91._0_4_ =
               (fVar106 * (float)puVar13[1] + fVar112 * (float)((ulonglong)puVar13[1] >> 0x20) +
               fVar118 * (float)*puVar13 + fVar119 * (float)((ulonglong)*puVar13 >> 0x20)) * fVar82
               + (fVar106 * (float)puVar27[1] + fVar112 * (float)((ulonglong)puVar27[1] >> 0x20) +
                 fVar118 * (float)*puVar27 + fVar119 * (float)((ulonglong)*puVar27 >> 0x20)) *
                 (auVar74._0_4_ - fVar82);
          auVar91._4_4_ =
               (fVar106 * (float)puVar13[3] + fVar112 * (float)((ulonglong)puVar13[3] >> 0x20) +
               fVar118 * (float)puVar13[2] + fVar119 * (float)((ulonglong)puVar13[2] >> 0x20)) *
               fVar82 + (fVar106 * (float)puVar27[3] +
                         fVar112 * (float)((ulonglong)puVar27[3] >> 0x20) +
                        fVar118 * (float)puVar27[2] +
                        fVar119 * (float)((ulonglong)puVar27[2] >> 0x20)) * (auVar74._4_4_ - fVar82)
          ;
          auVar91._8_4_ =
               (fVar106 * (float)puVar13[5] + fVar112 * (float)((ulonglong)puVar13[5] >> 0x20) +
               fVar118 * (float)puVar13[4] + fVar119 * (float)((ulonglong)puVar13[4] >> 0x20)) *
               fVar82 + (fVar106 * (float)puVar27[5] +
                         fVar112 * (float)((ulonglong)puVar27[5] >> 0x20) +
                        fVar118 * (float)puVar27[4] +
                        fVar119 * (float)((ulonglong)puVar27[4] >> 0x20)) * (auVar74._8_4_ - fVar82)
          ;
          auVar91._12_4_ =
               (fVar106 * (float)puVar13[7] + fVar112 * (float)((ulonglong)puVar13[7] >> 0x20) +
               fVar118 * (float)puVar13[6] + fVar119 * (float)((ulonglong)puVar13[6] >> 0x20)) *
               fVar82 + (fVar106 * (float)puVar27[7] +
                         fVar112 * (float)((ulonglong)puVar27[7] >> 0x20) +
                        fVar118 * (float)puVar27[6] +
                        fVar119 * (float)((ulonglong)puVar27[6] >> 0x20)) *
                        (auVar74._12_4_ - fVar82);
        }
        uVar52 = CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,fVar105))));
        fVar82 = (float)((ulonglong)uVar52 >> 0x20);
        fVar118 = fVar111 * (float)*(undefined8 *)(iVar43 + 0x8588) +
                  fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x8588) >> 0x20) +
                  fVar105 * (float)*(undefined8 *)(iVar43 + 0x8580) +
                  fVar82 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x8580) >> 0x20);
        fVar119 = fVar111 * (float)*(undefined8 *)(iVar43 + 0x8598) +
                  fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x8598) >> 0x20) +
                  fVar105 * (float)*(undefined8 *)(iVar43 + 0x8590) +
                  fVar82 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x8590) >> 0x20);
        fVar106 = fVar111 * (float)*(undefined8 *)(iVar43 + 0x85a8) +
                  fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x85a8) >> 0x20) +
                  fVar105 * (float)*(undefined8 *)(iVar43 + 0x85a0) +
                  fVar82 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x85a0) >> 0x20);
        fVar82 = fVar111 * (float)*(undefined8 *)(iVar43 + 0x85b8) +
                 fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x85b8) >> 0x20) +
                 fVar105 * (float)*(undefined8 *)(iVar43 + 0x85b0) +
                 fVar82 * (float)((ulonglong)*(undefined8 *)(iVar43 + 0x85b0) >> 0x20);
        bStack_108 = SUB41(fVar106,0);
        bStack_107 = (byte)((uint)fVar106 >> 8);
        bStack_106 = (byte)((uint)fVar106 >> 0x10);
        bStack_105 = (byte)((uint)fVar106 >> 0x18);
        bStack_104 = SUB41(fVar82,0);
        bStack_103 = (byte)((uint)fVar82 >> 8);
        bStack_102 = (byte)((uint)fVar82 >> 0x10);
        bStack_101 = (byte)((uint)fVar82 >> 0x18);
        bStack_10e = (byte)((uint)fVar118 >> 0x10);
        bStack_10d = (byte)((uint)fVar118 >> 0x18);
        bStack_10c = SUB41(fVar119,0);
        bStack_10b = (byte)((uint)fVar119 >> 8);
        bStack_10a = (byte)((uint)fVar119 >> 0x10);
        bStack_109 = (byte)((uint)fVar119 >> 0x18);
        if (*piVar8 != 0) {
          puVar27 = (undefined8 *)(*piVar8 + uVar50 * 0x20);
          puVar27[1] = CONCAT44(fStack_134,fVar111);
          *puVar27 = uVar52;
          iVar20 = *piVar8 + uVar50 * 0x20;
          *(longlong *)(iVar20 + 0x18) = auVar91._8_8_;
          *(longlong *)(iVar20 + 0x10) = auVar91._0_8_;
        }
        uVar41 = 0;
        if (*pcVar3 != '\0') {
          puVar24 = (uint *)*piVar1;
          piVar17 = param_2 + 0x28;
          if ((char)*piVar7 == '\0') {
            piVar17 = (int *)0x0;
          }
          if (piVar17 == (int *)0x0) {
            uVar41 = 0;
            uVar49 = puVar24[1] & 0xfffff03f;
          }
          else {
            bVar100 = 0;
            bVar101 = 0;
            bVar120 = 0;
            bVar102 = 0;
            bVar122 = 0;
            bVar103 = 0;
            bVar104 = 0;
            bVar107 = 0;
            bVar108 = 0;
            bVar109 = 0;
            bVar110 = 0;
            bVar113 = 0;
            bVar116 = 0;
            bVar117 = 0;
            bVar80 = 0;
            bVar121 = 0;
            bStack_d8 = 0;
            bStack_d7 = 0;
            bStack_d6 = 0;
            bStack_d5 = 0;
            bStack_d4 = 0;
            bStack_d3 = 0;
            bStack_d2 = 0;
            bStack_d1 = 0;
            local_e0 = 0;
            bStack_df = 0;
            bStack_de = 0;
            bStack_dd = 0;
            bStack_dc = 0;
            bStack_db = 0;
            bStack_da = 0;
            bStack_d9 = 0;
            if ((*puVar47 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar119 = (float)((ulonglong)*(undefined8 *)(piVar17 + 2) >> 0x20) * fStack_134 +
                        (float)((ulonglong)*(undefined8 *)piVar17 >> 0x20) *
                        (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                        (float)*(undefined8 *)(piVar17 + 2) * fVar111 +
                        (float)*(undefined8 *)piVar17 * fVar105;
              bVar116 = SUB41(fVar119,0);
              bVar101 = bVar116 & (byte)uVar52;
              bVar117 = (byte)((uint)fVar119 >> 8);
              bVar100 = bVar117 & (byte)((ulonglong)uVar52 >> 8);
              bVar80 = (byte)((uint)fVar119 >> 0x10);
              bVar120 = bVar80 & (byte)((ulonglong)uVar52 >> 0x10);
              bVar121 = (byte)((uint)fVar119 >> 0x18);
              bVar102 = bVar121 & (byte)((ulonglong)uVar52 >> 0x18);
              bVar122 = bVar116 & (byte)((ulonglong)uVar52 >> 0x20);
              bVar103 = bVar117 & (byte)((ulonglong)uVar52 >> 0x28);
              bVar104 = bVar80 & (byte)((ulonglong)uVar52 >> 0x30);
              bVar107 = bVar121 & (byte)((ulonglong)uVar52 >> 0x38);
              bVar108 = bVar116 & (byte)in_register_00005008;
              bVar109 = bVar117 & (byte)(in_register_00005008 >> 8);
              bVar110 = bVar80 & (byte)(in_register_00005008 >> 0x10);
              bVar113 = bVar121 & (byte)(in_register_00005008 >> 0x18);
              bVar116 = bVar116 & (byte)(in_register_00005008 >> 0x20);
              bVar117 = bVar117 & (byte)(in_register_00005008 >> 0x28);
              bVar80 = bVar80 & (byte)(in_register_00005008 >> 0x30);
              bVar121 = bVar121 & (byte)(in_register_00005008 >> 0x38);
            }
            uStack_f8._0_2_ = CONCAT11(bVar109,bVar108);
            uStack_f8._0_3_ = CONCAT12(bVar110,(undefined2)uStack_f8);
            uStack_f8._0_4_ = CONCAT13(bVar113,(undefined3)uStack_f8);
            uStack_f8._0_5_ = CONCAT14(bVar116,(undefined4)uStack_f8);
            uStack_f8._0_6_ = CONCAT15(bVar117,(undefined5)uStack_f8);
            uStack_f8._0_7_ = CONCAT16(bVar80,(undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar121,(undefined7)uStack_f8);
            local_100._0_2_ = CONCAT11(bVar100,bVar101);
            local_100._0_3_ = CONCAT12(bVar120,(undefined2)local_100);
            local_100._0_4_ = CONCAT13(bVar102,(undefined3)local_100);
            local_100._0_5_ = CONCAT14(bVar122,(undefined4)local_100);
            local_100._0_6_ = CONCAT15(bVar103,(undefined5)local_100);
            local_100._0_7_ = CONCAT16(bVar104,(undefined6)local_100);
            local_100 = CONCAT17(bVar107,(undefined7)local_100);
            if ((*puVar47 >> 1 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar119 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x1a) >> 0x20) * fStack_134 +
                        (float)((ulonglong)*(undefined8 *)(piVar17 + 0x18) >> 0x20) *
                        (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                        (float)*(undefined8 *)(piVar17 + 0x1a) * fVar111 +
                        (float)*(undefined8 *)(piVar17 + 0x18) * fVar105;
              bVar114 = SUB41(fVar119,0);
              bVar115 = (byte)((uint)fVar119 >> 8);
              bVar54 = (byte)((uint)fVar119 >> 0x10);
              bVar75 = (byte)((uint)fVar119 >> 0x18);
              uStack_f8._0_2_ =
                   CONCAT11(bVar115 & (byte)(in_register_00005008 >> 8) | bVar109,
                            bVar114 & (byte)in_register_00005008 | bVar108);
              uStack_f8._0_3_ =
                   CONCAT12(bVar54 & (byte)(in_register_00005008 >> 0x10) | bVar110,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar75 & (byte)(in_register_00005008 >> 0x18) | bVar113,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar114 & (byte)(in_register_00005008 >> 0x20) | bVar116,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar115 & (byte)(in_register_00005008 >> 0x28) | bVar117,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar54 & (byte)(in_register_00005008 >> 0x30) | bVar80,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar75 & (byte)(in_register_00005008 >> 0x38) | bVar121,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar115 & (byte)((ulonglong)uVar52 >> 8) | bVar100,
                            bVar114 & (byte)uVar52 | bVar101);
              local_100._0_3_ =
                   CONCAT12(bVar54 & (byte)((ulonglong)uVar52 >> 0x10) | bVar120,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar75 & (byte)((ulonglong)uVar52 >> 0x18) | bVar102,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar114 & (byte)((ulonglong)uVar52 >> 0x20) | bVar122,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar115 & (byte)((ulonglong)uVar52 >> 0x28) | bVar103,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar54 & (byte)((ulonglong)uVar52 >> 0x30) | bVar104,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar75 & (byte)((ulonglong)uVar52 >> 0x38) | bVar107,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 2 & 1) != 0) {
              uVar52 = FUN_10024f78();
              fVar119 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x32) >> 0x20) * fStack_134 +
                        (float)((ulonglong)*(undefined8 *)(piVar17 + 0x30) >> 0x20) *
                        (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                        (float)*(undefined8 *)(piVar17 + 0x32) * fVar111 +
                        (float)*(undefined8 *)(piVar17 + 0x30) * fVar105;
              bVar100 = SUB41(fVar119,0);
              bVar116 = (byte)((uint)fVar119 >> 8);
              bVar101 = (byte)((uint)fVar119 >> 0x10);
              bVar117 = (byte)((uint)fVar119 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar116 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar100 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar101 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar117 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar100 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar100 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 3 & 1) != 0) {
              uVar52 = FUN_10024f88();
              fVar119 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x4a) >> 0x20) * fStack_134 +
                        (float)((ulonglong)*(undefined8 *)(piVar17 + 0x48) >> 0x20) *
                        (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                        (float)*(undefined8 *)(piVar17 + 0x4a) * fVar111 +
                        (float)*(undefined8 *)(piVar17 + 0x48) * fVar105;
              bVar100 = SUB41(fVar119,0);
              bVar116 = (byte)((uint)fVar119 >> 8);
              bVar101 = (byte)((uint)fVar119 >> 0x10);
              bVar117 = (byte)((uint)fVar119 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar116 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar100 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar101 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar117 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar100 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar100 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 4 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar119 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x62) >> 0x20) * fStack_134 +
                        (float)((ulonglong)*(undefined8 *)(piVar17 + 0x60) >> 0x20) *
                        (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                        (float)*(undefined8 *)(piVar17 + 0x62) * fVar111 +
                        (float)*(undefined8 *)(piVar17 + 0x60) * fVar105;
              bStack_d4 = SUB41(fVar119,0);
              local_e0 = bStack_d4 & (byte)uVar52;
              bStack_d3 = (byte)((uint)fVar119 >> 8);
              bStack_df = bStack_d3 & (byte)((ulonglong)uVar52 >> 8);
              bStack_d2 = (byte)((uint)fVar119 >> 0x10);
              bStack_de = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x10);
              bStack_d1 = (byte)((uint)fVar119 >> 0x18);
              bStack_dd = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x18);
              bStack_dc = bStack_d4 & (byte)((ulonglong)uVar52 >> 0x20);
              bStack_db = bStack_d3 & (byte)((ulonglong)uVar52 >> 0x28);
              bStack_da = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x30);
              bStack_d9 = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x38);
              bStack_d8 = bStack_d4 & (byte)in_register_00005008;
              bStack_d7 = bStack_d3 & (byte)(in_register_00005008 >> 8);
              bStack_d6 = bStack_d2 & (byte)(in_register_00005008 >> 0x10);
              bStack_d5 = bStack_d1 & (byte)(in_register_00005008 >> 0x18);
              bStack_d4 = bStack_d4 & (byte)(in_register_00005008 >> 0x20);
              bStack_d3 = bStack_d3 & (byte)(in_register_00005008 >> 0x28);
              bStack_d2 = bStack_d2 & (byte)(in_register_00005008 >> 0x30);
              bStack_d1 = bStack_d1 & (byte)(in_register_00005008 >> 0x38);
            }
            if ((*puVar47 >> 5 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar105 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x7a) >> 0x20) * fStack_134 +
                        (float)((ulonglong)*(undefined8 *)(piVar17 + 0x78) >> 0x20) *
                        (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                        (float)*(undefined8 *)(piVar17 + 0x7a) * fVar111 +
                        (float)*(undefined8 *)(piVar17 + 0x78) * fVar105;
              bVar100 = SUB41(fVar105,0);
              bVar116 = (byte)((uint)fVar105 >> 8);
              bVar101 = (byte)((uint)fVar105 >> 0x10);
              bVar117 = (byte)((uint)fVar105 >> 0x18);
              local_e0 = bVar100 & (byte)uVar52 | local_e0;
              bStack_df = bVar116 & (byte)((ulonglong)uVar52 >> 8) | bStack_df;
              bStack_de = bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | bStack_de;
              bStack_dd = bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | bStack_dd;
              bStack_dc = bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | bStack_dc;
              bStack_db = bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | bStack_db;
              bStack_da = bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | bStack_da;
              bStack_d9 = bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | bStack_d9;
              bStack_d8 = bVar100 & (byte)in_register_00005008 | bStack_d8;
              bStack_d7 = bVar116 & (byte)(in_register_00005008 >> 8) | bStack_d7;
              bStack_d6 = bVar101 & (byte)(in_register_00005008 >> 0x10) | bStack_d6;
              bStack_d5 = bVar117 & (byte)(in_register_00005008 >> 0x18) | bStack_d5;
              bStack_d4 = bVar100 & (byte)(in_register_00005008 >> 0x20) | bStack_d4;
              bStack_d3 = bVar116 & (byte)(in_register_00005008 >> 0x28) | bStack_d3;
              bStack_d2 = bVar101 & (byte)(in_register_00005008 >> 0x30) | bStack_d2;
              bStack_d1 = bVar117 & (byte)(in_register_00005008 >> 0x38) | bStack_d1;
            }
            bVar100 = (byte)((ulonglong)_DAT_10160a80 >> 0x20);
            bVar116 = (byte)((ulonglong)uRam10160a88 >> 0x20);
            fVar105 = (float)CONCAT13(bStack_dd,CONCAT12(bStack_de,CONCAT11(bStack_df,local_e0)));
            uVar41 = *(uint *)(&DAT_10161270 +
                              ((byte)(-((float)CONCAT13(bStack_d1,
                                                        CONCAT12(bStack_d2,
                                                                 CONCAT11(bStack_d3,bStack_d4))) <
                                       0.0) & bVar116 |
                                      -((float)(CONCAT17(bStack_d9,
                                                         CONCAT16(bStack_da,
                                                                  CONCAT15(bStack_db,
                                                                           CONCAT14(bStack_dc,
                                                                                    fVar105)))) >>
                                               0x20) < 0.0) & bVar100 |
                                     -((float)CONCAT13(bStack_d5,
                                                       CONCAT12(bStack_d6,
                                                                CONCAT11(bStack_d7,bStack_d8))) <
                                      0.0) & (byte)uRam10160a88 |
                                     -(fVar105 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                     *(uint *)(&DAT_10161280 +
                              ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar116 |
                                      -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar100 |
                                     -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                     -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4);
            uVar49 = (*(uint *)(&DAT_10161280 +
                               ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar116 |
                                       -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar100 |
                                      -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                      -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4) |
                     0xc3f) & (*(uint *)(&DAT_10161270 +
                                        ((byte)(-((float)CONCAT13(bStack_d1,
                                                                  CONCAT12(bStack_d2,
                                                                           CONCAT11(bStack_d3,
                                                                                    bStack_d4))) <
                                                 0.0) & bVar116 |
                                                -((float)(CONCAT17(bStack_d9,
                                                                   CONCAT16(bStack_da,
                                                                            CONCAT15(bStack_db,
                                                                                     CONCAT14(
                                                  bStack_dc,fVar105)))) >> 0x20) < 0.0) & bVar100 |
                                               -((float)CONCAT13(bStack_d5,
                                                                 CONCAT12(bStack_d6,
                                                                          CONCAT11(bStack_d7,
                                                                                   bStack_d8))) <
                                                0.0) & (byte)uRam10160a88 |
                                               -(fVar105 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                              0x3ff) & puVar24[1];
          }
          puVar48 = puVar24 + 1;
          *puVar48 = uVar49;
          uVar52 = FUN_10024f30();
          fVar105 = (float)(CONCAT17(bStack_109,
                                     CONCAT16(bStack_10a,
                                              CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar118)))) >>
                           0x20);
          uVar49 = *(uint *)(&DAT_10161230 +
                            ((byte)(-(fVar105 * (float)(in_register_00005008 >> 0x20) + fVar82 < 0.0
                                     ) & (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                    -(fVar118 * (float)((ulonglong)uVar52 >> 0x20) + fVar82 < 0.0) &
                                    (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                   -(fVar105 * (float)in_register_00005008 + fVar82 < 0.0) &
                                   (byte)uRam10160a88 |
                                   -(fVar118 * (float)uVar52 + fVar82 < 0.0) & (byte)_DAT_10160a80)
                            & 0xf) * 4);
          *puVar48 = (uVar49 | 0x30) & *puVar48;
          uVar52 = FUN_10024f30();
          fStack_138 = (float)in_register_00005008;
          fStack_134 = (float)(in_register_00005008 >> 0x20);
          uVar46 = in_register_00005008;
          uVar53 = FUN_10024f58();
          fVar105 = (float)CONCAT13(bStack_101 & (byte)((ulonglong)uVar53 >> 0x18),
                                    CONCAT12(bStack_102 & (byte)((ulonglong)uVar53 >> 0x10),
                                             CONCAT11(bStack_103 & (byte)((ulonglong)uVar53 >> 8),
                                                      bStack_104 & (byte)uVar53)));
          auVar85._0_8_ =
               CONCAT17(bStack_101 & (byte)((ulonglong)uVar53 >> 0x38),
                        CONCAT16(bStack_102 & (byte)((ulonglong)uVar53 >> 0x30),
                                 CONCAT15(bStack_103 & (byte)((ulonglong)uVar53 >> 0x28),
                                          CONCAT14(bStack_104 & (byte)((ulonglong)uVar53 >> 0x20),
                                                   fVar105))));
          auVar85[8] = bStack_104 & (byte)uVar46;
          auVar85[9] = bStack_103 & (byte)(uVar46 >> 8);
          auVar85[10] = bStack_102 & (byte)(uVar46 >> 0x10);
          auVar85[0xb] = bStack_101 & (byte)(uVar46 >> 0x18);
          auVar92[0xc] = bStack_104 & (byte)(uVar46 >> 0x20);
          auVar92._0_12_ = auVar85;
          auVar92[0xd] = bStack_103 & (byte)(uVar46 >> 0x28);
          auVar92[0xe] = bStack_102 & (byte)(uVar46 >> 0x30);
          auVar92[0xf] = bStack_101 & (byte)(uVar46 >> 0x38);
          uVar41 = *(uint *)(&DAT_10161220 +
                            ((byte)(-(fVar106 * fStack_134 + auVar92._12_4_ < 0.0) &
                                    (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                    -(fVar106 * (float)((ulonglong)uVar52 >> 0x20) +
                                      (float)((ulonglong)auVar85._0_8_ >> 0x20) < 0.0) &
                                    (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                   -(fVar106 * fStack_138 + auVar85._8_4_ < 0.0) &
                                   (byte)uRam10160a88 |
                                   -(fVar106 * (float)uVar52 + fVar105 < 0.0) & (byte)_DAT_10160a80)
                            & 3) * 4) | uVar49 | uVar41;
          *puVar48 = (*(uint *)(&DAT_10161220 +
                               ((byte)(-(fVar106 * fStack_134 + auVar92._12_4_ < 0.0) &
                                       (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                       -(fVar106 * (float)((ulonglong)uVar52 >> 0x20) +
                                         (float)((ulonglong)auVar85._0_8_ >> 0x20) < 0.0) &
                                       (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                      -(fVar106 * fStack_138 + auVar85._8_4_ < 0.0) &
                                      (byte)uRam10160a88 |
                                      -(fVar106 * (float)uVar52 + fVar105 < 0.0) &
                                      (byte)_DAT_10160a80) & 3) * 4) | 0xf) & *puVar48;
          *puVar24 = uVar41 | *puVar24;
        }
        if (*(char *)((int)param_2 + 0x3e) == '\0') {
          uVar52 = FUN_10024f48();
          uVar46 = in_register_00005008;
          uVar53 = FUN_10024f98();
          fVar105 = (float)CONCAT13(bStack_10d & (byte)((ulonglong)uVar53 >> 0x18),
                                    CONCAT12(bStack_10e & (byte)((ulonglong)uVar53 >> 0x10),
                                             CONCAT11((byte)((uint)fVar118 >> 8) &
                                                      (byte)((ulonglong)uVar53 >> 8),
                                                      SUB41(fVar118,0) & (byte)uVar53)));
          auVar59._0_8_ =
               CONCAT17(bStack_109 & (byte)((ulonglong)uVar53 >> 0x38),
                        CONCAT16(bStack_10a & (byte)((ulonglong)uVar53 >> 0x30),
                                 CONCAT15(bStack_10b & (byte)((ulonglong)uVar53 >> 0x28),
                                          CONCAT14(bStack_10c & (byte)((ulonglong)uVar53 >> 0x20),
                                                   fVar105))));
          auVar59[8] = bStack_108 & (byte)uVar46;
          auVar59[9] = bStack_107 & (byte)(uVar46 >> 8);
          auVar59[10] = bStack_106 & (byte)(uVar46 >> 0x10);
          auVar59[0xb] = bStack_105 & (byte)(uVar46 >> 0x18);
          auVar65[0xc] = bStack_104 & (byte)(uVar46 >> 0x20);
          auVar65._0_12_ = auVar59;
          auVar65[0xd] = bStack_103 & (byte)(uVar46 >> 0x28);
          auVar65[0xe] = bStack_102 & (byte)(uVar46 >> 0x30);
          auVar65[0xf] = bStack_101 & (byte)(uVar46 >> 0x38);
          auVar66._0_8_ =
               CONCAT44((((float)((ulonglong)auVar59._0_8_ >> 0x20) +
                         (float)((ulonglong)uVar52 >> 0x20)) / fVar82) *
                        (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20),
                        ((fVar105 + (float)uVar52) / fVar82) * (float)*(undefined8 *)pfVar2 +
                        (float)*(undefined8 *)pfVar4);
          auVar66._8_4_ =
               ((auVar59._8_4_ + (float)in_register_00005008) / fVar82) *
               (float)*(undefined8 *)(param_2 + 0x1a) + (float)param_2[0x1e];
          auVar66._12_4_ =
               ((auVar65._12_4_ + (float)(in_register_00005008 >> 0x20)) / fVar82) *
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
          if (uVar50 == 0) {
            *(longlong *)(param_2 + 0x26) = auVar66._8_8_;
            *(undefined8 *)*pauVar5 = auVar66._0_8_;
            *(longlong *)(param_2 + 0x22) = auVar66._8_8_;
            *(undefined8 *)*pauVar6 = auVar66._0_8_;
          }
          else {
            auVar74 = NEON_fmin(*pauVar6,auVar66,4);
            *(longlong *)(param_2 + 0x22) = auVar74._8_8_;
            *(longlong *)*pauVar6 = auVar74._0_8_;
            auVar74 = NEON_fmax(*pauVar5,auVar66,4);
            *(longlong *)(param_2 + 0x26) = auVar74._8_8_;
            *(longlong *)*pauVar5 = auVar74._0_8_;
          }
        }
        else {
          auVar66[4] = bStack_10c;
          auVar66._0_4_ = fVar118;
          auVar66[5] = bStack_10b;
          auVar66[6] = bStack_10a;
          auVar66[7] = bStack_109;
          auVar66[8] = bStack_108;
          auVar66[9] = bStack_107;
          auVar66[10] = bStack_106;
          auVar66[0xb] = bStack_105;
          auVar66[0xc] = bStack_104;
          auVar66[0xd] = bStack_103;
          auVar66[0xe] = bStack_102;
          auVar66[0xf] = bStack_101;
        }
        puVar27 = (undefined8 *)*piVar51;
        if (puVar27 != (undefined8 *)0x0) {
          if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar41 == 0)) {
            puVar27[1] = auVar66._8_8_;
            *puVar27 = auVar66._0_8_;
          }
          else {
            *(int *)((int)puVar27 + 0xc) = auVar66._12_4_;
          }
          *piVar51 = param_2[0x15] + *piVar51;
        }
        uVar50 = uVar50 + 1;
      } while (uVar50 < param_4);
      goto LAB_10036c28;
    }
    break;
  case 2:
    uVar50 = 0;
    if (param_4 != 0) {
      piVar51 = param_2 + 0x14;
      do {
        puVar27 = (undefined8 *)(*param_2 + uVar50 * param_2[6]);
        if ((char)param_2[0xd] == '\x02') {
          uVar52 = *puVar27;
          in_register_00005008 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
        }
        else {
          uVar52 = FUN_10036ee8(puVar27,(char)param_2[0xd]);
        }
        if (*pcVar11 != '\0') {
          puVar27 = (undefined8 *)(*piVar10 + param_2[7] * uVar50);
          if (*(char *)((int)param_2 + 0x35) == '\x02') {
            local_120 = *puVar27;
            uStack_118 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
          }
          else {
            uStack_118 = in_register_00005008;
            local_120 = FUN_10036ee8(puVar27,*(char *)((int)param_2 + 0x35));
          }
        }
        puVar26 = (ulonglong *)(param_2[2] + uVar50 * param_2[0xb]);
        puVar24 = (uint *)(param_2[5] + uVar50 * param_2[10]);
        if (*(char *)((int)param_2 + 0x39) == '\x05') {
          uVar41 = *puVar24;
        }
        else {
          uVar41 = FUN_10037828(puVar24,*(char *)((int)param_2 + 0x39));
        }
        cVar42 = *(char *)((int)param_2 + 0x36);
        iVar20 = (uVar41 & 0xff) + 10;
        uVar49 = uVar41 >> 8 & 0xff;
        iVar12 = uVar49 + 10;
        uVar23 = uVar41 >> 0x10 & 0xff;
        iVar43 = uVar23 + 10;
        if (cVar42 == '\x01') {
          uVar46 = *puVar26;
        }
        else {
          uVar46 = FUN_10037368(puVar26,cVar42);
        }
        fVar118 = (float)uVar46;
        iVar44 = *(int *)(param_1 + 0xd80);
        puVar27 = (undefined8 *)(iVar44 + iVar12 * 0x40);
        fVar119 = (float)uVar52;
        fVar106 = (float)((ulonglong)uVar52 >> 0x20);
        fVar112 = (float)in_register_00005008;
        fVar126 = (float)(in_register_00005008 >> 0x20);
        puVar13 = (undefined8 *)(iVar44 + iVar43 * 0x40);
        puVar14 = (undefined8 *)(iVar44 + iVar20 * 0x40);
        auVar74 = NEON_fmov(0x3f800000,4);
        fVar82 = (float)(uVar46 >> 0x20);
        fVar105 = (fVar112 * (float)puVar14[1] + fVar126 * (float)((ulonglong)puVar14[1] >> 0x20) +
                  fVar119 * (float)*puVar14 + fVar106 * (float)((ulonglong)*puVar14 >> 0x20)) *
                  fVar118 + (fVar112 * (float)puVar27[1] +
                             fVar126 * (float)((ulonglong)puVar27[1] >> 0x20) +
                            fVar119 * (float)*puVar27 +
                            fVar106 * (float)((ulonglong)*puVar27 >> 0x20)) * fVar82 +
                  (fVar112 * (float)puVar13[1] + fVar126 * (float)((ulonglong)puVar13[1] >> 0x20) +
                  fVar119 * (float)*puVar13 + fVar106 * (float)((ulonglong)*puVar13 >> 0x20)) *
                  ((auVar74._0_4_ - fVar118) - fVar82);
        fVar111 = (fVar112 * (float)puVar14[3] + fVar126 * (float)((ulonglong)puVar14[3] >> 0x20) +
                  fVar119 * (float)puVar14[2] + fVar106 * (float)((ulonglong)puVar14[2] >> 0x20)) *
                  fVar118 + (fVar112 * (float)puVar27[3] +
                             fVar126 * (float)((ulonglong)puVar27[3] >> 0x20) +
                            fVar119 * (float)puVar27[2] +
                            fVar106 * (float)((ulonglong)puVar27[2] >> 0x20)) * fVar82 +
                  (fVar112 * (float)puVar13[3] + fVar126 * (float)((ulonglong)puVar13[3] >> 0x20) +
                  fVar119 * (float)puVar13[2] + fVar106 * (float)((ulonglong)puVar13[2] >> 0x20)) *
                  ((auVar74._4_4_ - fVar118) - fVar82);
        uVar127 = SUB41(fVar111,0);
        uVar128 = (undefined1)((uint)fVar111 >> 8);
        uVar129 = (undefined1)((uint)fVar111 >> 0x10);
        uVar130 = (undefined1)((uint)fVar111 >> 0x18);
        fVar111 = (fVar112 * (float)puVar14[5] + fVar126 * (float)((ulonglong)puVar14[5] >> 0x20) +
                  fVar119 * (float)puVar14[4] + fVar106 * (float)((ulonglong)puVar14[4] >> 0x20)) *
                  fVar118 + (fVar112 * (float)puVar27[5] +
                             fVar126 * (float)((ulonglong)puVar27[5] >> 0x20) +
                            fVar119 * (float)puVar27[4] +
                            fVar106 * (float)((ulonglong)puVar27[4] >> 0x20)) * fVar82 +
                  (fVar112 * (float)puVar13[5] + fVar126 * (float)((ulonglong)puVar13[5] >> 0x20) +
                  fVar119 * (float)puVar13[4] + fVar106 * (float)((ulonglong)puVar13[4] >> 0x20)) *
                  ((auVar74._8_4_ - fVar118) - fVar82);
        fVar82 = (fVar112 * (float)puVar14[7] + fVar126 * (float)((ulonglong)puVar14[7] >> 0x20) +
                 fVar119 * (float)puVar14[6] + fVar106 * (float)((ulonglong)puVar14[6] >> 0x20)) *
                 fVar118 + (fVar112 * (float)puVar27[7] +
                            fVar126 * (float)((ulonglong)puVar27[7] >> 0x20) +
                           fVar119 * (float)puVar27[6] +
                           fVar106 * (float)((ulonglong)puVar27[6] >> 0x20)) * fVar82 +
                 (fVar112 * (float)puVar13[7] + fVar126 * (float)((ulonglong)puVar13[7] >> 0x20) +
                 fVar119 * (float)puVar13[6] + fVar106 * (float)((ulonglong)puVar13[6] >> 0x20)) *
                 ((auVar74._12_4_ - fVar118) - fVar82);
        fStack_134 = (float)(CONCAT17((char)((uint)fVar82 >> 0x18),
                                      CONCAT16((char)((uint)fVar82 >> 0x10),
                                               CONCAT15((char)((uint)fVar82 >> 8),
                                                        CONCAT14(SUB41(fVar82,0),fVar111)))) >> 0x20
                            );
        if (*pcVar11 == '\0') {
          fVar82 = 0.0;
          fVar118 = 0.0;
          fVar119 = 0.0;
          fVar106 = 0.0;
        }
        else {
          cVar42 = *(char *)((int)param_2 + 0x36);
          FUN_10029c30(param_1,iVar20);
          FUN_10029c30(param_1,iVar12);
          FUN_10029c30(param_1,iVar43);
          if (cVar42 == '\x01') {
            uVar46 = *puVar26;
            in_register_00005008 = uVar46;
          }
          else {
            uVar46 = FUN_10037368(puVar26,cVar42);
          }
          fVar112 = (float)(uVar46 >> 0x20);
          iVar44 = *(int *)(param_1 + 0xd80);
          puVar27 = (undefined8 *)(iVar44 + (uVar49 + 0x114) * 0x40);
          fVar126 = (float)local_120;
          fVar78 = (float)((ulonglong)local_120 >> 0x20);
          fVar79 = (float)uStack_118;
          fVar125 = (float)(uStack_118 >> 0x20);
          puVar13 = (undefined8 *)(iVar44 + (uVar23 + 0x114) * 0x40);
          puVar14 = (undefined8 *)(iVar44 + ((uVar41 & 0xff) + 0x114) * 0x40);
          auVar74 = NEON_fmov(0x3f800000,4);
          fVar106 = (float)uVar46;
          fVar82 = (fVar79 * (float)puVar14[1] + fVar125 * (float)((ulonglong)puVar14[1] >> 0x20) +
                   fVar126 * (float)*puVar14 + fVar78 * (float)((ulonglong)*puVar14 >> 0x20)) *
                   fVar106 + (fVar79 * (float)puVar27[1] +
                              fVar125 * (float)((ulonglong)puVar27[1] >> 0x20) +
                             fVar126 * (float)*puVar27 +
                             fVar78 * (float)((ulonglong)*puVar27 >> 0x20)) * fVar112 +
                   (fVar79 * (float)puVar13[1] + fVar125 * (float)((ulonglong)puVar13[1] >> 0x20) +
                   fVar126 * (float)*puVar13 + fVar78 * (float)((ulonglong)*puVar13 >> 0x20)) *
                   ((auVar74._0_4_ - fVar106) - fVar112);
          fVar118 = (fVar79 * (float)puVar14[3] + fVar125 * (float)((ulonglong)puVar14[3] >> 0x20) +
                    fVar126 * (float)puVar14[2] + fVar78 * (float)((ulonglong)puVar14[2] >> 0x20)) *
                    fVar106 + (fVar79 * (float)puVar27[3] +
                               fVar125 * (float)((ulonglong)puVar27[3] >> 0x20) +
                              fVar126 * (float)puVar27[2] +
                              fVar78 * (float)((ulonglong)puVar27[2] >> 0x20)) * fVar112 +
                    (fVar79 * (float)puVar13[3] + fVar125 * (float)((ulonglong)puVar13[3] >> 0x20) +
                    fVar126 * (float)puVar13[2] + fVar78 * (float)((ulonglong)puVar13[2] >> 0x20)) *
                    ((auVar74._4_4_ - fVar106) - fVar112);
          fVar119 = (fVar79 * (float)puVar14[5] + fVar125 * (float)((ulonglong)puVar14[5] >> 0x20) +
                    fVar126 * (float)puVar14[4] + fVar78 * (float)((ulonglong)puVar14[4] >> 0x20)) *
                    fVar106 + (fVar79 * (float)puVar27[5] +
                               fVar125 * (float)((ulonglong)puVar27[5] >> 0x20) +
                              fVar126 * (float)puVar27[4] +
                              fVar78 * (float)((ulonglong)puVar27[4] >> 0x20)) * fVar112 +
                    (fVar79 * (float)puVar13[5] + fVar125 * (float)((ulonglong)puVar13[5] >> 0x20) +
                    fVar126 * (float)puVar13[4] + fVar78 * (float)((ulonglong)puVar13[4] >> 0x20)) *
                    ((auVar74._8_4_ - fVar106) - fVar112);
          fVar106 = (fVar79 * (float)puVar14[7] + fVar125 * (float)((ulonglong)puVar14[7] >> 0x20) +
                    fVar126 * (float)puVar14[6] + fVar78 * (float)((ulonglong)puVar14[6] >> 0x20)) *
                    fVar106 + (fVar79 * (float)puVar27[7] +
                               fVar125 * (float)((ulonglong)puVar27[7] >> 0x20) +
                              fVar126 * (float)puVar27[6] +
                              fVar78 * (float)((ulonglong)puVar27[6] >> 0x20)) * fVar112 +
                    (fVar79 * (float)puVar13[7] + fVar125 * (float)((ulonglong)puVar13[7] >> 0x20) +
                    fVar126 * (float)puVar13[6] + fVar78 * (float)((ulonglong)puVar13[6] >> 0x20)) *
                    ((auVar74._12_4_ - fVar106) - fVar112);
        }
        uVar52 = CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,fVar105))));
        fVar112 = (float)((ulonglong)uVar52 >> 0x20);
        fVar126 = fVar111 * (float)*(undefined8 *)(iVar44 + 0x8588) +
                  fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar44 + 0x8588) >> 0x20) +
                  fVar105 * (float)*(undefined8 *)(iVar44 + 0x8580) +
                  fVar112 * (float)((ulonglong)*(undefined8 *)(iVar44 + 0x8580) >> 0x20);
        fVar78 = fVar111 * (float)*(undefined8 *)(iVar44 + 0x8598) +
                 fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar44 + 0x8598) >> 0x20) +
                 fVar105 * (float)*(undefined8 *)(iVar44 + 0x8590) +
                 fVar112 * (float)((ulonglong)*(undefined8 *)(iVar44 + 0x8590) >> 0x20);
        fVar79 = fVar111 * (float)*(undefined8 *)(iVar44 + 0x85a8) +
                 fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar44 + 0x85a8) >> 0x20) +
                 fVar105 * (float)*(undefined8 *)(iVar44 + 0x85a0) +
                 fVar112 * (float)((ulonglong)*(undefined8 *)(iVar44 + 0x85a0) >> 0x20);
        fVar112 = fVar111 * (float)*(undefined8 *)(iVar44 + 0x85b8) +
                  fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar44 + 0x85b8) >> 0x20) +
                  fVar105 * (float)*(undefined8 *)(iVar44 + 0x85b0) +
                  fVar112 * (float)((ulonglong)*(undefined8 *)(iVar44 + 0x85b0) >> 0x20);
        bStack_108 = SUB41(fVar79,0);
        bStack_107 = (byte)((uint)fVar79 >> 8);
        bStack_106 = (byte)((uint)fVar79 >> 0x10);
        bStack_105 = (byte)((uint)fVar79 >> 0x18);
        bStack_104 = SUB41(fVar112,0);
        bStack_103 = (byte)((uint)fVar112 >> 8);
        bStack_102 = (byte)((uint)fVar112 >> 0x10);
        bStack_101 = (byte)((uint)fVar112 >> 0x18);
        bStack_10e = (byte)((uint)fVar126 >> 0x10);
        bStack_10d = (byte)((uint)fVar126 >> 0x18);
        bStack_10c = SUB41(fVar78,0);
        bStack_10b = (byte)((uint)fVar78 >> 8);
        bStack_10a = (byte)((uint)fVar78 >> 0x10);
        bStack_109 = (byte)((uint)fVar78 >> 0x18);
        if (*piVar8 != 0) {
          puVar27 = (undefined8 *)(*piVar8 + uVar50 * 0x20);
          puVar27[1] = CONCAT44(fStack_134,fVar111);
          *puVar27 = uVar52;
          iVar20 = *piVar8 + uVar50 * 0x20;
          *(float *)(iVar20 + 0x18) = fVar119;
          *(float *)(iVar20 + 0x1c) = fVar106;
          *(float *)(iVar20 + 0x10) = fVar82;
          *(float *)(iVar20 + 0x14) = fVar118;
        }
        uVar41 = 0;
        if (*pcVar3 != '\0') {
          puVar24 = (uint *)*piVar1;
          piVar17 = param_2 + 0x28;
          if ((char)*piVar7 == '\0') {
            piVar17 = (int *)0x0;
          }
          if (piVar17 == (int *)0x0) {
            uVar49 = 0;
            uVar41 = puVar24[1] & 0xfffff03f;
          }
          else {
            bVar100 = 0;
            bVar101 = 0;
            bVar120 = 0;
            bVar102 = 0;
            bVar122 = 0;
            bVar103 = 0;
            bVar104 = 0;
            bVar107 = 0;
            bVar108 = 0;
            bVar109 = 0;
            bVar110 = 0;
            bVar113 = 0;
            bVar116 = 0;
            bVar117 = 0;
            bVar80 = 0;
            bVar121 = 0;
            bStack_d8 = 0;
            bStack_d7 = 0;
            bStack_d6 = 0;
            bStack_d5 = 0;
            bStack_d4 = 0;
            bStack_d3 = 0;
            bStack_d2 = 0;
            bStack_d1 = 0;
            local_e0 = 0;
            bStack_df = 0;
            bStack_de = 0;
            bStack_dd = 0;
            bStack_dc = 0;
            bStack_db = 0;
            bStack_da = 0;
            bStack_d9 = 0;
            if ((*puVar47 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 2) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)piVar17 >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 2) * fVar111 +
                       (float)*(undefined8 *)piVar17 * fVar105;
              bVar116 = SUB41(fVar82,0);
              bVar101 = bVar116 & (byte)uVar52;
              bVar117 = (byte)((uint)fVar82 >> 8);
              bVar100 = bVar117 & (byte)((ulonglong)uVar52 >> 8);
              bVar80 = (byte)((uint)fVar82 >> 0x10);
              bVar120 = bVar80 & (byte)((ulonglong)uVar52 >> 0x10);
              bVar121 = (byte)((uint)fVar82 >> 0x18);
              bVar102 = bVar121 & (byte)((ulonglong)uVar52 >> 0x18);
              bVar122 = bVar116 & (byte)((ulonglong)uVar52 >> 0x20);
              bVar103 = bVar117 & (byte)((ulonglong)uVar52 >> 0x28);
              bVar104 = bVar80 & (byte)((ulonglong)uVar52 >> 0x30);
              bVar107 = bVar121 & (byte)((ulonglong)uVar52 >> 0x38);
              bVar108 = bVar116 & (byte)in_register_00005008;
              bVar109 = bVar117 & (byte)(in_register_00005008 >> 8);
              bVar110 = bVar80 & (byte)(in_register_00005008 >> 0x10);
              bVar113 = bVar121 & (byte)(in_register_00005008 >> 0x18);
              bVar116 = bVar116 & (byte)(in_register_00005008 >> 0x20);
              bVar117 = bVar117 & (byte)(in_register_00005008 >> 0x28);
              bVar80 = bVar80 & (byte)(in_register_00005008 >> 0x30);
              bVar121 = bVar121 & (byte)(in_register_00005008 >> 0x38);
            }
            uStack_f8._0_2_ = CONCAT11(bVar109,bVar108);
            uStack_f8._0_3_ = CONCAT12(bVar110,(undefined2)uStack_f8);
            uStack_f8._0_4_ = CONCAT13(bVar113,(undefined3)uStack_f8);
            uStack_f8._0_5_ = CONCAT14(bVar116,(undefined4)uStack_f8);
            uStack_f8._0_6_ = CONCAT15(bVar117,(undefined5)uStack_f8);
            uStack_f8._0_7_ = CONCAT16(bVar80,(undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar121,(undefined7)uStack_f8);
            local_100._0_2_ = CONCAT11(bVar100,bVar101);
            local_100._0_3_ = CONCAT12(bVar120,(undefined2)local_100);
            local_100._0_4_ = CONCAT13(bVar102,(undefined3)local_100);
            local_100._0_5_ = CONCAT14(bVar122,(undefined4)local_100);
            local_100._0_6_ = CONCAT15(bVar103,(undefined5)local_100);
            local_100._0_7_ = CONCAT16(bVar104,(undefined6)local_100);
            local_100 = CONCAT17(bVar107,(undefined7)local_100);
            if ((*puVar47 >> 1 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x1a) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x18) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x1a) * fVar111 +
                       (float)*(undefined8 *)(piVar17 + 0x18) * fVar105;
              bVar114 = SUB41(fVar82,0);
              bVar115 = (byte)((uint)fVar82 >> 8);
              bVar54 = (byte)((uint)fVar82 >> 0x10);
              bVar75 = (byte)((uint)fVar82 >> 0x18);
              uStack_f8._0_2_ =
                   CONCAT11(bVar115 & (byte)(in_register_00005008 >> 8) | bVar109,
                            bVar114 & (byte)in_register_00005008 | bVar108);
              uStack_f8._0_3_ =
                   CONCAT12(bVar54 & (byte)(in_register_00005008 >> 0x10) | bVar110,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar75 & (byte)(in_register_00005008 >> 0x18) | bVar113,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar114 & (byte)(in_register_00005008 >> 0x20) | bVar116,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar115 & (byte)(in_register_00005008 >> 0x28) | bVar117,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar54 & (byte)(in_register_00005008 >> 0x30) | bVar80,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar75 & (byte)(in_register_00005008 >> 0x38) | bVar121,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar115 & (byte)((ulonglong)uVar52 >> 8) | bVar100,
                            bVar114 & (byte)uVar52 | bVar101);
              local_100._0_3_ =
                   CONCAT12(bVar54 & (byte)((ulonglong)uVar52 >> 0x10) | bVar120,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar75 & (byte)((ulonglong)uVar52 >> 0x18) | bVar102,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar114 & (byte)((ulonglong)uVar52 >> 0x20) | bVar122,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar115 & (byte)((ulonglong)uVar52 >> 0x28) | bVar103,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar54 & (byte)((ulonglong)uVar52 >> 0x30) | bVar104,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar75 & (byte)((ulonglong)uVar52 >> 0x38) | bVar107,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 2 & 1) != 0) {
              uVar52 = FUN_10024f78();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x32) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x30) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x32) * fVar111 +
                       (float)*(undefined8 *)(piVar17 + 0x30) * fVar105;
              bVar100 = SUB41(fVar82,0);
              bVar116 = (byte)((uint)fVar82 >> 8);
              bVar101 = (byte)((uint)fVar82 >> 0x10);
              bVar117 = (byte)((uint)fVar82 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar116 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar100 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar101 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar117 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar100 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar100 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 3 & 1) != 0) {
              uVar52 = FUN_10024f88();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x4a) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x48) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x4a) * fVar111 +
                       (float)*(undefined8 *)(piVar17 + 0x48) * fVar105;
              bVar100 = SUB41(fVar82,0);
              bVar116 = (byte)((uint)fVar82 >> 8);
              bVar101 = (byte)((uint)fVar82 >> 0x10);
              bVar117 = (byte)((uint)fVar82 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar116 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar100 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar101 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar117 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar100 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar100 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 4 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x62) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x60) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x62) * fVar111 +
                       (float)*(undefined8 *)(piVar17 + 0x60) * fVar105;
              bStack_d4 = SUB41(fVar82,0);
              local_e0 = bStack_d4 & (byte)uVar52;
              bStack_d3 = (byte)((uint)fVar82 >> 8);
              bStack_df = bStack_d3 & (byte)((ulonglong)uVar52 >> 8);
              bStack_d2 = (byte)((uint)fVar82 >> 0x10);
              bStack_de = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x10);
              bStack_d1 = (byte)((uint)fVar82 >> 0x18);
              bStack_dd = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x18);
              bStack_dc = bStack_d4 & (byte)((ulonglong)uVar52 >> 0x20);
              bStack_db = bStack_d3 & (byte)((ulonglong)uVar52 >> 0x28);
              bStack_da = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x30);
              bStack_d9 = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x38);
              bStack_d8 = bStack_d4 & (byte)in_register_00005008;
              bStack_d7 = bStack_d3 & (byte)(in_register_00005008 >> 8);
              bStack_d6 = bStack_d2 & (byte)(in_register_00005008 >> 0x10);
              bStack_d5 = bStack_d1 & (byte)(in_register_00005008 >> 0x18);
              bStack_d4 = bStack_d4 & (byte)(in_register_00005008 >> 0x20);
              bStack_d3 = bStack_d3 & (byte)(in_register_00005008 >> 0x28);
              bStack_d2 = bStack_d2 & (byte)(in_register_00005008 >> 0x30);
              bStack_d1 = bStack_d1 & (byte)(in_register_00005008 >> 0x38);
            }
            if ((*puVar47 >> 5 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x7a) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x78) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar105)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x7a) * fVar111 +
                       (float)*(undefined8 *)(piVar17 + 0x78) * fVar105;
              bVar100 = SUB41(fVar82,0);
              bVar116 = (byte)((uint)fVar82 >> 8);
              bVar101 = (byte)((uint)fVar82 >> 0x10);
              bVar117 = (byte)((uint)fVar82 >> 0x18);
              local_e0 = bVar100 & (byte)uVar52 | local_e0;
              bStack_df = bVar116 & (byte)((ulonglong)uVar52 >> 8) | bStack_df;
              bStack_de = bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | bStack_de;
              bStack_dd = bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | bStack_dd;
              bStack_dc = bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | bStack_dc;
              bStack_db = bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | bStack_db;
              bStack_da = bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | bStack_da;
              bStack_d9 = bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | bStack_d9;
              bStack_d8 = bVar100 & (byte)in_register_00005008 | bStack_d8;
              bStack_d7 = bVar116 & (byte)(in_register_00005008 >> 8) | bStack_d7;
              bStack_d6 = bVar101 & (byte)(in_register_00005008 >> 0x10) | bStack_d6;
              bStack_d5 = bVar117 & (byte)(in_register_00005008 >> 0x18) | bStack_d5;
              bStack_d4 = bVar100 & (byte)(in_register_00005008 >> 0x20) | bStack_d4;
              bStack_d3 = bVar116 & (byte)(in_register_00005008 >> 0x28) | bStack_d3;
              bStack_d2 = bVar101 & (byte)(in_register_00005008 >> 0x30) | bStack_d2;
              bStack_d1 = bVar117 & (byte)(in_register_00005008 >> 0x38) | bStack_d1;
            }
            bVar100 = (byte)((ulonglong)_DAT_10160a80 >> 0x20);
            bVar116 = (byte)((ulonglong)uRam10160a88 >> 0x20);
            fVar82 = (float)CONCAT13(bStack_dd,CONCAT12(bStack_de,CONCAT11(bStack_df,local_e0)));
            uVar49 = *(uint *)(&DAT_10161280 +
                              ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar116 |
                                      -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar100 |
                                     -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                     -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4) |
                     *(uint *)(&DAT_10161270 +
                              ((byte)(-((float)CONCAT13(bStack_d1,
                                                        CONCAT12(bStack_d2,
                                                                 CONCAT11(bStack_d3,bStack_d4))) <
                                       0.0) & bVar116 |
                                      -((float)(CONCAT17(bStack_d9,
                                                         CONCAT16(bStack_da,
                                                                  CONCAT15(bStack_db,
                                                                           CONCAT14(bStack_dc,fVar82
                                                                                   )))) >> 0x20) <
                                       0.0) & bVar100 |
                                     -((float)CONCAT13(bStack_d5,
                                                       CONCAT12(bStack_d6,
                                                                CONCAT11(bStack_d7,bStack_d8))) <
                                      0.0) & (byte)uRam10160a88 |
                                     -(fVar82 < 0.0) & (byte)_DAT_10160a80) & 3) * 4);
            uVar41 = (*(uint *)(&DAT_10161280 +
                               ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar116 |
                                       -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar100 |
                                      -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                      -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4) |
                     0xc3f) & (*(uint *)(&DAT_10161270 +
                                        ((byte)(-((float)CONCAT13(bStack_d1,
                                                                  CONCAT12(bStack_d2,
                                                                           CONCAT11(bStack_d3,
                                                                                    bStack_d4))) <
                                                 0.0) & bVar116 |
                                                -((float)(CONCAT17(bStack_d9,
                                                                   CONCAT16(bStack_da,
                                                                            CONCAT15(bStack_db,
                                                                                     CONCAT14(
                                                  bStack_dc,fVar82)))) >> 0x20) < 0.0) & bVar100 |
                                               -((float)CONCAT13(bStack_d5,
                                                                 CONCAT12(bStack_d6,
                                                                          CONCAT11(bStack_d7,
                                                                                   bStack_d8))) <
                                                0.0) & (byte)uRam10160a88 |
                                               -(fVar82 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                              0x3ff) & puVar24[1];
          }
          puVar48 = puVar24 + 1;
          *puVar48 = uVar41;
          uVar52 = FUN_10024f30();
          fVar82 = (float)(CONCAT17(bStack_109,
                                    CONCAT16(bStack_10a,
                                             CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar126)))) >>
                          0x20);
          uVar41 = *(uint *)(&DAT_10161230 +
                            ((byte)(-(fVar82 * (float)(in_register_00005008 >> 0x20) + fVar112 < 0.0
                                     ) & (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                    -(fVar126 * (float)((ulonglong)uVar52 >> 0x20) + fVar112 < 0.0)
                                    & (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                   -(fVar82 * (float)in_register_00005008 + fVar112 < 0.0) &
                                   (byte)uRam10160a88 |
                                   -(fVar126 * (float)uVar52 + fVar112 < 0.0) & (byte)_DAT_10160a80)
                            & 0xf) * 4);
          *puVar48 = (uVar41 | 0x30) & *puVar48;
          uVar52 = FUN_10024f30();
          fStack_138 = (float)in_register_00005008;
          fStack_134 = (float)(in_register_00005008 >> 0x20);
          uVar46 = in_register_00005008;
          uVar53 = FUN_10024f58();
          fVar82 = (float)CONCAT13(bStack_101 & (byte)((ulonglong)uVar53 >> 0x18),
                                   CONCAT12(bStack_102 & (byte)((ulonglong)uVar53 >> 0x10),
                                            CONCAT11(bStack_103 & (byte)((ulonglong)uVar53 >> 8),
                                                     bStack_104 & (byte)uVar53)));
          auVar86._0_8_ =
               CONCAT17(bStack_101 & (byte)((ulonglong)uVar53 >> 0x38),
                        CONCAT16(bStack_102 & (byte)((ulonglong)uVar53 >> 0x30),
                                 CONCAT15(bStack_103 & (byte)((ulonglong)uVar53 >> 0x28),
                                          CONCAT14(bStack_104 & (byte)((ulonglong)uVar53 >> 0x20),
                                                   fVar82))));
          auVar86[8] = bStack_104 & (byte)uVar46;
          auVar86[9] = bStack_103 & (byte)(uVar46 >> 8);
          auVar86[10] = bStack_102 & (byte)(uVar46 >> 0x10);
          auVar86[0xb] = bStack_101 & (byte)(uVar46 >> 0x18);
          auVar93[0xc] = bStack_104 & (byte)(uVar46 >> 0x20);
          auVar93._0_12_ = auVar86;
          auVar93[0xd] = bStack_103 & (byte)(uVar46 >> 0x28);
          auVar93[0xe] = bStack_102 & (byte)(uVar46 >> 0x30);
          auVar93[0xf] = bStack_101 & (byte)(uVar46 >> 0x38);
          uVar41 = uVar49 | *(uint *)(&DAT_10161220 +
                                     ((byte)(-(fVar79 * fStack_134 + auVar93._12_4_ < 0.0) &
                                             (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                             -(fVar79 * (float)((ulonglong)uVar52 >> 0x20) +
                                               (float)((ulonglong)auVar86._0_8_ >> 0x20) < 0.0) &
                                             (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                            -(fVar79 * fStack_138 + auVar86._8_4_ < 0.0) &
                                            (byte)uRam10160a88 |
                                            -(fVar79 * (float)uVar52 + fVar82 < 0.0) &
                                            (byte)_DAT_10160a80) & 3) * 4) | uVar41;
          *puVar48 = (*(uint *)(&DAT_10161220 +
                               ((byte)(-(fVar79 * fStack_134 + auVar93._12_4_ < 0.0) &
                                       (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                       -(fVar79 * (float)((ulonglong)uVar52 >> 0x20) +
                                         (float)((ulonglong)auVar86._0_8_ >> 0x20) < 0.0) &
                                       (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                      -(fVar79 * fStack_138 + auVar86._8_4_ < 0.0) &
                                      (byte)uRam10160a88 |
                                      -(fVar79 * (float)uVar52 + fVar82 < 0.0) & (byte)_DAT_10160a80
                                      ) & 3) * 4) | 0xf) & *puVar48;
          *puVar24 = uVar41 | *puVar24;
        }
        if (*(char *)((int)param_2 + 0x3e) == '\0') {
          uVar52 = FUN_10024f48();
          uVar46 = in_register_00005008;
          uVar53 = FUN_10024f98();
          fVar82 = (float)CONCAT13(bStack_10d & (byte)((ulonglong)uVar53 >> 0x18),
                                   CONCAT12(bStack_10e & (byte)((ulonglong)uVar53 >> 0x10),
                                            CONCAT11((byte)((uint)fVar126 >> 8) &
                                                     (byte)((ulonglong)uVar53 >> 8),
                                                     SUB41(fVar126,0) & (byte)uVar53)));
          auVar60._0_8_ =
               CONCAT17(bStack_109 & (byte)((ulonglong)uVar53 >> 0x38),
                        CONCAT16(bStack_10a & (byte)((ulonglong)uVar53 >> 0x30),
                                 CONCAT15(bStack_10b & (byte)((ulonglong)uVar53 >> 0x28),
                                          CONCAT14(bStack_10c & (byte)((ulonglong)uVar53 >> 0x20),
                                                   fVar82))));
          auVar60[8] = bStack_108 & (byte)uVar46;
          auVar60[9] = bStack_107 & (byte)(uVar46 >> 8);
          auVar60[10] = bStack_106 & (byte)(uVar46 >> 0x10);
          auVar60[0xb] = bStack_105 & (byte)(uVar46 >> 0x18);
          auVar67[0xc] = bStack_104 & (byte)(uVar46 >> 0x20);
          auVar67._0_12_ = auVar60;
          auVar67[0xd] = bStack_103 & (byte)(uVar46 >> 0x28);
          auVar67[0xe] = bStack_102 & (byte)(uVar46 >> 0x30);
          auVar67[0xf] = bStack_101 & (byte)(uVar46 >> 0x38);
          auVar68._0_8_ =
               CONCAT44((((float)((ulonglong)auVar60._0_8_ >> 0x20) +
                         (float)((ulonglong)uVar52 >> 0x20)) / fVar112) *
                        (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20),
                        ((fVar82 + (float)uVar52) / fVar112) * (float)*(undefined8 *)pfVar2 +
                        (float)*(undefined8 *)pfVar4);
          auVar68._8_4_ =
               ((auVar60._8_4_ + (float)in_register_00005008) / fVar112) *
               (float)*(undefined8 *)(param_2 + 0x1a) + (float)param_2[0x1e];
          auVar68._12_4_ =
               ((auVar67._12_4_ + (float)(in_register_00005008 >> 0x20)) / fVar112) *
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
          if (uVar50 == 0) {
            *(longlong *)(param_2 + 0x26) = auVar68._8_8_;
            *(undefined8 *)*pauVar5 = auVar68._0_8_;
            *(longlong *)(param_2 + 0x22) = auVar68._8_8_;
            *(undefined8 *)*pauVar6 = auVar68._0_8_;
          }
          else {
            auVar74 = NEON_fmin(*pauVar6,auVar68,4);
            *(longlong *)(param_2 + 0x22) = auVar74._8_8_;
            *(longlong *)*pauVar6 = auVar74._0_8_;
            auVar74 = NEON_fmax(*pauVar5,auVar68,4);
            *(longlong *)(param_2 + 0x26) = auVar74._8_8_;
            *(longlong *)*pauVar5 = auVar74._0_8_;
          }
        }
        else {
          auVar68[4] = bStack_10c;
          auVar68._0_4_ = fVar126;
          auVar68[5] = bStack_10b;
          auVar68[6] = bStack_10a;
          auVar68[7] = bStack_109;
          auVar68[8] = bStack_108;
          auVar68[9] = bStack_107;
          auVar68[10] = bStack_106;
          auVar68[0xb] = bStack_105;
          auVar68[0xc] = bStack_104;
          auVar68[0xd] = bStack_103;
          auVar68[0xe] = bStack_102;
          auVar68[0xf] = bStack_101;
        }
        puVar27 = (undefined8 *)*piVar51;
        if (puVar27 != (undefined8 *)0x0) {
          if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar41 == 0)) {
            puVar27[1] = auVar68._8_8_;
            *puVar27 = auVar68._0_8_;
          }
          else {
            *(int *)((int)puVar27 + 0xc) = auVar68._12_4_;
          }
          *piVar51 = param_2[0x15] + *piVar51;
        }
        uVar50 = uVar50 + 1;
      } while (uVar50 < param_4);
      goto LAB_10036c28;
    }
    break;
  case 3:
    uVar50 = 0;
    if (param_4 != 0) {
      piVar51 = param_2 + 0x14;
      do {
        puVar27 = (undefined8 *)(*param_2 + uVar50 * param_2[6]);
        if ((char)param_2[0xd] == '\x02') {
          uVar52 = *puVar27;
          in_register_00005008 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
        }
        else {
          uVar52 = FUN_10036ee8(puVar27,(char)param_2[0xd]);
        }
        uVar46 = in_register_00005008;
        if (*pcVar11 != '\0') {
          puVar27 = (undefined8 *)(*piVar10 + param_2[7] * uVar50);
          if (*(char *)((int)param_2 + 0x35) == '\x02') {
            local_120 = *puVar27;
            uVar46 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
            uStack_118 = uVar46;
          }
          else {
            local_120 = FUN_10036ee8(puVar27,*(char *)((int)param_2 + 0x35));
            uStack_118 = uVar46;
          }
        }
        fVar82 = (float)uVar46;
        puVar27 = (undefined8 *)(param_2[2] + uVar50 * param_2[0xb]);
        puVar24 = (uint *)(param_2[5] + uVar50 * param_2[10]);
        if (*(char *)((int)param_2 + 0x39) == '\x05') {
          uVar41 = *puVar24;
        }
        else {
          uVar41 = FUN_10037828(puVar24,*(char *)((int)param_2 + 0x39));
        }
        cVar42 = *(char *)((int)param_2 + 0x36);
        iVar20 = (uVar41 & 0xff) + 10;
        uVar49 = uVar41 >> 8 & 0xff;
        iVar12 = uVar49 + 10;
        uVar23 = uVar41 >> 0x10 & 0xff;
        iVar43 = uVar23 + 10;
        iVar44 = (uVar41 >> 0x18) + 10;
        if (cVar42 == '\x02') {
          uVar53 = *puVar27;
          fVar82 = *(float *)(puVar27 + 1);
        }
        else {
          uVar53 = FUN_10037488(puVar27,cVar42);
        }
        fVar119 = (float)uVar53;
        iVar45 = *(int *)(param_1 + 0xd80);
        puVar13 = (undefined8 *)(iVar45 + iVar12 * 0x40);
        fVar106 = (float)uVar52;
        fVar112 = (float)((ulonglong)uVar52 >> 0x20);
        fVar126 = (float)in_register_00005008;
        fVar78 = (float)(in_register_00005008 >> 0x20);
        puVar14 = (undefined8 *)(iVar45 + iVar43 * 0x40);
        puVar15 = (undefined8 *)(iVar45 + iVar44 * 0x40);
        puVar16 = (undefined8 *)(iVar45 + iVar20 * 0x40);
        auVar74 = NEON_fmov(0x3f800000,4);
        fVar105 = (float)((ulonglong)uVar53 >> 0x20);
        fVar111 = (fVar126 * (float)puVar16[1] + fVar78 * (float)((ulonglong)puVar16[1] >> 0x20) +
                  fVar106 * (float)*puVar16 + fVar112 * (float)((ulonglong)*puVar16 >> 0x20)) *
                  fVar119 + (fVar126 * (float)puVar13[1] +
                             fVar78 * (float)((ulonglong)puVar13[1] >> 0x20) +
                            fVar106 * (float)*puVar13 +
                            fVar112 * (float)((ulonglong)*puVar13 >> 0x20)) * fVar105 +
                  (fVar126 * (float)puVar14[1] + fVar78 * (float)((ulonglong)puVar14[1] >> 0x20) +
                  fVar106 * (float)*puVar14 + fVar112 * (float)((ulonglong)*puVar14 >> 0x20)) *
                  fVar82 + (fVar126 * (float)puVar15[1] +
                            fVar78 * (float)((ulonglong)puVar15[1] >> 0x20) +
                           fVar106 * (float)*puVar15 +
                           fVar112 * (float)((ulonglong)*puVar15 >> 0x20)) *
                           (((auVar74._0_4_ - fVar119) - fVar105) - fVar82);
        fVar118 = (fVar126 * (float)puVar16[3] + fVar78 * (float)((ulonglong)puVar16[3] >> 0x20) +
                  fVar106 * (float)puVar16[2] + fVar112 * (float)((ulonglong)puVar16[2] >> 0x20)) *
                  fVar119 + (fVar126 * (float)puVar13[3] +
                             fVar78 * (float)((ulonglong)puVar13[3] >> 0x20) +
                            fVar106 * (float)puVar13[2] +
                            fVar112 * (float)((ulonglong)puVar13[2] >> 0x20)) * fVar105 +
                  (fVar126 * (float)puVar14[3] + fVar78 * (float)((ulonglong)puVar14[3] >> 0x20) +
                  fVar106 * (float)puVar14[2] + fVar112 * (float)((ulonglong)puVar14[2] >> 0x20)) *
                  fVar82 + (fVar126 * (float)puVar15[3] +
                            fVar78 * (float)((ulonglong)puVar15[3] >> 0x20) +
                           fVar106 * (float)puVar15[2] +
                           fVar112 * (float)((ulonglong)puVar15[2] >> 0x20)) *
                           (((auVar74._4_4_ - fVar119) - fVar105) - fVar82);
        uVar127 = SUB41(fVar118,0);
        uVar128 = (undefined1)((uint)fVar118 >> 8);
        uVar129 = (undefined1)((uint)fVar118 >> 0x10);
        uVar130 = (undefined1)((uint)fVar118 >> 0x18);
        fVar118 = (fVar126 * (float)puVar16[5] + fVar78 * (float)((ulonglong)puVar16[5] >> 0x20) +
                  fVar106 * (float)puVar16[4] + fVar112 * (float)((ulonglong)puVar16[4] >> 0x20)) *
                  fVar119 + (fVar126 * (float)puVar13[5] +
                             fVar78 * (float)((ulonglong)puVar13[5] >> 0x20) +
                            fVar106 * (float)puVar13[4] +
                            fVar112 * (float)((ulonglong)puVar13[4] >> 0x20)) * fVar105 +
                  (fVar126 * (float)puVar14[5] + fVar78 * (float)((ulonglong)puVar14[5] >> 0x20) +
                  fVar106 * (float)puVar14[4] + fVar112 * (float)((ulonglong)puVar14[4] >> 0x20)) *
                  fVar82 + (fVar126 * (float)puVar15[5] +
                            fVar78 * (float)((ulonglong)puVar15[5] >> 0x20) +
                           fVar106 * (float)puVar15[4] +
                           fVar112 * (float)((ulonglong)puVar15[4] >> 0x20)) *
                           (((auVar74._8_4_ - fVar119) - fVar105) - fVar82);
        fVar82 = (fVar126 * (float)puVar16[7] + fVar78 * (float)((ulonglong)puVar16[7] >> 0x20) +
                 fVar106 * (float)puVar16[6] + fVar112 * (float)((ulonglong)puVar16[6] >> 0x20)) *
                 fVar119 + (fVar126 * (float)puVar13[7] +
                            fVar78 * (float)((ulonglong)puVar13[7] >> 0x20) +
                           fVar106 * (float)puVar13[6] +
                           fVar112 * (float)((ulonglong)puVar13[6] >> 0x20)) * fVar105 +
                 (fVar126 * (float)puVar14[7] + fVar78 * (float)((ulonglong)puVar14[7] >> 0x20) +
                 fVar106 * (float)puVar14[6] + fVar112 * (float)((ulonglong)puVar14[6] >> 0x20)) *
                 fVar82 + (fVar126 * (float)puVar15[7] +
                           fVar78 * (float)((ulonglong)puVar15[7] >> 0x20) +
                          fVar106 * (float)puVar15[6] +
                          fVar112 * (float)((ulonglong)puVar15[6] >> 0x20)) *
                          (((auVar74._12_4_ - fVar119) - fVar105) - fVar82);
        fStack_134 = (float)(CONCAT17((char)((uint)fVar82 >> 0x18),
                                      CONCAT16((char)((uint)fVar82 >> 0x10),
                                               CONCAT15((char)((uint)fVar82 >> 8),
                                                        CONCAT14(SUB41(fVar82,0),fVar118)))) >> 0x20
                            );
        if (*pcVar11 == '\0') {
          fVar82 = 0.0;
          fVar105 = 0.0;
          fVar119 = 0.0;
          fVar106 = 0.0;
        }
        else {
          cVar42 = *(char *)((int)param_2 + 0x36);
          FUN_10029c30(param_1,iVar20);
          FUN_10029c30(param_1,iVar12);
          FUN_10029c30(param_1,iVar43);
          FUN_10029c30(param_1,iVar44);
          if (cVar42 == '\x02') {
            uVar52 = *puVar27;
            in_register_00005008 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
          }
          else {
            uVar52 = FUN_10037488(puVar27,cVar42);
          }
          fVar126 = (float)((ulonglong)uVar52 >> 0x20);
          fVar112 = (float)uVar52;
          iVar45 = *(int *)(param_1 + 0xd80);
          puVar27 = (undefined8 *)(iVar45 + (uVar49 + 0x114) * 0x40);
          fVar78 = (float)local_120;
          fVar79 = (float)((ulonglong)local_120 >> 0x20);
          fVar125 = (float)uStack_118;
          fVar133 = (float)(uStack_118 >> 0x20);
          puVar13 = (undefined8 *)(iVar45 + (uVar23 + 0x114) * 0x40);
          puVar14 = (undefined8 *)(iVar45 + ((uVar41 >> 0x18) + 0x114) * 0x40);
          puVar15 = (undefined8 *)(iVar45 + ((uVar41 & 0xff) + 0x114) * 0x40);
          auVar74 = NEON_fmov(0x3f800000,4);
          fVar106 = (float)in_register_00005008;
          fVar82 = (fVar125 * (float)puVar15[1] + fVar133 * (float)((ulonglong)puVar15[1] >> 0x20) +
                   fVar78 * (float)*puVar15 + fVar79 * (float)((ulonglong)*puVar15 >> 0x20)) *
                   fVar112 + (fVar125 * (float)puVar27[1] +
                              fVar133 * (float)((ulonglong)puVar27[1] >> 0x20) +
                             fVar78 * (float)*puVar27 +
                             fVar79 * (float)((ulonglong)*puVar27 >> 0x20)) * fVar126 +
                   (fVar125 * (float)puVar13[1] + fVar133 * (float)((ulonglong)puVar13[1] >> 0x20) +
                   fVar78 * (float)*puVar13 + fVar79 * (float)((ulonglong)*puVar13 >> 0x20)) *
                   fVar106 + (fVar125 * (float)puVar14[1] +
                              fVar133 * (float)((ulonglong)puVar14[1] >> 0x20) +
                             fVar78 * (float)*puVar14 +
                             fVar79 * (float)((ulonglong)*puVar14 >> 0x20)) *
                             (((auVar74._0_4_ - fVar112) - fVar126) - fVar106);
          fVar105 = (fVar125 * (float)puVar15[3] + fVar133 * (float)((ulonglong)puVar15[3] >> 0x20)
                    + fVar78 * (float)puVar15[2] + fVar79 * (float)((ulonglong)puVar15[2] >> 0x20))
                    * fVar112 +
                    (fVar125 * (float)puVar27[3] + fVar133 * (float)((ulonglong)puVar27[3] >> 0x20)
                    + fVar78 * (float)puVar27[2] + fVar79 * (float)((ulonglong)puVar27[2] >> 0x20))
                    * fVar126 +
                    (fVar125 * (float)puVar13[3] + fVar133 * (float)((ulonglong)puVar13[3] >> 0x20)
                    + fVar78 * (float)puVar13[2] + fVar79 * (float)((ulonglong)puVar13[2] >> 0x20))
                    * fVar106 +
                    (fVar125 * (float)puVar14[3] + fVar133 * (float)((ulonglong)puVar14[3] >> 0x20)
                    + fVar78 * (float)puVar14[2] + fVar79 * (float)((ulonglong)puVar14[2] >> 0x20))
                    * (((auVar74._4_4_ - fVar112) - fVar126) - fVar106);
          fVar119 = (fVar125 * (float)puVar15[5] + fVar133 * (float)((ulonglong)puVar15[5] >> 0x20)
                    + fVar78 * (float)puVar15[4] + fVar79 * (float)((ulonglong)puVar15[4] >> 0x20))
                    * fVar112 +
                    (fVar125 * (float)puVar27[5] + fVar133 * (float)((ulonglong)puVar27[5] >> 0x20)
                    + fVar78 * (float)puVar27[4] + fVar79 * (float)((ulonglong)puVar27[4] >> 0x20))
                    * fVar126 +
                    (fVar125 * (float)puVar13[5] + fVar133 * (float)((ulonglong)puVar13[5] >> 0x20)
                    + fVar78 * (float)puVar13[4] + fVar79 * (float)((ulonglong)puVar13[4] >> 0x20))
                    * fVar106 +
                    (fVar125 * (float)puVar14[5] + fVar133 * (float)((ulonglong)puVar14[5] >> 0x20)
                    + fVar78 * (float)puVar14[4] + fVar79 * (float)((ulonglong)puVar14[4] >> 0x20))
                    * (((auVar74._8_4_ - fVar112) - fVar126) - fVar106);
          fVar106 = (fVar125 * (float)puVar15[7] + fVar133 * (float)((ulonglong)puVar15[7] >> 0x20)
                    + fVar78 * (float)puVar15[6] + fVar79 * (float)((ulonglong)puVar15[6] >> 0x20))
                    * fVar112 +
                    (fVar125 * (float)puVar27[7] + fVar133 * (float)((ulonglong)puVar27[7] >> 0x20)
                    + fVar78 * (float)puVar27[6] + fVar79 * (float)((ulonglong)puVar27[6] >> 0x20))
                    * fVar126 +
                    (fVar125 * (float)puVar13[7] + fVar133 * (float)((ulonglong)puVar13[7] >> 0x20)
                    + fVar78 * (float)puVar13[6] + fVar79 * (float)((ulonglong)puVar13[6] >> 0x20))
                    * fVar106 +
                    (fVar125 * (float)puVar14[7] + fVar133 * (float)((ulonglong)puVar14[7] >> 0x20)
                    + fVar78 * (float)puVar14[6] + fVar79 * (float)((ulonglong)puVar14[6] >> 0x20))
                    * (((auVar74._12_4_ - fVar112) - fVar126) - fVar106);
        }
        uVar52 = CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,fVar111))));
        fVar112 = (float)((ulonglong)uVar52 >> 0x20);
        fVar126 = fVar118 * (float)*(undefined8 *)(iVar45 + 0x8588) +
                  fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar45 + 0x8588) >> 0x20) +
                  fVar111 * (float)*(undefined8 *)(iVar45 + 0x8580) +
                  fVar112 * (float)((ulonglong)*(undefined8 *)(iVar45 + 0x8580) >> 0x20);
        fVar78 = fVar118 * (float)*(undefined8 *)(iVar45 + 0x8598) +
                 fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar45 + 0x8598) >> 0x20) +
                 fVar111 * (float)*(undefined8 *)(iVar45 + 0x8590) +
                 fVar112 * (float)((ulonglong)*(undefined8 *)(iVar45 + 0x8590) >> 0x20);
        fVar79 = fVar118 * (float)*(undefined8 *)(iVar45 + 0x85a8) +
                 fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar45 + 0x85a8) >> 0x20) +
                 fVar111 * (float)*(undefined8 *)(iVar45 + 0x85a0) +
                 fVar112 * (float)((ulonglong)*(undefined8 *)(iVar45 + 0x85a0) >> 0x20);
        fVar112 = fVar118 * (float)*(undefined8 *)(iVar45 + 0x85b8) +
                  fStack_134 * (float)((ulonglong)*(undefined8 *)(iVar45 + 0x85b8) >> 0x20) +
                  fVar111 * (float)*(undefined8 *)(iVar45 + 0x85b0) +
                  fVar112 * (float)((ulonglong)*(undefined8 *)(iVar45 + 0x85b0) >> 0x20);
        bStack_108 = SUB41(fVar79,0);
        bStack_107 = (byte)((uint)fVar79 >> 8);
        bStack_106 = (byte)((uint)fVar79 >> 0x10);
        bStack_105 = (byte)((uint)fVar79 >> 0x18);
        bStack_104 = SUB41(fVar112,0);
        bStack_103 = (byte)((uint)fVar112 >> 8);
        bStack_102 = (byte)((uint)fVar112 >> 0x10);
        bStack_101 = (byte)((uint)fVar112 >> 0x18);
        bStack_10c = SUB41(fVar78,0);
        bStack_10b = (byte)((uint)fVar78 >> 8);
        bStack_10a = (byte)((uint)fVar78 >> 0x10);
        bStack_109 = (byte)((uint)fVar78 >> 0x18);
        if (*piVar8 != 0) {
          puVar27 = (undefined8 *)(*piVar8 + uVar50 * 0x20);
          puVar27[1] = CONCAT44(fStack_134,fVar118);
          *puVar27 = uVar52;
          iVar20 = *piVar8 + uVar50 * 0x20;
          *(float *)(iVar20 + 0x18) = fVar119;
          *(float *)(iVar20 + 0x1c) = fVar106;
          *(float *)(iVar20 + 0x10) = fVar82;
          *(float *)(iVar20 + 0x14) = fVar105;
        }
        uVar41 = 0;
        if (*pcVar3 != '\0') {
          puVar24 = (uint *)*piVar1;
          piVar17 = param_2 + 0x28;
          if ((char)*piVar7 == '\0') {
            piVar17 = (int *)0x0;
          }
          if (piVar17 == (int *)0x0) {
            uVar41 = 0;
            uVar49 = puVar24[1] & 0xfffff03f;
          }
          else {
            bVar100 = 0;
            bVar101 = 0;
            bVar120 = 0;
            bVar102 = 0;
            bVar122 = 0;
            bVar103 = 0;
            bVar104 = 0;
            bVar107 = 0;
            bVar108 = 0;
            bVar109 = 0;
            bVar110 = 0;
            bVar113 = 0;
            bVar116 = 0;
            bVar117 = 0;
            bVar80 = 0;
            bVar121 = 0;
            bStack_d8 = 0;
            bStack_d7 = 0;
            bStack_d6 = 0;
            bStack_d5 = 0;
            bStack_d4 = 0;
            bStack_d3 = 0;
            bStack_d2 = 0;
            bStack_d1 = 0;
            local_e0 = 0;
            bStack_df = 0;
            bStack_de = 0;
            bStack_dd = 0;
            bStack_dc = 0;
            bStack_db = 0;
            bStack_da = 0;
            bStack_d9 = 0;
            if ((*puVar47 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 2) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)piVar17 >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar111)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 2) * fVar118 +
                       (float)*(undefined8 *)piVar17 * fVar111;
              bVar116 = SUB41(fVar82,0);
              bVar101 = bVar116 & (byte)uVar52;
              bVar117 = (byte)((uint)fVar82 >> 8);
              bVar100 = bVar117 & (byte)((ulonglong)uVar52 >> 8);
              bVar80 = (byte)((uint)fVar82 >> 0x10);
              bVar120 = bVar80 & (byte)((ulonglong)uVar52 >> 0x10);
              bVar121 = (byte)((uint)fVar82 >> 0x18);
              bVar102 = bVar121 & (byte)((ulonglong)uVar52 >> 0x18);
              bVar122 = bVar116 & (byte)((ulonglong)uVar52 >> 0x20);
              bVar103 = bVar117 & (byte)((ulonglong)uVar52 >> 0x28);
              bVar104 = bVar80 & (byte)((ulonglong)uVar52 >> 0x30);
              bVar107 = bVar121 & (byte)((ulonglong)uVar52 >> 0x38);
              bVar108 = bVar116 & (byte)in_register_00005008;
              bVar109 = bVar117 & (byte)(in_register_00005008 >> 8);
              bVar110 = bVar80 & (byte)(in_register_00005008 >> 0x10);
              bVar113 = bVar121 & (byte)(in_register_00005008 >> 0x18);
              bVar116 = bVar116 & (byte)(in_register_00005008 >> 0x20);
              bVar117 = bVar117 & (byte)(in_register_00005008 >> 0x28);
              bVar80 = bVar80 & (byte)(in_register_00005008 >> 0x30);
              bVar121 = bVar121 & (byte)(in_register_00005008 >> 0x38);
            }
            uStack_f8._0_2_ = CONCAT11(bVar109,bVar108);
            uStack_f8._0_3_ = CONCAT12(bVar110,(undefined2)uStack_f8);
            uStack_f8._0_4_ = CONCAT13(bVar113,(undefined3)uStack_f8);
            uStack_f8._0_5_ = CONCAT14(bVar116,(undefined4)uStack_f8);
            uStack_f8._0_6_ = CONCAT15(bVar117,(undefined5)uStack_f8);
            uStack_f8._0_7_ = CONCAT16(bVar80,(undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar121,(undefined7)uStack_f8);
            local_100._0_2_ = CONCAT11(bVar100,bVar101);
            local_100._0_3_ = CONCAT12(bVar120,(undefined2)local_100);
            local_100._0_4_ = CONCAT13(bVar102,(undefined3)local_100);
            local_100._0_5_ = CONCAT14(bVar122,(undefined4)local_100);
            local_100._0_6_ = CONCAT15(bVar103,(undefined5)local_100);
            local_100._0_7_ = CONCAT16(bVar104,(undefined6)local_100);
            local_100 = CONCAT17(bVar107,(undefined7)local_100);
            if ((*puVar47 >> 1 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x1a) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x18) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar111)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x1a) * fVar118 +
                       (float)*(undefined8 *)(piVar17 + 0x18) * fVar111;
              bVar114 = SUB41(fVar82,0);
              bVar115 = (byte)((uint)fVar82 >> 8);
              bVar54 = (byte)((uint)fVar82 >> 0x10);
              bVar75 = (byte)((uint)fVar82 >> 0x18);
              uStack_f8._0_2_ =
                   CONCAT11(bVar115 & (byte)(in_register_00005008 >> 8) | bVar109,
                            bVar114 & (byte)in_register_00005008 | bVar108);
              uStack_f8._0_3_ =
                   CONCAT12(bVar54 & (byte)(in_register_00005008 >> 0x10) | bVar110,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar75 & (byte)(in_register_00005008 >> 0x18) | bVar113,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar114 & (byte)(in_register_00005008 >> 0x20) | bVar116,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar115 & (byte)(in_register_00005008 >> 0x28) | bVar117,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar54 & (byte)(in_register_00005008 >> 0x30) | bVar80,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar75 & (byte)(in_register_00005008 >> 0x38) | bVar121,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar115 & (byte)((ulonglong)uVar52 >> 8) | bVar100,
                            bVar114 & (byte)uVar52 | bVar101);
              local_100._0_3_ =
                   CONCAT12(bVar54 & (byte)((ulonglong)uVar52 >> 0x10) | bVar120,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar75 & (byte)((ulonglong)uVar52 >> 0x18) | bVar102,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar114 & (byte)((ulonglong)uVar52 >> 0x20) | bVar122,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar115 & (byte)((ulonglong)uVar52 >> 0x28) | bVar103,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar54 & (byte)((ulonglong)uVar52 >> 0x30) | bVar104,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar75 & (byte)((ulonglong)uVar52 >> 0x38) | bVar107,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 2 & 1) != 0) {
              uVar52 = FUN_10024f78();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x32) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x30) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar111)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x32) * fVar118 +
                       (float)*(undefined8 *)(piVar17 + 0x30) * fVar111;
              bVar100 = SUB41(fVar82,0);
              bVar116 = (byte)((uint)fVar82 >> 8);
              bVar101 = (byte)((uint)fVar82 >> 0x10);
              bVar117 = (byte)((uint)fVar82 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar116 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar100 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar101 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar117 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar100 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar100 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 3 & 1) != 0) {
              uVar52 = FUN_10024f88();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x4a) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x48) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar111)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x4a) * fVar118 +
                       (float)*(undefined8 *)(piVar17 + 0x48) * fVar111;
              bVar100 = SUB41(fVar82,0);
              bVar116 = (byte)((uint)fVar82 >> 8);
              bVar101 = (byte)((uint)fVar82 >> 0x10);
              bVar117 = (byte)((uint)fVar82 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar116 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar100 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar101 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar117 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar100 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar100 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 4 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x62) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x60) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar111)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x62) * fVar118 +
                       (float)*(undefined8 *)(piVar17 + 0x60) * fVar111;
              bStack_d4 = SUB41(fVar82,0);
              local_e0 = bStack_d4 & (byte)uVar52;
              bStack_d3 = (byte)((uint)fVar82 >> 8);
              bStack_df = bStack_d3 & (byte)((ulonglong)uVar52 >> 8);
              bStack_d2 = (byte)((uint)fVar82 >> 0x10);
              bStack_de = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x10);
              bStack_d1 = (byte)((uint)fVar82 >> 0x18);
              bStack_dd = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x18);
              bStack_dc = bStack_d4 & (byte)((ulonglong)uVar52 >> 0x20);
              bStack_db = bStack_d3 & (byte)((ulonglong)uVar52 >> 0x28);
              bStack_da = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x30);
              bStack_d9 = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x38);
              bStack_d8 = bStack_d4 & (byte)in_register_00005008;
              bStack_d7 = bStack_d3 & (byte)(in_register_00005008 >> 8);
              bStack_d6 = bStack_d2 & (byte)(in_register_00005008 >> 0x10);
              bStack_d5 = bStack_d1 & (byte)(in_register_00005008 >> 0x18);
              bStack_d4 = bStack_d4 & (byte)(in_register_00005008 >> 0x20);
              bStack_d3 = bStack_d3 & (byte)(in_register_00005008 >> 0x28);
              bStack_d2 = bStack_d2 & (byte)(in_register_00005008 >> 0x30);
              bStack_d1 = bStack_d1 & (byte)(in_register_00005008 >> 0x38);
            }
            if ((*puVar47 >> 5 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar82 = (float)((ulonglong)*(undefined8 *)(piVar17 + 0x7a) >> 0x20) * fStack_134 +
                       (float)((ulonglong)*(undefined8 *)(piVar17 + 0x78) >> 0x20) *
                       (float)(CONCAT17(uVar130,CONCAT16(uVar129,CONCAT15(uVar128,CONCAT14(uVar127,
                                                  fVar111)))) >> 0x20) +
                       (float)*(undefined8 *)(piVar17 + 0x7a) * fVar118 +
                       (float)*(undefined8 *)(piVar17 + 0x78) * fVar111;
              bVar100 = SUB41(fVar82,0);
              bVar116 = (byte)((uint)fVar82 >> 8);
              bVar101 = (byte)((uint)fVar82 >> 0x10);
              bVar117 = (byte)((uint)fVar82 >> 0x18);
              local_e0 = bVar100 & (byte)uVar52 | local_e0;
              bStack_df = bVar116 & (byte)((ulonglong)uVar52 >> 8) | bStack_df;
              bStack_de = bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | bStack_de;
              bStack_dd = bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | bStack_dd;
              bStack_dc = bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | bStack_dc;
              bStack_db = bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | bStack_db;
              bStack_da = bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | bStack_da;
              bStack_d9 = bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | bStack_d9;
              bStack_d8 = bVar100 & (byte)in_register_00005008 | bStack_d8;
              bStack_d7 = bVar116 & (byte)(in_register_00005008 >> 8) | bStack_d7;
              bStack_d6 = bVar101 & (byte)(in_register_00005008 >> 0x10) | bStack_d6;
              bStack_d5 = bVar117 & (byte)(in_register_00005008 >> 0x18) | bStack_d5;
              bStack_d4 = bVar100 & (byte)(in_register_00005008 >> 0x20) | bStack_d4;
              bStack_d3 = bVar116 & (byte)(in_register_00005008 >> 0x28) | bStack_d3;
              bStack_d2 = bVar101 & (byte)(in_register_00005008 >> 0x30) | bStack_d2;
              bStack_d1 = bVar117 & (byte)(in_register_00005008 >> 0x38) | bStack_d1;
            }
            bVar100 = (byte)((ulonglong)_DAT_10160a80 >> 0x20);
            bVar116 = (byte)((ulonglong)uRam10160a88 >> 0x20);
            fVar82 = (float)CONCAT13(bStack_dd,CONCAT12(bStack_de,CONCAT11(bStack_df,local_e0)));
            uVar41 = *(uint *)(&DAT_10161270 +
                              ((byte)(-((float)CONCAT13(bStack_d1,
                                                        CONCAT12(bStack_d2,
                                                                 CONCAT11(bStack_d3,bStack_d4))) <
                                       0.0) & bVar116 |
                                      -((float)(CONCAT17(bStack_d9,
                                                         CONCAT16(bStack_da,
                                                                  CONCAT15(bStack_db,
                                                                           CONCAT14(bStack_dc,fVar82
                                                                                   )))) >> 0x20) <
                                       0.0) & bVar100 |
                                     -((float)CONCAT13(bStack_d5,
                                                       CONCAT12(bStack_d6,
                                                                CONCAT11(bStack_d7,bStack_d8))) <
                                      0.0) & (byte)uRam10160a88 |
                                     -(fVar82 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                     *(uint *)(&DAT_10161280 +
                              ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar116 |
                                      -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar100 |
                                     -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                     -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4);
            uVar49 = (*(uint *)(&DAT_10161280 +
                               ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar116 |
                                       -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar100 |
                                      -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                      -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4) |
                     0xc3f) & (*(uint *)(&DAT_10161270 +
                                        ((byte)(-((float)CONCAT13(bStack_d1,
                                                                  CONCAT12(bStack_d2,
                                                                           CONCAT11(bStack_d3,
                                                                                    bStack_d4))) <
                                                 0.0) & bVar116 |
                                                -((float)(CONCAT17(bStack_d9,
                                                                   CONCAT16(bStack_da,
                                                                            CONCAT15(bStack_db,
                                                                                     CONCAT14(
                                                  bStack_dc,fVar82)))) >> 0x20) < 0.0) & bVar100 |
                                               -((float)CONCAT13(bStack_d5,
                                                                 CONCAT12(bStack_d6,
                                                                          CONCAT11(bStack_d7,
                                                                                   bStack_d8))) <
                                                0.0) & (byte)uRam10160a88 |
                                               -(fVar82 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                              0x3ff) & puVar24[1];
          }
          puVar48 = puVar24 + 1;
          *puVar48 = uVar49;
          uVar52 = FUN_10024f30();
          fVar82 = (float)(CONCAT17(bStack_109,
                                    CONCAT16(bStack_10a,
                                             CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar126)))) >>
                          0x20);
          uVar49 = *(uint *)(&DAT_10161230 +
                            ((byte)(-(fVar82 * (float)(in_register_00005008 >> 0x20) + fVar112 < 0.0
                                     ) & (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                    -(fVar126 * (float)((ulonglong)uVar52 >> 0x20) + fVar112 < 0.0)
                                    & (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                   -(fVar82 * (float)in_register_00005008 + fVar112 < 0.0) &
                                   (byte)uRam10160a88 |
                                   -(fVar126 * (float)uVar52 + fVar112 < 0.0) & (byte)_DAT_10160a80)
                            & 0xf) * 4);
          *puVar48 = (uVar49 | 0x30) & *puVar48;
          uVar52 = FUN_10024f30();
          uVar46 = in_register_00005008;
          uVar53 = FUN_10024f58();
          fVar82 = (float)CONCAT13(bStack_101 & (byte)((ulonglong)uVar53 >> 0x18),
                                   CONCAT12(bStack_102 & (byte)((ulonglong)uVar53 >> 0x10),
                                            CONCAT11(bStack_103 & (byte)((ulonglong)uVar53 >> 8),
                                                     bStack_104 & (byte)uVar53)));
          auVar87._0_8_ =
               CONCAT17(bStack_101 & (byte)((ulonglong)uVar53 >> 0x38),
                        CONCAT16(bStack_102 & (byte)((ulonglong)uVar53 >> 0x30),
                                 CONCAT15(bStack_103 & (byte)((ulonglong)uVar53 >> 0x28),
                                          CONCAT14(bStack_104 & (byte)((ulonglong)uVar53 >> 0x20),
                                                   fVar82))));
          auVar87[8] = bStack_104 & (byte)uVar46;
          auVar87[9] = bStack_103 & (byte)(uVar46 >> 8);
          auVar87[10] = bStack_102 & (byte)(uVar46 >> 0x10);
          auVar87[0xb] = bStack_101 & (byte)(uVar46 >> 0x18);
          auVar94[0xc] = bStack_104 & (byte)(uVar46 >> 0x20);
          auVar94._0_12_ = auVar87;
          auVar94[0xd] = bStack_103 & (byte)(uVar46 >> 0x28);
          auVar94[0xe] = bStack_102 & (byte)(uVar46 >> 0x30);
          auVar94[0xf] = bStack_101 & (byte)(uVar46 >> 0x38);
          uVar41 = *(uint *)(&DAT_10161220 +
                            ((byte)(-(fVar79 * (float)(in_register_00005008 >> 0x20) +
                                      auVar94._12_4_ < 0.0) &
                                    (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                    -(fVar79 * (float)((ulonglong)uVar52 >> 0x20) +
                                      (float)((ulonglong)auVar87._0_8_ >> 0x20) < 0.0) &
                                    (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                   -(fVar79 * (float)in_register_00005008 + auVar87._8_4_ < 0.0) &
                                   (byte)uRam10160a88 |
                                   -(fVar79 * (float)uVar52 + fVar82 < 0.0) & (byte)_DAT_10160a80) &
                            3) * 4) | uVar49 | uVar41;
          *puVar48 = (*(uint *)(&DAT_10161220 +
                               ((byte)(-(fVar79 * (float)(in_register_00005008 >> 0x20) +
                                         auVar94._12_4_ < 0.0) &
                                       (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                       -(fVar79 * (float)((ulonglong)uVar52 >> 0x20) +
                                         (float)((ulonglong)auVar87._0_8_ >> 0x20) < 0.0) &
                                       (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                      -(fVar79 * (float)in_register_00005008 + auVar87._8_4_ < 0.0)
                                      & (byte)uRam10160a88 |
                                      -(fVar79 * (float)uVar52 + fVar82 < 0.0) & (byte)_DAT_10160a80
                                      ) & 3) * 4) | 0xf) & *puVar48;
          *puVar24 = uVar41 | *puVar24;
        }
        if (*(char *)((int)param_2 + 0x3e) == '\0') {
          uVar53 = FUN_10024f48();
          uVar52 = CONCAT17(bStack_109,
                            CONCAT16(bStack_10a,CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar126))));
          auVar61[8] = bStack_108;
          auVar61._0_8_ = uVar52;
          auVar61[9] = bStack_107;
          auVar61[10] = bStack_106;
          auVar61[0xb] = bStack_105;
          auVar69._0_8_ =
               CONCAT44((((float)((ulonglong)uVar52 >> 0x20) + (float)((ulonglong)uVar53 >> 0x20)) /
                        fVar112) * (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20),
                        ((fVar126 + (float)uVar53) / fVar112) * (float)*(undefined8 *)pfVar2 +
                        (float)*(undefined8 *)pfVar4);
          auVar69._8_4_ =
               ((auVar61._8_4_ + (float)in_register_00005008) / fVar112) *
               (float)*(undefined8 *)(param_2 + 0x1a) + (float)param_2[0x1e];
          auVar69._12_4_ =
               (((float)(in_register_00005008 >> 0x20) + 0.0) / fVar112) *
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
          if (uVar50 == 0) {
            *(longlong *)(param_2 + 0x26) = auVar69._8_8_;
            *(undefined8 *)*pauVar5 = auVar69._0_8_;
            *(longlong *)(param_2 + 0x22) = auVar69._8_8_;
            *(undefined8 *)*pauVar6 = auVar69._0_8_;
          }
          else {
            auVar74 = NEON_fmin(*pauVar6,auVar69,4);
            *(longlong *)(param_2 + 0x22) = auVar74._8_8_;
            *(longlong *)*pauVar6 = auVar74._0_8_;
            auVar74 = NEON_fmax(*pauVar5,auVar69,4);
            *(longlong *)(param_2 + 0x26) = auVar74._8_8_;
            *(longlong *)*pauVar5 = auVar74._0_8_;
          }
        }
        else {
          auVar69[4] = bStack_10c;
          auVar69._0_4_ = fVar126;
          auVar69[5] = bStack_10b;
          auVar69[6] = bStack_10a;
          auVar69[7] = bStack_109;
          auVar69[8] = bStack_108;
          auVar69[9] = bStack_107;
          auVar69[10] = bStack_106;
          auVar69[0xb] = bStack_105;
          auVar69[0xc] = bStack_104;
          auVar69[0xd] = bStack_103;
          auVar69[0xe] = bStack_102;
          auVar69[0xf] = bStack_101;
        }
        puVar27 = (undefined8 *)*piVar51;
        if (puVar27 != (undefined8 *)0x0) {
          if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar41 == 0)) {
            puVar27[1] = auVar69._8_8_;
            *puVar27 = auVar69._0_8_;
          }
          else {
            *(int *)((int)puVar27 + 0xc) = auVar69._12_4_;
          }
          *piVar51 = param_2[0x15] + *piVar51;
        }
        uVar50 = uVar50 + 1;
      } while (uVar50 < param_4);
      goto LAB_10036c28;
    }
    break;
  default:
    if (param_4 != 0) goto LAB_10036c28;
    break;
  case 0x10:
    uVar50 = 0;
    if (param_4 != 0) {
      piVar17 = param_2 + 0x14;
      do {
        puVar27 = (undefined8 *)(*param_2 + param_2[6] * uVar50);
        if ((char)param_2[0xd] == '\x02') {
          uVar52 = *puVar27;
          in_register_00005008 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
        }
        else {
          uVar52 = FUN_10036ee8(puVar27,(char)param_2[0xd]);
        }
        if (*pcVar11 != '\0') {
          puVar27 = (undefined8 *)(*piVar10 + param_2[7] * uVar50);
          if (*(char *)((int)param_2 + 0x35) == '\x02') {
            local_120 = *puVar27;
            uStack_118 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
          }
          else {
            uStack_118 = in_register_00005008;
            local_120 = FUN_10036ee8(puVar27,*(char *)((int)param_2 + 0x35));
          }
        }
        puVar24 = (uint *)(param_2[5] + param_2[10] * uVar50);
        if (*(char *)((int)param_2 + 0x39) == '\x05') {
          uVar41 = *puVar24;
        }
        else {
          uVar41 = FUN_10037828(puVar24,*(char *)((int)param_2 + 0x39));
        }
        uVar41 = uVar41 & 0xff;
        auVar95 = ZEXT516(0) << 8;
        bStack_108 = 0;
        bStack_107 = 0;
        bStack_106 = 0;
        bStack_105 = 0;
        bStack_104 = 0;
        bStack_103 = 0;
        bStack_102 = 0;
        bStack_101 = 0;
        local_110 = 0;
        bStack_10f = 0;
        bStack_10e = 0;
        bStack_10d = 0;
        bStack_10c = 0;
        bStack_10b = 0;
        bStack_10a = 0;
        bStack_109 = 0;
        fVar82 = (float)uVar52;
        fVar105 = (float)((ulonglong)uVar52 >> 0x20);
        fVar111 = (float)in_register_00005008;
        fVar118 = (float)(in_register_00005008 >> 0x20);
        if (*pcVar9 != '\0') {
          puVar27 = (undefined8 *)(*(int *)(param_1 + 0xd80) + (uVar41 + 10) * 0x40);
          fVar119 = fVar111 * (float)puVar27[1] + fVar118 * (float)((ulonglong)puVar27[1] >> 0x20) +
                    fVar82 * (float)*puVar27 + fVar105 * (float)((ulonglong)*puVar27 >> 0x20);
          fVar106 = fVar111 * (float)puVar27[3] + fVar118 * (float)((ulonglong)puVar27[3] >> 0x20) +
                    fVar82 * (float)puVar27[2] + fVar105 * (float)((ulonglong)puVar27[2] >> 0x20);
          fVar112 = fVar111 * (float)puVar27[5] + fVar118 * (float)((ulonglong)puVar27[5] >> 0x20) +
                    fVar82 * (float)puVar27[4] + fVar105 * (float)((ulonglong)puVar27[4] >> 0x20);
          fVar126 = fVar111 * (float)puVar27[7] + fVar118 * (float)((ulonglong)puVar27[7] >> 0x20) +
                    fVar82 * (float)puVar27[6] + fVar105 * (float)((ulonglong)puVar27[6] >> 0x20);
          bStack_108 = SUB41(fVar112,0);
          bStack_107 = (byte)((uint)fVar112 >> 8);
          bStack_106 = (byte)((uint)fVar112 >> 0x10);
          bStack_105 = (byte)((uint)fVar112 >> 0x18);
          bStack_104 = SUB41(fVar126,0);
          bStack_103 = (byte)((uint)fVar126 >> 8);
          bStack_102 = (byte)((uint)fVar126 >> 0x10);
          bStack_101 = (byte)((uint)fVar126 >> 0x18);
          local_110 = SUB41(fVar119,0);
          bStack_10f = (byte)((uint)fVar119 >> 8);
          bStack_10e = (byte)((uint)fVar119 >> 0x10);
          bStack_10d = (byte)((uint)fVar119 >> 0x18);
          bStack_10c = SUB41(fVar106,0);
          bStack_10b = (byte)((uint)fVar106 >> 8);
          bStack_10a = (byte)((uint)fVar106 >> 0x10);
          bStack_109 = (byte)((uint)fVar106 >> 0x18);
        }
        if (*pcVar11 != '\0') {
          FUN_10029c30(param_1,uVar41 + 10);
          puVar27 = (undefined8 *)(*(int *)(param_1 + 0xd80) + (uVar41 + 0x114) * 0x40);
          fVar119 = (float)local_120;
          fVar106 = (float)((ulonglong)local_120 >> 0x20);
          fVar112 = (float)uStack_118;
          fVar126 = (float)(uStack_118 >> 0x20);
          auVar95._0_4_ =
               fVar112 * (float)puVar27[1] + fVar126 * (float)((ulonglong)puVar27[1] >> 0x20) +
               fVar119 * (float)*puVar27 + fVar106 * (float)((ulonglong)*puVar27 >> 0x20);
          auVar95._4_4_ =
               fVar112 * (float)puVar27[3] + fVar126 * (float)((ulonglong)puVar27[3] >> 0x20) +
               fVar119 * (float)puVar27[2] + fVar106 * (float)((ulonglong)puVar27[2] >> 0x20);
          auVar95._8_4_ =
               fVar112 * (float)puVar27[5] + fVar126 * (float)((ulonglong)puVar27[5] >> 0x20) +
               fVar119 * (float)puVar27[4] + fVar106 * (float)((ulonglong)puVar27[4] >> 0x20);
          auVar95._12_4_ =
               fVar112 * (float)puVar27[7] + fVar126 * (float)((ulonglong)puVar27[7] >> 0x20) +
               fVar119 * (float)puVar27[6] + fVar106 * (float)((ulonglong)puVar27[6] >> 0x20);
        }
        puVar27 = (undefined8 *)*piVar51;
        fVar119 = fVar111 * (float)puVar27[1] + fVar118 * (float)((ulonglong)puVar27[1] >> 0x20) +
                  fVar82 * (float)*puVar27 + fVar105 * (float)((ulonglong)*puVar27 >> 0x20);
        fVar106 = fVar111 * (float)puVar27[3] + fVar118 * (float)((ulonglong)puVar27[3] >> 0x20) +
                  fVar82 * (float)puVar27[2] + fVar105 * (float)((ulonglong)puVar27[2] >> 0x20);
        fVar112 = fVar111 * (float)puVar27[5] + fVar118 * (float)((ulonglong)puVar27[5] >> 0x20) +
                  fVar82 * (float)puVar27[4] + fVar105 * (float)((ulonglong)puVar27[4] >> 0x20);
        fVar82 = fVar111 * (float)puVar27[7] + fVar118 * (float)((ulonglong)puVar27[7] >> 0x20) +
                 fVar82 * (float)puVar27[6] + fVar105 * (float)((ulonglong)puVar27[6] >> 0x20);
        bStack_13c = SUB41(fVar106,0);
        bStack_13b = (byte)((uint)fVar106 >> 8);
        bStack_13a = (byte)((uint)fVar106 >> 0x10);
        bStack_139 = (byte)((uint)fVar106 >> 0x18);
        if (*piVar8 != 0) {
          puVar27 = (undefined8 *)(*piVar8 + uVar50 * 0x20);
          puVar27[1] = CONCAT17(bStack_101,
                                CONCAT16(bStack_102,
                                         CONCAT15(bStack_103,
                                                  CONCAT14(bStack_104,
                                                           CONCAT13(bStack_105,
                                                                    CONCAT12(bStack_106,
                                                                             CONCAT11(bStack_107,
                                                                                      bStack_108))))
                                                 )));
          *puVar27 = CONCAT17(bStack_109,
                              CONCAT16(bStack_10a,
                                       CONCAT15(bStack_10b,
                                                CONCAT14(bStack_10c,
                                                         CONCAT13(bStack_10d,
                                                                  CONCAT12(bStack_10e,
                                                                           CONCAT11(bStack_10f,
                                                                                    local_110)))))))
          ;
          iVar20 = *piVar8 + uVar50 * 0x20;
          *(longlong *)(iVar20 + 0x18) = auVar95._8_8_;
          *(longlong *)(iVar20 + 0x10) = auVar95._0_8_;
        }
        uVar41 = 0;
        if (*pcVar3 != '\0') {
          puVar24 = (uint *)*piVar1;
          piVar18 = param_2 + 0x28;
          if ((char)*piVar7 == '\0') {
            piVar18 = (int *)0x0;
          }
          if (piVar18 == (int *)0x0) {
            uVar49 = 0;
            uVar41 = puVar24[1] & 0xfffff03f;
          }
          else {
            bVar100 = 0;
            bVar101 = 0;
            bVar120 = 0;
            bVar102 = 0;
            bVar122 = 0;
            bVar103 = 0;
            bVar104 = 0;
            bVar107 = 0;
            bVar108 = 0;
            bVar109 = 0;
            bVar110 = 0;
            bVar113 = 0;
            bVar116 = 0;
            bVar117 = 0;
            bVar80 = 0;
            bVar121 = 0;
            bStack_d8 = 0;
            bStack_d7 = 0;
            bStack_d6 = 0;
            bStack_d5 = 0;
            bStack_d4 = 0;
            bStack_d3 = 0;
            bStack_d2 = 0;
            bStack_d1 = 0;
            local_e0 = 0;
            bStack_df = 0;
            bStack_de = 0;
            bStack_dd = 0;
            bStack_dc = 0;
            bStack_db = 0;
            bStack_da = 0;
            bStack_d9 = 0;
            if ((*puVar47 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar111 = (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108)));
              fVar105 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar105 = (float)((ulonglong)*(undefined8 *)(piVar18 + 2) >> 0x20) *
                        (float)(CONCAT17(bStack_101,
                                         CONCAT16(bStack_102,
                                                  CONCAT15(bStack_103,CONCAT14(bStack_104,fVar111)))
                                        ) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)piVar18 >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar105)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 2) * fVar111 +
                        (float)*(undefined8 *)piVar18 * fVar105;
              bVar116 = SUB41(fVar105,0);
              bVar101 = bVar116 & (byte)uVar52;
              bVar117 = (byte)((uint)fVar105 >> 8);
              bVar100 = bVar117 & (byte)((ulonglong)uVar52 >> 8);
              bVar80 = (byte)((uint)fVar105 >> 0x10);
              bVar120 = bVar80 & (byte)((ulonglong)uVar52 >> 0x10);
              bVar121 = (byte)((uint)fVar105 >> 0x18);
              bVar102 = bVar121 & (byte)((ulonglong)uVar52 >> 0x18);
              bVar122 = bVar116 & (byte)((ulonglong)uVar52 >> 0x20);
              bVar103 = bVar117 & (byte)((ulonglong)uVar52 >> 0x28);
              bVar104 = bVar80 & (byte)((ulonglong)uVar52 >> 0x30);
              bVar107 = bVar121 & (byte)((ulonglong)uVar52 >> 0x38);
              bVar108 = bVar116 & (byte)in_register_00005008;
              bVar109 = bVar117 & (byte)(in_register_00005008 >> 8);
              bVar110 = bVar80 & (byte)(in_register_00005008 >> 0x10);
              bVar113 = bVar121 & (byte)(in_register_00005008 >> 0x18);
              bVar116 = bVar116 & (byte)(in_register_00005008 >> 0x20);
              bVar117 = bVar117 & (byte)(in_register_00005008 >> 0x28);
              bVar80 = bVar80 & (byte)(in_register_00005008 >> 0x30);
              bVar121 = bVar121 & (byte)(in_register_00005008 >> 0x38);
            }
            uStack_f8._0_2_ = CONCAT11(bVar109,bVar108);
            uStack_f8._0_3_ = CONCAT12(bVar110,(undefined2)uStack_f8);
            uStack_f8._0_4_ = CONCAT13(bVar113,(undefined3)uStack_f8);
            uStack_f8._0_5_ = CONCAT14(bVar116,(undefined4)uStack_f8);
            uStack_f8._0_6_ = CONCAT15(bVar117,(undefined5)uStack_f8);
            uStack_f8._0_7_ = CONCAT16(bVar80,(undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar121,(undefined7)uStack_f8);
            local_100._0_2_ = CONCAT11(bVar100,bVar101);
            local_100._0_3_ = CONCAT12(bVar120,(undefined2)local_100);
            local_100._0_4_ = CONCAT13(bVar102,(undefined3)local_100);
            local_100._0_5_ = CONCAT14(bVar122,(undefined4)local_100);
            local_100._0_6_ = CONCAT15(bVar103,(undefined5)local_100);
            local_100._0_7_ = CONCAT16(bVar104,(undefined6)local_100);
            local_100 = CONCAT17(bVar107,(undefined7)local_100);
            if ((*puVar47 >> 1 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar111 = (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108)));
              fVar105 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar105 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x1a) >> 0x20) *
                        (float)(CONCAT17(bStack_101,
                                         CONCAT16(bStack_102,
                                                  CONCAT15(bStack_103,CONCAT14(bStack_104,fVar111)))
                                        ) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x18) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar105)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x1a) * fVar111 +
                        (float)*(undefined8 *)(piVar18 + 0x18) * fVar105;
              bVar114 = SUB41(fVar105,0);
              bVar115 = (byte)((uint)fVar105 >> 8);
              bVar54 = (byte)((uint)fVar105 >> 0x10);
              bVar75 = (byte)((uint)fVar105 >> 0x18);
              uStack_f8._0_2_ =
                   CONCAT11(bVar115 & (byte)(in_register_00005008 >> 8) | bVar109,
                            bVar114 & (byte)in_register_00005008 | bVar108);
              uStack_f8._0_3_ =
                   CONCAT12(bVar54 & (byte)(in_register_00005008 >> 0x10) | bVar110,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar75 & (byte)(in_register_00005008 >> 0x18) | bVar113,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar114 & (byte)(in_register_00005008 >> 0x20) | bVar116,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar115 & (byte)(in_register_00005008 >> 0x28) | bVar117,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar54 & (byte)(in_register_00005008 >> 0x30) | bVar80,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar75 & (byte)(in_register_00005008 >> 0x38) | bVar121,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar115 & (byte)((ulonglong)uVar52 >> 8) | bVar100,
                            bVar114 & (byte)uVar52 | bVar101);
              local_100._0_3_ =
                   CONCAT12(bVar54 & (byte)((ulonglong)uVar52 >> 0x10) | bVar120,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar75 & (byte)((ulonglong)uVar52 >> 0x18) | bVar102,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar114 & (byte)((ulonglong)uVar52 >> 0x20) | bVar122,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar115 & (byte)((ulonglong)uVar52 >> 0x28) | bVar103,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar54 & (byte)((ulonglong)uVar52 >> 0x30) | bVar104,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar75 & (byte)((ulonglong)uVar52 >> 0x38) | bVar107,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 2 & 1) != 0) {
              uVar52 = FUN_10024f78();
              fVar111 = (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108)));
              fVar105 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar105 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x32) >> 0x20) *
                        (float)(CONCAT17(bStack_101,
                                         CONCAT16(bStack_102,
                                                  CONCAT15(bStack_103,CONCAT14(bStack_104,fVar111)))
                                        ) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x30) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar105)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x32) * fVar111 +
                        (float)*(undefined8 *)(piVar18 + 0x30) * fVar105;
              bVar100 = SUB41(fVar105,0);
              bVar116 = (byte)((uint)fVar105 >> 8);
              bVar101 = (byte)((uint)fVar105 >> 0x10);
              bVar117 = (byte)((uint)fVar105 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar116 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar100 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar101 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar117 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar100 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar100 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 3 & 1) != 0) {
              uVar52 = FUN_10024f88();
              fVar111 = (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108)));
              fVar105 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar105 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x4a) >> 0x20) *
                        (float)(CONCAT17(bStack_101,
                                         CONCAT16(bStack_102,
                                                  CONCAT15(bStack_103,CONCAT14(bStack_104,fVar111)))
                                        ) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x48) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar105)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x4a) * fVar111 +
                        (float)*(undefined8 *)(piVar18 + 0x48) * fVar105;
              bVar100 = SUB41(fVar105,0);
              bVar116 = (byte)((uint)fVar105 >> 8);
              bVar101 = (byte)((uint)fVar105 >> 0x10);
              bVar117 = (byte)((uint)fVar105 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar116 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar100 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar101 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar117 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar100 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar116 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar101 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar117 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar116 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar100 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 4 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar111 = (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108)));
              fVar105 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar105 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x62) >> 0x20) *
                        (float)(CONCAT17(bStack_101,
                                         CONCAT16(bStack_102,
                                                  CONCAT15(bStack_103,CONCAT14(bStack_104,fVar111)))
                                        ) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x60) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar105)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x62) * fVar111 +
                        (float)*(undefined8 *)(piVar18 + 0x60) * fVar105;
              bStack_d4 = SUB41(fVar105,0);
              local_e0 = bStack_d4 & (byte)uVar52;
              bStack_d3 = (byte)((uint)fVar105 >> 8);
              bStack_df = bStack_d3 & (byte)((ulonglong)uVar52 >> 8);
              bStack_d2 = (byte)((uint)fVar105 >> 0x10);
              bStack_de = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x10);
              bStack_d1 = (byte)((uint)fVar105 >> 0x18);
              bStack_dd = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x18);
              bStack_dc = bStack_d4 & (byte)((ulonglong)uVar52 >> 0x20);
              bStack_db = bStack_d3 & (byte)((ulonglong)uVar52 >> 0x28);
              bStack_da = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x30);
              bStack_d9 = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x38);
              bStack_d8 = bStack_d4 & (byte)in_register_00005008;
              bStack_d7 = bStack_d3 & (byte)(in_register_00005008 >> 8);
              bStack_d6 = bStack_d2 & (byte)(in_register_00005008 >> 0x10);
              bStack_d5 = bStack_d1 & (byte)(in_register_00005008 >> 0x18);
              bStack_d4 = bStack_d4 & (byte)(in_register_00005008 >> 0x20);
              bStack_d3 = bStack_d3 & (byte)(in_register_00005008 >> 0x28);
              bStack_d2 = bStack_d2 & (byte)(in_register_00005008 >> 0x30);
              bStack_d1 = bStack_d1 & (byte)(in_register_00005008 >> 0x38);
            }
            if ((*puVar47 >> 5 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar111 = (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108)));
              fVar105 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar105 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x7a) >> 0x20) *
                        (float)(CONCAT17(bStack_101,
                                         CONCAT16(bStack_102,
                                                  CONCAT15(bStack_103,CONCAT14(bStack_104,fVar111)))
                                        ) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x78) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar105)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x7a) * fVar111 +
                        (float)*(undefined8 *)(piVar18 + 0x78) * fVar105;
              bVar100 = SUB41(fVar105,0);
              bVar116 = (byte)((uint)fVar105 >> 8);
              bVar101 = (byte)((uint)fVar105 >> 0x10);
              bVar117 = (byte)((uint)fVar105 >> 0x18);
              local_e0 = bVar100 & (byte)uVar52 | local_e0;
              bStack_df = bVar116 & (byte)((ulonglong)uVar52 >> 8) | bStack_df;
              bStack_de = bVar101 & (byte)((ulonglong)uVar52 >> 0x10) | bStack_de;
              bStack_dd = bVar117 & (byte)((ulonglong)uVar52 >> 0x18) | bStack_dd;
              bStack_dc = bVar100 & (byte)((ulonglong)uVar52 >> 0x20) | bStack_dc;
              bStack_db = bVar116 & (byte)((ulonglong)uVar52 >> 0x28) | bStack_db;
              bStack_da = bVar101 & (byte)((ulonglong)uVar52 >> 0x30) | bStack_da;
              bStack_d9 = bVar117 & (byte)((ulonglong)uVar52 >> 0x38) | bStack_d9;
              bStack_d8 = bVar100 & (byte)in_register_00005008 | bStack_d8;
              bStack_d7 = bVar116 & (byte)(in_register_00005008 >> 8) | bStack_d7;
              bStack_d6 = bVar101 & (byte)(in_register_00005008 >> 0x10) | bStack_d6;
              bStack_d5 = bVar117 & (byte)(in_register_00005008 >> 0x18) | bStack_d5;
              bStack_d4 = bVar100 & (byte)(in_register_00005008 >> 0x20) | bStack_d4;
              bStack_d3 = bVar116 & (byte)(in_register_00005008 >> 0x28) | bStack_d3;
              bStack_d2 = bVar101 & (byte)(in_register_00005008 >> 0x30) | bStack_d2;
              bStack_d1 = bVar117 & (byte)(in_register_00005008 >> 0x38) | bStack_d1;
            }
            bVar100 = (byte)((ulonglong)_DAT_10160a80 >> 0x20);
            bVar116 = (byte)((ulonglong)uRam10160a88 >> 0x20);
            fVar105 = (float)CONCAT13(bStack_dd,CONCAT12(bStack_de,CONCAT11(bStack_df,local_e0)));
            uVar49 = *(uint *)(&DAT_10161270 +
                              ((byte)(-((float)CONCAT13(bStack_d1,
                                                        CONCAT12(bStack_d2,
                                                                 CONCAT11(bStack_d3,bStack_d4))) <
                                       0.0) & bVar116 |
                                      -((float)(CONCAT17(bStack_d9,
                                                         CONCAT16(bStack_da,
                                                                  CONCAT15(bStack_db,
                                                                           CONCAT14(bStack_dc,
                                                                                    fVar105)))) >>
                                               0x20) < 0.0) & bVar100 |
                                     -((float)CONCAT13(bStack_d5,
                                                       CONCAT12(bStack_d6,
                                                                CONCAT11(bStack_d7,bStack_d8))) <
                                      0.0) & (byte)uRam10160a88 |
                                     -(fVar105 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                     *(uint *)(&DAT_10161280 +
                              ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar116 |
                                      -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar100 |
                                     -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                     -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4);
            uVar41 = (*(uint *)(&DAT_10161280 +
                               ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar116 |
                                       -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar100 |
                                      -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                      -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4) |
                     0xc3f) & (*(uint *)(&DAT_10161270 +
                                        ((byte)(-((float)CONCAT13(bStack_d1,
                                                                  CONCAT12(bStack_d2,
                                                                           CONCAT11(bStack_d3,
                                                                                    bStack_d4))) <
                                                 0.0) & bVar116 |
                                                -((float)(CONCAT17(bStack_d9,
                                                                   CONCAT16(bStack_da,
                                                                            CONCAT15(bStack_db,
                                                                                     CONCAT14(
                                                  bStack_dc,fVar105)))) >> 0x20) < 0.0) & bVar100 |
                                               -((float)CONCAT13(bStack_d5,
                                                                 CONCAT12(bStack_d6,
                                                                          CONCAT11(bStack_d7,
                                                                                   bStack_d8))) <
                                                0.0) & (byte)uRam10160a88 |
                                               -(fVar105 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                              0x3ff) & puVar24[1];
          }
          puVar48 = puVar24 + 1;
          *puVar48 = uVar41;
          uVar52 = FUN_10024f30();
          fVar105 = (float)(CONCAT17(bStack_139,
                                     CONCAT16(bStack_13a,
                                              CONCAT15(bStack_13b,CONCAT14(bStack_13c,fVar119)))) >>
                           0x20);
          uVar41 = *(uint *)(&DAT_10161230 +
                            ((byte)(-(fVar105 * (float)(in_register_00005008 >> 0x20) + fVar82 < 0.0
                                     ) & (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                    -(fVar119 * (float)((ulonglong)uVar52 >> 0x20) + fVar82 < 0.0) &
                                    (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                   -(fVar105 * (float)in_register_00005008 + fVar82 < 0.0) &
                                   (byte)uRam10160a88 |
                                   -(fVar119 * (float)uVar52 + fVar82 < 0.0) & (byte)_DAT_10160a80)
                            & 0xf) * 4);
          *puVar48 = (uVar41 | 0x30) & *puVar48;
          uVar52 = FUN_10024f30();
          uVar41 = uVar49 | *(uint *)(&DAT_10161220 +
                                     ((byte)(-(fVar112 * (float)(in_register_00005008 >> 0x20) + 0.0
                                              < 0.0) & (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                             -(fVar112 * (float)((ulonglong)uVar52 >> 0x20) + 0.0 <
                                              0.0) & (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                            -(fVar112 * (float)in_register_00005008 + 0.0 < 0.0) &
                                            (byte)uRam10160a88 |
                                            -(fVar112 * (float)uVar52 + fVar82 < 0.0) &
                                            (byte)_DAT_10160a80) & 3) * 4) | uVar41;
          *puVar48 = (*(uint *)(&DAT_10161220 +
                               ((byte)(-(fVar112 * (float)(in_register_00005008 >> 0x20) + 0.0 < 0.0
                                        ) & (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                       -(fVar112 * (float)((ulonglong)uVar52 >> 0x20) + 0.0 < 0.0) &
                                       (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                      -(fVar112 * (float)in_register_00005008 + 0.0 < 0.0) &
                                      (byte)uRam10160a88 |
                                      -(fVar112 * (float)uVar52 + fVar82 < 0.0) &
                                      (byte)_DAT_10160a80) & 3) * 4) | 0xf) & *puVar48;
          *puVar24 = uVar41 | *puVar24;
        }
        if (*(char *)((int)param_2 + 0x3e) == '\0') {
          uVar53 = FUN_10024f48();
          fStack_138._0_1_ = SUB41(fVar112,0);
          uVar52 = CONCAT17(bStack_139,
                            CONCAT16(bStack_13a,CONCAT15(bStack_13b,CONCAT14(bStack_13c,fVar119))));
          auVar62[8] = fStack_138._0_1_;
          auVar62._0_8_ = uVar52;
          auVar62[9] = (undefined1)((uint)fVar112 >> 8);
          auVar62[10] = (undefined1)((uint)fVar112 >> 0x10);
          auVar62[0xb] = (undefined1)((uint)fVar112 >> 0x18);
          auVar70._0_8_ =
               CONCAT44((((float)((ulonglong)uVar52 >> 0x20) + (float)((ulonglong)uVar53 >> 0x20)) /
                        fVar82) * (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20),
                        ((fVar119 + (float)uVar53) / fVar82) * (float)*(undefined8 *)pfVar2 +
                        (float)*(undefined8 *)pfVar4);
          auVar70._8_4_ =
               ((auVar62._8_4_ + (float)in_register_00005008) / fVar82) *
               (float)*(undefined8 *)(param_2 + 0x1a) + (float)param_2[0x1e];
          auVar70._12_4_ =
               (((float)(in_register_00005008 >> 0x20) + 0.0) / fVar82) *
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
          if (uVar50 == 0) {
            *(longlong *)(param_2 + 0x26) = auVar70._8_8_;
            *(undefined8 *)*pauVar5 = auVar70._0_8_;
            *(longlong *)(param_2 + 0x22) = auVar70._8_8_;
            *(undefined8 *)*pauVar6 = auVar70._0_8_;
          }
          else {
            auVar74 = NEON_fmin(*pauVar6,auVar70,4);
            *(longlong *)(param_2 + 0x22) = auVar74._8_8_;
            *(longlong *)*pauVar6 = auVar74._0_8_;
            auVar74 = NEON_fmax(*pauVar5,auVar70,4);
            *(longlong *)(param_2 + 0x26) = auVar74._8_8_;
            *(longlong *)*pauVar5 = auVar74._0_8_;
          }
        }
        else {
          auVar70[4] = bStack_13c;
          auVar70._0_4_ = fVar119;
          auVar70[5] = bStack_13b;
          auVar70[6] = bStack_13a;
          auVar70[7] = bStack_139;
          auVar70._8_4_ = fVar112;
          auVar70._12_4_ = fVar82;
        }
        puVar27 = (undefined8 *)*piVar17;
        if (puVar27 != (undefined8 *)0x0) {
          if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar41 == 0)) {
            puVar27[1] = auVar70._8_8_;
            *puVar27 = auVar70._0_8_;
          }
          else {
            *(int *)((int)puVar27 + 0xc) = auVar70._12_4_;
          }
          *piVar17 = param_2[0x15] + *piVar17;
        }
        uVar50 = uVar50 + 1;
      } while (uVar50 < param_4);
      goto LAB_10036c28;
    }
    break;
  case 0x20:
    uVar50 = 0;
    if (param_4 != 0) {
      piVar17 = param_2 + 0x14;
      do {
        puVar27 = (undefined8 *)(*param_2 + uVar50 * param_2[6]);
        if ((char)param_2[0xd] == '\x02') {
          uVar52 = *puVar27;
          in_register_00005008 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
        }
        else {
          uVar52 = FUN_10036ee8(puVar27,(char)param_2[0xd]);
        }
        uVar46 = in_register_00005008;
        if (*pcVar11 != '\0') {
          puVar27 = (undefined8 *)(*piVar10 + param_2[7] * uVar50);
          if (*(char *)((int)param_2 + 0x35) == '\x02') {
            local_120 = *puVar27;
            uVar46 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
            uStack_118 = uVar46;
          }
          else {
            local_120 = FUN_10036ee8(puVar27,*(char *)((int)param_2 + 0x35));
            uStack_118 = uVar46;
          }
        }
        if (*(char *)((int)param_2 + 0x39) != '\x05') {
          FUN_10037828(param_2[5] + uVar50 * param_2[10],*(char *)((int)param_2 + 0x39));
        }
        bStack_108 = 0;
        bStack_107 = 0;
        bStack_106 = 0;
        bStack_105 = 0;
        bStack_104 = 0;
        bStack_103 = 0;
        bStack_102 = 0;
        bStack_101 = 0;
        local_110 = 0;
        bStack_10f = 0;
        bStack_10e = 0;
        bStack_10d = 0;
        bStack_10c = 0;
        bStack_10b = 0;
        bStack_10a = 0;
        bStack_109 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        puVar27 = (undefined8 *)(param_2[3] + param_2[8] * uVar50);
        if (*(char *)((int)param_2 + 0x37) == '\x02') {
          uVar53 = *puVar27;
          uVar46 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
        }
        else {
          uVar53 = FUN_10036ee8(puVar27,*(char *)((int)param_2 + 0x37));
        }
        uVar55 = *(undefined8 *)(param_2 + 0x40);
        uVar56 = *(undefined8 *)(param_2 + 0x44);
        cVar42 = *pcVar11;
        fVar82 = (float)uVar52 * (float)uVar56 + (float)uVar53 * (float)uVar55;
        fVar105 = (float)((ulonglong)uVar52 >> 0x20) * (float)((ulonglong)uVar56 >> 0x20) +
                  (float)((ulonglong)uVar53 >> 0x20) * (float)((ulonglong)uVar55 >> 0x20);
        fVar111 = (float)in_register_00005008 * (float)param_2[0x46] +
                  (float)uVar46 * (float)*(undefined8 *)(param_2 + 0x42);
        fVar118 = (float)(in_register_00005008 >> 0x20) *
                  (float)((ulonglong)*(undefined8 *)(param_2 + 0x46) >> 0x20) +
                  (float)(uVar46 >> 0x20) *
                  (float)((ulonglong)*(undefined8 *)(param_2 + 0x42) >> 0x20);
        bStack_13c = SUB41(fVar105,0);
        bStack_13b = (byte)((uint)fVar105 >> 8);
        bStack_13a = (byte)((uint)fVar105 >> 0x10);
        bStack_139 = (byte)((uint)fVar105 >> 0x18);
        if (cVar42 != '\0') {
          puVar27 = (undefined8 *)(param_2[4] + param_2[9] * uVar50);
          if ((char)param_2[0xe] == '\x02') {
            uVar52 = *puVar27;
            in_register_00005008 = (ulonglong)*(uint *)(puVar27 + 1) | 0x3f80000000000000;
          }
          else {
            uVar52 = FUN_10036ee8(puVar27,(char)param_2[0xe]);
            cVar42 = *pcVar11;
          }
          uVar53 = *(undefined8 *)(param_2 + 0x40);
          uVar55 = *(undefined8 *)(param_2 + 0x44);
          uStack_118 = CONCAT44((float)(uStack_118 >> 0x20) *
                                (float)((ulonglong)*(undefined8 *)(param_2 + 0x46) >> 0x20) +
                                (float)(in_register_00005008 >> 0x20) *
                                (float)((ulonglong)*(undefined8 *)(param_2 + 0x42) >> 0x20),
                                (float)uStack_118 * (float)*(undefined8 *)(param_2 + 0x46) +
                                (float)in_register_00005008 * (float)*(undefined8 *)(param_2 + 0x42)
                               );
          local_120 = CONCAT44((float)((ulonglong)local_120 >> 0x20) *
                               (float)((ulonglong)uVar55 >> 0x20) +
                               (float)((ulonglong)uVar52 >> 0x20) *
                               (float)((ulonglong)uVar53 >> 0x20),
                               (float)local_120 * (float)uVar55 + (float)uVar52 * (float)uVar53);
        }
        if (*pcVar9 != '\0') {
          iVar20 = *(int *)(param_1 + 0xd80);
          fVar119 = (float)(CONCAT17(bStack_139,
                                     CONCAT16(bStack_13a,
                                              CONCAT15(bStack_13b,CONCAT14(bStack_13c,fVar82)))) >>
                           0x20);
          fVar105 = fVar111 * (float)*(undefined8 *)(iVar20 + 0x288) +
                    fVar118 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x288) >> 0x20) +
                    fVar82 * (float)*(undefined8 *)(iVar20 + 0x280) +
                    fVar119 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x280) >> 0x20);
          fVar106 = fVar111 * (float)*(undefined8 *)(iVar20 + 0x298) +
                    fVar118 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x298) >> 0x20) +
                    fVar82 * (float)*(undefined8 *)(iVar20 + 0x290) +
                    fVar119 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x290) >> 0x20);
          fVar112 = fVar111 * (float)*(undefined8 *)(iVar20 + 0x2a8) +
                    fVar118 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x2a8) >> 0x20) +
                    fVar82 * (float)*(undefined8 *)(iVar20 + 0x2a0) +
                    fVar119 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x2a0) >> 0x20);
          fVar119 = fVar111 * (float)*(undefined8 *)(iVar20 + 0x2b8) +
                    fVar118 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x2b8) >> 0x20) +
                    fVar82 * (float)*(undefined8 *)(iVar20 + 0x2b0) +
                    fVar119 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x2b0) >> 0x20);
          bStack_108 = SUB41(fVar112,0);
          bStack_107 = (byte)((uint)fVar112 >> 8);
          bStack_106 = (byte)((uint)fVar112 >> 0x10);
          bStack_105 = (byte)((uint)fVar112 >> 0x18);
          bStack_104 = SUB41(fVar119,0);
          bStack_103 = (byte)((uint)fVar119 >> 8);
          bStack_102 = (byte)((uint)fVar119 >> 0x10);
          bStack_101 = (byte)((uint)fVar119 >> 0x18);
          local_110 = SUB41(fVar105,0);
          bStack_10f = (byte)((uint)fVar105 >> 8);
          bStack_10e = (byte)((uint)fVar105 >> 0x10);
          bStack_10d = (byte)((uint)fVar105 >> 0x18);
          bStack_10c = SUB41(fVar106,0);
          bStack_10b = (byte)((uint)fVar106 >> 8);
          bStack_10a = (byte)((uint)fVar106 >> 0x10);
          bStack_109 = (byte)((uint)fVar106 >> 0x18);
        }
        if (cVar42 != '\0') {
          FUN_10029c30(param_1,10);
          iVar20 = *(int *)(param_1 + 0xd80);
          fVar105 = (float)local_120;
          fVar119 = (float)((ulonglong)local_120 >> 0x20);
          fVar106 = (float)uStack_118;
          fVar112 = (float)(uStack_118 >> 0x20);
          uStack_b8 = CONCAT44(fVar106 * (float)*(undefined8 *)(iVar20 + 0x4538) +
                               fVar112 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4538) >> 0x20
                                                ) +
                               fVar105 * (float)*(undefined8 *)(iVar20 + 0x4530) +
                               fVar119 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4530) >> 0x20
                                                ),
                               fVar106 * (float)*(undefined8 *)(iVar20 + 0x4528) +
                               fVar112 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4528) >> 0x20
                                                ) +
                               fVar105 * (float)*(undefined8 *)(iVar20 + 0x4520) +
                               fVar119 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4520) >> 0x20
                                                ));
          local_c0 = CONCAT44(fVar106 * (float)*(undefined8 *)(iVar20 + 0x4518) +
                              fVar112 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4518) >> 0x20)
                              + fVar105 * (float)*(undefined8 *)(iVar20 + 0x4510) +
                                fVar119 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4510) >>
                                                 0x20),
                              fVar106 * (float)*(undefined8 *)(iVar20 + 0x4508) +
                              fVar112 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4508) >> 0x20)
                              + fVar105 * (float)*(undefined8 *)(iVar20 + 0x4500) +
                                fVar119 * (float)((ulonglong)*(undefined8 *)(iVar20 + 0x4500) >>
                                                 0x20));
        }
        puVar27 = (undefined8 *)*piVar51;
        fVar112 = (float)(CONCAT17(bStack_139,
                                   CONCAT16(bStack_13a,
                                            CONCAT15(bStack_13b,CONCAT14(bStack_13c,fVar82)))) >>
                         0x20);
        fVar105 = fVar111 * (float)puVar27[1] + fVar118 * (float)((ulonglong)puVar27[1] >> 0x20) +
                  fVar82 * (float)*puVar27 + fVar112 * (float)((ulonglong)*puVar27 >> 0x20);
        fVar119 = fVar111 * (float)puVar27[3] + fVar118 * (float)((ulonglong)puVar27[3] >> 0x20) +
                  fVar82 * (float)puVar27[2] + fVar112 * (float)((ulonglong)puVar27[2] >> 0x20);
        fVar106 = fVar111 * (float)puVar27[5] + fVar118 * (float)((ulonglong)puVar27[5] >> 0x20) +
                  fVar82 * (float)puVar27[4] + fVar112 * (float)((ulonglong)puVar27[4] >> 0x20);
        fVar82 = fVar111 * (float)puVar27[7] + fVar118 * (float)((ulonglong)puVar27[7] >> 0x20) +
                 fVar82 * (float)puVar27[6] + fVar112 * (float)((ulonglong)puVar27[6] >> 0x20);
        bStack_13e = (byte)((uint)fVar105 >> 0x10);
        bStack_13d = (byte)((uint)fVar105 >> 0x18);
        bStack_13c = SUB41(fVar119,0);
        bStack_13b = (byte)((uint)fVar119 >> 8);
        bStack_13a = (byte)((uint)fVar119 >> 0x10);
        bStack_139 = (byte)((uint)fVar119 >> 0x18);
        if (*piVar8 != 0) {
          puVar27 = (undefined8 *)(*piVar8 + uVar50 * 0x20);
          puVar27[1] = CONCAT17(bStack_101,
                                CONCAT16(bStack_102,
                                         CONCAT15(bStack_103,
                                                  CONCAT14(bStack_104,
                                                           CONCAT13(bStack_105,
                                                                    CONCAT12(bStack_106,
                                                                             CONCAT11(bStack_107,
                                                                                      bStack_108))))
                                                 )));
          *puVar27 = CONCAT17(bStack_109,
                              CONCAT16(bStack_10a,
                                       CONCAT15(bStack_10b,
                                                CONCAT14(bStack_10c,
                                                         CONCAT13(bStack_10d,
                                                                  CONCAT12(bStack_10e,
                                                                           CONCAT11(bStack_10f,
                                                                                    local_110)))))))
          ;
          iVar20 = *piVar8 + uVar50 * 0x20;
          *(undefined8 *)(iVar20 + 0x18) = uStack_b8;
          *(undefined8 *)(iVar20 + 0x10) = local_c0;
        }
        uVar41 = 0;
        bVar100 = (byte)((uint)fVar82 >> 0x10);
        bVar116 = (byte)((uint)fVar82 >> 0x18);
        local_c0._4_1_ = SUB41(fVar82,0);
        local_c0._5_1_ = (byte)((uint)fVar82 >> 8);
        if (*pcVar3 != '\0') {
          puVar24 = (uint *)*piVar1;
          piVar18 = param_2 + 0x28;
          if ((char)*piVar7 == '\0') {
            piVar18 = (int *)0x0;
          }
          if (piVar18 == (int *)0x0) {
            uVar49 = 0;
            uVar41 = puVar24[1] & 0xfffff03f;
          }
          else {
            bVar101 = 0;
            bVar80 = 0;
            bVar102 = 0;
            bVar103 = 0;
            bVar104 = 0;
            bVar107 = 0;
            bVar108 = 0;
            bVar109 = 0;
            bVar110 = 0;
            bVar113 = 0;
            bVar114 = 0;
            bVar115 = 0;
            bVar117 = 0;
            bVar120 = 0;
            bVar121 = 0;
            bVar122 = 0;
            bStack_d8 = 0;
            bStack_d7 = 0;
            bStack_d6 = 0;
            bStack_d5 = 0;
            bStack_d4 = 0;
            bStack_d3 = 0;
            bStack_d2 = 0;
            bStack_d1 = 0;
            local_e0 = 0;
            bStack_df = 0;
            bStack_de = 0;
            bStack_dd = 0;
            bStack_dc = 0;
            bStack_db = 0;
            bStack_da = 0;
            bStack_d9 = 0;
            if ((*puVar47 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar111 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar111 = (float)((ulonglong)*(undefined8 *)(piVar18 + 2) >> 0x20) *
                        (float)CONCAT13(bStack_101,
                                        CONCAT12(bStack_102,CONCAT11(bStack_103,bStack_104))) +
                        (float)((ulonglong)*(undefined8 *)piVar18 >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar111)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 2) *
                        (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108))) +
                        (float)*(undefined8 *)piVar18 * fVar111;
              bVar117 = SUB41(fVar111,0);
              bVar80 = bVar117 & (byte)uVar52;
              bVar120 = (byte)((uint)fVar111 >> 8);
              bVar101 = bVar120 & (byte)((ulonglong)uVar52 >> 8);
              bVar121 = (byte)((uint)fVar111 >> 0x10);
              bVar102 = bVar121 & (byte)((ulonglong)uVar52 >> 0x10);
              bVar122 = (byte)((uint)fVar111 >> 0x18);
              bVar103 = bVar122 & (byte)((ulonglong)uVar52 >> 0x18);
              bVar104 = bVar117 & (byte)((ulonglong)uVar52 >> 0x20);
              bVar107 = bVar120 & (byte)((ulonglong)uVar52 >> 0x28);
              bVar108 = bVar121 & (byte)((ulonglong)uVar52 >> 0x30);
              bVar109 = bVar122 & (byte)((ulonglong)uVar52 >> 0x38);
              bVar110 = bVar117 & (byte)in_register_00005008;
              bVar113 = bVar120 & (byte)(in_register_00005008 >> 8);
              bVar114 = bVar121 & (byte)(in_register_00005008 >> 0x10);
              bVar115 = bVar122 & (byte)(in_register_00005008 >> 0x18);
              bVar117 = bVar117 & (byte)(in_register_00005008 >> 0x20);
              bVar120 = bVar120 & (byte)(in_register_00005008 >> 0x28);
              bVar121 = bVar121 & (byte)(in_register_00005008 >> 0x30);
              bVar122 = bVar122 & (byte)(in_register_00005008 >> 0x38);
            }
            uStack_f8._0_2_ = CONCAT11(bVar113,bVar110);
            uStack_f8._0_3_ = CONCAT12(bVar114,(undefined2)uStack_f8);
            uStack_f8._0_4_ = CONCAT13(bVar115,(undefined3)uStack_f8);
            uStack_f8._0_5_ = CONCAT14(bVar117,(undefined4)uStack_f8);
            uStack_f8._0_6_ = CONCAT15(bVar120,(undefined5)uStack_f8);
            uStack_f8._0_7_ = CONCAT16(bVar121,(undefined6)uStack_f8);
            uStack_f8 = CONCAT17(bVar122,(undefined7)uStack_f8);
            local_100._0_2_ = CONCAT11(bVar101,bVar80);
            local_100._0_3_ = CONCAT12(bVar102,(undefined2)local_100);
            local_100._0_4_ = CONCAT13(bVar103,(undefined3)local_100);
            local_100._0_5_ = CONCAT14(bVar104,(undefined4)local_100);
            local_100._0_6_ = CONCAT15(bVar107,(undefined5)local_100);
            local_100._0_7_ = CONCAT16(bVar108,(undefined6)local_100);
            local_100 = CONCAT17(bVar109,(undefined7)local_100);
            if ((*puVar47 >> 1 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar111 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar111 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x1a) >> 0x20) *
                        (float)CONCAT13(bStack_101,
                                        CONCAT12(bStack_102,CONCAT11(bStack_103,bStack_104))) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x18) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar111)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x1a) *
                        (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108))) +
                        (float)*(undefined8 *)(piVar18 + 0x18) * fVar111;
              bVar54 = SUB41(fVar111,0);
              bVar75 = (byte)((uint)fVar111 >> 8);
              bVar76 = (byte)((uint)fVar111 >> 0x10);
              bVar77 = (byte)((uint)fVar111 >> 0x18);
              uStack_f8._0_2_ =
                   CONCAT11(bVar75 & (byte)(in_register_00005008 >> 8) | bVar113,
                            bVar54 & (byte)in_register_00005008 | bVar110);
              uStack_f8._0_3_ =
                   CONCAT12(bVar76 & (byte)(in_register_00005008 >> 0x10) | bVar114,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar77 & (byte)(in_register_00005008 >> 0x18) | bVar115,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar54 & (byte)(in_register_00005008 >> 0x20) | bVar117,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar75 & (byte)(in_register_00005008 >> 0x28) | bVar120,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar76 & (byte)(in_register_00005008 >> 0x30) | bVar121,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar77 & (byte)(in_register_00005008 >> 0x38) | bVar122,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar75 & (byte)((ulonglong)uVar52 >> 8) | bVar101,
                            bVar54 & (byte)uVar52 | bVar80);
              local_100._0_3_ =
                   CONCAT12(bVar76 & (byte)((ulonglong)uVar52 >> 0x10) | bVar102,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar77 & (byte)((ulonglong)uVar52 >> 0x18) | bVar103,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar54 & (byte)((ulonglong)uVar52 >> 0x20) | bVar104,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar75 & (byte)((ulonglong)uVar52 >> 0x28) | bVar107,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar76 & (byte)((ulonglong)uVar52 >> 0x30) | bVar108,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar77 & (byte)((ulonglong)uVar52 >> 0x38) | bVar109,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 2 & 1) != 0) {
              uVar52 = FUN_10024f78();
              fVar111 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar111 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x32) >> 0x20) *
                        (float)CONCAT13(bStack_101,
                                        CONCAT12(bStack_102,CONCAT11(bStack_103,bStack_104))) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x30) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar111)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x32) *
                        (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108))) +
                        (float)*(undefined8 *)(piVar18 + 0x30) * fVar111;
              bVar101 = SUB41(fVar111,0);
              bVar117 = (byte)((uint)fVar111 >> 8);
              bVar80 = (byte)((uint)fVar111 >> 0x10);
              bVar120 = (byte)((uint)fVar111 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar117 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar101 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar80 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar120 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar101 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar117 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar80 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar120 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar117 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar101 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar80 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar120 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar101 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar117 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar80 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar120 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 3 & 1) != 0) {
              uVar52 = FUN_10024f88();
              fVar111 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar111 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x4a) >> 0x20) *
                        (float)CONCAT13(bStack_101,
                                        CONCAT12(bStack_102,CONCAT11(bStack_103,bStack_104))) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x48) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar111)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x4a) *
                        (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108))) +
                        (float)*(undefined8 *)(piVar18 + 0x48) * fVar111;
              bVar101 = SUB41(fVar111,0);
              bVar117 = (byte)((uint)fVar111 >> 8);
              bVar80 = (byte)((uint)fVar111 >> 0x10);
              bVar120 = (byte)((uint)fVar111 >> 0x18);
              uVar46 = (ulonglong)uStack_f8 >> 0x10;
              uVar34 = (ulonglong)uStack_f8 >> 0x18;
              uVar35 = (ulonglong)uStack_f8 >> 0x20;
              uVar36 = (ulonglong)uStack_f8 >> 0x28;
              uVar37 = (ulonglong)uStack_f8 >> 0x30;
              uVar38 = (ulonglong)uStack_f8 >> 0x38;
              uStack_f8._0_2_ =
                   CONCAT11(bVar117 & (byte)(in_register_00005008 >> 8) |
                            (byte)((ulonglong)uStack_f8 >> 8),
                            bVar101 & (byte)in_register_00005008 | (byte)uStack_f8);
              uStack_f8._0_3_ =
                   CONCAT12(bVar80 & (byte)(in_register_00005008 >> 0x10) | (byte)uVar46,
                            (undefined2)uStack_f8);
              uStack_f8._0_4_ =
                   CONCAT13(bVar120 & (byte)(in_register_00005008 >> 0x18) | (byte)uVar34,
                            (undefined3)uStack_f8);
              uStack_f8._0_5_ =
                   CONCAT14(bVar101 & (byte)(in_register_00005008 >> 0x20) | (byte)uVar35,
                            (undefined4)uStack_f8);
              uStack_f8._0_6_ =
                   CONCAT15(bVar117 & (byte)(in_register_00005008 >> 0x28) | (byte)uVar36,
                            (undefined5)uStack_f8);
              uStack_f8._0_7_ =
                   CONCAT16(bVar80 & (byte)(in_register_00005008 >> 0x30) | (byte)uVar37,
                            (undefined6)uStack_f8);
              uStack_f8 = CONCAT17(bVar120 & (byte)(in_register_00005008 >> 0x38) | (byte)uVar38,
                                   (undefined7)uStack_f8);
              local_100._0_2_ =
                   CONCAT11(bVar117 & (byte)((ulonglong)uVar52 >> 8) |
                            (byte)((ulonglong)local_100 >> 8),
                            bVar101 & (byte)uVar52 | (byte)local_100);
              local_100._0_3_ =
                   CONCAT12(bVar80 & (byte)((ulonglong)uVar52 >> 0x10) | local_100._2_1_,
                            (undefined2)local_100);
              local_100._0_4_ =
                   CONCAT13(bVar120 & (byte)((ulonglong)uVar52 >> 0x18) | local_100._3_1_,
                            (undefined3)local_100);
              local_100._0_5_ =
                   CONCAT14(bVar101 & (byte)((ulonglong)uVar52 >> 0x20) | local_100._4_1_,
                            (undefined4)local_100);
              local_100._0_6_ =
                   CONCAT15(bVar117 & (byte)((ulonglong)uVar52 >> 0x28) | local_100._5_1_,
                            (undefined5)local_100);
              local_100._0_7_ =
                   CONCAT16(bVar80 & (byte)((ulonglong)uVar52 >> 0x30) | local_100._6_1_,
                            (undefined6)local_100);
              local_100 = CONCAT17(bVar120 & (byte)((ulonglong)uVar52 >> 0x38) | local_100._7_1_,
                                   (undefined7)local_100);
            }
            if ((*puVar47 >> 4 & 1) != 0) {
              uVar52 = FUN_10024f58();
              fVar111 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar111 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x62) >> 0x20) *
                        (float)CONCAT13(bStack_101,
                                        CONCAT12(bStack_102,CONCAT11(bStack_103,bStack_104))) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x60) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar111)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x62) *
                        (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108))) +
                        (float)*(undefined8 *)(piVar18 + 0x60) * fVar111;
              bStack_d4 = SUB41(fVar111,0);
              local_e0 = bStack_d4 & (byte)uVar52;
              bStack_d3 = (byte)((uint)fVar111 >> 8);
              bStack_df = bStack_d3 & (byte)((ulonglong)uVar52 >> 8);
              bStack_d2 = (byte)((uint)fVar111 >> 0x10);
              bStack_de = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x10);
              bStack_d1 = (byte)((uint)fVar111 >> 0x18);
              bStack_dd = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x18);
              bStack_dc = bStack_d4 & (byte)((ulonglong)uVar52 >> 0x20);
              bStack_db = bStack_d3 & (byte)((ulonglong)uVar52 >> 0x28);
              bStack_da = bStack_d2 & (byte)((ulonglong)uVar52 >> 0x30);
              bStack_d9 = bStack_d1 & (byte)((ulonglong)uVar52 >> 0x38);
              bStack_d8 = bStack_d4 & (byte)in_register_00005008;
              bStack_d7 = bStack_d3 & (byte)(in_register_00005008 >> 8);
              bStack_d6 = bStack_d2 & (byte)(in_register_00005008 >> 0x10);
              bStack_d5 = bStack_d1 & (byte)(in_register_00005008 >> 0x18);
              bStack_d4 = bStack_d4 & (byte)(in_register_00005008 >> 0x20);
              bStack_d3 = bStack_d3 & (byte)(in_register_00005008 >> 0x28);
              bStack_d2 = bStack_d2 & (byte)(in_register_00005008 >> 0x30);
              bStack_d1 = bStack_d1 & (byte)(in_register_00005008 >> 0x38);
            }
            if ((*puVar47 >> 5 & 1) != 0) {
              uVar52 = FUN_10024f68();
              fVar111 = (float)CONCAT13(bStack_10d,
                                        CONCAT12(bStack_10e,CONCAT11(bStack_10f,local_110)));
              fVar111 = (float)((ulonglong)*(undefined8 *)(piVar18 + 0x7a) >> 0x20) *
                        (float)CONCAT13(bStack_101,
                                        CONCAT12(bStack_102,CONCAT11(bStack_103,bStack_104))) +
                        (float)((ulonglong)*(undefined8 *)(piVar18 + 0x78) >> 0x20) *
                        (float)(CONCAT17(bStack_109,
                                         CONCAT16(bStack_10a,
                                                  CONCAT15(bStack_10b,CONCAT14(bStack_10c,fVar111)))
                                        ) >> 0x20) +
                        (float)*(undefined8 *)(piVar18 + 0x7a) *
                        (float)CONCAT13(bStack_105,
                                        CONCAT12(bStack_106,CONCAT11(bStack_107,bStack_108))) +
                        (float)*(undefined8 *)(piVar18 + 0x78) * fVar111;
              bVar101 = SUB41(fVar111,0);
              bVar117 = (byte)((uint)fVar111 >> 8);
              bVar80 = (byte)((uint)fVar111 >> 0x10);
              bVar120 = (byte)((uint)fVar111 >> 0x18);
              local_e0 = bVar101 & (byte)uVar52 | local_e0;
              bStack_df = bVar117 & (byte)((ulonglong)uVar52 >> 8) | bStack_df;
              bStack_de = bVar80 & (byte)((ulonglong)uVar52 >> 0x10) | bStack_de;
              bStack_dd = bVar120 & (byte)((ulonglong)uVar52 >> 0x18) | bStack_dd;
              bStack_dc = bVar101 & (byte)((ulonglong)uVar52 >> 0x20) | bStack_dc;
              bStack_db = bVar117 & (byte)((ulonglong)uVar52 >> 0x28) | bStack_db;
              bStack_da = bVar80 & (byte)((ulonglong)uVar52 >> 0x30) | bStack_da;
              bStack_d9 = bVar120 & (byte)((ulonglong)uVar52 >> 0x38) | bStack_d9;
              bStack_d8 = bVar101 & (byte)in_register_00005008 | bStack_d8;
              bStack_d7 = bVar117 & (byte)(in_register_00005008 >> 8) | bStack_d7;
              bStack_d6 = bVar80 & (byte)(in_register_00005008 >> 0x10) | bStack_d6;
              bStack_d5 = bVar120 & (byte)(in_register_00005008 >> 0x18) | bStack_d5;
              bStack_d4 = bVar101 & (byte)(in_register_00005008 >> 0x20) | bStack_d4;
              bStack_d3 = bVar117 & (byte)(in_register_00005008 >> 0x28) | bStack_d3;
              bStack_d2 = bVar80 & (byte)(in_register_00005008 >> 0x30) | bStack_d2;
              bStack_d1 = bVar120 & (byte)(in_register_00005008 >> 0x38) | bStack_d1;
            }
            bVar101 = (byte)((ulonglong)_DAT_10160a80 >> 0x20);
            bVar117 = (byte)((ulonglong)uRam10160a88 >> 0x20);
            fVar111 = (float)CONCAT13(bStack_dd,CONCAT12(bStack_de,CONCAT11(bStack_df,local_e0)));
            uVar49 = *(uint *)(&DAT_10161270 +
                              ((byte)(-((float)CONCAT13(bStack_d1,
                                                        CONCAT12(bStack_d2,
                                                                 CONCAT11(bStack_d3,bStack_d4))) <
                                       0.0) & bVar117 |
                                      -((float)(CONCAT17(bStack_d9,
                                                         CONCAT16(bStack_da,
                                                                  CONCAT15(bStack_db,
                                                                           CONCAT14(bStack_dc,
                                                                                    fVar111)))) >>
                                               0x20) < 0.0) & bVar101 |
                                     -((float)CONCAT13(bStack_d5,
                                                       CONCAT12(bStack_d6,
                                                                CONCAT11(bStack_d7,bStack_d8))) <
                                      0.0) & (byte)uRam10160a88 |
                                     -(fVar111 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                     *(uint *)(&DAT_10161280 +
                              ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar117 |
                                      -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar101 |
                                     -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                     -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4);
            uVar41 = (*(uint *)(&DAT_10161280 +
                               ((byte)(-((float)((ulonglong)uStack_f8 >> 0x20) < 0.0) & bVar117 |
                                       -((float)((ulonglong)local_100 >> 0x20) < 0.0) & bVar101 |
                                      -((float)uStack_f8 < 0.0) & (byte)uRam10160a88 |
                                      -((float)local_100 < 0.0) & (byte)_DAT_10160a80) & 0xf) * 4) |
                     0xc3f) & (*(uint *)(&DAT_10161270 +
                                        ((byte)(-((float)CONCAT13(bStack_d1,
                                                                  CONCAT12(bStack_d2,
                                                                           CONCAT11(bStack_d3,
                                                                                    bStack_d4))) <
                                                 0.0) & bVar117 |
                                                -((float)(CONCAT17(bStack_d9,
                                                                   CONCAT16(bStack_da,
                                                                            CONCAT15(bStack_db,
                                                                                     CONCAT14(
                                                  bStack_dc,fVar111)))) >> 0x20) < 0.0) & bVar101 |
                                               -((float)CONCAT13(bStack_d5,
                                                                 CONCAT12(bStack_d6,
                                                                          CONCAT11(bStack_d7,
                                                                                   bStack_d8))) <
                                                0.0) & (byte)uRam10160a88 |
                                               -(fVar111 < 0.0) & (byte)_DAT_10160a80) & 3) * 4) |
                              0x3ff) & puVar24[1];
          }
          puVar48 = puVar24 + 1;
          *puVar48 = uVar41;
          uVar52 = FUN_10024f30();
          fVar111 = (float)(CONCAT17(bStack_139,
                                     CONCAT16(bStack_13a,
                                              CONCAT15(bStack_13b,CONCAT14(bStack_13c,fVar105)))) >>
                           0x20);
          uVar41 = *(uint *)(&DAT_10161230 +
                            ((byte)(-(fVar111 * (float)(in_register_00005008 >> 0x20) + fVar82 < 0.0
                                     ) & (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                    -(fVar105 * (float)((ulonglong)uVar52 >> 0x20) + fVar82 < 0.0) &
                                    (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                   -(fVar111 * (float)in_register_00005008 + fVar82 < 0.0) &
                                   (byte)uRam10160a88 |
                                   -(fVar105 * (float)uVar52 + fVar82 < 0.0) & (byte)_DAT_10160a80)
                            & 0xf) * 4);
          *puVar48 = (uVar41 | 0x30) & *puVar48;
          uVar52 = FUN_10024f30();
          uVar46 = in_register_00005008;
          uVar53 = FUN_10024f58();
          fVar111 = (float)CONCAT13(bVar116 & (byte)((ulonglong)uVar53 >> 0x18),
                                    CONCAT12(bVar100 & (byte)((ulonglong)uVar53 >> 0x10),
                                             CONCAT11(local_c0._5_1_ &
                                                      (byte)((ulonglong)uVar53 >> 8),
                                                      local_c0._4_1_ & (byte)uVar53)));
          auVar88._0_8_ =
               CONCAT17(bVar116 & (byte)((ulonglong)uVar53 >> 0x38),
                        CONCAT16(bVar100 & (byte)((ulonglong)uVar53 >> 0x30),
                                 CONCAT15(local_c0._5_1_ & (byte)((ulonglong)uVar53 >> 0x28),
                                          CONCAT14(local_c0._4_1_ &
                                                   (byte)((ulonglong)uVar53 >> 0x20),fVar111))));
          auVar88[8] = local_c0._4_1_ & (byte)uVar46;
          auVar88[9] = local_c0._5_1_ & (byte)(uVar46 >> 8);
          auVar88[10] = bVar100 & (byte)(uVar46 >> 0x10);
          auVar88[0xb] = bVar116 & (byte)(uVar46 >> 0x18);
          auVar96[0xc] = local_c0._4_1_ & (byte)(uVar46 >> 0x20);
          auVar96._0_12_ = auVar88;
          auVar96[0xd] = local_c0._5_1_ & (byte)(uVar46 >> 0x28);
          auVar96[0xe] = bVar100 & (byte)(uVar46 >> 0x30);
          auVar96[0xf] = bVar116 & (byte)(uVar46 >> 0x38);
          uVar41 = uVar49 | *(uint *)(&DAT_10161220 +
                                     ((byte)(-(fVar106 * (float)(in_register_00005008 >> 0x20) +
                                               auVar96._12_4_ < 0.0) &
                                             (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                             -(fVar106 * (float)((ulonglong)uVar52 >> 0x20) +
                                               (float)((ulonglong)auVar88._0_8_ >> 0x20) < 0.0) &
                                             (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                            -(fVar106 * (float)in_register_00005008 + auVar88._8_4_
                                             < 0.0) & (byte)uRam10160a88 |
                                            -(fVar106 * (float)uVar52 + fVar111 < 0.0) &
                                            (byte)_DAT_10160a80) & 3) * 4) | uVar41;
          *puVar48 = (*(uint *)(&DAT_10161220 +
                               ((byte)(-(fVar106 * (float)(in_register_00005008 >> 0x20) +
                                         auVar96._12_4_ < 0.0) &
                                       (byte)((ulonglong)uRam10160a88 >> 0x20) |
                                       -(fVar106 * (float)((ulonglong)uVar52 >> 0x20) +
                                         (float)((ulonglong)auVar88._0_8_ >> 0x20) < 0.0) &
                                       (byte)((ulonglong)_DAT_10160a80 >> 0x20) |
                                      -(fVar106 * (float)in_register_00005008 + auVar88._8_4_ < 0.0)
                                      & (byte)uRam10160a88 |
                                      -(fVar106 * (float)uVar52 + fVar111 < 0.0) &
                                      (byte)_DAT_10160a80) & 3) * 4) | 0xf) & *puVar48;
          *puVar24 = uVar41 | *puVar24;
        }
        if (*(char *)((int)param_2 + 0x3e) == '\0') {
          uVar52 = FUN_10024f48();
          uVar46 = in_register_00005008;
          uVar53 = FUN_10024f98();
          fStack_138._0_1_ = SUB41(fVar106,0);
          fVar105 = (float)CONCAT13(bStack_13d & (byte)((ulonglong)uVar53 >> 0x18),
                                    CONCAT12(bStack_13e & (byte)((ulonglong)uVar53 >> 0x10),
                                             CONCAT11((byte)((uint)fVar105 >> 8) &
                                                      (byte)((ulonglong)uVar53 >> 8),
                                                      SUB41(fVar105,0) & (byte)uVar53)));
          auVar63._0_8_ =
               CONCAT17(bStack_139 & (byte)((ulonglong)uVar53 >> 0x38),
                        CONCAT16(bStack_13a & (byte)((ulonglong)uVar53 >> 0x30),
                                 CONCAT15(bStack_13b & (byte)((ulonglong)uVar53 >> 0x28),
                                          CONCAT14(bStack_13c & (byte)((ulonglong)uVar53 >> 0x20),
                                                   fVar105))));
          auVar63[8] = fStack_138._0_1_ & (byte)uVar46;
          auVar63[9] = (byte)((uint)fVar106 >> 8) & (byte)(uVar46 >> 8);
          auVar63[10] = (byte)((uint)fVar106 >> 0x10) & (byte)(uVar46 >> 0x10);
          auVar63[0xb] = (byte)((uint)fVar106 >> 0x18) & (byte)(uVar46 >> 0x18);
          auVar71[0xc] = local_c0._4_1_ & (byte)(uVar46 >> 0x20);
          auVar71._0_12_ = auVar63;
          auVar71[0xd] = local_c0._5_1_ & (byte)(uVar46 >> 0x28);
          auVar71[0xe] = bVar100 & (byte)(uVar46 >> 0x30);
          auVar71[0xf] = bVar116 & (byte)(uVar46 >> 0x38);
          auVar72._0_8_ =
               CONCAT44((((float)((ulonglong)auVar63._0_8_ >> 0x20) +
                         (float)((ulonglong)uVar52 >> 0x20)) / fVar82) *
                        (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20),
                        ((fVar105 + (float)uVar52) / fVar82) * (float)*(undefined8 *)pfVar2 +
                        (float)*(undefined8 *)pfVar4);
          auVar72._8_4_ =
               ((auVar63._8_4_ + (float)in_register_00005008) / fVar82) *
               (float)*(undefined8 *)(param_2 + 0x1a) + (float)param_2[0x1e];
          auVar72._12_4_ =
               ((auVar71._12_4_ + (float)(in_register_00005008 >> 0x20)) / fVar82) *
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
          if (uVar50 == 0) {
            *(longlong *)(param_2 + 0x26) = auVar72._8_8_;
            *(undefined8 *)*pauVar5 = auVar72._0_8_;
            *(longlong *)(param_2 + 0x22) = auVar72._8_8_;
            *(undefined8 *)*pauVar6 = auVar72._0_8_;
          }
          else {
            auVar74 = NEON_fmin(*pauVar6,auVar72,4);
            *(longlong *)(param_2 + 0x22) = auVar74._8_8_;
            *(longlong *)*pauVar6 = auVar74._0_8_;
            auVar74 = NEON_fmax(*pauVar5,auVar72,4);
            *(longlong *)(param_2 + 0x26) = auVar74._8_8_;
            *(longlong *)*pauVar5 = auVar74._0_8_;
          }
        }
        else {
          auVar72[4] = bStack_13c;
          auVar72._0_4_ = fVar105;
          auVar72[5] = bStack_13b;
          auVar72[6] = bStack_13a;
          auVar72[7] = bStack_139;
          auVar72._8_4_ = fVar106;
          auVar72._12_4_ = fVar82;
        }
        puVar27 = (undefined8 *)*piVar17;
        if (puVar27 != (undefined8 *)0x0) {
          if ((*(char *)((int)param_2 + 0x3d) == '\0') || (uVar41 == 0)) {
            puVar27[1] = auVar72._8_8_;
            *puVar27 = auVar72._0_8_;
          }
          else {
            *(int *)((int)puVar27 + 0xc) = auVar72._12_4_;
          }
          *piVar17 = param_2[0x15] + *piVar17;
        }
        uVar50 = uVar50 + 1;
      } while (uVar50 < param_4);
      goto LAB_10036c28;
    }
  }
  auVar124._8_4_ = uVar22;
  auVar124._0_8_ = uVar57;
  auVar124._12_4_ = 0;
  auVar97._8_4_ = uVar21;
  auVar97._0_8_ = uVar83;
  auVar97._12_4_ = 0;
LAB_10036c78:
  auVar98._8_4_ = fVar19;
  auVar98._12_4_ = 0;
  auVar98 = NEON_fmax(auVar97,auVar98,4);
  uVar83 = auVar98._0_8_;
  auVar73._8_4_ = fVar81;
  auVar73._12_4_ = 0;
  auVar98 = NEON_fmin(auVar124,auVar73,4);
  uVar57 = auVar98._0_8_;
LAB_10036dfc:
  if ((char)param_2[0xf] != '\0') {
    *(int *)(*piVar1 + 8) = (int)uVar83;
    *(int *)(*piVar1 + 0x10) = (int)((ulonglong)uVar83 >> 0x20);
    *(int *)(*piVar1 + 0xc) = (int)uVar57;
    *(int *)(*piVar1 + 0x14) = (int)((ulonglong)uVar57 >> 0x20);
  }
  return;
}

