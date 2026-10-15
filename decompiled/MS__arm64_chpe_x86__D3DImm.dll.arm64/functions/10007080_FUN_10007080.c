/*
 * FUN_10007080 at 10007080
 * undefined FUN_10007080(void)
 * Address ranges: 10007080-100074cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10007080(int param_1,uint param_2)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar23;
  int iVar24;
  undefined1 auVar19 [12];
  int iVar26;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  float fVar53;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  
  if (*(char *)(param_1 + 0x229) != '\0') goto LAB_100074c4;
  iVar3 = *(int *)(param_1 + 0x9cc);
  if ((param_2 & 1) == 0) {
    fVar41 = *(float *)(iVar3 + 0x280);
    fVar32 = *(float *)(iVar3 + 0x290);
    fVar31 = *(float *)(iVar3 + 0x2a0);
    fVar28 = *(float *)(iVar3 + 0x284);
    fVar27 = *(float *)(iVar3 + 0x294);
    fVar17 = *(float *)(iVar3 + 0x2a4);
    fVar16 = *(float *)(iVar3 + 0x288);
    fVar15 = *(float *)(iVar3 + 0x298);
    fVar14 = *(float *)(iVar3 + 0x2a8);
    pfVar1 = (float *)(iVar3 + 0x8d0);
    pauVar2 = (undefined1 (*) [16])(iVar3 + 0x8e0);
    fVar13 = fVar32 * fVar32;
    fVar29 = fVar31 * fVar31;
    fVar55 = fVar27 * fVar27;
    fVar18 = fVar17 * fVar17;
    auVar54._0_4_ = fVar41 * fVar41 + fVar13 + fVar29;
    auVar54._4_4_ = fVar13 + fVar13 + fVar29;
    auVar54._8_4_ = fVar29 + fVar13 + fVar29;
    auVar54._12_4_ = fVar13 + 0.0 + fVar29;
    auVar37 = NEON_frsqrte(auVar54,4);
    fVar13 = auVar37._0_4_;
    auVar22._0_4_ = fVar13 * fVar13;
    auVar22._4_4_ = auVar37._4_4_ * auVar37._4_4_;
    auVar22._8_4_ = auVar37._8_4_ * auVar37._8_4_;
    auVar22._12_4_ = auVar37._12_4_ * auVar37._12_4_;
    auVar37 = NEON_frsqrts(auVar22,auVar54,4);
    fVar13 = fVar13 * auVar37._0_4_;
    fVar30 = fVar28 * fVar28 + fVar55 + fVar18;
    fVar56 = fVar55 + fVar55 + fVar18;
    fVar53 = fVar18 + fVar55 + fVar18;
    fVar18 = fVar55 + 0.0 + fVar18;
    auVar37._4_4_ = fVar56;
    auVar37._0_4_ = fVar30;
    auVar37._8_4_ = fVar53;
    auVar37._12_4_ = fVar18;
    auVar37 = NEON_frsqrte(auVar37,4);
    fVar29 = auVar37._0_4_;
    auVar42._0_4_ = fVar29 * fVar29;
    auVar42._4_4_ = auVar37._4_4_ * auVar37._4_4_;
    auVar42._8_4_ = auVar37._8_4_ * auVar37._8_4_;
    auVar42._12_4_ = auVar37._12_4_ * auVar37._12_4_;
    auVar8._4_4_ = fVar56;
    auVar8._0_4_ = fVar30;
    auVar8._8_4_ = fVar53;
    auVar8._12_4_ = fVar18;
    auVar37 = NEON_frsqrts(auVar42,auVar8,4);
    fVar30 = fVar15 * fVar15;
    fVar18 = fVar14 * fVar14;
    fVar29 = fVar29 * auVar37._0_4_;
    fVar55 = fVar16 * fVar16 + fVar30 + fVar18;
    fVar56 = fVar30 + fVar30 + fVar18;
    fVar53 = fVar18 + fVar30 + fVar18;
    fVar18 = fVar30 + 0.0 + fVar18;
    auVar9._4_4_ = fVar56;
    auVar9._0_4_ = fVar55;
    auVar9._8_4_ = fVar53;
    auVar9._12_4_ = fVar18;
    auVar37 = NEON_frsqrte(auVar9,4);
    fVar30 = auVar37._0_4_;
    auVar43._0_4_ = fVar30 * fVar30;
    auVar43._4_4_ = auVar37._4_4_ * auVar37._4_4_;
    auVar43._8_4_ = auVar37._8_4_ * auVar37._8_4_;
    auVar43._12_4_ = auVar37._12_4_ * auVar37._12_4_;
    auVar10._4_4_ = fVar56;
    auVar10._0_4_ = fVar55;
    auVar10._8_4_ = fVar53;
    auVar10._12_4_ = fVar18;
    auVar37 = NEON_frsqrts(auVar43,auVar10,4);
    fVar30 = fVar30 * auVar37._0_4_;
    *(float *)(iVar3 + 0x8c8) = fVar13 * fVar13 * fVar31;
    *(float *)(iVar3 + 0x8cc) = fVar13 * fVar13 * 0.0;
    *(float *)(iVar3 + 0x8c0) = fVar13 * fVar13 * fVar41;
    *(float *)(iVar3 + 0x8c4) = fVar13 * fVar13 * fVar32;
    *(float *)(iVar3 + 0x8d8) = fVar29 * fVar29 * fVar17;
    *(float *)(iVar3 + 0x8dc) = fVar29 * fVar29 * 0.0;
    *pfVar1 = fVar29 * fVar29 * fVar28;
    *(float *)(iVar3 + 0x8d4) = fVar29 * fVar29 * fVar27;
    *(float *)(iVar3 + 0x8e8) = fVar30 * fVar30 * fVar14;
    *(float *)(iVar3 + 0x8ec) = fVar30 * fVar30 * 0.0;
    *(float *)*pauVar2 = fVar30 * fVar30 * fVar16;
    *(float *)(iVar3 + 0x8e4) = fVar30 * fVar30 * fVar15;
    uVar25 = *(undefined8 *)(iVar3 + 0x8c8);
    uVar44 = *(undefined1 *)(iVar3 + 0x8c0);
    if (0.0 <= ((fVar14 * fVar27 - fVar15 * fVar17) * fVar41 -
               (fVar14 * fVar28 - fVar16 * fVar17) * fVar32) +
               (fVar15 * fVar28 - fVar16 * fVar27) * fVar31) {
      *(undefined8 *)(iVar3 + 0x908) = uVar25;
      *(undefined1 *)(iVar3 + 0x900) = uVar44;
      *(undefined1 *)(iVar3 + 0x901) = *(undefined1 *)(iVar3 + 0x8c1);
      *(undefined1 *)(iVar3 + 0x902) = *(undefined1 *)(iVar3 + 0x8c2);
      *(byte *)(iVar3 + 0x903) = *(byte *)(iVar3 + 0x8c3);
      *(undefined1 *)(iVar3 + 0x904) = *(undefined1 *)(iVar3 + 0x8c4);
      *(undefined1 *)(iVar3 + 0x905) = *(undefined1 *)(iVar3 + 0x8c5);
      *(undefined1 *)(iVar3 + 0x906) = *(undefined1 *)(iVar3 + 0x8c6);
      *(byte *)(iVar3 + 0x907) = *(byte *)(iVar3 + 0x8c7);
      *(undefined8 *)(iVar3 + 0x918) = *(undefined8 *)(iVar3 + 0x8d8);
      *(undefined8 *)(iVar3 + 0x910) = *(undefined8 *)pfVar1;
      auVar21 = *pauVar2;
    }
    else {
      *(char *)(iVar3 + 0x908) = (char)uVar25;
      *(char *)(iVar3 + 0x909) = (char)((ulonglong)uVar25 >> 8);
      *(char *)(iVar3 + 0x90a) = (char)((ulonglong)uVar25 >> 0x10);
      *(byte *)(iVar3 + 0x90b) = (byte)((ulonglong)uVar25 >> 0x18) ^ 0x80;
      *(char *)(iVar3 + 0x90c) = (char)((ulonglong)uVar25 >> 0x20);
      *(char *)(iVar3 + 0x90d) = (char)((ulonglong)uVar25 >> 0x28);
      *(char *)(iVar3 + 0x90e) = (char)((ulonglong)uVar25 >> 0x30);
      *(byte *)(iVar3 + 0x90f) = (byte)((ulonglong)uVar25 >> 0x38) ^ 0x80;
      *(undefined1 *)(iVar3 + 0x900) = uVar44;
      *(undefined1 *)(iVar3 + 0x901) = *(undefined1 *)(iVar3 + 0x8c1);
      *(undefined1 *)(iVar3 + 0x902) = *(undefined1 *)(iVar3 + 0x8c2);
      *(byte *)(iVar3 + 0x903) = *(byte *)(iVar3 + 0x8c3) ^ 0x80;
      *(undefined1 *)(iVar3 + 0x904) = *(undefined1 *)(iVar3 + 0x8c4);
      *(undefined1 *)(iVar3 + 0x905) = *(undefined1 *)(iVar3 + 0x8c5);
      *(undefined1 *)(iVar3 + 0x906) = *(undefined1 *)(iVar3 + 0x8c6);
      *(byte *)(iVar3 + 0x907) = *(byte *)(iVar3 + 0x8c7) ^ 0x80;
      uVar25 = *(undefined8 *)(iVar3 + 0x8d8);
      *(undefined1 *)(iVar3 + 0x918) = *(undefined1 *)(iVar3 + 0x8d8);
      *(char *)(iVar3 + 0x919) = (char)((ulonglong)uVar25 >> 8);
      *(char *)(iVar3 + 0x91a) = (char)((ulonglong)uVar25 >> 0x10);
      *(byte *)(iVar3 + 0x91b) = (byte)((ulonglong)uVar25 >> 0x18) ^ 0x80;
      *(char *)(iVar3 + 0x91c) = (char)((ulonglong)uVar25 >> 0x20);
      *(char *)(iVar3 + 0x91d) = (char)((ulonglong)uVar25 >> 0x28);
      *(char *)(iVar3 + 0x91e) = (char)((ulonglong)uVar25 >> 0x30);
      *(byte *)(iVar3 + 0x91f) = (byte)((ulonglong)uVar25 >> 0x38) ^ 0x80;
      *(undefined1 *)(iVar3 + 0x910) = *(undefined1 *)pfVar1;
      *(undefined1 *)(iVar3 + 0x911) = *(undefined1 *)(iVar3 + 0x8d1);
      *(undefined1 *)(iVar3 + 0x912) = *(undefined1 *)(iVar3 + 0x8d2);
      *(byte *)(iVar3 + 0x913) = *(byte *)(iVar3 + 0x8d3) ^ 0x80;
      *(undefined1 *)(iVar3 + 0x914) = *(undefined1 *)(iVar3 + 0x8d4);
      *(undefined1 *)(iVar3 + 0x915) = *(undefined1 *)(iVar3 + 0x8d5);
      *(undefined1 *)(iVar3 + 0x916) = *(undefined1 *)(iVar3 + 0x8d6);
      *(byte *)(iVar3 + 0x917) = *(byte *)(iVar3 + 0x8d7) ^ 0x80;
      uVar25 = *(undefined8 *)(iVar3 + 0x8e8);
      auVar21._0_8_ =
           CONCAT17(*(undefined1 *)(iVar3 + 0x8e7),
                    CONCAT16(*(undefined1 *)(iVar3 + 0x8e6),
                             CONCAT15(*(undefined1 *)(iVar3 + 0x8e5),
                                      CONCAT14(*(undefined1 *)(iVar3 + 0x8e4),
                                               CONCAT13(*(undefined1 *)(iVar3 + 0x8e3),
                                                        CONCAT12(*(undefined1 *)(iVar3 + 0x8e2),
                                                                 (short)*(undefined8 *)*pauVar2)))))
                   ) ^ 0x8000000080000000;
      auVar21[8] = *(undefined1 *)(iVar3 + 0x8e8);
      auVar21[9] = (undefined1)((ulonglong)uVar25 >> 8);
      auVar21[10] = (undefined1)((ulonglong)uVar25 >> 0x10);
      auVar21[0xb] = (byte)((ulonglong)uVar25 >> 0x18) ^ 0x80;
      auVar21[0xc] = (undefined1)((ulonglong)uVar25 >> 0x20);
      auVar21[0xd] = (undefined1)((ulonglong)uVar25 >> 0x28);
      auVar21[0xe] = (undefined1)((ulonglong)uVar25 >> 0x30);
      auVar21[0xf] = (byte)((ulonglong)uVar25 >> 0x38) ^ 0x80;
    }
LAB_100074a0:
    *(longlong *)(iVar3 + 0x928) = auVar21._8_8_;
    *(longlong *)(iVar3 + 0x920) = auVar21._0_8_;
    *(undefined1 *)(param_1 + 0x22b) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x22b) = 0;
    iVar11 = -(uint)((float)*(undefined8 *)(iVar3 + 0x2b0) == 0.0);
    iVar23 = -(uint)((float)((ulonglong)*(undefined8 *)(iVar3 + 0x2b0) >> 0x20) == 0.0);
    iVar24 = -(uint)((float)*(undefined8 *)(iVar3 + 0x2b8) == 0.0);
    iVar26 = -(uint)((float)((ulonglong)*(undefined8 *)(iVar3 + 0x2b8) >> 0x20) == 1.0);
    bVar33 = (byte)_DAT_1009d430;
    bVar34 = (byte)((ulonglong)_DAT_1009d430 >> 0x20);
    bVar35 = (byte)uRam1009d438;
    bVar36 = (byte)((ulonglong)uRam1009d438 >> 0x20);
    uVar12 = CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((ulonglong)uRam1009d438 >> 0x18) |
                      (byte)((uint)iVar11 >> 0x18) & (byte)((ulonglong)_DAT_1009d430 >> 0x18),
                      CONCAT12((byte)((uint)iVar24 >> 0x10) &
                               (byte)((ulonglong)uRam1009d438 >> 0x10) |
                               (byte)((uint)iVar11 >> 0x10) &
                               (byte)((ulonglong)_DAT_1009d430 >> 0x10),
                               CONCAT11((byte)((uint)iVar24 >> 8) &
                                        (byte)((ulonglong)uRam1009d438 >> 8) |
                                        (byte)((uint)iVar11 >> 8) &
                                        (byte)((ulonglong)_DAT_1009d430 >> 8),
                                        (byte)iVar24 & bVar35 | (byte)iVar11 & bVar33)));
    if (((uint)(CONCAT17((byte)((uint)iVar26 >> 0x18) & (byte)((ulonglong)uRam1009d438 >> 0x38) |
                         (byte)((uint)iVar23 >> 0x18) & (byte)((ulonglong)_DAT_1009d430 >> 0x38),
                         CONCAT16((byte)((uint)iVar26 >> 0x10) &
                                  (byte)((ulonglong)uRam1009d438 >> 0x30) |
                                  (byte)((uint)iVar23 >> 0x10) &
                                  (byte)((ulonglong)_DAT_1009d430 >> 0x30),
                                  CONCAT15((byte)((uint)iVar26 >> 8) &
                                           (byte)((ulonglong)uRam1009d438 >> 0x28) |
                                           (byte)((uint)iVar23 >> 8) &
                                           (byte)((ulonglong)_DAT_1009d430 >> 0x28),
                                           CONCAT14((byte)iVar26 & bVar36 | (byte)iVar23 & bVar34,
                                                    uVar12)))) >> 0x20) | uVar12) == 0xf) {
      fVar30 = *(float *)(iVar3 + 0x280);
      fVar27 = *(float *)(iVar3 + 0x290);
      fVar13 = *(float *)(iVar3 + 0x2a0);
      fVar31 = *(float *)(iVar3 + 0x284);
      fVar28 = *(float *)(iVar3 + 0x294);
      fVar14 = *(float *)(iVar3 + 0x2a4);
      fVar32 = *(float *)(iVar3 + 0x288);
      fVar29 = *(float *)(iVar3 + 0x298);
      fVar15 = *(float *)(iVar3 + 0x2a8);
      fVar16 = fVar31 * fVar32 + fVar28 * fVar29 + fVar14 * fVar15;
      fVar17 = fVar30 * fVar32 + fVar27 * fVar29 + fVar13 * fVar15;
      auVar19._0_8_ =
           CONCAT17((char)((uint)fVar17 >> 0x18),
                    CONCAT16((char)((uint)fVar17 >> 0x10),
                             CONCAT15((char)((uint)fVar17 >> 8),
                                      CONCAT14(SUB41(fVar17,0),
                                               fVar30 * fVar31 + fVar27 * fVar28 + fVar13 * fVar14))
                            )) & 0x7fffffff7fffffff;
      auVar19[8] = SUB41(fVar16,0);
      auVar19[9] = (char)((uint)fVar16 >> 8);
      auVar19[10] = (char)((uint)fVar16 >> 0x10);
      auVar19[0xb] = (byte)((uint)fVar16 >> 0x18) & 0x7f;
      if (((bVar36 | -((float)(auVar19._0_8_ >> 0x20) < 0.001) & bVar34 |
           -(auVar19._8_4_ < 0.001) & bVar35 | -((float)auVar19._0_8_ < 0.001) & bVar33) & 7) == 7)
      {
        fVar16 = fVar27 * fVar27;
        fVar41 = fVar13 * fVar13;
        fVar17 = fVar28 * fVar28;
        fVar55 = fVar14 * fVar14;
        auVar40._0_4_ = fVar30 * fVar30 + fVar16 + fVar41;
        auVar40._4_4_ = fVar16 + fVar16 + fVar41;
        auVar40._8_4_ = fVar41 + fVar16 + fVar41;
        auVar40._12_4_ = fVar16 + 0.0 + fVar41;
        auVar37 = NEON_frsqrte(auVar40,4);
        fVar18 = auVar37._0_4_;
        auVar20._0_4_ = fVar18 * fVar18;
        auVar20._4_4_ = auVar37._4_4_ * auVar37._4_4_;
        auVar20._8_4_ = auVar37._8_4_ * auVar37._8_4_;
        auVar20._12_4_ = auVar37._12_4_ * auVar37._12_4_;
        auVar37 = NEON_frsqrts(auVar20,auVar40,4);
        fVar18 = fVar18 * auVar37._0_4_;
        fVar16 = fVar31 * fVar31 + fVar17 + fVar55;
        fVar41 = fVar17 + fVar17 + fVar55;
        uVar44 = (undefined1)((uint)fVar41 >> 8);
        uVar45 = (undefined1)((uint)fVar41 >> 0x10);
        uVar46 = (undefined1)((uint)fVar41 >> 0x18);
        fVar56 = fVar55 + fVar17 + fVar55;
        uVar47 = (undefined1)((uint)fVar56 >> 8);
        uVar48 = (undefined1)((uint)fVar56 >> 0x10);
        uVar49 = (undefined1)((uint)fVar56 >> 0x18);
        fVar55 = fVar17 + 0.0 + fVar55;
        uVar50 = (undefined1)((uint)fVar55 >> 8);
        uVar51 = (undefined1)((uint)fVar55 >> 0x10);
        uVar52 = (undefined1)((uint)fVar55 >> 0x18);
        auVar4[4] = SUB41(fVar41,0);
        auVar4._0_4_ = fVar16;
        auVar4[5] = uVar44;
        auVar4[6] = uVar45;
        auVar4[7] = uVar46;
        auVar4[8] = SUB41(fVar56,0);
        auVar4[9] = uVar47;
        auVar4[10] = uVar48;
        auVar4[0xb] = uVar49;
        auVar4[0xc] = SUB41(fVar55,0);
        auVar4[0xd] = uVar50;
        auVar4[0xe] = uVar51;
        auVar4[0xf] = uVar52;
        auVar37 = NEON_frsqrte(auVar4,4);
        fVar53 = auVar37._0_4_;
        auVar38._0_4_ = fVar53 * fVar53;
        auVar38._4_4_ = auVar37._4_4_ * auVar37._4_4_;
        auVar38._8_4_ = auVar37._8_4_ * auVar37._8_4_;
        auVar38._12_4_ = auVar37._12_4_ * auVar37._12_4_;
        auVar5[4] = SUB41(fVar41,0);
        auVar5._0_4_ = fVar16;
        auVar5[5] = uVar44;
        auVar5[6] = uVar45;
        auVar5[7] = uVar46;
        auVar5[8] = SUB41(fVar56,0);
        auVar5[9] = uVar47;
        auVar5[10] = uVar48;
        auVar5[0xb] = uVar49;
        auVar5[0xc] = SUB41(fVar55,0);
        auVar5[0xd] = uVar50;
        auVar5[0xe] = uVar51;
        auVar5[0xf] = uVar52;
        auVar37 = NEON_frsqrts(auVar38,auVar5,4);
        fVar17 = fVar29 * fVar29;
        fVar55 = fVar15 * fVar15;
        fVar53 = fVar53 * auVar37._0_4_;
        fVar16 = fVar32 * fVar32 + fVar17 + fVar55;
        fVar41 = fVar17 + fVar17 + fVar55;
        uVar44 = (undefined1)((uint)fVar41 >> 8);
        uVar45 = (undefined1)((uint)fVar41 >> 0x10);
        uVar46 = (undefined1)((uint)fVar41 >> 0x18);
        fVar56 = fVar55 + fVar17 + fVar55;
        uVar47 = (undefined1)((uint)fVar56 >> 8);
        uVar48 = (undefined1)((uint)fVar56 >> 0x10);
        uVar49 = (undefined1)((uint)fVar56 >> 0x18);
        fVar55 = fVar17 + 0.0 + fVar55;
        uVar50 = (undefined1)((uint)fVar55 >> 8);
        uVar51 = (undefined1)((uint)fVar55 >> 0x10);
        uVar52 = (undefined1)((uint)fVar55 >> 0x18);
        auVar6[4] = SUB41(fVar41,0);
        auVar6._0_4_ = fVar16;
        auVar6[5] = uVar44;
        auVar6[6] = uVar45;
        auVar6[7] = uVar46;
        auVar6[8] = SUB41(fVar56,0);
        auVar6[9] = uVar47;
        auVar6[10] = uVar48;
        auVar6[0xb] = uVar49;
        auVar6[0xc] = SUB41(fVar55,0);
        auVar6[0xd] = uVar50;
        auVar6[0xe] = uVar51;
        auVar6[0xf] = uVar52;
        auVar37 = NEON_frsqrte(auVar6,4);
        fVar17 = auVar37._0_4_;
        auVar39._0_4_ = fVar17 * fVar17;
        auVar39._4_4_ = auVar37._4_4_ * auVar37._4_4_;
        auVar39._8_4_ = auVar37._8_4_ * auVar37._8_4_;
        auVar39._12_4_ = auVar37._12_4_ * auVar37._12_4_;
        auVar7[4] = SUB41(fVar41,0);
        auVar7._0_4_ = fVar16;
        auVar7[5] = uVar44;
        auVar7[6] = uVar45;
        auVar7[7] = uVar46;
        auVar7[8] = SUB41(fVar56,0);
        auVar7[9] = uVar47;
        auVar7[10] = uVar48;
        auVar7[0xb] = uVar49;
        auVar7[0xc] = SUB41(fVar55,0);
        auVar7[0xd] = uVar50;
        auVar7[0xe] = uVar51;
        auVar7[0xf] = uVar52;
        auVar37 = NEON_frsqrts(auVar39,auVar7,4);
        fVar17 = fVar17 * auVar37._0_4_;
        auVar37 = NEON_fmov(0x3f800000,4);
        fVar16 = auVar37._8_4_ - fVar17;
        fVar41 = auVar37._12_4_ - 0.0;
        if (((-(ABS((float)(CONCAT17((char)((uint)fVar41 >> 0x18),
                                     CONCAT16((char)((uint)fVar41 >> 0x10),
                                              CONCAT15((char)((uint)fVar41 >> 8),
                                                       CONCAT14(SUB41(fVar41,0),fVar16)))) >> 0x20))
               < 0.001) & bVar36 | -(ABS(auVar37._4_4_ - fVar53) < 0.001) & bVar34 |
             -(ABS(fVar16) < 0.001) & bVar35 | -(ABS(auVar37._0_4_ - fVar18) < 0.001) & bVar33) & 7)
            == 7) {
          *(float *)(iVar3 + 0x908) = fVar18 * fVar13;
          *(float *)(iVar3 + 0x90c) = fVar18 * 0.0;
          *(float *)(iVar3 + 0x900) = fVar18 * fVar30;
          *(float *)(iVar3 + 0x904) = fVar18 * fVar27;
          *(float *)(iVar3 + 0x918) = fVar53 * fVar14;
          *(float *)(iVar3 + 0x91c) = fVar53 * 0.0;
          *(float *)(iVar3 + 0x910) = fVar53 * fVar31;
          *(float *)(iVar3 + 0x914) = fVar53 * fVar28;
          auVar21._0_4_ = fVar17 * fVar32;
          auVar21._4_4_ = fVar17 * fVar29;
          auVar21._8_4_ = fVar17 * fVar15;
          auVar21._12_4_ = fVar17 * 0.0;
          goto LAB_100074a0;
        }
      }
    }
  }
  *(char *)(param_1 + 0x229) = '\x01';
LAB_100074c4:
  return *(undefined1 *)(param_1 + 0x22b);
}

