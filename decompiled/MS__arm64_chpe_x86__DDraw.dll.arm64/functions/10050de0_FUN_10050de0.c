/*
 * FUN_10050de0 at 10050de0
 * undefined FUN_10050de0(void)
 * Address ranges: 10050de0-100512eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050de0(int param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6,
                 char param_7,int param_8,int param_9)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  uint local_2a8;
  uint uStack_2a4;
  undefined8 local_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined4 uStack_288;
  uint uStack_284;
  undefined8 local_280;
  undefined4 uStack_278;
  uint uStack_274;
  undefined8 local_270;
  undefined4 uStack_268;
  uint uStack_264;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  float afStack_238 [62];
  undefined1 auStack_140 [256];
  
  if (param_4 != 0) {
    auVar35 = NEON_fmov(0x3e400000,4);
    puVar1 = (uint *)(&DAT_100b3e80 + param_5 * 4);
    auVar35._4_4_ = 0x3f000000;
    uStack_2a4 = 0;
    auVar35._8_4_ = 0x3ea00000;
    auVar35._12_4_ = 0;
    local_2a8 = param_4;
    do {
      uVar20 = 0;
      iVar19 = param_1 + uStack_2a4 * param_2;
      puVar2 = (undefined8 *)(param_8 + (uStack_2a4 * param_9 >> 2));
      uVar3 = 4;
      if (local_2a8 - uStack_2a4 < 5) {
        uVar3 = local_2a8 - uStack_2a4;
      }
      if (param_3 != 0) {
        do {
          uVar4 = 4;
          if (param_3 - uVar20 < 5) {
            uVar4 = param_3 - uVar20;
          }
          if ((param_7 == '\0') && (param_6 == (uint *)0x0)) {
            *puVar2 = 0xffffffffffffffff;
          }
          else {
            local_2a0 = 0;
            uVar10 = 0;
            uStack_298 = 0;
            uVar11 = 1;
            uStack_294 = 0x3f800000;
            uVar12 = 0;
            fVar22 = 0.0;
            fVar23 = 1.0;
            iVar7 = iVar19;
            if (uVar3 != 0) {
              do {
                if (uVar4 != 0) {
                  uVar17 = 0;
                  do {
                    uVar13 = *(uint *)(iVar7 + uVar17 * 4);
                    if (((param_7 != '\0') &&
                        (uVar16 = uVar13 & *puVar1, uVar16 == *puVar1 || uVar16 == 0)) ||
                       ((param_6 != (uint *)0x0 && ((uVar13 & param_6[1]) == *param_6)))) {
                      uVar10 = uVar11 | uVar10;
                    }
                    uVar17 = uVar17 + 1;
                    uVar11 = uVar11 << 1;
                  } while (uVar17 < uVar4);
                }
                uVar12 = uVar12 + 1;
                iVar7 = iVar7 + param_2;
              } while (uVar12 < uVar3);
            }
            uVar12 = 6;
            if (uVar10 == 0) {
              uVar12 = 8;
            }
            FUN_100501c8(0,iVar19,param_2,uVar4,uVar3,param_5,&uStack_240);
            uStack_258 = 0;
            local_260 = 0;
            uStack_248 = 0;
            local_250 = 0;
            uVar21 = FUN_10050418(&uStack_240,uVar4,uVar3,uVar12,&local_260,&local_250);
            bVar6 = *(byte *)(param_5 + 0x100b3e78);
            uVar17 = (int)uStack_258._4_4_ << (ulonglong)(bVar6 & 0x1f);
            uVar11 = (int)uStack_248._4_4_ << (ulonglong)(bVar6 & 0x1f);
            if (uVar17 == uVar11) {
              uVar11 = uVar17 ^ *puVar1;
            }
            uVar13 = uVar11;
            if (uVar10 == 0) {
              if (uVar17 <= uVar11) goto LAB_10051024;
            }
            else if (uVar11 < uVar17) {
LAB_10051024:
              uVar13 = uVar17;
              uVar17 = uVar11;
            }
            uVar16 = (uint)bVar6;
            uStack_284 = uVar17 >> (ulonglong)(uVar16 & 0x1f);
            local_290 = 0;
            uStack_288 = 0;
            uStack_274 = uVar13 >> (ulonglong)(uVar16 & 0x1f);
            auVar25._12_4_ = uStack_284;
            auVar25._0_12_ = ZEXT812(0);
            uStack_278 = 0;
            local_280 = 0;
            *(char *)puVar2 = (char)(uVar17 >> 0x18);
            auVar31 = NEON_scvtf(auVar25,4);
            auVar29._12_4_ = uStack_274;
            auVar29._0_12_ = ZEXT812(0);
            *(char *)((int)puVar2 + 1) = (char)(uVar13 >> 0x18);
            iVar7 = uVar12 - 1;
            auVar29 = NEON_scvtf(auVar29,4);
            auVar33._4_4_ = iVar7;
            auVar33._0_4_ = iVar7;
            auVar33._8_4_ = iVar7;
            auVar33._12_4_ = iVar7;
            auVar25 = NEON_scvtf(auVar33,4);
            uVar11 = 0;
            do {
              auVar32._4_4_ = uVar11;
              auVar32._0_4_ = uVar11;
              auVar32._8_4_ = uVar11;
              auVar32._12_4_ = uVar11;
              uVar17 = uVar11 + 1;
              auVar33 = NEON_scvtf(auVar32,4);
              auVar34._0_8_ =
                   CONCAT44(((auVar25._4_4_ - auVar33._4_4_) * auVar31._4_4_ +
                            auVar33._4_4_ * auVar29._4_4_) / auVar25._4_4_,
                            ((auVar25._0_4_ - auVar33._0_4_) * auVar31._0_4_ +
                            auVar33._0_4_ * auVar29._0_4_) / auVar25._0_4_);
              auVar34._8_4_ =
                   ((auVar25._8_4_ - auVar33._8_4_) * auVar31._8_4_ + auVar33._8_4_ * auVar29._8_4_)
                   / auVar25._8_4_;
              auVar34._12_4_ =
                   ((auVar25._12_4_ - auVar33._12_4_) * auVar31._12_4_ +
                   auVar33._12_4_ * auVar29._12_4_) / auVar25._12_4_;
              *(longlong *)(afStack_238 + uVar11 * 4) = auVar34._8_8_;
              *(undefined8 *)(afStack_238 + uVar11 * 4 + -2) = auVar34._0_8_;
              uVar11 = uVar17;
            } while (uVar17 < uVar12);
            uVar15 = 0;
            uVar14 = 0;
            uVar11 = 0;
            iVar7 = iVar19;
            if (uVar3 != 0) {
              do {
                if (uVar4 != 0) {
                  uVar17 = 0;
                  puVar5 = (undefined *)0x100b3e38;
                  if (uVar10 == 0) {
                    puVar5 = &DAT_100b3e18;
                  }
                  do {
                    uVar18 = *(uint *)(iVar7 + uVar17 * 4);
                    uVar13 = uVar18 & *puVar1;
                    if ((param_6 == (uint *)0x0) ||
                       (bVar9 = true, (uVar18 & param_6[1]) != *param_6)) {
                      bVar9 = false;
                    }
                    if (((param_7 != '\0') && (uVar13 == 0)) || (bVar9)) {
                      uVar18 = 1;
                    }
                    else {
                      uVar18 = 0;
                    }
                    if ((uVar10 == 0) ||
                       ((uVar18 == 0 && (param_7 != '\0' && uVar13 != *puVar1 || bVar9)))) {
                      uStack_264 = uVar13 >> (ulonglong)(uVar16 & 0x1f);
                      local_270 = 0;
                      uStack_268 = 0;
                      uVar13 = 0;
                      auVar8._12_4_ = uStack_264;
                      auVar8._0_12_ = ZEXT812(0);
                      uVar18 = 0;
                      auVar25 = NEON_scvtf(auVar8,4);
                      auVar31 = ZEXT416(0x7f7fffff);
                      do {
                        fVar24 = (auVar25._0_4_ -
                                 (float)*(undefined8 *)(afStack_238 + uVar18 * 4 + -2)) *
                                 (float)uVar21;
                        fVar26 = (auVar25._4_4_ -
                                 (float)((ulonglong)*(undefined8 *)(afStack_238 + uVar18 * 4 + -2)
                                        >> 0x20)) * (float)((ulonglong)uVar21 >> 0x20);
                        fVar27 = (auVar25._8_4_ - afStack_238[uVar18 * 4]) * fVar22;
                        fVar28 = (auVar25._12_4_ -
                                 (float)((ulonglong)*(undefined8 *)(afStack_238 + uVar18 * 4) >>
                                        0x20)) * fVar23;
                        fVar27 = fVar27 * fVar27;
                        fVar28 = fVar28 * fVar28;
                        fVar26 = fVar26 * fVar26 + fVar28;
                        fVar24 = fVar26 + fVar24 * fVar24 + fVar27;
                        auVar30._0_8_ = CONCAT44(fVar26 + fVar26,fVar24);
                        auVar30._8_4_ = fVar26 + fVar27 + fVar27;
                        auVar30._12_4_ = fVar26 + fVar28 + fVar28;
                        if (fVar24 < auVar31._0_4_) {
                          auVar31._8_8_ = auVar30._8_8_;
                          auVar31._0_8_ = auVar30._0_8_;
                          uVar13 = uVar18;
                        }
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < uVar12);
                    }
                    else {
                      uVar13 = (uVar18 ^ 1) + 6;
                    }
                    uVar17 = uVar17 + 1;
                    uVar15 = (ulonglong)*(uint *)(puVar5 + uVar13 * 4) << (uVar14 & 0x3f) | uVar15;
                    uVar14 = (ulonglong)((int)uVar14 + 3);
                  } while (uVar17 < uVar4);
                }
                uVar11 = uVar11 + 1;
                iVar7 = iVar7 + param_2;
              } while (uVar11 < uVar3);
            }
            *(int *)((int)puVar2 + 2) = (int)uVar15;
            *(short *)((int)puVar2 + 6) = (short)(uVar15 >> 0x20);
          }
          FUN_100501c8(iVar19,param_2,uVar4,uVar3,param_5,auStack_140);
          FUN_100506b0(auVar35._0_8_,auStack_140,uVar4,uVar3,4,&uStack_2ac,&local_2b0,0);
          FUN_100507c0(auStack_140,uVar4,uVar3,4,uStack_2ac,local_2b0,puVar2 + 1,0);
          uVar20 = uVar20 + 4;
          iVar19 = iVar19 + 0x10;
          puVar2 = puVar2 + 2;
        } while (uVar20 < param_3);
      }
      uStack_2a4 = uStack_2a4 + 4;
    } while (uStack_2a4 < local_2a8);
  }
  return;
}

