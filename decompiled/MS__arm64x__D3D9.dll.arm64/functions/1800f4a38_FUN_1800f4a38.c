/*
 * FUN_1800f4a38 at 1800f4a38
 * undefined FUN_1800f4a38(void)
 * Address ranges: 1800f4a38-1800f56f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f4a38(int *param_1,longlong *param_2,uint param_3,longlong param_4)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined *puVar19;
  uint uVar20;
  int iVar21;
  uint extraout_w11;
  int extraout_w11_00;
  int iVar22;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  uint extraout_w12;
  int extraout_w12_00;
  longlong lVar23;
  uint extraout_w13;
  uint extraout_w13_00;
  uint extraout_w13_01;
  uint extraout_w13_02;
  uint extraout_w13_03;
  ulonglong uVar24;
  ulonglong extraout_x13;
  ulonglong extraout_x13_00;
  ulonglong extraout_x13_01;
  ulonglong extraout_x13_02;
  ulonglong extraout_x13_03;
  int iVar25;
  uint extraout_w14;
  ulonglong uVar26;
  longlong extraout_x14;
  longlong extraout_x14_00;
  longlong extraout_x14_01;
  longlong extraout_x14_02;
  longlong extraout_x14_03;
  longlong extraout_x14_04;
  longlong extraout_x14_05;
  longlong extraout_x15;
  longlong extraout_x15_00;
  longlong extraout_x15_01;
  longlong extraout_x15_02;
  longlong extraout_x15_03;
  longlong extraout_x15_04;
  longlong extraout_x15_05;
  longlong lVar27;
  longlong extraout_x15_06;
  ulonglong uVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  undefined4 uVar32;
  uint local_e8 [32];
  longlong *local_68;
  uint local_60 [4];
  
  uVar15 = (ulonglong)param_3;
  uVar28 = (ulonglong)(1 - ((int)param_3 >> 0x1f));
  if ((int)param_3 < 0) {
    puVar2 = (undefined4 *)((-param_4 & 3U) + param_4);
    param_4 = (-param_4 & 3U | 8) + param_4;
    local_e8[1] = *puVar2;
  }
  uVar9 = 1;
  if ((param_3 & 0x7ff) == 0x26 || (param_3 & 0x7ff) == 0x4d) {
    uVar9 = 2;
  }
  uVar24 = (ulonglong)uVar9;
  uVar31 = 0;
  uVar9 = 0;
  lVar27 = 0;
  do {
    uVar16 = (uint)uVar15;
    puVar12 = (uint *)((-param_4 & 3U) + param_4);
    uVar10 = *puVar12;
    param_4 = (-param_4 & 3U | 8) + param_4;
    if (uVar10 == 0) break;
    if (uVar9 == 0) {
      if (uVar10 != 0xffffffff) goto LAB_1800f4b08;
    }
    else {
      if (uVar10 == 0xffffffff) {
        do {
          puVar12 = (uint *)((-param_4 & 3U) + param_4);
          uVar10 = *puVar12;
          param_4 = (-param_4 & 3U | 8) + param_4;
        } while (uVar10 == 0xffffffff);
      }
LAB_1800f4b08:
      uVar13 = lVar27 - (longlong)puVar12 & 3;
      pbVar1 = (byte *)(uVar13 + param_4);
      if ((uVar10 & 0x40000000) == 0) {
        param_4 = (uVar13 | 8) + param_4;
        iVar25 = 0;
        uVar32 = 0;
      }
      else {
        uVar26 = lVar27 - (uVar13 + param_4) & 3;
        lVar23 = uVar26 + uVar13 + param_4;
        param_4 = uVar26 + (uVar13 | 0x10) + param_4;
        iVar25 = *(int *)(lVar23 + 8);
        if (iVar25 == -1) {
          do {
            piVar3 = (int *)((-param_4 & 3U) + param_4);
            param_4 = (-param_4 & 3U | 8) + param_4;
            iVar25 = *piVar3;
          } while (iVar25 == -1);
          uVar13 = lVar27 - (longlong)piVar3;
        }
        else {
          uVar13 = -lVar23 - 0x10;
        }
        uVar32 = *(undefined4 *)((uVar13 & 3) + param_4);
        param_4 = (uVar13 & 3 | 8) + param_4;
      }
      uVar16 = 0;
      if ((uVar10 & 0x40000000) != 0) {
        uVar16 = 0x600000;
      }
      uVar31 = uVar10 >> 0x12 & 3;
      local_e8[uVar28] =
           ~(uVar10 >> 0x1c) & 2 |
           (uVar10 & 0x30000 | uVar16 | uVar10 & 0x3f00 |
           ((1 << (ulonglong)(uVar10 >> 0x14 & 7)) + 0xffU & (uint)*pbVar1) << (ulonglong)uVar31 &
           0xff) << 4;
      uVar16 = uVar10 & 0xff;
      if (0x10000 < (uVar10 & 0x30000)) {
        uVar16 = uVar10 >> 0xe & 3;
      }
      uVar11 = uVar10 >> 0x10 & 3;
      local_e8[uVar28 + 1] = uVar16;
      local_e8[uVar28 + 2] = uVar10 & 0xff;
      if ((uVar10 & 0x40000000) == 0) {
        iVar25 = 1;
      }
      else {
        uVar9 = func_0x000180213900(iVar25,uVar32,1,param_4,0,0);
        local_e8[uVar28 + (uVar11 + 1)] = uVar9;
        local_e8[uVar28 + (uVar11 + 2)] = extraout_w14 & 0xff;
        iVar25 = 3;
        uVar24 = extraout_x13;
        lVar27 = extraout_x15;
        uVar9 = extraout_w12;
        uVar10 = extraout_w11;
      }
      uVar28 = (ulonglong)(iVar25 + uVar11 + (int)uVar28);
    }
    uVar16 = (uint)uVar15;
    uVar9 = uVar9 + 1;
  } while (uVar9 < (uint)uVar24);
  if (uVar10 != 0) {
    uVar9 = *(uint *)((-param_4 & 3U) + param_4);
    param_4 = (-param_4 & 3U | 8) + param_4;
    if (uVar9 != 0) {
      local_68 = param_2;
      do {
        uVar15 = (ulonglong)uVar9;
        lVar23 = param_4;
        if (uVar9 != 0xffffffff) {
          uVar24 = -param_4 & 3;
          uVar10 = *(uint *)(uVar24 + param_4);
          uVar11 = uVar9 >> 8 & 0x3f;
          lVar4 = uVar24 + param_4;
          uVar14 = uVar10 & 0xff;
          bVar8 = (uVar10 & 0x100) != 0;
          uVar17 = uVar14;
          if ((bVar8) && (uVar20 = uVar31, uVar31 != 0)) {
            do {
              uVar20 = uVar20 - 1;
              uVar17 = uVar17 & 0xfffffc03 | (uVar17 & 0x3f) << 2;
            } while ((char)uVar20 != '\0');
          }
          uVar10 = uVar10 + uVar31 & 0xff;
          if (!bVar8) {
            uVar10 = uVar14;
          }
          iVar25 = (int)uVar28;
          if (uVar11 - 8 < 2) {
            uVar13 = lVar27 - lVar4 & 3;
            lVar4 = uVar13 + lVar4;
            uVar11 = *(uint *)(lVar4 + 8);
            if ((uVar9 & 0x40000000) == 0) {
              lVar23 = uVar13 + (uVar24 | 0x10) + param_4;
              uVar14 = 0;
              uVar32 = 0;
            }
            else {
              uVar26 = -lVar4 - 0x10U & 3;
              lVar4 = uVar26 + lVar4;
              uVar14 = *(uint *)(lVar4 + 0x10);
              lVar23 = uVar26 + uVar13 + (uVar24 | 0x18) + param_4;
              if (uVar14 == 0xffffffff) {
                do {
                  puVar12 = (uint *)((-lVar23 & 3U) + lVar23);
                  uVar14 = *puVar12;
                  lVar23 = (-lVar23 & 3U | 8) + lVar23;
                } while (uVar14 == 0xffffffff);
                uVar24 = lVar27 - (longlong)puVar12;
              }
              else {
                uVar24 = -lVar4 - 0x18;
              }
              uVar32 = *(undefined4 *)((uVar24 & 3) + lVar23);
              lVar23 = (uVar24 & 3 | 8) + lVar23;
            }
            uVar20 = uVar9 & 0x10000000;
            if ((uVar9 & 0x10000000) == 0) {
              uVar10 = uVar17;
            }
            uVar17 = 0;
            if ((uVar9 & 0x700000) == 0x100000) {
              puVar19 = &DAT_18022c414;
LAB_1800f51d8:
              uVar29 = (uint)(byte)puVar19[(ulonglong)(uVar11 >> 2) & 3];
            }
            else {
              if ((uVar9 & 0x700000) == 0x200000) {
                puVar19 = &DAT_18023918c;
                goto LAB_1800f51d8;
              }
              uVar29 = 0xe4;
              if ((uVar9 & 0x700000) == 0x300000) {
                puVar19 = &DAT_180239188;
                goto LAB_1800f51d8;
              }
            }
            uVar6 = uVar9 >> 0x10 & 3;
            uVar18 = uVar6 + 1;
            if ((1 < uVar18) && (*param_1 != 0x30051 && (*param_1 - 0x51U & 0xfffcffff) == 0)) {
              uVar18 = uVar6 + 2;
            }
            if ((uVar9 & 0x40000000) == 0) {
              uVar17 = uVar9 & 0x3f00 | (uVar18 & 3) << 0x10;
              if (uVar20 == 0) {
                uVar10 = ((((uVar29 >> (ulonglong)((uVar10 >> 6) << 1) & 3) << 2 |
                           uVar29 >> (ulonglong)((uVar10 >> 4 & 3) << 1) & 3) << 2 |
                          uVar29 >> (ulonglong)((uVar10 >> 2 & 3) << 1) & 3) << 2 |
                          uVar29 >> (ulonglong)((uVar10 & 3) << 1) & 3 | uVar17) << 4;
                uVar14 = uVar10 | 6;
                uVar10 = uVar10 | 0x80000006;
              }
              else {
                uVar17 = uVar17 | uVar10 & 3;
                uVar14 = uVar17 << 4 | 10;
                uVar10 = uVar17 << 4 | 0x8000000a;
              }
              local_e8[uVar28] = uVar14;
              bVar8 = (uVar9 & 0x88000000) != 0;
              if (bVar8) {
                local_e8[uVar28] = uVar10;
                local_e8[uVar28 + 1] =
                     *(uint *)(&DAT_180239190 +
                              ((uVar15 & 0x8000000 | (ulonglong)(uVar9 >> 5)) >> 0x1a) * 4);
              }
              uVar17 = (uint)bVar8;
              uVar10 = uVar17 + 1;
              if (uVar18 != 1) {
                if (uVar18 == 2) {
                  local_e8[uVar28 + uVar10] = uVar9 & 0xff;
                  uVar10 = uVar17 | 2;
                }
                else if (uVar18 == 3) {
                  local_e8[uVar28 + uVar10] = uVar9 & 0xff;
                  local_e8[uVar28 + (uVar17 + 2)] = uVar9 & 0xff;
                  uVar10 = uVar17 + 3;
                }
              }
              local_e8[uVar28 + uVar10] = uVar11 >> 4;
              iVar21 = uVar10 + 1;
              iVar22 = 0;
            }
            else {
              if (uVar18 == 1) {
                if (uVar20 == 0) {
                  uVar10 = uVar9 & 0x3f00 | 0x10000 |
                           (((uVar29 >> (ulonglong)((uVar10 >> 6) << 1) & 3) << 2 |
                            uVar29 >> (ulonglong)((uVar10 >> 4 & 3) << 1) & 3) << 2 |
                           uVar29 >> (ulonglong)((uVar10 >> 2 & 3) << 1) & 3) << 2 |
                           uVar29 >> (ulonglong)((uVar10 & 3) << 1) & 3;
                  uVar20 = uVar10 << 4 | 0xc00006;
                  uVar17 = 0x80c00006;
                }
                else {
                  uVar10 = uVar9 & 0x3f00 | 0x10000 | uVar10 & 3;
                  uVar20 = uVar10 << 4 | 0xc0000a;
                  uVar17 = 0x80c0000a;
                }
                local_e8[uVar28] = uVar20;
                bVar8 = (uVar9 & 0x88000000) != 0;
                if (bVar8) {
                  local_e8[uVar28] = uVar17 | uVar10 << 4;
                  local_e8[uVar28 + 1] =
                       *(uint *)(&DAT_180239190 +
                                ((uVar15 & 0x8000000 | (ulonglong)(uVar9 >> 5)) >> 0x1a) * 4);
                }
                uVar17 = bVar8 + 1;
              }
              else if (uVar18 == 2) {
                uVar17 = uVar9 & 0x3f00 | 0x20000;
                if (uVar20 == 0) {
                  uVar17 = (((uVar29 >> (ulonglong)((uVar10 >> 6) << 1) & 3) << 2 |
                            uVar29 >> (ulonglong)((uVar10 >> 4 & 3) << 1) & 3) << 2 |
                           uVar29 >> (ulonglong)((uVar10 >> 2 & 3) << 1) & 3) << 2 |
                           uVar29 >> (ulonglong)((uVar10 & 3) << 1) & 3 | uVar17;
                  uVar20 = uVar17 << 4 | 0x6000006;
                  uVar10 = 0x86000006;
                }
                else {
                  uVar17 = uVar17 | uVar10 & 3;
                  uVar20 = uVar17 << 4 | 0x600000a;
                  uVar10 = 0x8600000a;
                }
                local_e8[uVar28] = uVar20;
                bVar8 = (uVar9 & 0x88000000) != 0;
                if (bVar8) {
                  local_e8[uVar28] = uVar10 | uVar17 << 4;
                  local_e8[uVar28 + 1] =
                       *(uint *)(&DAT_180239190 +
                                ((uVar15 & 0x8000000 | (ulonglong)(uVar9 >> 5)) >> 0x1a) * 4);
                }
                uVar17 = (uint)bVar8;
                local_e8[uVar28 + (uVar17 + 1)] = uVar9 & 0xff;
                uVar17 = uVar17 | 2;
              }
              else if (uVar18 == 3) {
                uVar17 = uVar9 & 0x3f00 | 0x30000;
                if (uVar20 == 0) {
                  uVar17 = (((uVar29 >> (ulonglong)((uVar10 >> 6) << 1) & 3) << 2 |
                            uVar29 >> (ulonglong)((uVar10 >> 4 & 3) << 1) & 3) << 2 |
                           uVar29 >> (ulonglong)((uVar10 >> 2 & 3) << 1) & 3) << 2 |
                           uVar29 >> (ulonglong)((uVar10 & 3) << 1) & 3 | uVar17;
                  uVar20 = uVar17 << 4 | 0x30000006;
                  uVar10 = 0xb0000006;
                }
                else {
                  uVar17 = uVar17 | uVar10 & 3;
                  uVar20 = uVar17 << 4 | 0x3000000a;
                  uVar10 = 0xb000000a;
                }
                local_e8[uVar28] = uVar20;
                bVar8 = (uVar9 & 0x88000000) != 0;
                if (bVar8) {
                  local_e8[uVar28] = uVar10 | uVar17 << 4;
                  local_e8[uVar28 + 1] =
                       *(uint *)(&DAT_180239190 +
                                ((uVar15 & 0x8000000 | (ulonglong)(uVar9 >> 5)) >> 0x1a) * 4);
                }
                uVar10 = (uint)bVar8;
                local_e8[uVar28 + (uVar10 + 1)] = uVar9 & 0xff;
                uVar17 = uVar10 + 3;
                local_e8[uVar28 + (uVar10 + 2)] = uVar9 & 0xff;
              }
              local_e8[uVar28 + uVar17] = uVar11 >> 4;
              uVar9 = func_0x000180213900(uVar14,uVar32,1,uVar14,0,0);
              local_e8[uVar28 + (extraout_w12_00 + 1)] = uVar9;
              local_e8[uVar28 + (extraout_w12_00 + 2)] = uVar14 & 0xff;
              iVar21 = extraout_w12_00 + 3;
              lVar23 = extraout_x14_05;
              lVar27 = extraout_x15_06;
              uVar9 = extraout_w13_03;
              iVar22 = extraout_w11_00;
            }
            if ((uVar9 & 0x3f00) == 0x800) {
              uVar9 = 1 << (ulonglong)(uVar9 & 0x1f);
              param_1[2] = param_1[2] | uVar9;
              if (iVar22 != 0) {
                param_1[1] = param_1[1] | uVar9;
              }
            }
          }
          else {
            lVar23 = (uVar24 | 8) + param_4;
            if ((uVar9 & 0x3f00) == 0x400) {
              uVar15 = 0;
              uVar11 = uVar9 >> 0x14 & 7;
              if (uVar11 != 0) {
                do {
                  puVar12 = (uint *)((-lVar23 & 3U) + lVar23);
                  lVar23 = (-lVar23 & 3U | 8) + lVar23;
                  local_60[uVar15] =
                       *puVar12 & (~(uVar9 << 4) | 0x7fffffff) ^ (int)uVar9 >> 0x1f & 0x80000000U;
                  uVar14 = (int)uVar15 + 1;
                  uVar15 = (ulonglong)uVar14;
                } while (uVar14 < uVar11);
              }
              if ((uVar9 >> 0x16 & 1) == 0) {
                uVar17 = 0;
                uVar10 = 0x4001;
              }
              else {
                uVar14 = uVar9 & 0x700000;
                uVar20 = 2;
                if (uVar14 != 0x400000) {
                  uVar20 = (uint)(uVar14 == 0x100000);
                }
                if ((uVar9 >> 0x1c & 1) == 0) {
                  uVar9 = 0x4e40;
                  if (uVar14 == 0x100000) {
                    uVar9 = 0x4e41;
                  }
                  uVar10 = 0x4e46;
                  if (uVar14 != 0x400000) {
                    uVar10 = uVar9;
                  }
                }
                else {
                  uVar17 = 0xe4;
                  uVar10 = uVar20 | (uVar10 & 3) << 4 | 0x4008;
                }
              }
              local_e8[uVar28] = uVar10;
              uVar9 = 0;
              if (uVar11 != 0) {
                do {
                  uVar14 = uVar9 & 0x7f;
                  uVar10 = uVar9 + iVar25 + 1;
                  uVar9 = uVar9 + 1;
                  local_e8[uVar10] =
                       local_60[(ulonglong)(uVar17 >> ((ulonglong)(uVar14 << 1) & 0x3f)) & 3];
                } while (uVar9 < uVar11);
              }
              uVar28 = (ulonglong)(uVar11 + iVar25 + 1);
              goto LAB_1800f5630;
            }
            if ((uVar9 & 0x40000000) == 0) {
              uVar24 = 0;
              uVar32 = 0;
            }
            else {
              uVar13 = lVar27 - lVar4 & 3;
              lVar4 = uVar13 + lVar4;
              uVar14 = *(uint *)(lVar4 + 8);
              lVar23 = uVar13 + (uVar24 | 0x10) + param_4;
              if (uVar14 == 0xffffffff) {
                do {
                  puVar12 = (uint *)((-lVar23 & 3U) + lVar23);
                  lVar23 = (-lVar23 & 3U | 8) + lVar23;
                  uVar14 = *puVar12;
                } while (uVar14 == 0xffffffff);
                uVar13 = lVar27 - (longlong)puVar12;
              }
              else {
                uVar13 = -lVar4 - 0x10;
              }
              uVar24 = (ulonglong)uVar14;
              uVar32 = *(undefined4 *)((uVar13 & 3) + lVar23);
            }
            uVar14 = uVar9 & 0x10000000;
            if ((uVar9 & 0x10000000) == 0) {
              uVar10 = uVar17;
            }
            uVar17 = uVar9 & 0xff;
            uVar20 = uVar17;
            if (0x10000 < (uVar9 & 0x30000)) {
              uVar20 = uVar9 >> 0xe & 3;
            }
            uVar29 = uVar9 >> 0x10 & 3;
            if ((uVar11 - 6 < 2) &&
               ((*param_1 != 0x30051 && (*param_1 - 0x51U & 0xfffcffff) == 0) &&
                (uVar9 & 0x30000) == 0x10000)) {
              uVar29 = uVar29 + 1;
            }
            uVar11 = ~(uVar9 >> 0x1b) & 4;
            if ((uVar9 & 0x88000000) == 0) {
              if ((uVar9 & 0x40000000) == 0) {
                if (uVar14 == 0) {
                  uVar11 = FUN_1800f43a8(uVar15,uVar10,uVar29,uVar11,0,0);
                  lVar23 = extraout_x14_04;
                  lVar27 = extraout_x15_05;
                  uVar10 = extraout_w13_02;
                }
                else {
                  uVar11 = func_0x000180213900();
                  lVar23 = extraout_x14_03;
                  lVar27 = extraout_x15_04;
                  uVar10 = extraout_w13_01;
                }
                local_e8[uVar28] = uVar11;
                local_e8[uVar28 + 1] = uVar20;
                local_e8[uVar28 + 2] = uVar17;
                iVar21 = 1;
              }
              else {
                uVar5 = 3;
                uVar7 = 0;
                if (uVar29 < 2) {
                  uVar5 = 0;
                  uVar7 = 3;
                }
                if (uVar14 == 0) {
                  uVar10 = FUN_1800f43a8(uVar15,uVar10,uVar29,uVar11,uVar7,uVar5);
                }
                else {
                  uVar10 = func_0x000180213900();
                }
                uVar11 = (uint)uVar24;
                local_e8[uVar28] = uVar10;
                local_e8[uVar28 + 1] = uVar20;
                local_e8[uVar28 + 2] = uVar17;
                uVar10 = func_0x000180213900(uVar24 & 0xffffffff,uVar32,1);
                local_e8[uVar28 + (extraout_x11_00 & 0xffffffff)] = uVar10;
                local_e8[uVar28 + (uVar29 + 2)] = uVar11 & 0xff;
                iVar21 = 3;
                lVar23 = extraout_x14_02;
                lVar27 = extraout_x15_03;
                uVar10 = extraout_w13_00;
              }
            }
            else if ((uVar9 & 0x40000000) == 0) {
              if (uVar14 == 0) {
                uVar11 = FUN_1800f43a8(uVar15,uVar10,uVar29,uVar11,0,0);
                uVar15 = extraout_x13_03;
                lVar23 = extraout_x14_01;
                lVar27 = extraout_x15_02;
              }
              else {
                uVar11 = func_0x000180213900();
                uVar15 = extraout_x13_02;
                lVar23 = extraout_x14_00;
                lVar27 = extraout_x15_01;
              }
              uVar10 = (uint)uVar15;
              local_e8[uVar28] = uVar11 | 0x80000000;
              local_e8[uVar28 + 1] =
                   *(uint *)(&DAT_180239190 +
                            ((uVar15 & 0x8000000 | uVar15 >> 5 & 0x7ffffff) >> 0x1a) * 4);
              local_e8[uVar28 + 2] = uVar20;
              local_e8[uVar28 + 3] = uVar17;
              iVar21 = 2;
            }
            else {
              uVar5 = 3;
              uVar7 = 0;
              if (uVar29 < 2) {
                uVar5 = 0;
                uVar7 = 3;
              }
              if (uVar14 == 0) {
                uVar10 = FUN_1800f43a8(uVar15,uVar10,uVar29,uVar11,uVar7,uVar5);
                uVar15 = extraout_x13_01;
              }
              else {
                uVar10 = func_0x000180213900();
                uVar15 = extraout_x13_00;
              }
              uVar11 = (uint)uVar24;
              local_e8[uVar28] = uVar10 | 0x80000000;
              local_e8[uVar28 + 1] =
                   *(uint *)(&DAT_180239190 +
                            ((uVar15 & 0x8000000 | uVar15 >> 5 & 0x7ffffff) >> 0x1a) * 4);
              local_e8[uVar28 + 2] = uVar20;
              local_e8[uVar28 + 3] = uVar17;
              uVar10 = func_0x000180213900(uVar24 & 0xffffffff,uVar32,1);
              local_e8[uVar28 + (extraout_x11 & 0xffffffff)] = uVar10;
              local_e8[uVar28 + (uVar29 + 3)] = uVar11 & 0xff;
              iVar21 = 4;
              lVar23 = extraout_x14;
              lVar27 = extraout_x15_00;
              uVar10 = extraout_w13;
            }
            iVar21 = iVar21 + uVar29;
            if ((uVar10 & 0x3f00) == 0x600) {
              param_1[4] = 1 << (ulonglong)(uVar9 & 0x1f) | param_1[4];
            }
            else if ((uVar10 & 0x3f00) == 0x700) {
              param_1[3] = 1 << (ulonglong)(uVar9 & 0x1f) | param_1[3];
            }
          }
          uVar28 = (ulonglong)(uint)(iVar21 + iVar25);
        }
LAB_1800f5630:
        uVar9 = *(uint *)((-lVar23 & 3U) + lVar23);
        param_4 = (-lVar23 & 3U | 8) + lVar23;
        param_2 = local_68;
      } while (uVar9 != 0);
    }
  }
  uVar9 = (uint)uVar28;
  local_e8[0] = uVar16 & 0xfffff800 | (uVar9 & 0x7f) << 0x18 | uVar16 & 0x7ff;
  if ((uVar9 != 0) && ((char)param_2[3] != '\0')) {
    if ((ulonglong)param_2[2] < (param_2[1] - *param_2) + uVar28 * 4) {
      FUN_1800f5a28(param_2,uVar28 << 2);
    }
    puVar30 = (uint *)param_2[1];
    puVar12 = local_e8;
    uVar15 = (ulonglong)(uVar9 >> 1);
    if (uVar9 >> 1 != 0) {
      thunk_FUN_180001218(puVar30,puVar12,uVar15 * 8);
      puVar12 = local_e8 + uVar15 * 2;
      puVar30 = puVar30 + uVar15 * 2;
    }
    if ((uVar28 & 1) != 0) {
      *puVar30 = *puVar12;
    }
    param_2[1] = param_2[1] + uVar28 * 4;
  }
  return;
}

