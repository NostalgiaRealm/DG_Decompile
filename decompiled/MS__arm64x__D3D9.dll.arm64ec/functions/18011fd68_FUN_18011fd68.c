/*
 * FUN_18011fd68 at 18011fd68
 * undefined FUN_18011fd68(void)
 * Address ranges: 18011fd68-180120737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011fd68(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 *param_6,uint *param_7,undefined4 *param_8,
                  uint *param_9,uint param_10,uint param_11,uint param_12,uint param_13,
                  uint param_14,char param_15,char param_16,char param_17,char param_18,
                  uint *param_19,uint *param_20,uint param_21,uint param_22,uint param_23)

{
  ulonglong *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [13];
  undefined1 auVar22 [13];
  undefined1 auVar23 [13];
  undefined1 auVar24 [13];
  undefined1 auVar25 [13];
  undefined1 auVar26 [13];
  bool bVar27;
  bool bVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  int *piVar37;
  ulonglong uVar38;
  float *pfVar39;
  uint uVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  undefined1 auVar48 [16];
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  float fVar59;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  float fVar64;
  undefined1 auVar61 [16];
  float fVar65;
  undefined4 uVar66;
  undefined8 uVar69;
  int iVar84;
  undefined1 auVar70 [16];
  int iVar67;
  int iVar83;
  int iVar85;
  undefined1 auVar71 [16];
  undefined4 uVar68;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  uint local_20c;
  uint *local_208;
  uint *local_200;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong uStack_68;
  undefined1 auVar72 [16];
  
  uStack_88 = 0x3f800000;
  local_90 = 0;
  auVar70._14_2_ = 0;
  auVar70._4_10_ = SUB1410(ZEXT114(0) << 0x40,4);
  auVar70._0_4_ = 0x3f800000;
  uStack_78 = 0;
  local_80 = auVar70._0_8_;
  FUN_18011e110();
  lVar34 = *(longlong *)(param_1 + 0xe10);
  uVar40 = *(uint *)(param_1 + 0x360);
  uVar42 = *(undefined4 *)(lVar34 + 0x865c);
  uVar68 = *(undefined4 *)(lVar34 + 0x864c);
  uVar35 = *(uint *)(lVar34 + 0x866c);
  fVar65 = -(*(float *)(lVar34 + 0x865c) - *(float *)(lVar34 + 0x8658));
  local_c0 = CONCAT44(fVar65,fVar65);
  uStack_b8 = (ulonglong)(uint)-(*(float *)(lVar34 + 0x866c) - *(float *)(lVar34 + 0x8668)) |
              0x3f80000000000000;
  uVar3 = *(undefined4 *)(param_1 + 0x6a4);
  uVar55 = (undefined1)((uint)uVar3 >> 0x18);
  uVar66 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar3 & 0xff);
  auVar9[8] = (char)((uint)uVar3 >> 0x10);
  auVar9._0_8_ = (longlong)
                 CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                          (uint6)CONCAT14((char)((uint)uVar3 >> 8),uVar66));
  auVar9._9_3_ = 0;
  auVar9[0xc] = uVar55;
  auVar25._4_9_ = auVar9._4_9_;
  auVar25._0_4_ = uVar66;
  auVar26._6_2_ = 0;
  auVar26._0_6_ = auVar25._0_6_;
  auVar26._8_5_ = auVar9._8_5_;
  auVar47._0_10_ = auVar26._0_10_;
  auVar47._10_2_ = 0;
  auVar47[0xc] = uVar55;
  auVar47._13_3_ = 0;
  auVar70 = NEON_scvtf(auVar47,4);
  uStack_98 = auVar70._8_8_;
  local_a0 = auVar70._0_8_;
  if (*(uint *)(param_1 + 0xde4) < uVar40) {
    FUN_1802229d8(*(undefined8 *)(param_1 + 0xdd8));
    *(undefined4 *)(param_1 + 0xde4) = 0;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = CONCAT44(0,uVar40);
    lVar34 = CONCAT44(0,uVar40) << 4;
    if (SUB168(auVar75 * ZEXT816(0x10),8) != 0) {
      lVar34 = -1;
    }
    lVar34 = FUN_1802229a8(lVar34);
    if (lVar34 == 0) {
      uVar40 = 0;
    }
    *(longlong *)(param_1 + 0xdd8) = lVar34;
    *(uint *)(param_1 + 0xde4) = uVar40;
  }
  lVar34 = *(longlong *)(param_1 + 0xdd8);
  uVar41 = 0;
  if ((lVar34 != 0) && (*(int *)(param_1 + 0x360) != 0)) {
    uVar30 = 0;
    do {
      uVar40 = *(uint *)(*(longlong *)(param_1 + 0x358) + uVar30 * 4);
      if (uVar40 != 0xffffffff) {
        uVar4 = *(uint *)(param_1 + 0x340);
        if (uVar4 == 0) {
LAB_18011ff3c:
          puVar32 = (ulonglong *)0x0;
        }
        else {
          uVar36 = 0;
          uVar33 = uVar4;
          do {
            uVar5 = uVar33 + uVar36 >> 1;
            uVar38 = (ulonglong)uVar5;
            uVar31 = *(ulonglong *)(*(longlong *)(param_1 + 0x338) + uVar38 * 0xa0);
            if (uVar31 <= uVar40) {
              if (uVar40 <= uVar31) break;
              uVar36 = uVar5 + 1;
              uVar38 = (ulonglong)(uVar5 + 1);
              uVar5 = uVar33;
            }
            uVar33 = uVar5;
          } while (uVar33 != uVar36);
          if (((uint)uVar38 == uVar4) ||
             (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x338) + uVar38 * 0xa0),
             puVar32 = puVar1 + 4, *puVar1 != (ulonglong)uVar40)) goto LAB_18011ff3c;
        }
        lVar29 = FUN_18010d668(param_1 + 0x318,*(longlong *)(param_1 + 0x358) + uVar30 * 4);
        if ((puVar32 != (ulonglong *)0x0) && (lVar29 != 0)) {
          *(ulonglong **)(lVar34 + uVar41 * 0x10) = puVar32;
          *(longlong *)(lVar34 + 8 + uVar41 * 0x10) = lVar29;
          uVar41 = (ulonglong)((int)uVar41 + 1);
        }
      }
      uVar40 = (int)uVar30 + 1;
      uVar30 = (ulonglong)uVar40;
    } while (uVar40 < *(uint *)(param_1 + 0x360));
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    auVar60._8_4_ = 0x7f7fffff;
    auVar60._0_8_ = 0x7f7fffff7f7fffff;
    auVar60._12_4_ = 0x7f7fffff;
  }
  else {
    auVar60 = NEON_fmov(0x3f800000,4);
  }
  if (param_23 != 0) {
    uVar40 = (uint)uVar41;
    local_20c = 0;
    local_70 = CONCAT44(uVar42,uVar68);
    uStack_a8 = auVar60._8_8_;
    local_b0 = auVar60._0_8_;
    auVar71._4_4_ = fStack_17c;
    auVar71._0_4_ = local_180;
    auVar71._8_4_ = fStack_178;
    auVar71._12_4_ = fStack_174;
    local_208 = param_20;
    local_200 = param_9;
    uStack_d8 = uStack_c8;
    local_e0 = local_d0;
    uStack_68 = (ulonglong)uVar35 | 0x3f80000000000000;
    do {
      if (uVar40 != 0) {
        puVar6 = (undefined8 *)(param_2 + (ulonglong)(local_20c << 1) * 0x10);
        local_e0 = *puVar6;
        uStack_d8 = puVar6[1];
        uStack_c8 = uStack_d8;
        local_d0 = local_e0;
        auVar71 = *(undefined1 (*) [16])(param_2 + (ulonglong)(local_20c << 1 | 1) * 0x10);
        if (*(int *)(param_1 + 0x6b4) != 0) {
          fVar59 = auVar71._0_4_;
          fVar62 = auVar71._4_4_;
          fVar63 = auVar71._8_4_;
          fVar65 = fVar62 * fVar62 + fVar59 * fVar59 + fVar63 * fVar63;
          fVar59 = fVar59 / SQRT(fVar65);
          fVar62 = fVar62 / SQRT(fVar65);
          fVar63 = fVar63 / SQRT(fVar65);
          fVar64 = 0.0 / SQRT(fVar65);
          iVar67 = -(uint)(fVar65 == 0.0);
          iVar83 = -(uint)(fVar65 == 0.0);
          iVar84 = -(uint)(fVar65 == 0.0);
          iVar85 = -(uint)(fVar65 == 0.0);
          auVar71[0] = SUB41(fVar59,0) & ~(byte)iVar67;
          auVar71[1] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar67 >> 8);
          auVar71[2] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
          auVar71[3] = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
          auVar71[4] = SUB41(fVar62,0) & ~(byte)iVar83;
          auVar71[5] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar83 >> 8);
          auVar71[6] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
          auVar71[7] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
          auVar71[8] = SUB41(fVar63,0) & ~(byte)iVar84;
          auVar71[9] = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar84 >> 8);
          auVar71[10] = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
          auVar71[0xb] = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
          auVar71[0xc] = SUB41(fVar64,0) & ~(byte)iVar85;
          auVar71[0xd] = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar85 >> 8);
          auVar71[0xe] = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
          auVar71[0xf] = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
        }
      }
      fStack_1e8 = auVar71._8_4_;
      local_1f0 = auVar71._0_4_;
      fStack_1ec = auVar71._4_4_;
      if (param_15 == '\x04') {
        uVar42 = *param_5;
        uVar55 = (undefined1)((uint)uVar42 >> 0x18);
        uVar68 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar42 & 0xff);
        auVar10[8] = (char)((uint)uVar42 >> 0x10);
        auVar10._0_8_ =
             (longlong)
             CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                      (uint6)CONCAT14((char)((uint)uVar42 >> 8),uVar68));
        auVar10._9_3_ = 0;
        auVar10[0xc] = uVar55;
        auVar17._4_9_ = auVar10._4_9_;
        auVar17._0_4_ = uVar68;
        auVar18._6_2_ = 0;
        auVar18._0_6_ = auVar17._0_6_;
        auVar18._8_5_ = auVar10._8_5_;
        auVar72._0_10_ = auVar18._0_10_;
        auVar72._10_2_ = 0;
        auVar72[0xc] = uVar55;
        auVar72._13_3_ = 0;
        auVar70 = NEON_scvtf(auVar72,4);
        uStack_118 = CONCAT44(auVar70._12_4_ / 255.0,auVar70._8_4_ / 255.0);
        local_120 = CONCAT44(auVar70._4_4_ / 255.0,auVar70._0_4_ / 255.0);
      }
      else {
        auVar70 = FUN_180129d68(param_5);
        uStack_118 = auVar70._8_8_;
        local_120 = auVar70._0_8_;
      }
      if (param_19 == (uint *)0x0) {
        auVar74 = ZEXT116(0) << 8;
      }
      else {
        if (param_16 == '\x04') {
          uVar42 = *param_6;
          uVar55 = (undefined1)((uint)uVar42 >> 0x18);
          uVar68 = (undefined4)CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar42 & 0xff)
          ;
          auVar11[8] = (char)((uint)uVar42 >> 0x10);
          auVar11._0_8_ =
               (longlong)
               CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                        (uint6)CONCAT14((char)((uint)uVar42 >> 8),uVar68));
          auVar11._9_3_ = 0;
          auVar11[0xc] = uVar55;
          auVar19._4_9_ = auVar11._4_9_;
          auVar19._0_4_ = uVar68;
          auVar20._6_2_ = 0;
          auVar20._0_6_ = auVar19._0_6_;
          auVar20._8_5_ = auVar11._8_5_;
          auVar73._0_10_ = auVar20._0_10_;
          auVar73._10_2_ = 0;
          auVar73[0xc] = uVar55;
          auVar73._13_3_ = 0;
          auVar70 = NEON_scvtf(auVar73,4);
        }
        else {
          auVar70 = FUN_18012a0e8(param_6);
        }
        auVar74._0_4_ = ((float)local_120 * (float)local_a0 + auVar70._0_4_) / 255.0;
        auVar74._4_4_ = (local_120._4_4_ * local_a0._4_4_ + auVar70._4_4_) / 255.0;
        auVar74._8_4_ = ((float)uStack_118 * (float)uStack_98 + auVar70._8_4_) / 255.0;
        auVar74._12_4_ = (uStack_118._4_4_ * uStack_98._4_4_ + auVar70._12_4_) / 255.0;
      }
      uVar41 = 0;
      fStack_1b8 = 0.0;
      fStack_1b4 = 0.0;
      local_1c0 = 0.0;
      fStack_1bc = 0.0;
      if (uVar40 != 0) {
        fStack_e8 = auVar74._8_4_;
        fStack_e4 = auVar74._12_4_;
        local_f0 = auVar74._0_4_;
        fStack_ec = auVar74._4_4_;
        do {
          pfVar39 = *(float **)(lVar34 + uVar41 * 0x10);
          piVar37 = *(int **)(lVar34 + 8 + uVar41 * 0x10);
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          uVar58 = 0;
          if (*piVar37 == 3) {
            auVar48 = NEON_fmov(0x3f800000,4);
            uVar51 = 0;
            uVar52 = 0;
            uVar53 = 0;
            uVar54 = 0;
            fVar65 = *pfVar39;
            fVar59 = pfVar39[1];
            fVar62 = pfVar39[2];
          }
          else {
            iVar67 = piVar37[0x13];
            uVar51 = (undefined1)iVar67;
            uVar52 = (undefined1)((uint)iVar67 >> 8);
            uVar53 = (undefined1)((uint)iVar67 >> 0x10);
            uVar54 = (undefined1)((uint)iVar67 >> 0x18);
            fVar65 = (float)local_e0 - (float)piVar37[0xd];
            fVar59 = local_e0._4_4_ - (float)piVar37[0xe];
            fVar62 = (float)uStack_d8 - (float)piVar37[0xf];
            fVar63 = SQRT(fVar59 * fVar59 + fVar65 * fVar65 + fVar62 * fVar62);
            uVar55 = SUB41(fVar63,0);
            uVar56 = (undefined1)((uint)fVar63 >> 8);
            uVar57 = (undefined1)((uint)fVar63 >> 0x10);
            uVar58 = (undefined1)((uint)fVar63 >> 0x18);
            auVar46._0_4_ =
                 (fVar63 * 1.0 + local_90._4_4_) * pfVar39[5] +
                 (fVar63 * fVar63 + (float)local_90) * pfVar39[4] +
                 (fVar63 * 0.0 + (float)uStack_88) * pfVar39[6];
            auVar46._4_4_ = auVar46._0_4_;
            auVar46._8_4_ = auVar46._0_4_;
            auVar46._12_4_ = auVar46._0_4_;
            auVar70 = NEON_frecpe(auVar46,4);
            iVar67 = -(uint)(auVar46._0_4_ == 0.0);
            iVar83 = -(uint)(auVar46._0_4_ == 0.0);
            iVar84 = -(uint)(auVar46._0_4_ == 0.0);
            iVar85 = -(uint)(auVar46._0_4_ == 0.0);
            auVar47 = NEON_frecps(auVar46,auVar70,4);
            fVar63 = auVar47._0_4_ * auVar70._0_4_;
            fVar64 = auVar47._4_4_ * auVar70._4_4_;
            fVar49 = auVar47._8_4_ * auVar70._8_4_;
            fVar50 = auVar47._12_4_ * auVar70._12_4_;
            auVar48[0] = SUB41(fVar63,0) & ~(byte)iVar67;
            auVar48[1] = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar67 >> 8);
            auVar48[2] = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
            auVar48[3] = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
            auVar48[4] = SUB41(fVar64,0) & ~(byte)iVar83;
            auVar48[5] = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar83 >> 8);
            auVar48[6] = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
            auVar48[7] = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
            auVar48[8] = SUB41(fVar49,0) & ~(byte)iVar84;
            auVar48[9] = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar84 >> 8);
            auVar48[10] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
            auVar48[0xb] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
            auVar48[0xc] = SUB41(fVar50,0) & ~(byte)iVar85;
            auVar48[0xd] = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar85 >> 8);
            auVar48[0xe] = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
            auVar48[0xf] = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
          }
          bVar27 = false;
          bVar28 = true;
          if (!NAN((float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)))) &&
              !NAN((float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))))) {
            bVar27 = (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55))) ==
                     (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)));
            bVar28 = (float)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51))) <=
                     (float)CONCAT13(uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)));
          }
          if (!bVar28 || bVar27) {
            fVar63 = fVar59 * fVar59 + fVar65 * fVar65 + fVar62 * fVar62;
            fVar65 = fVar65 / SQRT(fVar63);
            fVar59 = fVar59 / SQRT(fVar63);
            fVar62 = fVar62 / SQRT(fVar63);
            fVar63 = -fVar59 * fStack_1ec + -fVar65 * local_1f0 + -fVar62 * fStack_1e8;
            uVar55 = SUB41(fVar63,0);
            uVar56 = (undefined1)((uint)fVar63 >> 8);
            uVar57 = (undefined1)((uint)fVar63 >> 0x10);
            uVar58 = (undefined1)((uint)fVar63 >> 0x18);
            auVar15._8_8_ = uStack_a8;
            auVar15._0_8_ = local_b0;
            auVar8[4] = uVar55;
            auVar8._0_4_ = fVar63;
            auVar8[5] = uVar56;
            auVar8[6] = uVar57;
            auVar8[7] = uVar58;
            auVar8[8] = uVar55;
            auVar8[9] = uVar56;
            auVar8[10] = uVar57;
            auVar8[0xb] = uVar58;
            auVar8[0xc] = uVar55;
            auVar8[0xd] = uVar56;
            auVar8[0xe] = uVar57;
            auVar8[0xf] = uVar58;
            auVar70 = NEON_fmin(auVar8,auVar15,4);
            auVar70 = NEON_fmax(auVar70,ZEXT216(0),4);
            fStack_17c = (float)(CONCAT17((char)((uint)fVar59 >> 0x18),
                                          CONCAT16((char)((uint)fVar59 >> 0x10),
                                                   CONCAT15((char)((uint)fVar59 >> 8),
                                                            CONCAT14(SUB41(fVar59,0),fVar65)))) >>
                                0x20);
            auVar47 = NEON_fmov(0x3f800000,4);
            uStack_198 = auVar47._8_8_;
            local_1a0 = auVar47._0_8_;
            if ((*piVar37 == 2) &&
               (fVar59 = fVar59 * pfVar39[1] + fVar65 * *pfVar39 + fVar62 * pfVar39[2],
               fVar59 <= pfVar39[0x1c])) {
              fVar63 = (fVar59 - pfVar39[0x19]) /
                       (float)((ulonglong)*(undefined8 *)(pfVar39 + 0x14) >> 0x20);
              fVar64 = (fVar59 - pfVar39[0x1a]) / (float)*(undefined8 *)(pfVar39 + 0x16);
              fVar49 = (fVar59 - pfVar39[0x1b]) /
                       (float)((ulonglong)*(undefined8 *)(pfVar39 + 0x16) >> 0x20);
              auVar7[4] = SUB41(fVar63,0);
              auVar7._0_4_ = (fVar59 - pfVar39[0x18]) / (float)*(undefined8 *)(pfVar39 + 0x14);
              auVar7[5] = (char)((uint)fVar63 >> 8);
              auVar7[6] = (char)((uint)fVar63 >> 0x10);
              auVar7[7] = (char)((uint)fVar63 >> 0x18);
              auVar7[8] = SUB41(fVar64,0);
              auVar7[9] = (char)((uint)fVar64 >> 8);
              auVar7[10] = (char)((uint)fVar64 >> 0x10);
              auVar7[0xb] = (char)((uint)fVar64 >> 0x18);
              auVar7[0xc] = SUB41(fVar49,0);
              auVar7[0xd] = (char)((uint)fVar49 >> 8);
              auVar7[0xe] = (char)((uint)fVar49 >> 0x10);
              auVar7[0xf] = (char)((uint)fVar49 >> 0x18);
              auVar75 = NEON_fmax(auVar7,ZEXT816(0),4);
              auVar43 = NEON_fmin(auVar75,auVar47,4);
              if (auVar43._0_4_ != (float)local_80) {
                uVar35 = (uint)(auVar43._0_4_ * 1024.0);
                if (uVar35 == 0) {
                  auVar43 = ZEXT816(0);
                }
                else if ((0x3ff < uVar35) ||
                        (fVar59 = *(float *)(*(longlong *)(param_1 + 0xd60) + (ulonglong)uVar35 * 4)
                                  * (float)piVar37[0x14], 1024.0 <= ABS(fVar59))) {
                  auVar43._0_4_ = FUN_1802209f0();
                  auVar43._4_4_ = auVar43._0_4_;
                  auVar43._8_4_ = auVar43._0_4_;
                  auVar43._12_4_ = auVar43._0_4_;
                }
                else {
                  iVar67 = (int)fVar59 - (uint)(fVar59 <= 0.0);
                  uVar35 = (uint)((fVar59 - (float)iVar67) * 1024.0);
                  if (iVar67 < 0) {
                    fVar59 = *(float *)(*(longlong *)(param_1 + 0xd68) + (ulonglong)uVar35 * 4) /
                             *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)-iVar67 * 4);
                  }
                  else {
                    fVar59 = *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar67 * 4) *
                             *(float *)(*(longlong *)(param_1 + 0xd68) + (ulonglong)uVar35 * 4);
                  }
                  auVar43._4_4_ = fVar59;
                  auVar43._0_4_ = fVar59;
                  auVar43._8_4_ = fVar59;
                  auVar43._12_4_ = fVar59;
                }
              }
              uStack_198 = auVar43._8_8_;
              local_1a0 = auVar43._0_8_;
            }
            if (param_19 != (uint *)0x0) {
              if (param_17 == '\x04') {
                uVar35 = *param_7;
                uVar55 = (undefined1)(uVar35 >> 0x18);
                uVar42 = (undefined4)
                         CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar35 & 0xff);
                auVar12[8] = (char)(uVar35 >> 0x10);
                auVar12._0_8_ =
                     (longlong)
                     CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                              (uint6)CONCAT14((char)(uVar35 >> 8),uVar42));
                auVar12._9_3_ = 0;
                auVar12[0xc] = uVar55;
                auVar21._4_9_ = auVar12._4_9_;
                auVar21._0_4_ = uVar42;
                auVar22._6_2_ = 0;
                auVar22._0_6_ = auVar21._0_6_;
                auVar22._8_5_ = auVar12._8_5_;
                auVar76._0_10_ = auVar22._0_10_;
                auVar76._10_2_ = 0;
                auVar76[0xc] = uVar55;
                auVar76._13_3_ = 0;
                auVar47 = NEON_scvtf(auVar76,4);
                auVar44._0_4_ = auVar47._0_4_ / 255.0;
                auVar44._4_4_ = auVar47._4_4_ / 255.0;
                auVar44._8_4_ = auVar47._8_4_ / 255.0;
                auVar44._12_4_ = auVar47._12_4_ / 255.0;
              }
              else {
                auVar44 = FUN_180129d68(param_7);
              }
              local_190._0_4_ = auVar70._0_4_;
              local_190._4_4_ = auVar70._4_4_;
              uStack_188._0_4_ = auVar70._8_4_;
              uStack_188._4_4_ = auVar70._12_4_;
              local_f0 = local_f0 +
                         ((float)*(undefined8 *)(pfVar39 + 8) * (float)local_1a0 * auVar44._0_4_ *
                          (float)local_190 + (float)local_120 * pfVar39[0xc]) * auVar48._0_4_;
              fStack_ec = fStack_ec +
                          ((float)((ulonglong)*(undefined8 *)(pfVar39 + 8) >> 0x20) *
                           local_1a0._4_4_ * auVar44._4_4_ * local_190._4_4_ +
                          local_120._4_4_ * pfVar39[0xd]) * auVar48._4_4_;
              fStack_e8 = fStack_e8 +
                          ((float)*(undefined8 *)(pfVar39 + 10) * (float)uStack_198 * auVar44._8_4_
                           * (float)uStack_188 + (float)uStack_118 * pfVar39[0xe]) * auVar48._8_4_;
              fStack_e4 = fStack_e4 +
                          ((float)((ulonglong)*(undefined8 *)(pfVar39 + 10) >> 0x20) *
                           uStack_198._4_4_ * auVar44._12_4_ * uStack_188._4_4_ +
                          uStack_118._4_4_ * pfVar39[0xf]) * auVar48._12_4_;
            }
            if ((local_208 != (uint *)0x0) && (*(int *)(param_1 + 0x4ec) != 0)) {
              pfVar2 = (float *)&local_d0;
              if (*(int *)(param_1 + 0x6b0) == 0) {
                pfVar2 = (float *)&local_c0;
              }
              fVar59 = (float)local_70 - *pfVar2;
              fVar63 = local_70._4_4_ - pfVar2[1];
              fVar64 = (float)uStack_68 - pfVar2[2];
              fVar49 = fVar63 * fVar63 + fVar59 * fVar59 + fVar64 * fVar64;
              fVar65 = (fVar63 / SQRT(fVar49) - fStack_17c) * fStack_1ec +
                       (fVar59 / SQRT(fVar49) - fVar65) * local_1f0 +
                       (fVar64 / SQRT(fVar49) - fVar62) * fStack_1e8;
              auVar61._4_4_ = fVar65;
              auVar61._0_4_ = fVar65;
              auVar61._8_4_ = fVar65;
              auVar61._12_4_ = fVar65;
              auVar16._8_8_ = uStack_a8;
              auVar16._0_8_ = local_b0;
              auVar70 = NEON_fmin(auVar61,auVar16,4);
              auVar70 = NEON_fmax(auVar70,ZEXT216(0),4);
              uVar35 = (uint)(auVar70._0_4_ * 1024.0);
              if (uVar35 == 0) {
                uStack_188 = 0;
                local_190 = 0;
              }
              else {
                if ((0x3ff < uVar35) ||
                   (fVar65 = *(float *)(*(longlong *)(param_1 + 0xd60) + (ulonglong)uVar35 * 4) *
                             *(float *)(param_1 + 0x314), 1024.0 <= ABS(fVar65))) {
                  uVar42 = FUN_1802209f0();
                  auVar77._4_4_ = uVar42;
                  auVar77._0_4_ = uVar42;
                  auVar77._8_4_ = uVar42;
                  auVar77._12_4_ = uVar42;
                }
                else {
                  iVar67 = (int)fVar65 - (uint)(fVar65 <= 0.0);
                  uVar35 = (uint)((fVar65 - (float)iVar67) * 1024.0);
                  if (iVar67 < 0) {
                    fVar65 = *(float *)(*(longlong *)(param_1 + 0xd68) + (ulonglong)uVar35 * 4) /
                             *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)-iVar67 * 4);
                  }
                  else {
                    fVar65 = *(float *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar67 * 4) *
                             *(float *)(*(longlong *)(param_1 + 0xd68) + (ulonglong)uVar35 * 4);
                  }
                  auVar77._4_4_ = fVar65;
                  auVar77._0_4_ = fVar65;
                  auVar77._8_4_ = fVar65;
                  auVar77._12_4_ = fVar65;
                }
                uStack_188 = auVar77._8_8_;
                local_190 = auVar77._0_8_;
              }
              if (param_18 == '\x04') {
                uVar42 = *param_8;
                uVar55 = (undefined1)((uint)uVar42 >> 0x18);
                uVar68 = (undefined4)
                         CONCAT72((int7)(((unkuint9)0 << 0x40) >> 0x10),(ushort)uVar42 & 0xff);
                auVar13[8] = (char)((uint)uVar42 >> 0x10);
                auVar13._0_8_ =
                     (longlong)
                     CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),
                              (uint6)CONCAT14((char)((uint)uVar42 >> 8),uVar68));
                auVar13._9_3_ = 0;
                auVar13[0xc] = uVar55;
                auVar23._4_9_ = auVar13._4_9_;
                auVar23._0_4_ = uVar68;
                auVar24._6_2_ = 0;
                auVar24._0_6_ = auVar23._0_6_;
                auVar24._8_5_ = auVar13._8_5_;
                auVar78._0_10_ = auVar24._0_10_;
                auVar78._10_2_ = 0;
                auVar78[0xc] = uVar55;
                auVar78._13_3_ = 0;
                auVar70 = NEON_scvtf(auVar78,4);
                auVar45._0_4_ = auVar70._0_4_ / 255.0;
                auVar45._4_4_ = auVar70._4_4_ / 255.0;
                auVar45._8_4_ = auVar70._8_4_ / 255.0;
                auVar45._12_4_ = auVar70._12_4_ / 255.0;
              }
              else {
                auVar45 = FUN_180129d68(param_8);
              }
              local_1c0 = local_1c0 +
                          pfVar39[0x10] * (float)local_1a0 * auVar45._0_4_ * auVar48._0_4_ *
                          (float)local_190;
              fStack_1bc = fStack_1bc +
                           pfVar39[0x11] * local_1a0._4_4_ * auVar45._4_4_ * auVar48._4_4_ *
                           local_190._4_4_;
              fStack_1b8 = fStack_1b8 +
                           pfVar39[0x12] * (float)uStack_198 * auVar45._8_4_ * auVar48._8_4_ *
                           (float)uStack_188;
              fStack_1b4 = fStack_1b4 +
                           pfVar39[0x13] * uStack_198._4_4_ * auVar45._12_4_ * auVar48._12_4_ *
                           uStack_188._4_4_;
            }
          }
          uVar35 = (int)uVar41 + 1;
          uVar41 = (ulonglong)uVar35;
        } while (uVar35 < uVar40);
        auVar74._4_4_ = fStack_ec;
        auVar74._0_4_ = local_f0;
        auVar74._8_4_ = fStack_e8;
        auVar74._12_4_ = fStack_e4;
      }
      if (param_19 != (uint *)0x0) {
        auVar70 = NEON_fmov(0x3f800000,4);
        auVar70 = NEON_fmin(auVar74,auVar70,4);
        auVar70 = NEON_fmax(auVar70,ZEXT216(0),4);
        fStack_178 = auVar70._8_4_;
        fStack_174 = auVar70._12_4_;
        local_180 = auVar70._0_4_;
        fStack_17c = auVar70._4_4_;
        if (param_17 == '\x04') {
          uVar35 = *param_7;
        }
        else {
          uVar35 = FUN_18012a458(param_7);
        }
        auVar79._0_8_ = CONCAT44((int)(fStack_17c * 255.0),(int)(local_180 * 255.0));
        auVar79._8_4_ = (int)(fStack_178 * 255.0);
        auVar79._12_4_ = (int)(fStack_174 * 255.0);
        auVar80._0_8_ = NEON_sqxtn(auVar79._0_8_,auVar79,4);
        auVar80._8_8_ = auVar80._0_8_;
        uVar69 = NEON_uqxtn(auVar80._0_8_,auVar80,2);
        *param_19 = uVar35 & 0xff000000 | (uint)uVar69 & 0xffffff;
        param_19 = (uint *)((longlong)param_19 + (ulonglong)param_21);
      }
      if (local_208 != (uint *)0x0) {
        if (*(int *)(param_1 + 0x4ec) == 0) {
          uVar35 = *local_200 & 0xff000000;
        }
        else {
          auVar14._4_4_ = fStack_1bc;
          auVar14._0_4_ = local_1c0;
          auVar14._8_4_ = fStack_1b8;
          auVar14._12_4_ = fStack_1b4;
          auVar70 = NEON_fmov(0x3f800000,4);
          auVar70 = NEON_fmin(auVar14,auVar70,4);
          auVar70 = NEON_fmax(auVar70,ZEXT216(0),4);
          auVar81._0_8_ = CONCAT44((int)(auVar70._4_4_ * 255.0),(int)(auVar70._0_4_ * 255.0));
          auVar81._8_4_ = (int)(auVar70._8_4_ * 255.0);
          auVar81._12_4_ = (int)(auVar70._12_4_ * 255.0);
          auVar82._0_8_ = NEON_sqxtn(auVar81._0_8_,auVar81,4);
          auVar82._8_8_ = auVar82._0_8_;
          uVar69 = NEON_uqxtn(auVar82._0_8_,auVar82,2);
          uVar35 = *local_200 & 0xff000000 | (uint)uVar69 & 0xffffff;
        }
        *local_208 = uVar35;
        local_208 = (uint *)((longlong)local_208 + (ulonglong)param_22);
        local_200 = (uint *)((longlong)local_200 + (ulonglong)param_14);
      }
      param_5 = (undefined4 *)((longlong)param_5 + (ulonglong)param_10);
      local_20c = local_20c + 1;
      param_6 = (undefined4 *)((longlong)param_6 + (ulonglong)param_11);
      param_7 = (uint *)((longlong)param_7 + (ulonglong)param_12);
      param_8 = (undefined4 *)((longlong)param_8 + (ulonglong)param_13);
    } while (local_20c < param_23);
  }
  return;
}

