/*
 * FUN_18001f668 at 18001f668
 * undefined __fastcall FUN_18001f668(longlong param_1, longlong param_2, uint * param_3, ulonglong param_4, uint param_5, uint * param_6, uint param_7)
 * Address ranges: 18001f668-1800207c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f668(longlong param_1,longlong param_2,uint *param_3,ulonglong param_4,uint param_5,
                  uint *param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  uVar17 = (ulonglong)param_7;
  iVar18 = *(int *)(param_1 + 0x6a8);
  if (*(int *)(param_1 + 0x538) == 0) {
    if (iVar18 == 1) {
      lVar10 = *(longlong *)(param_1 + 0xe10);
      uVar16 = 0;
      fVar20 = **(float **)(param_1 + 0xe08);
      if (param_5 >> 1 != 0) {
        do {
          uVar7 = *(uint *)((longlong)param_3 + (param_4 & 0xffffffff));
          uVar8 = *param_3;
          lVar11 = *(longlong *)(param_1 + 0xd80);
          param_3 = (uint *)((longlong)param_3 + (param_4 & 0xffffffff) * 2);
          pfVar1 = (float *)(param_2 + (ulonglong)(uVar16 * 4 + 2) * 0x10);
          pfVar2 = (float *)(param_2 + (ulonglong)(uVar16 * 4) * 0x10);
          fVar19 = ABS(*(float *)(lVar10 + 0x2c) * pfVar2[3] + *(float *)(lVar10 + 0x24) * pfVar2[1]
                       + *(float *)(lVar10 + 0x28) * pfVar2[2] + *(float *)(lVar10 + 0x20) * *pfVar2
                      ) * fVar20;
          iVar18 = (int)fVar19;
          uVar13 = (ulonglong)(uint)(int)((fVar19 - (float)iVar18) * 1024.0);
          if (iVar18 < 0) {
            fVar19 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar13 * 4) /
                     *(float *)(lVar11 + (longlong)-iVar18 * 4);
          }
          else {
            fVar19 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar13 * 4) *
                     *(float *)(lVar11 + (longlong)iVar18 * 4);
          }
          fVar26 = ABS(*(float *)(lVar10 + 0x2c) * pfVar1[3] + *(float *)(lVar10 + 0x24) * pfVar1[1]
                       + *(float *)(lVar10 + 0x28) * pfVar1[2] + *(float *)(lVar10 + 0x20) * *pfVar1
                      ) * fVar20;
          iVar18 = (int)fVar26;
          fVar26 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar26 - (float)iVar18) * 1024.0) * 4);
          if (iVar18 < 0) {
            fVar26 = fVar26 / *(float *)(lVar11 + (longlong)-iVar18 * 4);
          }
          else {
            fVar26 = fVar26 * *(float *)(lVar11 + (longlong)iVar18 * 4);
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          uVar16 = uVar16 + 1;
          if (1.0 <= fVar19) {
            fVar19 = 1.0;
          }
          if (1.0 <= fVar26) {
            fVar26 = 1.0;
          }
          *param_6 = (int)(fVar19 * 255.0) << 0x18 | uVar8 & 0xffffff;
          *(uint *)((longlong)param_6 + uVar17) = (int)(fVar26 * 255.0) << 0x18 | uVar7 & 0xffffff;
          param_6 = (uint *)((longlong)param_6 + uVar17 * 2);
        } while (uVar16 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      pfVar1 = (float *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      fVar20 = (pfVar1[3] * *(float *)(lVar10 + 0x2c) + pfVar1[1] * *(float *)(lVar10 + 0x24) +
               pfVar1[2] * *(float *)(lVar10 + 0x28) + *pfVar1 * *(float *)(lVar10 + 0x20)) * fVar20
      ;
    }
    else {
      if (iVar18 != 2) {
        if (iVar18 == 3) {
          lVar10 = *(longlong *)(param_1 + 0xe10);
          uVar16 = 0;
          fVar19 = **(float **)(param_1 + 0xe00) - **(float **)(param_1 + 0xdf8);
          fVar26 = 1.0;
          fVar20 = **(float **)(param_1 + 0xe00);
          if (param_5 >> 1 != 0) {
            do {
              fVar25 = *(float *)(lVar10 + 0x20);
              fVar24 = *(float *)(lVar10 + 0x24);
              fVar21 = *(float *)(lVar10 + 0x28);
              fVar22 = *(float *)(lVar10 + 0x2c);
              uVar14 = uVar16 * 4;
              uVar7 = *param_3;
              uVar8 = *(uint *)((longlong)param_3 + (param_4 & 0xffffffff));
              param_3 = (uint *)((longlong)param_3 + (param_4 & 0xffffffff) * 2);
              uVar16 = uVar16 + 1;
              pfVar1 = (float *)(param_2 + (ulonglong)uVar14 * 0x10);
              pfVar2 = (float *)(param_2 + (ulonglong)(uVar14 + 2) * 0x10);
              fVar23 = *pfVar2;
              fVar27 = pfVar2[1];
              fVar28 = pfVar2[2];
              fVar12 = pfVar2[3];
              fVar29 = (fVar20 - ABS(fVar22 * pfVar1[3] + fVar24 * pfVar1[1] +
                                     fVar21 * pfVar1[2] + fVar25 * *pfVar1)) / fVar19;
              if (fVar29 <= 0.0) {
                fVar29 = 0.0;
              }
              if (1.0 <= fVar29) {
                fVar29 = fVar26;
              }
              *param_6 = (int)(fVar29 * 255.0) << 0x18 | uVar7 & 0xffffff;
              fVar25 = (fVar20 - ABS(fVar22 * fVar12 + fVar24 * fVar27 +
                                     fVar21 * fVar28 + fVar25 * fVar23)) / fVar19;
              if (fVar25 <= 0.0) {
                fVar25 = 0.0;
              }
              if (1.0 <= fVar25) {
                fVar25 = fVar26;
              }
              *(uint *)((longlong)param_6 + uVar17) =
                   (int)(fVar25 * 255.0) << 0x18 | uVar8 & 0xffffff;
              param_6 = (uint *)((longlong)param_6 + uVar17 * 2);
            } while (uVar16 < param_5 >> 1);
          }
          if ((param_5 & 1) == 0) {
            return;
          }
          pfVar1 = (float *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
          fVar19 = (fVar20 - (pfVar1[3] * *(float *)(lVar10 + 0x2c) +
                              pfVar1[1] * *(float *)(lVar10 + 0x24) +
                             pfVar1[2] * *(float *)(lVar10 + 0x28) +
                             *pfVar1 * *(float *)(lVar10 + 0x20))) / fVar19;
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (1.0 <= fVar19) {
            fVar19 = fVar26;
          }
          *param_6 = (int)(fVar19 * 255.0) << 0x18 | *param_3 & 0xffffff;
          return;
        }
        uVar16 = param_5 >> 1;
        if (uVar16 != 0) {
          do {
            uVar7 = *(uint *)((longlong)param_3 + (param_4 & 0xffffffff));
            *param_6 = *param_3 | 0xff000000;
            *(uint *)((longlong)param_6 + uVar17) = uVar7 | 0xff000000;
            param_3 = (uint *)((longlong)param_3 + (param_4 & 0xffffffff) * 2);
            param_6 = (uint *)((longlong)param_6 + uVar17 * 2);
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        goto LAB_18002010c;
      }
      lVar10 = *(longlong *)(param_1 + 0xe10);
      uVar16 = 0;
      fVar20 = **(float **)(param_1 + 0xe08);
      if (param_5 >> 1 != 0) {
        do {
          uVar7 = *(uint *)((longlong)param_3 + (param_4 & 0xffffffff));
          uVar8 = *param_3;
          lVar11 = *(longlong *)(param_1 + 0xd80);
          param_3 = (uint *)((longlong)param_3 + (param_4 & 0xffffffff) * 2);
          pfVar1 = (float *)(param_2 + (ulonglong)(uVar16 * 4 + 2) * 0x10);
          pfVar2 = (float *)(param_2 + (ulonglong)(uVar16 * 4) * 0x10);
          fVar19 = ABS(*(float *)(lVar10 + 0x2c) * pfVar2[3] + *(float *)(lVar10 + 0x24) * pfVar2[1]
                       + *(float *)(lVar10 + 0x28) * pfVar2[2] + *(float *)(lVar10 + 0x20) * *pfVar2
                      ) * fVar20;
          fVar26 = ABS(*(float *)(lVar10 + 0x2c) * pfVar1[3] + *(float *)(lVar10 + 0x24) * pfVar1[1]
                       + *(float *)(lVar10 + 0x28) * pfVar1[2] + *(float *)(lVar10 + 0x20) * *pfVar1
                      ) * fVar20;
          fVar19 = fVar19 * fVar19;
          iVar18 = (int)fVar19;
          uVar13 = (ulonglong)(uint)(int)((fVar19 - (float)iVar18) * 1024.0);
          if (iVar18 < 0) {
            fVar19 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar13 * 4) /
                     *(float *)(lVar11 + (longlong)-iVar18 * 4);
          }
          else {
            fVar19 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar13 * 4) *
                     *(float *)(lVar11 + (longlong)iVar18 * 4);
          }
          fVar26 = fVar26 * fVar26;
          iVar18 = (int)fVar26;
          fVar26 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar26 - (float)iVar18) * 1024.0) * 4);
          if (iVar18 < 0) {
            fVar26 = fVar26 / *(float *)(lVar11 + (longlong)-iVar18 * 4);
          }
          else {
            fVar26 = fVar26 * *(float *)(lVar11 + (longlong)iVar18 * 4);
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          uVar16 = uVar16 + 1;
          if (1.0 <= fVar19) {
            fVar19 = 1.0;
          }
          if (1.0 <= fVar26) {
            fVar26 = 1.0;
          }
          *param_6 = (int)(fVar19 * 255.0) << 0x18 | uVar8 & 0xffffff;
          *(uint *)((longlong)param_6 + uVar17) = (int)(fVar26 * 255.0) << 0x18 | uVar7 & 0xffffff;
          param_6 = (uint *)((longlong)param_6 + uVar17 * 2);
        } while (uVar16 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      pfVar1 = (float *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      fVar20 = (pfVar1[3] * *(float *)(lVar10 + 0x2c) + pfVar1[1] * *(float *)(lVar10 + 0x24) +
               pfVar1[2] * *(float *)(lVar10 + 0x28) + *pfVar1 * *(float *)(lVar10 + 0x20)) * fVar20
      ;
      fVar20 = fVar20 * fVar20;
    }
    iVar18 = (int)fVar20;
    uVar17 = (ulonglong)(uint)(int)((fVar20 - (float)iVar18) * 1024.0);
    if (iVar18 < 0) {
      fVar20 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar17 * 4) /
               *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)-iVar18 * 4);
    }
    else {
      fVar20 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar17 * 4) *
               *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)iVar18 * 4);
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    if (1.0 <= fVar20) {
      fVar20 = 1.0;
    }
    *param_6 = (int)(fVar20 * 255.0) << 0x18 | *param_3 & 0xffffff;
  }
  else {
    if (iVar18 == 1) {
      uVar16 = 0;
      fVar20 = **(float **)(param_1 + 0xe08);
      fVar26 = 1.0;
      fVar19 = 0.0;
      if (param_5 >> 1 != 0) {
        do {
          uVar7 = *(uint *)((longlong)param_3 + (param_4 & 0xffffffff));
          pfVar9 = *(float **)(param_1 + 0xe10);
          uVar8 = *param_3;
          param_3 = (uint *)((longlong)param_3 + (param_4 & 0xffffffff) * 2);
          uVar13 = (ulonglong)(uVar16 * 4);
          uVar15 = (ulonglong)(uVar16 * 4 + 2);
          pfVar1 = (float *)(param_2 + uVar13 * 0x10);
          lVar10 = *(longlong *)(param_1 + 0xd80);
          pfVar2 = (float *)(param_2 + uVar13 * 0x10);
          pfVar3 = (float *)(param_2 + uVar15 * 0x10);
          pfVar4 = (float *)(param_2 + uVar13 * 0x10);
          pfVar5 = (float *)(param_2 + uVar15 * 0x10);
          pfVar6 = (float *)(param_2 + uVar15 * 0x10);
          fVar25 = pfVar9[3] * pfVar2[3] + pfVar9[1] * pfVar2[1] +
                   pfVar9[2] * pfVar2[2] + *pfVar9 * *pfVar2;
          fVar24 = pfVar9[7] * pfVar1[3] + pfVar9[5] * pfVar1[1] +
                   pfVar9[6] * pfVar1[2] + pfVar9[4] * *pfVar1;
          fVar21 = pfVar9[0xb] * pfVar4[3] + pfVar9[9] * pfVar4[1] +
                   pfVar9[10] * pfVar4[2] + pfVar9[8] * *pfVar4;
          fVar22 = pfVar9[3] * pfVar6[3] + pfVar9[1] * pfVar6[1] +
                   pfVar9[2] * pfVar6[2] + *pfVar9 * *pfVar6;
          fVar23 = pfVar9[7] * pfVar3[3] + pfVar9[5] * pfVar3[1] +
                   pfVar9[6] * pfVar3[2] + pfVar9[4] * *pfVar3;
          fVar27 = pfVar9[0xb] * pfVar5[3] + pfVar9[9] * pfVar5[1] +
                   pfVar9[10] * pfVar5[2] + pfVar9[8] * *pfVar5;
          fVar25 = SQRT(fVar25 * fVar25 + fVar21 * fVar21 + fVar24 * fVar24) * fVar20;
          iVar18 = (int)fVar25;
          uVar13 = (ulonglong)(uint)(int)((fVar25 - (float)iVar18) * 1024.0);
          if (iVar18 < 0) {
            fVar25 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar13 * 4) /
                     *(float *)(lVar10 + (longlong)-iVar18 * 4);
          }
          else {
            fVar25 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar13 * 4) *
                     *(float *)(lVar10 + (longlong)iVar18 * 4);
          }
          fVar24 = SQRT(fVar22 * fVar22 + fVar27 * fVar27 + fVar23 * fVar23) * fVar20;
          iVar18 = (int)fVar24;
          fVar24 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar24 - (float)iVar18) * 1024.0) * 4);
          if (iVar18 < 0) {
            fVar24 = fVar24 / *(float *)(lVar10 + (longlong)-iVar18 * 4);
          }
          else {
            fVar24 = fVar24 * *(float *)(lVar10 + (longlong)iVar18 * 4);
          }
          if (fVar25 <= 0.0) {
            fVar25 = fVar19;
          }
          if (fVar24 <= 0.0) {
            fVar24 = fVar19;
          }
          uVar16 = uVar16 + 1;
          if (1.0 <= fVar25) {
            fVar25 = fVar26;
          }
          if (1.0 <= fVar24) {
            fVar24 = fVar26;
          }
          *param_6 = (int)(fVar25 * 255.0) << 0x18 | uVar8 & 0xffffff;
          *(uint *)((longlong)param_6 + uVar17) = (int)(fVar24 * 255.0) << 0x18 | uVar7 & 0xffffff;
          param_6 = (uint *)((longlong)param_6 + uVar17 * 2);
        } while (uVar16 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      pfVar2 = *(float **)(param_1 + 0xe10);
      uVar16 = *param_3;
      pfVar1 = (float *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      fVar25 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      fVar23 = fVar22 * pfVar2[3] + fVar24 * pfVar2[1] + fVar21 * pfVar2[2] + fVar25 * *pfVar2;
      fVar27 = fVar22 * pfVar2[7] + fVar24 * pfVar2[5] + fVar21 * pfVar2[6] + fVar25 * pfVar2[4];
      fVar25 = fVar22 * pfVar2[0xb] + fVar24 * pfVar2[9] + fVar21 * pfVar2[10] + fVar25 * pfVar2[8];
      fVar20 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar27 * fVar27) * fVar20;
      iVar18 = (int)fVar20;
      uVar17 = (ulonglong)(uint)(int)((fVar20 - (float)iVar18) * 1024.0);
      if (iVar18 < 0) {
        fVar20 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar17 * 4) /
                 *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)-iVar18 * 4);
      }
      else {
        fVar20 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar17 * 4) *
                 *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)iVar18 * 4);
      }
      if (fVar20 <= 0.0) {
        fVar20 = fVar19;
      }
      if (1.0 <= fVar20) {
        fVar20 = fVar26;
      }
    }
    else {
      if (iVar18 != 2) {
        if (iVar18 == 3) {
          uVar16 = 0;
          fVar19 = **(float **)(param_1 + 0xe00) - **(float **)(param_1 + 0xdf8);
          fVar25 = 1.0;
          fVar20 = **(float **)(param_1 + 0xe00);
          fVar26 = 0.0;
          if (param_5 >> 1 != 0) {
            do {
              pfVar9 = *(float **)(param_1 + 0xe10);
              uVar7 = *param_3;
              uVar8 = *(uint *)((longlong)param_3 + (param_4 & 0xffffffff));
              uVar13 = (ulonglong)(uVar16 * 4);
              param_3 = (uint *)((longlong)param_3 + (param_4 & 0xffffffff) * 2);
              uVar15 = (ulonglong)(uVar16 * 4 + 2);
              pfVar1 = (float *)(param_2 + uVar13 * 0x10);
              pfVar2 = (float *)(param_2 + uVar13 * 0x10);
              pfVar3 = (float *)(param_2 + uVar15 * 0x10);
              pfVar4 = (float *)(param_2 + uVar13 * 0x10);
              pfVar5 = (float *)(param_2 + uVar15 * 0x10);
              pfVar6 = (float *)(param_2 + uVar15 * 0x10);
              fVar24 = pfVar9[3] * pfVar2[3] + pfVar9[1] * pfVar2[1] +
                       pfVar9[2] * pfVar2[2] + *pfVar9 * *pfVar2;
              fVar27 = pfVar9[7] * pfVar1[3] + pfVar9[5] * pfVar1[1] +
                       pfVar9[6] * pfVar1[2] + pfVar9[4] * *pfVar1;
              fVar28 = pfVar9[0xb] * pfVar4[3] + pfVar9[9] * pfVar4[1] +
                       pfVar9[10] * pfVar4[2] + pfVar9[8] * *pfVar4;
              fVar21 = pfVar9[3] * pfVar5[3] + pfVar9[1] * pfVar5[1] +
                       pfVar9[2] * pfVar5[2] + *pfVar9 * *pfVar5;
              fVar22 = pfVar9[7] * pfVar3[3] + pfVar9[5] * pfVar3[1] +
                       pfVar9[6] * pfVar3[2] + pfVar9[4] * *pfVar3;
              fVar23 = pfVar9[0xb] * pfVar6[3] + pfVar9[9] * pfVar6[1] +
                       pfVar9[10] * pfVar6[2] + pfVar9[8] * *pfVar6;
              fVar24 = (fVar20 - SQRT(fVar24 * fVar24 + fVar28 * fVar28 + fVar27 * fVar27)) / fVar19
              ;
              if (fVar24 <= 0.0) {
                fVar24 = fVar26;
              }
              if (1.0 <= fVar24) {
                fVar24 = fVar25;
              }
              *param_6 = (int)(fVar24 * 255.0) << 0x18 | uVar7 & 0xffffff;
              fVar24 = (fVar20 - SQRT(fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22)) / fVar19
              ;
              if (fVar24 <= 0.0) {
                fVar24 = fVar26;
              }
              uVar16 = uVar16 + 1;
              if (1.0 <= fVar24) {
                fVar24 = fVar25;
              }
              *(uint *)((longlong)param_6 + uVar17) =
                   (int)(fVar24 * 255.0) << 0x18 | uVar8 & 0xffffff;
              param_6 = (uint *)((longlong)param_6 + uVar17 * 2);
            } while (uVar16 < param_5 >> 1);
          }
          if ((param_5 & 1) == 0) {
            return;
          }
          pfVar2 = *(float **)(param_1 + 0xe10);
          pfVar1 = (float *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
          fVar24 = *pfVar1;
          fVar21 = pfVar1[1];
          fVar22 = pfVar1[2];
          fVar23 = pfVar1[3];
          fVar27 = fVar23 * pfVar2[3] + fVar21 * pfVar2[1] + fVar22 * pfVar2[2] + fVar24 * *pfVar2;
          fVar28 = fVar23 * pfVar2[7] + fVar21 * pfVar2[5] + fVar22 * pfVar2[6] + fVar24 * pfVar2[4]
          ;
          fVar24 = fVar23 * pfVar2[0xb] + fVar21 * pfVar2[9] +
                   fVar22 * pfVar2[10] + fVar24 * pfVar2[8];
          fVar19 = (fVar20 - SQRT(fVar27 * fVar27 + fVar24 * fVar24 + fVar28 * fVar28)) / fVar19;
          if (fVar19 <= 0.0) {
            fVar19 = fVar26;
          }
          if (1.0 <= fVar19) {
            fVar19 = fVar25;
          }
          *param_6 = (int)(fVar19 * 255.0) << 0x18 | *param_3 & 0xffffff;
          return;
        }
        uVar16 = param_5 >> 1;
        if (uVar16 != 0) {
          do {
            uVar7 = *(uint *)((longlong)param_3 + (param_4 & 0xffffffff));
            *param_6 = *param_3 | 0xff000000;
            *(uint *)((longlong)param_6 + uVar17) = uVar7 | 0xff000000;
            param_3 = (uint *)((longlong)param_3 + (param_4 & 0xffffffff) * 2);
            param_6 = (uint *)((longlong)param_6 + uVar17 * 2);
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
LAB_18002010c:
        if ((param_5 & 1) == 0) {
          return;
        }
        *param_6 = *param_3 | 0xff000000;
        return;
      }
      uVar16 = 0;
      fVar20 = **(float **)(param_1 + 0xe08);
      fVar26 = 1.0;
      fVar19 = 0.0;
      if (param_5 >> 1 != 0) {
        do {
          uVar7 = *(uint *)((longlong)param_3 + (param_4 & 0xffffffff));
          uVar8 = *param_3;
          param_3 = (uint *)((longlong)param_3 + (param_4 & 0xffffffff) * 2);
          pfVar2 = *(float **)(param_1 + 0xe10);
          pfVar1 = (float *)(param_2 + (ulonglong)(uVar16 * 4) * 0x10);
          fVar25 = *pfVar1;
          fVar24 = pfVar1[1];
          fVar21 = pfVar1[2];
          fVar22 = pfVar1[3];
          pfVar1 = (float *)(param_2 + (ulonglong)(uVar16 * 4 + 2) * 0x10);
          fVar23 = *pfVar1;
          fVar27 = pfVar1[1];
          fVar28 = pfVar1[2];
          fVar12 = pfVar1[3];
          lVar10 = *(longlong *)(param_1 + 0xd80);
          fVar29 = fVar22 * pfVar2[3] + fVar24 * pfVar2[1] + fVar21 * pfVar2[2] + fVar25 * *pfVar2;
          fVar30 = pfVar2[7] * fVar22 + pfVar2[5] * fVar24 + pfVar2[6] * fVar21 + pfVar2[4] * fVar25
          ;
          fVar22 = pfVar2[0xb] * fVar22 + pfVar2[9] * fVar24 +
                   pfVar2[10] * fVar21 + pfVar2[8] * fVar25;
          fVar25 = fVar12 * pfVar2[3] + fVar27 * pfVar2[1] + fVar28 * pfVar2[2] + fVar23 * *pfVar2;
          fVar24 = pfVar2[7] * fVar12 + pfVar2[5] * fVar27 + pfVar2[6] * fVar28 + pfVar2[4] * fVar23
          ;
          fVar21 = pfVar2[0xb] * fVar12 + pfVar2[9] * fVar27 +
                   pfVar2[10] * fVar28 + pfVar2[8] * fVar23;
          fVar22 = SQRT(fVar29 * fVar29 + fVar22 * fVar22 + fVar30 * fVar30) * fVar20;
          fVar22 = fVar22 * fVar22;
          iVar18 = (int)fVar22;
          fVar25 = SQRT(fVar25 * fVar25 + fVar21 * fVar21 + fVar24 * fVar24) * fVar20;
          uVar13 = (ulonglong)(uint)(int)((fVar22 - (float)iVar18) * 1024.0);
          if (iVar18 < 0) {
            fVar24 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar13 * 4) /
                     *(float *)(lVar10 + (longlong)-iVar18 * 4);
          }
          else {
            fVar24 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar13 * 4) *
                     *(float *)(lVar10 + (longlong)iVar18 * 4);
          }
          fVar25 = fVar25 * fVar25;
          iVar18 = (int)fVar25;
          fVar25 = *(float *)(*(longlong *)(param_1 + 0xd78) +
                             (ulonglong)(uint)(int)((fVar25 - (float)iVar18) * 1024.0) * 4);
          if (iVar18 < 0) {
            fVar25 = fVar25 / *(float *)(lVar10 + (longlong)-iVar18 * 4);
          }
          else {
            fVar25 = fVar25 * *(float *)(lVar10 + (longlong)iVar18 * 4);
          }
          if (fVar24 <= 0.0) {
            fVar24 = fVar19;
          }
          if (fVar25 <= 0.0) {
            fVar25 = fVar19;
          }
          uVar16 = uVar16 + 1;
          if (1.0 <= fVar24) {
            fVar24 = fVar26;
          }
          if (1.0 <= fVar25) {
            fVar25 = fVar26;
          }
          *param_6 = (int)(fVar24 * 255.0) << 0x18 | uVar8 & 0xffffff;
          *(uint *)((longlong)param_6 + uVar17) = (int)(fVar25 * 255.0) << 0x18 | uVar7 & 0xffffff;
          param_6 = (uint *)((longlong)param_6 + uVar17 * 2);
        } while (uVar16 < param_5 >> 1);
      }
      if ((param_5 & 1) == 0) {
        return;
      }
      pfVar2 = *(float **)(param_1 + 0xe10);
      uVar16 = *param_3;
      pfVar1 = (float *)(param_2 + (ulonglong)(param_5 * 2 - 2) * 0x10);
      fVar25 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      fVar23 = fVar22 * pfVar2[3] + fVar24 * pfVar2[1] + fVar21 * pfVar2[2] + fVar25 * *pfVar2;
      fVar27 = fVar22 * pfVar2[7] + fVar24 * pfVar2[5] + fVar21 * pfVar2[6] + fVar25 * pfVar2[4];
      fVar25 = fVar22 * pfVar2[0xb] + fVar24 * pfVar2[9] + fVar21 * pfVar2[10] + fVar25 * pfVar2[8];
      fVar20 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar27 * fVar27) * fVar20;
      fVar20 = fVar20 * fVar20;
      iVar18 = (int)fVar20;
      uVar17 = (ulonglong)(uint)(int)((fVar20 - (float)iVar18) * 1024.0);
      if (iVar18 < 0) {
        fVar20 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar17 * 4) /
                 *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)-iVar18 * 4);
      }
      else {
        fVar20 = *(float *)(*(longlong *)(param_1 + 0xd78) + uVar17 * 4) *
                 *(float *)(*(longlong *)(param_1 + 0xd80) + (longlong)iVar18 * 4);
      }
      if (fVar20 <= 0.0) {
        fVar20 = fVar19;
      }
      if (1.0 <= fVar20) {
        fVar20 = fVar26;
      }
    }
    *param_6 = (int)(fVar20 * 255.0) << 0x18 | uVar16 & 0xffffff;
  }
  return;
}

