/*
 * FUN_100507c0 at 100507c0
 * undefined FUN_100507c0(void)
 * Address ranges: 100507c0-1005099f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100507c0(undefined8 param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6
                 ,uint param_7,uint *param_8,uint param_9)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float in_register_00005008;
  float in_register_0000500c;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  float afStack_a0 [2];
  undefined8 uStack_98;
  
  auVar12._4_4_ = (param_6 & 0x7e0 | param_6 >> 6 & 0x1f) >> 3;
  auVar12._0_4_ = param_6 >> 2 & 7 | (param_6 & 0x1f) << 3;
  auVar12._8_4_ = (param_6 & 0xf800 | param_6 >> 5 & 0x7ff) >> 8;
  auVar12._12_4_ = 0;
  auVar18 = NEON_scvtf(auVar12,4);
  auVar16._4_4_ = (param_7 & 0x7e0 | param_7 >> 6 & 0x1f) >> 3;
  auVar16._0_4_ = param_7 >> 2 & 7 | (param_7 & 0x1f) << 3;
  auVar16._8_4_ = (param_7 & 0xf800 | param_7 >> 5 & 0x7ff) >> 8;
  iVar3 = param_5 - 1;
  auVar16._12_4_ = 0;
  auVar16 = NEON_scvtf(auVar16,4);
  auVar21._4_4_ = iVar3;
  auVar21._0_4_ = iVar3;
  auVar21._8_4_ = iVar3;
  auVar21._12_4_ = iVar3;
  uVar6 = 0;
  auVar12 = NEON_scvtf(auVar21,4);
  if (param_5 != 0) {
    do {
      auVar20._4_4_ = uVar6;
      auVar20._0_4_ = uVar6;
      auVar20._8_4_ = uVar6;
      auVar20._12_4_ = uVar6;
      uVar10 = uVar6 + 1;
      auVar21 = NEON_scvtf(auVar20,4);
      *(float *)(&uStack_98 + uVar6 * 2) =
           ((auVar12._8_4_ - auVar21._8_4_) * auVar18._8_4_ + auVar21._8_4_ * auVar16._8_4_) /
           auVar12._8_4_;
      *(float *)((int)&uStack_98 + uVar6 * 0x10 + 4) =
           ((auVar12._12_4_ - auVar21._12_4_) * auVar18._12_4_ + auVar21._12_4_ * auVar16._12_4_) /
           auVar12._12_4_;
      afStack_a0[uVar6 * 4] =
           ((auVar12._0_4_ - auVar21._0_4_) * auVar18._0_4_ + auVar21._0_4_ * auVar16._0_4_) /
           auVar12._0_4_;
      afStack_a0[uVar6 * 4 + 1] =
           ((auVar12._4_4_ - auVar21._4_4_) * auVar18._4_4_ + auVar21._4_4_ * auVar16._4_4_) /
           auVar12._4_4_;
      uVar6 = uVar10;
    } while (uVar10 < param_5);
  }
  uVar9 = 0;
  uVar6 = 0;
  uVar7 = 1;
  uVar10 = 0;
  if (param_4 != 0) {
    do {
      uVar8 = 0;
      if (param_3 != 0) {
        puVar2 = (undefined4 *)0x100b3e68;
        if (param_9 == 0) {
          puVar2 = &DAT_100b3e58;
        }
        do {
          if ((uVar7 & param_9) == 0) {
            uVar4 = 0;
            puVar1 = (undefined8 *)(param_2 + (uVar8 + uVar10 * 4) * 0x10);
            uVar22 = puVar1[1];
            uVar19 = *puVar1;
            uVar5 = 0;
            auVar18 = ZEXT516(0x7f7fffff);
            if (param_5 != 0) {
              do {
                fVar11 = ((float)uVar19 - (float)*(undefined8 *)(afStack_a0 + uVar5 * 4)) *
                         (float)param_1;
                fVar13 = ((float)((ulonglong)uVar19 >> 0x20) -
                         (float)((ulonglong)*(undefined8 *)(afStack_a0 + uVar5 * 4) >> 0x20)) *
                         (float)((ulonglong)param_1 >> 0x20);
                fVar14 = ((float)uVar22 - *(float *)(&uStack_98 + uVar5 * 2)) * in_register_00005008
                ;
                fVar15 = ((float)((ulonglong)uVar22 >> 0x20) -
                         (float)((ulonglong)(&uStack_98)[uVar5 * 2] >> 0x20)) * in_register_0000500c
                ;
                fVar14 = fVar14 * fVar14;
                fVar15 = fVar15 * fVar15;
                fVar13 = fVar13 * fVar13 + fVar15;
                fVar11 = fVar13 + fVar11 * fVar11 + fVar14;
                auVar17._0_8_ = CONCAT44(fVar13 + fVar13,fVar11);
                auVar17._8_4_ = fVar13 + fVar14 + fVar14;
                auVar17._12_4_ = fVar13 + fVar15 + fVar15;
                if (fVar11 < auVar18._0_4_) {
                  auVar18._8_8_ = auVar17._8_8_;
                  auVar18._0_8_ = auVar17._0_8_;
                  uVar4 = uVar5;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < param_5);
            }
          }
          else {
            uVar4 = 3;
          }
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 << 1;
          uVar9 = puVar2[uVar4] << (ulonglong)(uVar6 & 0x1f) | uVar9;
          uVar6 = uVar6 + 2;
        } while (uVar8 < param_3);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_4);
  }
  *param_8 = param_6 | param_7 << 0x10;
  param_8[1] = uVar9;
  return;
}

