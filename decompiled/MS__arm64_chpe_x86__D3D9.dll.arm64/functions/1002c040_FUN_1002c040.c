/*
 * FUN_1002c040 at 1002c040
 * undefined FUN_1002c040(void)
 * Address ranges: 1002c040-1002cadf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c040(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 *param_5,
                 uint *param_6,uint *param_7,undefined4 *param_8,uint *param_9,undefined4 param_10,
                 int param_11,undefined4 param_12,int param_13,undefined4 param_14,int param_15,
                 undefined4 param_16,int param_17,undefined4 param_18,int param_19,
                 undefined4 param_20,char param_21,undefined4 param_22,char param_23,
                 undefined4 param_24,char param_25,undefined4 param_26,char param_27,
                 undefined4 param_28,uint *param_29,undefined4 param_30,uint *param_31,
                 undefined4 param_32,int param_33,undefined4 param_34,int param_35,
                 undefined4 param_36,uint param_37)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  uint uVar9;
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [13];
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
  undefined1 auVar27 [13];
  undefined1 auVar28 [13];
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  ulonglong uVar36;
  int extraout_w15;
  uint uVar37;
  undefined1 uVar38;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_04;
  undefined8 extraout_var_01;
  undefined1 auVar39 [16];
  undefined8 extraout_var_02;
  undefined1 auVar40 [16];
  undefined8 extraout_var_03;
  undefined1 auVar41 [16];
  float fVar42;
  undefined4 uVar43;
  uint uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  float fVar55;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  int iVar62;
  int iVar63;
  undefined1 auVar61 [16];
  float fVar64;
  float fVar68;
  float fVar69;
  undefined1 auVar65 [16];
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar71;
  undefined1 auVar72 [16];
  uint *local_1bc;
  undefined4 *local_1b8;
  uint local_1ac;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  float local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  undefined1 auVar49 [16];
  
  uStack_68 = 0x3f800000;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 1.0;
  uStack_5c = 0;
  FUN_10029e78(param_1);
  iVar33 = *(int *)(param_1 + 0xd80);
  puVar1 = (uint *)(param_1 + 0x31c);
  puVar2 = (uint *)(param_1 + 0xd68);
  uVar37 = *puVar1;
  piVar3 = (int *)(param_1 + 0xd60);
  uVar6 = *(undefined4 *)(iVar33 + 0x865c);
  uVar7 = *(undefined4 *)(iVar33 + 0x864c);
  uVar30 = *(uint *)(iVar33 + 0x866c);
  fVar42 = -(*(float *)(iVar33 + 0x865c) - *(float *)(iVar33 + 0x8658));
  local_b0 = CONCAT44(fVar42,fVar42);
  uStack_a8 = (ulonglong)(uint)-(*(float *)(iVar33 + 0x866c) - *(float *)(iVar33 + 0x8668)) |
              0x3f80000000000000;
  uVar35 = *(uint *)(param_1 + 0x65c);
  uVar38 = (undefined1)(uVar35 >> 0x18);
  auVar10[8] = (char)(uVar35 >> 0x10);
  auVar10._0_8_ =
       (longlong)CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar35 >> 8) << 0x20);
  auVar10._9_3_ = 0;
  auVar10[0xc] = uVar38;
  auVar19._4_9_ = auVar10._4_9_;
  auVar19._0_4_ = uVar35 & 0xff;
  auVar20._6_2_ = 0;
  auVar20._0_6_ = auVar19._0_6_;
  auVar20._8_5_ = auVar10._8_5_;
  auVar46._0_10_ = auVar20._0_10_;
  auVar46._10_2_ = 0;
  auVar46[0xc] = uVar38;
  auVar46._13_3_ = 0;
  auVar46 = NEON_scvtf(auVar46,4);
  uStack_78 = auVar46._8_8_;
  local_80 = auVar46._0_8_;
  if (*puVar2 < uVar37) {
    FUN_101322d0(*piVar3);
    *puVar2 = 0;
    iVar33 = uVar37 * 8;
    if (uVar37 >> 0x1d != 0) {
      iVar33 = -1;
    }
    iVar33 = FUN_101322b0(iVar33);
    if (iVar33 == 0) {
      uVar37 = 0;
    }
    *piVar3 = iVar33;
    *puVar2 = uVar37;
  }
  iVar33 = *piVar3;
  uVar37 = 0;
  if ((iVar33 != 0) && (uVar35 = 0, *puVar1 != 0)) {
    uVar31 = (ulonglong)(param_1 + 0x318);
    do {
      puVar2 = (uint *)(*(int *)uVar31 + uVar35 * 4);
      uVar44 = *puVar2;
      if (uVar44 != 0xffffffff) {
        uVar32 = *(uint *)(param_1 + 0x304);
        if (uVar32 != 0) {
          uVar34 = 0;
          do {
            uVar9 = uVar32 + uVar34 >> 1;
            uVar36 = *(ulonglong *)(*(int *)(param_1 + 0x300) + uVar9 * 0xa0);
            if (uVar36 <= uVar44) {
              if (uVar44 <= uVar36) break;
              uVar34 = uVar9 + 1;
              uVar9 = uVar32;
            }
            uVar32 = uVar9;
          } while (uVar32 != uVar34);
        }
        iVar29 = FUN_10012e10(param_1 + 0x2ec,puVar2);
        if ((extraout_w15 != 0) && (iVar29 != 0)) {
          piVar3 = (int *)(iVar33 + uVar37 * 8);
          uVar37 = uVar37 + 1;
          *piVar3 = extraout_w15;
          piVar3[1] = iVar29;
        }
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 < *puVar1);
  }
  uVar43 = 0x7f7fffff;
  if (*(int *)(param_1 + 0x66c) != 0) {
    uVar43 = 0x3f800000;
  }
  auVar72._0_8_ = CONCAT44(uVar43,uVar43);
  auVar72._8_4_ = uVar43;
  auVar72._12_4_ = uVar43;
  if (param_37 != 0) {
    local_1ac = 0;
    uStack_98 = auVar72._8_8_;
    local_a0 = auVar72._0_8_;
    local_50 = CONCAT44(uVar6,uVar7);
    local_1bc = param_9;
    uStack_c8 = uStack_b8;
    local_d0 = local_c0;
    uStack_158 = uStack_88;
    local_160 = local_90;
    local_1b8 = param_8;
    uStack_48 = (ulonglong)uVar30 | 0x3f80000000000000;
    do {
      if (uVar37 != 0) {
        puVar4 = (undefined8 *)(param_2 + local_1ac * 0x20);
        uStack_c8 = puVar4[1];
        local_d0 = *puVar4;
        uStack_b8 = uStack_c8;
        local_c0 = local_d0;
        uStack_158 = puVar4[3];
        local_160 = puVar4[2];
        if (*(int *)(param_1 + 0x66c) != 0) {
          fVar42 = (float)local_160;
          fVar55 = (float)((ulonglong)local_160 >> 0x20);
          fVar56 = fVar55 * fVar55 + fVar42 * fVar42 + (float)uStack_158 * (float)uStack_158;
          iVar29 = -(uint)(fVar56 == 0.0);
          iVar62 = -(uint)(fVar56 == 0.0);
          iVar63 = -(uint)(fVar56 == 0.0);
          fVar42 = fVar42 / SQRT(fVar56);
          fVar55 = *(float *)((int)puVar4 + 0x14) / SQRT(fVar56);
          fVar56 = *(float *)(puVar4 + 3) / SQRT(fVar56);
          uStack_158 = (ulonglong)
                       CONCAT13((byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                                CONCAT12((byte)((uint)fVar56 >> 0x10) &
                                         ~(byte)((uint)iVar63 >> 0x10),
                                         CONCAT11((byte)((uint)fVar56 >> 8) &
                                                  ~(byte)((uint)iVar63 >> 8),
                                                  SUB41(fVar56,0) & ~(byte)iVar63)));
          local_160 = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                               CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar55 >> 8) &
                                                  ~(byte)((uint)iVar62 >> 8),
                                                  CONCAT14(SUB41(fVar55,0) & ~(byte)iVar62,
                                                           CONCAT13((byte)((uint)fVar42 >> 0x18) &
                                                                    ~(byte)((uint)iVar29 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar42 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar29 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar42 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                                  SUB41(fVar42,0) & ~(byte)iVar29)))))));
        }
      }
      if (param_21 == '\x04') {
        uVar6 = *param_5;
        uVar38 = (undefined1)((uint)uVar6 >> 0x18);
        uVar30 = CONCAT22(0,(ushort)uVar6 & 0xff);
        auVar16[4] = (char)((uint)uVar6 >> 8);
        auVar16._0_4_ = uVar30;
        auVar16[5] = 0;
        auVar16[6] = uVar38;
        auVar16[7] = 0;
        auVar16[8] = (char)((uint)uVar6 >> 0x10);
        auVar16._9_3_ = 0;
        auVar16[0xc] = uVar38;
        auVar21._4_9_ = auVar16._4_9_;
        auVar21._0_4_ = uVar30;
        auVar22._6_2_ = 0;
        auVar22._0_6_ = auVar21._0_6_;
        auVar22._8_5_ = auVar16._8_5_;
        auVar61._0_10_ = auVar22._0_10_;
        auVar61._10_2_ = 0;
        auVar61[0xc] = uVar38;
        auVar61._13_3_ = 0;
        auVar46 = NEON_scvtf(auVar61,4);
        local_110 = auVar46._0_4_ / 255.0;
        fStack_10c = auVar46._4_4_ / 255.0;
        fStack_108 = auVar46._8_4_ / 255.0;
        fStack_104 = auVar46._12_4_ / 255.0;
      }
      else {
        FUN_10037bf8(param_5,param_21);
        local_110 = extraout_s0;
        fStack_10c = extraout_var;
        fStack_108 = extraout_var_00;
        fStack_104 = extraout_var_04;
      }
      if (param_29 == (uint *)0x0) {
        auVar48 = ZEXT116(0) << 8;
      }
      else {
        if (param_23 == '\x04') {
          uVar30 = *param_6;
          uVar38 = (undefined1)(uVar30 >> 0x18);
          auVar11[8] = (char)(uVar30 >> 0x10);
          auVar11._0_8_ =
               (longlong)
               CONCAT36((int3)(((unkuint9)0 << 0x40) >> 0x30),(uint6)(byte)(uVar30 >> 8) << 0x20);
          auVar11._9_3_ = 0;
          auVar11[0xc] = uVar38;
          auVar23._4_9_ = auVar11._4_9_;
          auVar23._0_4_ = uVar30 & 0xff;
          auVar24._6_2_ = 0;
          auVar24._0_6_ = auVar23._0_6_;
          auVar24._8_5_ = auVar11._8_5_;
          auVar47._0_10_ = auVar24._0_10_;
          auVar47._10_2_ = 0;
          auVar47[0xc] = uVar38;
          auVar47._13_3_ = 0;
          auVar39 = NEON_scvtf(auVar47,4);
        }
        else {
          auVar39._0_8_ = FUN_10037fd0(param_6,param_23);
          auVar39._8_8_ = extraout_var_01;
        }
        auVar48._0_4_ = (local_110 * (float)local_80 + auVar39._0_4_) / 255.0;
        auVar48._4_4_ = (fStack_10c * (float)((ulonglong)local_80 >> 0x20) + auVar39._4_4_) / 255.0;
        auVar48._8_4_ = (fStack_108 * (float)uStack_78 + auVar39._8_4_) / 255.0;
        auVar48._12_4_ =
             (fStack_104 * (float)((ulonglong)uStack_78 >> 0x20) + auVar39._12_4_) / 255.0;
      }
      fStack_d8 = auVar48._8_4_;
      fStack_d4 = auVar48._12_4_;
      local_e0 = auVar48._0_4_;
      fStack_dc = auVar48._4_4_;
      uVar30 = 0;
      fStack_178 = 0.0;
      fStack_174 = 0.0;
      local_180 = 0.0;
      fStack_17c = 0.0;
      if (uVar37 != 0) {
        do {
          pfVar8 = *(float **)(iVar33 + uVar30 * 8);
          piVar3 = *(int **)(iVar33 + 4 + uVar30 * 8);
          fVar57 = 0.0;
          fVar42 = *pfVar8;
          fVar55 = pfVar8[1];
          fVar56 = pfVar8[2];
          if (*piVar3 == 3) {
            auVar66 = NEON_fmov(0x3f800000,4);
            fVar60 = 0.0;
          }
          else {
            fVar60 = (float)piVar3[0x13];
            fVar42 = (float)local_d0 - (float)*(undefined8 *)(piVar3 + 0xd);
            fVar55 = (float)((ulonglong)local_d0 >> 0x20) -
                     (float)((ulonglong)*(undefined8 *)(piVar3 + 0xd) >> 0x20);
            fVar56 = (float)uStack_c8 - (float)piVar3[0xf];
            fVar57 = SQRT(fVar55 * fVar55 + fVar42 * fVar42 + fVar56 * fVar56);
            auVar65._0_4_ =
                 (fVar57 * 1.0 + (float)((ulonglong)local_70 >> 0x20)) *
                 (float)((ulonglong)*(undefined8 *)(pfVar8 + 4) >> 0x20) +
                 (fVar57 * fVar57 + (float)local_70) * (float)*(undefined8 *)(pfVar8 + 4) +
                 (fVar57 * 0.0 + (float)uStack_68) * (float)*(undefined8 *)(pfVar8 + 6);
            auVar65._4_4_ = auVar65._0_4_;
            auVar65._8_4_ = auVar65._0_4_;
            auVar65._12_4_ = auVar65._0_4_;
            auVar72 = NEON_frecpe(auVar65,4);
            iVar29 = -(uint)(auVar65._0_4_ == 0.0);
            iVar62 = -(uint)(auVar65._0_4_ == 0.0);
            iVar63 = -(uint)(auVar65._0_4_ == 0.0);
            iVar71 = -(uint)(auVar65._0_4_ == 0.0);
            auVar46 = NEON_frecps(auVar65,auVar72,4);
            fVar64 = auVar46._0_4_ * auVar72._0_4_;
            fVar68 = auVar46._4_4_ * auVar72._4_4_;
            fVar69 = auVar46._8_4_ * auVar72._8_4_;
            fVar70 = auVar46._12_4_ * auVar72._12_4_;
            auVar66[0] = SUB41(fVar64,0) & ~(byte)iVar29;
            auVar66[1] = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar29 >> 8);
            auVar66[2] = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
            auVar66[3] = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
            auVar66[4] = SUB41(fVar68,0) & ~(byte)iVar62;
            auVar66[5] = (byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar62 >> 8);
            auVar66[6] = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10);
            auVar66[7] = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18);
            auVar66[8] = SUB41(fVar69,0) & ~(byte)iVar63;
            auVar66[9] = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar63 >> 8);
            auVar66[10] = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
            auVar66[0xb] = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
            auVar66[0xc] = SUB41(fVar70,0) & ~(byte)iVar71;
            auVar66[0xd] = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar71 >> 8);
            auVar66[0xe] = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
            auVar66[0xf] = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
          }
          if (fVar57 <= fVar60) {
            fVar57 = fVar55 * fVar55 + fVar42 * fVar42 + fVar56 * fVar56;
            fVar42 = fVar42 / SQRT(fVar57);
            fVar55 = fVar55 / SQRT(fVar57);
            local_90 = CONCAT44(fVar55,fVar42);
            fVar56 = fVar56 / SQRT(fVar57);
            uStack_88 = CONCAT44(0.0 / SQRT(fVar57),fVar56);
            fVar60 = (float)((ulonglong)local_160 >> 0x20);
            fVar57 = -fVar55 * fVar60 + -fVar42 * (float)local_160 + -fVar56 * (float)uStack_158;
            auVar58._4_4_ = fVar57;
            auVar58._0_4_ = fVar57;
            auVar58._8_4_ = fVar57;
            auVar58._12_4_ = fVar57;
            auVar14._8_8_ = uStack_98;
            auVar14._0_8_ = local_a0;
            auVar46 = NEON_fmin(auVar58,auVar14,4);
            auVar72 = NEON_fmax(auVar46,ZEXT816(0),4);
            auVar46 = NEON_fmov(0x3f800000,4);
            fStack_198 = auVar46._8_4_;
            fStack_194 = auVar46._12_4_;
            local_1a0 = auVar46._0_4_;
            fStack_19c = auVar46._4_4_;
            if ((*piVar3 == 2) &&
               (fVar42 = fVar55 * (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20) +
                         fVar42 * (float)*(undefined8 *)pfVar8 +
                         fVar56 * (float)*(undefined8 *)(pfVar8 + 2),
               fVar42 <= (float)*(undefined8 *)(pfVar8 + 0x1c))) {
              auVar67._0_4_ =
                   (fVar42 - (float)*(undefined8 *)(pfVar8 + 0x18)) /
                   (float)*(undefined8 *)(pfVar8 + 0x14);
              auVar67._4_4_ =
                   (fVar42 - (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x18) >> 0x20)) /
                   (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x14) >> 0x20);
              auVar67._8_4_ =
                   (fVar42 - (float)*(undefined8 *)(pfVar8 + 0x1a)) /
                   (float)*(undefined8 *)(pfVar8 + 0x16);
              auVar67._12_4_ =
                   (fVar42 - (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x1a) >> 0x20)) /
                   (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x16) >> 0x20);
              auVar61 = NEON_fmax(auVar67,ZEXT816(0),4);
              auVar46 = NEON_fmin(auVar61,auVar46,4);
              local_1a0 = auVar46._0_4_;
              if (local_1a0 == local_60) {
                fStack_198 = auVar46._8_4_;
                fStack_194 = auVar46._12_4_;
                fStack_19c = auVar46._4_4_;
              }
              else {
                uVar35 = (uint)(local_1a0 * 1024.0);
                if (uVar35 == 0) {
                  local_1a0 = 0.0;
                  fStack_19c = local_1a0;
                  fStack_198 = local_1a0;
                  fStack_194 = local_1a0;
                }
                else if ((0x3ff < uVar35) ||
                        (fVar42 = *(float *)(*(int *)(param_1 + 0xd04) + uVar35 * 4) *
                                  (float)piVar3[0x14], 1024.0 <= ABS(fVar42))) {
                  local_1a0 = (float)FUN_10131618(auVar46._0_8_,piVar3[0x14]);
                  fStack_19c = local_1a0;
                  fStack_198 = local_1a0;
                  fStack_194 = local_1a0;
                }
                else {
                  iVar29 = (int)fVar42 - (uint)(fVar42 <= 0.0);
                  pfVar5 = (float *)(*(int *)(param_1 + 0xd08) +
                                    (int)((fVar42 - (float)iVar29) * 1024.0) * 4);
                  if (iVar29 < 0) {
                    local_1a0 = *pfVar5 / *(float *)(*(int *)(param_1 + 0xd0c) + iVar29 * -4);
                    fStack_19c = local_1a0;
                    fStack_198 = local_1a0;
                    fStack_194 = local_1a0;
                  }
                  else {
                    local_1a0 = *(float *)(*(int *)(param_1 + 0xd0c) + iVar29 * 4) * *pfVar5;
                    fStack_19c = local_1a0;
                    fStack_198 = local_1a0;
                    fStack_194 = local_1a0;
                  }
                }
              }
            }
            if (param_29 != (uint *)0x0) {
              if (param_25 == '\x04') {
                uVar35 = *param_7;
                uVar38 = (undefined1)(uVar35 >> 0x18);
                uVar44 = CONCAT22(0,(ushort)uVar35 & 0xff);
                auVar17[4] = (char)(uVar35 >> 8);
                auVar17._0_4_ = uVar44;
                auVar17[5] = 0;
                auVar17[6] = uVar38;
                auVar17[7] = 0;
                auVar17[8] = (char)(uVar35 >> 0x10);
                auVar17._9_3_ = 0;
                auVar17[0xc] = uVar38;
                auVar25._4_9_ = auVar17._4_9_;
                auVar25._0_4_ = uVar44;
                auVar26._6_2_ = 0;
                auVar26._0_6_ = auVar25._0_6_;
                auVar26._8_5_ = auVar17._8_5_;
                auVar49._0_10_ = auVar26._0_10_;
                auVar49._10_2_ = 0;
                auVar49[0xc] = uVar38;
                auVar49._13_3_ = 0;
                auVar46 = NEON_scvtf(auVar49,4);
                auVar40._0_4_ = auVar46._0_4_ / 255.0;
                auVar40._4_4_ = auVar46._4_4_ / 255.0;
                auVar40._8_4_ = auVar46._8_4_ / 255.0;
                auVar40._12_4_ = auVar46._12_4_ / 255.0;
              }
              else {
                auVar40._0_8_ = FUN_10037bf8(param_7,param_25);
                auVar40._8_8_ = extraout_var_02;
              }
              local_e0 = local_e0 +
                         ((float)*(undefined8 *)(pfVar8 + 8) * local_1a0 * auVar40._0_4_ *
                          auVar72._0_4_ + local_110 * (float)*(undefined8 *)(pfVar8 + 0xc)) *
                         auVar66._0_4_;
              fStack_dc = fStack_dc +
                          ((float)((ulonglong)*(undefined8 *)(pfVar8 + 8) >> 0x20) * fStack_19c *
                           auVar40._4_4_ * auVar72._4_4_ +
                          fStack_10c * (float)((ulonglong)*(undefined8 *)(pfVar8 + 0xc) >> 0x20)) *
                          auVar66._4_4_;
              fStack_d8 = fStack_d8 +
                          ((float)*(undefined8 *)(pfVar8 + 10) * fStack_198 * auVar40._8_4_ *
                           auVar72._8_4_ + fStack_108 * (float)*(undefined8 *)(pfVar8 + 0xe)) *
                          auVar66._8_4_;
              fStack_d4 = fStack_d4 +
                          ((float)((ulonglong)*(undefined8 *)(pfVar8 + 10) >> 0x20) * fStack_194 *
                           auVar40._12_4_ * auVar72._12_4_ +
                          fStack_104 * (float)((ulonglong)*(undefined8 *)(pfVar8 + 0xe) >> 0x20)) *
                          auVar66._12_4_;
            }
            if ((param_31 != (uint *)0x0) && (*(int *)(param_1 + 0x4a4) != 0)) {
              puVar4 = &local_c0;
              if (*(int *)(param_1 + 0x668) == 0) {
                puVar4 = &local_b0;
              }
              fVar55 = (float)local_50 - (float)*puVar4;
              fVar56 = (float)((ulonglong)local_50 >> 0x20) - (float)((ulonglong)*puVar4 >> 0x20);
              fVar57 = (float)uStack_48 - (float)puVar4[1];
              fVar42 = fVar56 * fVar56 + fVar55 * fVar55 + fVar57 * fVar57;
              fVar42 = (fVar56 / SQRT(fVar42) - (float)((ulonglong)local_90 >> 0x20)) * fVar60 +
                       (fVar55 / SQRT(fVar42) - (float)local_90) * (float)local_160 +
                       (fVar57 / SQRT(fVar42) - (float)uStack_88) * (float)uStack_158;
              auVar59._4_4_ = fVar42;
              auVar59._0_4_ = fVar42;
              auVar59._8_4_ = fVar42;
              auVar59._12_4_ = fVar42;
              auVar15._8_8_ = uStack_98;
              auVar15._0_8_ = local_a0;
              auVar46 = NEON_fmin(auVar59,auVar15,4);
              auVar46 = NEON_fmax(auVar46,ZEXT816(0),4);
              uVar35 = (uint)(auVar46._0_4_ * 1024.0);
              if (uVar35 == 0) {
                fStack_164 = 0.0;
              }
              else if ((0x3ff < uVar35) ||
                      (fVar42 = *(float *)(*(int *)(param_1 + 0xd04) + uVar35 * 4) *
                                *(float *)(param_1 + 0x2e8), 1024.0 <= ABS(fVar42))) {
                fStack_164 = (float)FUN_10131618(auVar46._0_8_,*(float *)(param_1 + 0x2e8));
              }
              else {
                iVar29 = (int)fVar42 - (uint)(fVar42 <= 0.0);
                pfVar5 = (float *)(*(int *)(param_1 + 0xd08) +
                                  (int)((fVar42 - (float)iVar29) * 1024.0) * 4);
                if (iVar29 < 0) {
                  fStack_164 = *pfVar5 / *(float *)(*(int *)(param_1 + 0xd0c) + iVar29 * -4);
                }
                else {
                  fStack_164 = *(float *)(*(int *)(param_1 + 0xd0c) + iVar29 * 4) * *pfVar5;
                }
              }
              if (param_27 == '\x04') {
                uVar6 = *local_1b8;
                uVar38 = (undefined1)((uint)uVar6 >> 0x18);
                uVar35 = CONCAT22(0,(ushort)uVar6 & 0xff);
                auVar18[4] = (char)((uint)uVar6 >> 8);
                auVar18._0_4_ = uVar35;
                auVar18[5] = 0;
                auVar18[6] = uVar38;
                auVar18[7] = 0;
                auVar18[8] = (char)((uint)uVar6 >> 0x10);
                auVar18._9_3_ = 0;
                auVar18[0xc] = uVar38;
                auVar27._4_9_ = auVar18._4_9_;
                auVar27._0_4_ = uVar35;
                auVar28._6_2_ = 0;
                auVar28._0_6_ = auVar27._0_6_;
                auVar28._8_5_ = auVar18._8_5_;
                auVar50._0_10_ = auVar28._0_10_;
                auVar50._10_2_ = 0;
                auVar50[0xc] = uVar38;
                auVar50._13_3_ = 0;
                auVar46 = NEON_scvtf(auVar50,4);
                auVar41._0_4_ = auVar46._0_4_ / 255.0;
                auVar41._4_4_ = auVar46._4_4_ / 255.0;
                auVar41._8_4_ = auVar46._8_4_ / 255.0;
                auVar41._12_4_ = auVar46._12_4_ / 255.0;
              }
              else {
                auVar41._0_8_ = FUN_10037bf8(local_1b8,param_27);
                auVar41._8_8_ = extraout_var_03;
              }
              local_180 = local_180 +
                          (float)*(undefined8 *)(pfVar8 + 0x10) * local_1a0 * auVar41._0_4_ *
                          auVar66._0_4_ * fStack_164;
              fStack_17c = fStack_17c +
                           (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x10) >> 0x20) * fStack_19c *
                           auVar41._4_4_ * auVar66._4_4_ * fStack_164;
              fStack_178 = fStack_178 +
                           (float)*(undefined8 *)(pfVar8 + 0x12) * fStack_198 * auVar41._8_4_ *
                           auVar66._8_4_ * fStack_164;
              fStack_174 = fStack_174 +
                           (float)((ulonglong)*(undefined8 *)(pfVar8 + 0x12) >> 0x20) * fStack_194 *
                           auVar41._12_4_ * auVar66._12_4_ * fStack_164;
            }
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar37);
      }
      if (param_29 != (uint *)0x0) {
        if (param_25 == '\x04') {
          uVar30 = *param_7;
        }
        else {
          uVar30 = FUN_10038398(param_7,param_25);
        }
        auVar13._4_4_ = fStack_dc;
        auVar13._0_4_ = local_e0;
        auVar13._8_4_ = fStack_d8;
        auVar13._12_4_ = fStack_d4;
        auVar46 = NEON_fmov(0x3f800000,4);
        auVar46 = NEON_fmin(auVar13,auVar46,4);
        auVar46 = NEON_fmax(auVar46,ZEXT816(0),4);
        auVar51._0_8_ = CONCAT44((int)(auVar46._4_4_ * 255.0),(int)(auVar46._0_4_ * 255.0));
        auVar51._8_4_ = (int)(auVar46._8_4_ * 255.0);
        auVar51._12_4_ = (int)(auVar46._12_4_ * 255.0);
        auVar52._0_8_ = NEON_sqxtn(auVar51._0_8_,auVar51,4);
        auVar52._8_8_ = auVar52._0_8_;
        uVar45 = NEON_uqxtn(auVar52._0_8_,auVar52,2);
        *param_29 = uVar30 & 0xff000000 | (uint)uVar45 & 0xffffff;
        param_29 = (uint *)((int)param_29 + param_33);
      }
      if (param_31 != (uint *)0x0) {
        if (*(int *)(param_1 + 0x4a4) == 0) {
          uVar30 = *local_1bc & 0xff000000;
        }
        else {
          auVar12._4_4_ = fStack_17c;
          auVar12._0_4_ = local_180;
          auVar12._8_4_ = fStack_178;
          auVar12._12_4_ = fStack_174;
          auVar46 = NEON_fmov(0x3f800000,4);
          auVar46 = NEON_fmin(auVar12,auVar46,4);
          auVar46 = NEON_fmax(auVar46,ZEXT816(0),4);
          auVar53._0_8_ = CONCAT44((int)(auVar46._4_4_ * 255.0),(int)(auVar46._0_4_ * 255.0));
          auVar53._8_4_ = (int)(auVar46._8_4_ * 255.0);
          auVar53._12_4_ = (int)(auVar46._12_4_ * 255.0);
          auVar54._0_8_ = NEON_sqxtn(auVar53._0_8_,auVar53,4);
          auVar54._8_8_ = auVar54._0_8_;
          uVar45 = NEON_uqxtn(auVar54._0_8_,auVar54,2);
          uVar30 = *local_1bc & 0xff000000 | (uint)uVar45 & 0xffffff;
        }
        *param_31 = uVar30;
        param_31 = (uint *)((int)param_31 + param_35);
        local_1bc = (uint *)((int)local_1bc + param_19);
      }
      param_5 = (undefined4 *)((int)param_5 + param_11);
      param_6 = (uint *)((int)param_6 + param_13);
      param_7 = (uint *)((int)param_7 + param_15);
      local_1b8 = (undefined4 *)((int)local_1b8 + param_17);
      local_1ac = local_1ac + 1;
    } while (local_1ac < param_37);
  }
  return;
}

