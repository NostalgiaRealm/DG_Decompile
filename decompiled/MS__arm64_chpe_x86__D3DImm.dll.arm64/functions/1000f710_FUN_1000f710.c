/*
 * FUN_1000f710 at 1000f710
 * undefined FUN_1000f710(void)
 * Address ranges: 1000f710-1000fb93;10011cf8-10011ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f710(int param_1,int *param_2,int param_3,uint param_4)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte bVar36;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar32;
  
  puVar24 = (uint *)param_2[9];
  if (puVar24 == (uint *)0x0) {
    puVar24 = (uint *)(param_1 + 0x2c);
    param_2[9] = (int)puVar24;
  }
  uVar21 = uRam1009d438;
  uVar18 = _DAT_1009d430;
  uVar23 = puVar24[1];
  pfVar1 = (float *)(puVar24 + 4);
  uVar25 = puVar24[3];
  fVar26 = (float)*puVar24;
  fVar30 = (float)uVar23;
  auVar34._4_4_ = fVar30;
  auVar34._0_4_ = fVar26;
  fVar5 = *pfVar1;
  fVar31 = (float)(uVar25 + uVar23);
  uVar23 = puVar24[2];
  auVar28._0_4_ = (float)(uVar23 + *puVar24);
  auVar28._4_4_ = fVar31;
  fVar6 = (float)puVar24[5];
  piVar2 = param_2 + 0xb;
  iVar7 = *piVar2;
  uVar32 = CONCAT44(*(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(iVar7 + 8));
  uVar8 = *(undefined4 *)(iVar7 + 0x18);
  uVar27 = CONCAT44(*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0xc));
  uVar9 = *(undefined4 *)(iVar7 + 0x1c);
  if (*(char *)((int)param_2 + 0x1f) == '\0') {
    if (((*(char *)((int)param_2 + 0x21) != '\0') || ((char)param_2[8] != '\0')) &&
       (uVar23 = 0, param_4 != 0)) {
      auVar29._8_4_ = uVar9;
      auVar29._0_8_ = uVar27;
      auVar29._12_4_ = 0;
      auVar35._8_4_ = uVar8;
      auVar35._0_8_ = uVar32;
      auVar35._12_4_ = 0;
      do {
        uVar25 = uVar23;
        if (param_3 != 0) {
          uVar25 = (uint)*(ushort *)(param_3 + uVar23 * 2);
        }
        pauVar12 = (undefined1 (*) [12])(*param_2 + uVar25 * param_2[3]);
        fVar44 = (float)*(undefined8 *)(*pauVar12 + 8);
        fVar45 = (float)((ulonglong)*(undefined8 *)(*pauVar12 + 8) >> 0x20);
        auVar17 = *pauVar12;
        auVar16 = *pauVar12;
        fVar42 = (float)*(undefined8 *)*pauVar12;
        fVar43 = (float)((ulonglong)*(undefined8 *)*pauVar12 >> 0x20);
        if ((char)param_2[8] != '\0') {
          bVar36 = (byte)uVar18;
          bVar39 = (byte)((ulonglong)uVar18 >> 0x20);
          bVar40 = (byte)uVar21;
          bVar41 = (byte)((ulonglong)uVar21 >> 0x20);
          uVar10 = (uint)(byte)(-(fVar45 < 0.0) & bVar41 | -(fVar43 < fVar30) & bVar39 |
                               -(fVar44 < fVar5) & bVar40 | -(fVar42 < fVar26) & bVar36);
          bVar36 = -(0.0 <= fVar45) & bVar41 | -(fVar31 <= fVar43) & bVar39 |
                   -(fVar6 <= fVar44) & bVar40 | -(auVar28._0_4_ <= fVar42) & bVar36;
          uVar25 = *(uint *)(&DAT_1009d450 +
                            ((bVar36 & 2) << 2 | (uVar10 & 3) << 1 | bVar36 & 1) * 4);
          *(uint *)*piVar2 = uVar25 | *(uint *)*piVar2;
          *(uint *)(*piVar2 + 4) = (uVar25 | 0x2a) & *(uint *)(*piVar2 + 4);
          uVar25 = *(uint *)(&DAT_1009d440 + ((uVar10 & 4 | bVar36 >> 1 & 3) >> 1) * 4);
          *(uint *)*piVar2 = uVar25 | *(uint *)*piVar2;
          *(uint *)(*piVar2 + 4) = (uVar25 | 0x15) & *(uint *)(*piVar2 + 4);
        }
        uVar23 = uVar23 + 1;
        auVar14._12_4_ = fVar45;
        auVar14._0_12_ = auVar16;
        auVar35 = NEON_fmin(auVar35,auVar14,4);
        uVar32 = auVar35._0_8_;
        auVar15._12_4_ = fVar45;
        auVar15._0_12_ = auVar17;
        auVar29 = NEON_fmax(auVar29,auVar15,4);
        uVar27 = auVar29._0_8_;
      } while (uVar23 < param_4);
    }
LAB_10011e98:
    if (*(char *)((int)param_2 + 0x21) != '\0') {
      *(int *)(*piVar2 + 8) = (int)uVar32;
      *(int *)(*piVar2 + 0x10) = (int)((ulonglong)uVar32 >> 0x20);
      *(int *)(*piVar2 + 0xc) = (int)uVar27;
      *(int *)(*piVar2 + 0x14) = (int)((ulonglong)uVar27 >> 0x20);
    }
    return;
  }
  piVar3 = param_2 + 0x18;
  param_2[0x12] = (int)((float)puVar24[5] - *pfVar1);
  param_2[0x13] = 0x3f800000;
  param_2[0x10] = (int)((float)uVar23 * 0.5);
  param_2[0x11] = (int)((float)uVar25 * -0.5);
  uVar23 = puVar24[2];
  uVar25 = *puVar24;
  uVar10 = puVar24[3];
  uVar11 = puVar24[1];
  piVar4 = param_2 + 0x1c;
  param_2[0x16] = (int)*pfVar1;
  param_2[0x17] = 0;
  param_2[0x14] = (int)((float)uVar23 * 0.5 + (float)uVar25);
  param_2[0x15] = (int)((float)uVar10 * 0.5 + (float)uVar11);
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  piVar3[0] = 0;
  piVar3[1] = 0;
  uVar23 = *(uint *)(param_1 + 0x4f0) & 0x3f;
  *(bool *)(param_2 + 0x40) = uVar23 != 0;
  if ((char)param_2[8] != '\0') {
    if (uVar23 == 0) {
      *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) & 0xfffff03f;
    }
    else {
      uVar18 = *(undefined8 *)(param_1 + 0x230);
      *(undefined8 *)(param_2 + 0x22) = *(undefined8 *)(param_1 + 0x238);
      *(undefined8 *)(param_2 + 0x20) = uVar18;
      uVar18 = *(undefined8 *)(param_1 + 0x240);
      *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(param_1 + 0x248);
      *(undefined8 *)(param_2 + 0x24) = uVar18;
      uVar18 = *(undefined8 *)(param_1 + 0x250);
      *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(param_1 + 600);
      *(undefined8 *)(param_2 + 0x28) = uVar18;
      uVar18 = *(undefined8 *)(param_1 + 0x260);
      *(undefined8 *)(param_2 + 0x2e) = *(undefined8 *)(param_1 + 0x268);
      *(undefined8 *)(param_2 + 0x2c) = uVar18;
      uVar18 = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_2 + 0x32) = *(undefined8 *)(param_1 + 0x278);
      *(undefined8 *)(param_2 + 0x30) = uVar18;
      uVar18 = *(undefined8 *)(param_1 + 0x280);
      *(undefined8 *)(param_2 + 0x36) = *(undefined8 *)(param_1 + 0x288);
      *(undefined8 *)(param_2 + 0x34) = uVar18;
    }
  }
  if ((param_2[0xc] == 0) && ((char)param_2[0x40] == '\0')) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  *(undefined1 *)((int)param_2 + 0x101) = uVar22;
  *(bool *)((int)param_2 + 0x102) = param_2[1] != 0;
  uVar23 = param_2[6];
  if (*(uint *)(param_1 + 0x4ec) < (uint)param_2[6]) {
    uVar23 = *(uint *)(param_1 + 0x4ec);
  }
  if (uVar23 == 0) {
    if (param_2[10] == 0) {
      FUN_10006f00(param_1);
      param_2[10] = *(int *)(param_1 + 0x9cc) + 0x800;
    }
  }
  else {
    FUN_10006dc0(param_1);
    if (3 < uVar23) {
      if (param_4 == 0) {
        auVar38._8_4_ = uVar9;
        auVar38._0_8_ = uVar27;
        auVar38._12_4_ = 0;
        auVar33._8_4_ = uVar8;
        auVar33._0_8_ = uVar32;
        auVar33._12_4_ = 0;
      }
      else {
        fVar26 = (float)*(undefined8 *)piVar3 + -0.5;
        fVar30 = (float)((ulonglong)*(undefined8 *)piVar3 >> 0x20) + -0.5;
        fVar31 = (float)*(undefined8 *)(param_2 + 0x1a) + 0.0;
        fVar42 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20) + 0.0;
        *(ulonglong *)(param_2 + 0x1a) = CONCAT44(fVar42,fVar31);
        *(ulonglong *)piVar3 = CONCAT44(fVar30,fVar26);
        auVar37._0_8_ =
             CONCAT44((float)((ulonglong)*(undefined8 *)piVar4 >> 0x20) + 0.5,
                      (float)*(undefined8 *)piVar4 + 0.5);
        auVar37._8_4_ = (float)*(undefined8 *)(param_2 + 0x1e) + 0.0;
        auVar37._12_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20) + 0.0;
        auVar20._8_4_ = uVar8;
        auVar20._0_8_ = uVar32;
        auVar20._12_4_ = 0;
        *(longlong *)(param_2 + 0x1e) = auVar37._8_8_;
        *(undefined8 *)piVar4 = auVar37._0_8_;
        auVar13._4_4_ = fVar30;
        auVar13._0_4_ = fVar26;
        auVar13._8_4_ = fVar31;
        auVar13._12_4_ = fVar42;
        auVar33 = NEON_fmin(auVar13,auVar20,4);
        auVar19._8_4_ = uVar9;
        auVar19._0_8_ = uVar27;
        auVar19._12_4_ = 0;
        auVar38 = NEON_fmax(auVar37,auVar19,4);
      }
      auVar34._8_4_ = fVar5;
      auVar34._12_4_ = 0;
      auVar34 = NEON_fmax(auVar33,auVar34,4);
      uVar32 = auVar34._0_8_;
      auVar28._8_4_ = fVar6;
      auVar28._12_4_ = 0;
      auVar34 = NEON_fmin(auVar38,auVar28,4);
      uVar27 = auVar34._0_8_;
      goto LAB_10011e98;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1000fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_10010a78 + *(int *)(&DAT_10011ef4 + uVar23 * 4) * 4))();
  return;
}

