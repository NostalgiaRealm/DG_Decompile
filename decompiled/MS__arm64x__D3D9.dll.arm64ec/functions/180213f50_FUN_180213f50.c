/*
 * FUN_180213f50 at 180213f50
 * undefined FUN_180213f50(void)
 * Address ranges: 180213f50-180214c0b;180214c18-180214c4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180213f50(int *param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined *puVar25;
  uint uVar26;
  uint extraout_w11;
  int extraout_w11_00;
  int iVar27;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  uint extraout_w12;
  int extraout_w12_00;
  uint extraout_w15;
  uint extraout_w15_00;
  longlong extraout_x15;
  ulonglong extraout_x15_00;
  ulonglong extraout_x15_01;
  ulonglong extraout_x15_02;
  ulonglong extraout_x15_03;
  longlong extraout_x15_04;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint local_d8 [32];
  uint local_58 [6];
  
  uVar29 = (ulonglong)(((uint)(param_3 >> 0x1f) & 1) + 1);
  uVar13 = (uint)param_3;
  if ((int)uVar13 < 0) {
    puVar2 = (undefined4 *)((-param_4 & 3U) + param_4);
    param_4 = (-param_4 & 3U | 8) + param_4;
    local_d8[1] = *puVar2;
  }
  uVar30 = 0;
  uVar11 = 0;
  lVar21 = 0;
  uVar12 = 1;
  if ((uVar13 & 0x7ff) == 0x26 || (uVar13 & 0x7ff) == 0x4d) {
    uVar12 = 2;
  }
  uVar18 = (ulonglong)uVar12;
  do {
    puVar3 = (uint *)((-param_4 & 3U) + param_4);
    uVar12 = *puVar3;
    param_4 = (-param_4 & 3U | 8) + param_4;
    if (uVar12 == 0) break;
    if (uVar11 == 0) {
      if (uVar12 != 0xffffffff) goto LAB_18021401c;
    }
    else {
      if (uVar12 == 0xffffffff) {
        do {
          puVar3 = (uint *)((-param_4 & 3U) + param_4);
          uVar12 = *puVar3;
          param_4 = (-param_4 & 3U | 8) + param_4;
        } while (uVar12 == 0xffffffff);
      }
LAB_18021401c:
      uVar14 = lVar21 - (longlong)puVar3 & 3;
      pbVar1 = (byte *)(uVar14 + param_4);
      if ((uVar12 & 0x40000000) == 0) {
        param_4 = (uVar14 | 8) + param_4;
        uVar19 = 0;
        uVar31 = 0;
      }
      else {
        uVar17 = lVar21 - (uVar14 + param_4) & 3;
        lVar4 = uVar17 + uVar14 + param_4;
        param_4 = uVar17 + (uVar14 | 0x10) + param_4;
        uVar19 = *(uint *)(lVar4 + 8);
        if (uVar19 == 0xffffffff) {
          do {
            puVar3 = (uint *)((-param_4 & 3U) + param_4);
            param_4 = (-param_4 & 3U | 8) + param_4;
            uVar19 = *puVar3;
          } while (uVar19 == 0xffffffff);
          uVar14 = lVar21 - (longlong)puVar3;
        }
        else {
          uVar14 = -lVar4 - 0x10;
        }
        uVar31 = *(undefined4 *)((uVar14 & 3) + param_4);
        param_4 = (uVar14 & 3 | 8) + param_4;
      }
      uVar10 = 0;
      if ((uVar12 & 0x40000000) != 0) {
        uVar10 = 0x600000;
      }
      uVar30 = uVar12 >> 0x12 & 3;
      local_d8[uVar29] =
           ~(uVar12 >> 0x1c) & 2 |
           (uVar12 & 0x30000 | uVar10 | uVar12 & 0x3f00 |
           ((1 << (ulonglong)(uVar12 >> 0x14 & 7)) + 0xffU & (uint)*pbVar1) << (ulonglong)uVar30 &
           0xff) << 4;
      uVar10 = uVar12 & 0xff;
      if (0x10000 < (uVar12 & 0x30000)) {
        uVar10 = uVar12 >> 0xe & 3;
      }
      uVar16 = uVar12 >> 0x10 & 3;
      local_d8[uVar29 + 1] = uVar10;
      local_d8[uVar29 + 2] = uVar12 & 0xff;
      if ((uVar12 & 0x40000000) == 0) {
        iVar22 = 1;
      }
      else {
        uVar11 = FUN_180213900(uVar19,uVar31,1,param_4,0,0);
        local_d8[uVar29 + (uVar16 + 1)] = uVar11;
        local_d8[uVar29 + (uVar16 + 2)] = uVar19 & 0xff;
        iVar22 = 3;
        lVar21 = extraout_x15;
        uVar11 = extraout_w12;
        uVar12 = extraout_w11;
      }
      uVar29 = (ulonglong)(iVar22 + uVar16 + (int)uVar29);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < (uint)uVar18);
  if (uVar12 != 0) {
    lVar21 = (-param_4 & 3U | 8) + param_4;
    uVar11 = *(uint *)((-param_4 & 3U) + param_4);
    while (uVar11 != 0) {
      uVar18 = (ulonglong)uVar11;
      if (uVar11 != 0xffffffff) {
        uVar14 = -lVar21 & 3;
        uVar12 = *(uint *)(uVar14 + lVar21);
        uVar19 = uVar11 >> 8 & 0x3f;
        lVar4 = uVar14 + lVar21;
        uVar16 = uVar12 & 0xff;
        bVar9 = (uVar12 & 0x100) != 0;
        uVar10 = uVar16;
        if ((bVar9) && (uVar26 = uVar30, uVar30 != 0)) {
          do {
            uVar26 = uVar26 - 1;
            uVar10 = uVar10 & 0xfffffc03 | (uVar10 & 0x3f) << 2;
          } while ((char)uVar26 != '\0');
        }
        uVar12 = uVar12 + uVar30 & 0xff;
        if (!bVar9) {
          uVar12 = uVar16;
        }
        iVar22 = (int)uVar29;
        if (uVar19 - 8 < 2) {
          uVar17 = -lVar4 - 8U & 3;
          lVar4 = uVar17 + lVar4;
          uVar19 = *(uint *)(lVar4 + 8);
          if ((uVar11 & 0x40000000) == 0) {
            lVar21 = uVar17 + (uVar14 | 0x10) + lVar21;
            uVar16 = 0;
            uVar31 = 0;
          }
          else {
            uVar15 = -lVar4 - 0x10U & 3;
            lVar4 = uVar15 + lVar4;
            uVar16 = *(uint *)(lVar4 + 0x10);
            lVar21 = uVar15 + uVar17 + (uVar14 | 0x18) + lVar21;
            if (uVar16 == 0xffffffff) {
              do {
                puVar3 = (uint *)((-lVar21 & 3U) + lVar21);
                lVar21 = (-lVar21 & 3U | 8) + lVar21;
                uVar16 = *puVar3;
              } while (uVar16 == 0xffffffff);
              uVar14 = -(longlong)puVar3 - 8;
            }
            else {
              uVar14 = -lVar4 - 0x18;
            }
            uVar31 = *(undefined4 *)((uVar14 & 3) + lVar21);
            lVar21 = (uVar14 & 3 | 8) + lVar21;
          }
          uVar26 = uVar11 & 0x10000000;
          if ((uVar11 & 0x10000000) == 0) {
            uVar12 = uVar10;
          }
          uVar10 = 0;
          if ((uVar11 & 0x700000) == 0x100000) {
            puVar25 = &DAT_18022c414;
LAB_180214714:
            uVar28 = (uint)(byte)puVar25[(ulonglong)(uVar19 >> 2) & 3];
          }
          else {
            if ((uVar11 & 0x700000) == 0x200000) {
              puVar25 = &DAT_18023918c;
              goto LAB_180214714;
            }
            uVar28 = 0xe4;
            if ((uVar11 & 0x700000) == 0x300000) {
              puVar25 = &DAT_180239188;
              goto LAB_180214714;
            }
          }
          uVar7 = uVar11 >> 0x10 & 3;
          uVar24 = uVar7 + 1;
          if ((1 < uVar24) && (*param_1 != 0x30051 && (*param_1 - 0x51U & 0xfffcffff) == 0)) {
            uVar24 = uVar7 + 2;
          }
          if ((uVar11 & 0x40000000) == 0) {
            uVar10 = uVar11 & 0x3f00 | (uVar24 & 3) << 0x10;
            if (uVar26 == 0) {
              uVar12 = ((((uVar28 >> (ulonglong)((uVar12 >> 6) << 1) & 3) << 2 |
                         uVar28 >> (ulonglong)((uVar12 >> 4 & 3) << 1) & 3) << 2 |
                        uVar28 >> (ulonglong)((uVar12 >> 2 & 3) << 1) & 3) << 2 |
                        uVar28 >> (ulonglong)((uVar12 & 3) << 1) & 3 | uVar10) << 4;
              uVar10 = uVar12 | 0x80000006;
              uVar12 = uVar12 | 6;
            }
            else {
              uVar10 = uVar10 | uVar12 & 3;
              uVar12 = uVar10 << 4 | 10;
              uVar10 = uVar10 << 4 | 0x8000000a;
            }
            local_d8[uVar29] = uVar12;
            bVar9 = (uVar11 & 0x88000000) != 0;
            if (bVar9) {
              local_d8[uVar29] = uVar10;
              local_d8[uVar29 + 1] =
                   *(uint *)(&DAT_180239190 +
                            ((uVar18 & 0x8000000 | (ulonglong)(uVar11 >> 5)) >> 0x1a) * 4);
            }
            uVar10 = (uint)bVar9;
            uVar12 = uVar10 + 1;
            if (uVar24 != 1) {
              if (uVar24 == 2) {
                local_d8[uVar29 + uVar12] = uVar11 & 0xff;
                uVar12 = uVar10 | 2;
              }
              else if (uVar24 == 3) {
                local_d8[uVar29 + uVar12] = uVar11 & 0xff;
                local_d8[uVar29 + (uVar10 + 2)] = uVar11 & 0xff;
                uVar12 = uVar10 + 3;
              }
            }
            local_d8[uVar29 + uVar12] = uVar19 >> 4;
            iVar23 = uVar12 + 1;
            iVar27 = 0;
          }
          else {
            if (uVar24 == 1) {
              if (uVar26 == 0) {
                uVar12 = uVar11 & 0x3f00 | 0x10000 |
                         (((uVar28 >> (ulonglong)((uVar12 >> 6) << 1) & 3) << 2 |
                          uVar28 >> (ulonglong)((uVar12 >> 4 & 3) << 1) & 3) << 2 |
                         uVar28 >> (ulonglong)((uVar12 >> 2 & 3) << 1) & 3) << 2 |
                         uVar28 >> (ulonglong)((uVar12 & 3) << 1) & 3;
                uVar26 = uVar12 << 4 | 0xc00006;
                uVar10 = 0x80c00006;
              }
              else {
                uVar12 = uVar11 & 0x3f00 | 0x10000 | uVar12 & 3;
                uVar26 = uVar12 << 4 | 0xc0000a;
                uVar10 = 0x80c0000a;
              }
              local_d8[uVar29] = uVar26;
              bVar9 = (uVar11 & 0x88000000) != 0;
              if (bVar9) {
                local_d8[uVar29] = uVar10 | uVar12 << 4;
                local_d8[uVar29 + 1] =
                     *(uint *)(&DAT_180239190 +
                              ((uVar18 & 0x8000000 | (ulonglong)(uVar11 >> 5)) >> 0x1a) * 4);
              }
              uVar10 = bVar9 + 1;
            }
            else if (uVar24 == 2) {
              uVar10 = uVar11 & 0x3f00 | 0x20000;
              if (uVar26 == 0) {
                uVar10 = (((uVar28 >> (ulonglong)((uVar12 >> 6) << 1) & 3) << 2 |
                          uVar28 >> (ulonglong)((uVar12 >> 4 & 3) << 1) & 3) << 2 |
                         uVar28 >> (ulonglong)((uVar12 >> 2 & 3) << 1) & 3) << 2 |
                         uVar28 >> (ulonglong)((uVar12 & 3) << 1) & 3 | uVar10;
                uVar26 = uVar10 << 4 | 0x6000006;
                uVar12 = 0x86000006;
              }
              else {
                uVar10 = uVar10 | uVar12 & 3;
                uVar26 = uVar10 << 4 | 0x600000a;
                uVar12 = 0x8600000a;
              }
              local_d8[uVar29] = uVar26;
              bVar9 = (uVar11 & 0x88000000) != 0;
              if (bVar9) {
                local_d8[uVar29] = uVar12 | uVar10 << 4;
                local_d8[uVar29 + 1] =
                     *(uint *)(&DAT_180239190 +
                              ((uVar18 & 0x8000000 | (ulonglong)(uVar11 >> 5)) >> 0x1a) * 4);
              }
              uVar10 = (uint)bVar9;
              local_d8[uVar29 + (uVar10 + 1)] = uVar11 & 0xff;
              uVar10 = uVar10 | 2;
            }
            else if (uVar24 == 3) {
              uVar10 = uVar11 & 0x3f00 | 0x30000;
              if (uVar26 == 0) {
                uVar10 = (((uVar28 >> (ulonglong)((uVar12 >> 6) << 1) & 3) << 2 |
                          uVar28 >> (ulonglong)((uVar12 >> 4 & 3) << 1) & 3) << 2 |
                         uVar28 >> (ulonglong)((uVar12 >> 2 & 3) << 1) & 3) << 2 |
                         uVar28 >> (ulonglong)((uVar12 & 3) << 1) & 3 | uVar10;
                uVar26 = uVar10 << 4 | 0x30000006;
                uVar12 = 0xb0000006;
              }
              else {
                uVar10 = uVar10 | uVar12 & 3;
                uVar26 = uVar10 << 4 | 0x3000000a;
                uVar12 = 0xb000000a;
              }
              local_d8[uVar29] = uVar26;
              bVar9 = (uVar11 & 0x88000000) != 0;
              if (bVar9) {
                local_d8[uVar29] = uVar12 | uVar10 << 4;
                local_d8[uVar29 + 1] =
                     *(uint *)(&DAT_180239190 +
                              ((uVar18 & 0x8000000 | (ulonglong)(uVar11 >> 5)) >> 0x1a) * 4);
              }
              uVar12 = (uint)bVar9;
              local_d8[uVar29 + (uVar12 + 1)] = uVar11 & 0xff;
              uVar10 = uVar12 + 3;
              local_d8[uVar29 + (uVar12 + 2)] = uVar11 & 0xff;
            }
            local_d8[uVar29 + uVar10] = uVar19 >> 4;
            uVar12 = FUN_180213900(uVar16,uVar31,1,uVar16,0,0);
            local_d8[extraout_x15_04 + (ulonglong)(extraout_w12_00 + 1)] = uVar12;
            iVar23 = extraout_w12_00 + 3;
            local_d8[extraout_x15_04 + (ulonglong)(extraout_w12_00 + 2)] = uVar16 & 0xff;
            iVar27 = extraout_w11_00;
          }
          if ((uVar11 & 0x3f00) == 0x800) {
            uVar11 = 1 << (ulonglong)(uVar11 & 0x1f);
            param_1[2] = param_1[2] | uVar11;
            if (iVar27 != 0) {
              param_1[1] = param_1[1] | uVar11;
            }
          }
          uVar29 = (ulonglong)(uint)(iVar23 + iVar22);
        }
        else {
          lVar20 = (uVar14 | 8) + lVar21;
          if ((uVar11 & 0x3f00) == 0x400) {
            uVar18 = 0;
            uVar19 = uVar11 >> 0x14 & 7;
            lVar21 = lVar20;
            if (uVar19 != 0) {
              do {
                lVar21 = (-lVar20 & 3U | 8) + lVar20;
                local_58[uVar18] =
                     *(uint *)((-lVar20 & 3U) + lVar20) & (~(uVar11 << 4) | 0x7fffffff) ^
                     (int)uVar11 >> 0x1f & 0x80000000U;
                uVar16 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar16;
                lVar20 = lVar21;
              } while (uVar16 < uVar19);
            }
            if ((uVar11 >> 0x16 & 1) == 0) {
              uVar10 = 0;
              uVar12 = 0x4001;
            }
            else {
              uVar16 = uVar11 & 0x700000;
              uVar26 = 2;
              if (uVar16 != 0x400000) {
                uVar26 = (uint)(uVar16 == 0x100000);
              }
              if ((uVar11 >> 0x1c & 1) == 0) {
                uVar11 = 0x4e40;
                if (uVar16 == 0x100000) {
                  uVar11 = 0x4e41;
                }
                uVar12 = 0x4e46;
                if (uVar16 != 0x400000) {
                  uVar12 = uVar11;
                }
              }
              else {
                uVar10 = 0xe4;
                uVar12 = uVar26 | (uVar12 & 3) << 4 | 0x4008;
              }
            }
            local_d8[uVar29] = uVar12;
            uVar11 = 0;
            if (uVar19 != 0) {
              do {
                uVar16 = uVar11 & 0x7f;
                uVar12 = uVar11 + iVar22 + 1;
                uVar11 = uVar11 + 1;
                local_d8[uVar12] =
                     local_58[(ulonglong)(uVar10 >> ((ulonglong)(uVar16 << 1) & 0x3f)) & 3];
              } while (uVar11 < uVar19);
            }
            uVar29 = (ulonglong)(uVar19 + iVar22 + 1);
          }
          else {
            if ((uVar11 & 0x40000000) == 0) {
              uVar31 = 0;
              lVar21 = lVar20;
            }
            else {
              uVar17 = -lVar4 - 8U & 3;
              lVar4 = uVar17 + lVar4;
              lVar21 = uVar17 + (uVar14 | 0x10) + lVar21;
              if (*(int *)(lVar4 + 8) == -1) {
                do {
                  piVar5 = (int *)((-lVar21 & 3U) + lVar21);
                  lVar21 = (-lVar21 & 3U | 8) + lVar21;
                } while (*piVar5 == -1);
                uVar14 = -(longlong)piVar5 - 8;
              }
              else {
                uVar14 = -lVar4 - 0x10;
              }
              uVar31 = *(undefined4 *)((uVar14 & 3) + lVar21);
              lVar21 = (uVar14 & 3 | 8) + lVar21;
            }
            uVar16 = uVar11 & 0x10000000;
            if ((uVar11 & 0x10000000) == 0) {
              uVar12 = uVar10;
            }
            uVar10 = uVar11 & 0xff;
            uVar26 = uVar10;
            if (0x10000 < (uVar11 & 0x30000)) {
              uVar26 = uVar11 >> 0xe & 3;
            }
            uVar28 = uVar11 >> 0x10 & 3;
            if ((uVar19 - 6 < 2) &&
               ((*param_1 != 0x30051 && (*param_1 - 0x51U & 0xfffcffff) == 0) &&
                (uVar11 & 0x30000) == 0x10000)) {
              uVar28 = uVar28 + 1;
            }
            uVar19 = ~(uVar11 >> 0x1b) & 4;
            if ((uVar11 & 0x88000000) == 0) {
              uVar24 = uVar11;
              if ((uVar11 & 0x40000000) == 0) {
                if (uVar16 == 0) {
                  uVar12 = FUN_180213838(uVar18,uVar12,uVar28,uVar19,0,0);
                }
                else {
                  uVar12 = FUN_180213900();
                }
                local_d8[uVar29] = uVar12;
                local_d8[uVar29 + 1] = uVar26;
                local_d8[uVar29 + 2] = uVar10;
                iVar23 = 1;
              }
              else {
                uVar6 = 3;
                uVar8 = 0;
                if (uVar28 < 2) {
                  uVar6 = 0;
                  uVar8 = 3;
                }
                if (uVar16 == 0) {
                  uVar12 = FUN_180213838(uVar18,uVar12,uVar28,uVar19,uVar8,uVar6);
                  uVar18 = extraout_x15_03;
                }
                else {
                  uVar12 = FUN_180213900();
                  uVar18 = extraout_x15_02;
                }
                local_d8[uVar29] = uVar12;
                local_d8[uVar29 + 1] = uVar26;
                local_d8[uVar29 + 2] = uVar10;
                uVar12 = FUN_180213900(uVar18 & 0xffffffff,uVar31,1);
                local_d8[uVar29 + (extraout_x11_00 & 0xffffffff)] = uVar12;
                local_d8[uVar29 + (uVar28 + 2)] = extraout_w15_00 & 0xff;
                iVar23 = 3;
              }
            }
            else if ((uVar11 & 0x40000000) == 0) {
              if (uVar16 == 0) {
                uVar12 = FUN_180213838(uVar18,uVar12,uVar28,uVar19,0,0);
              }
              else {
                uVar12 = FUN_180213900();
              }
              uVar24 = (uint)uVar18;
              local_d8[uVar29] = uVar12 | 0x80000000;
              local_d8[uVar29 + 1] =
                   *(uint *)(&DAT_180239190 +
                            ((uVar18 & 0x8000000 | uVar18 >> 5 & 0x7ffffff) >> 0x1a) * 4);
              local_d8[uVar29 + 2] = uVar26;
              local_d8[uVar29 + 3] = uVar10;
              iVar23 = 2;
            }
            else {
              uVar6 = 3;
              uVar8 = 0;
              if (uVar28 < 2) {
                uVar6 = 0;
                uVar8 = 3;
              }
              if (uVar16 == 0) {
                uVar12 = FUN_180213838(uVar18,uVar12,uVar28,uVar19,uVar8,uVar6);
                uVar14 = extraout_x15_01;
              }
              else {
                uVar12 = FUN_180213900();
                uVar14 = extraout_x15_00;
              }
              uVar24 = (uint)uVar18;
              local_d8[uVar29] = uVar12 | 0x80000000;
              local_d8[uVar29 + 1] =
                   *(uint *)(&DAT_180239190 +
                            ((uVar18 & 0x8000000 | uVar18 >> 5 & 0x7ffffff) >> 0x1a) * 4);
              local_d8[uVar29 + 2] = uVar26;
              local_d8[uVar29 + 3] = uVar10;
              uVar12 = FUN_180213900(uVar14 & 0xffffffff,uVar31,1);
              local_d8[uVar29 + (extraout_x11 & 0xffffffff)] = uVar12;
              local_d8[uVar29 + (uVar28 + 3)] = extraout_w15 & 0xff;
              iVar23 = 4;
            }
            if ((uVar24 & 0x3f00) == 0x600) {
              param_1[4] = 1 << (ulonglong)(uVar11 & 0x1f) | param_1[4];
            }
            else if ((uVar24 & 0x3f00) == 0x700) {
              param_1[3] = 1 << (ulonglong)(uVar11 & 0x1f) | param_1[3];
            }
            uVar29 = (ulonglong)(iVar23 + uVar28 + iVar22);
          }
        }
      }
      puVar3 = (uint *)((-lVar21 & 3U) + lVar21);
      lVar21 = (-lVar21 & 3U | 8) + lVar21;
      uVar11 = *puVar3;
    }
  }
  uVar11 = (uint)uVar29;
  local_d8[0] = uVar13 & 0xfffff800 | (uVar11 & 0x7f) << 0x18 | uVar13 & 0x7ff;
  if ((uVar11 != 0) && ((char)param_2[3] != '\0')) {
    if ((ulonglong)param_2[2] < (param_2[1] - *param_2) + uVar29 * 4) {
      FUN_180214f80(param_2,uVar29 << 2);
    }
    if (uVar11 >> 1 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48((uint *)param_2[1],local_d8,(ulonglong)(uVar11 >> 1) << 3);
    }
    if ((uVar29 & 1) != 0) {
      *(uint *)param_2[1] = local_d8[0];
    }
    param_2[1] = param_2[1] + uVar29 * 4;
  }
  return;
}

