/*
 * FUN_10079c58 at 10079c58
 * undefined FUN_10079c58(void)
 * Address ranges: 10079c58-1007a823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079c58(ulonglong param_1,ulonglong param_2,uint param_3,ulonglong param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint extraout_w10;
  undefined4 *extraout_w10_00;
  undefined4 *extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  uint *puVar19;
  uint uVar20;
  int extraout_w12;
  ulonglong uVar21;
  ulonglong extraout_x12;
  uint extraout_w13;
  int extraout_w13_00;
  uint extraout_w14;
  uint extraout_w14_00;
  int *piVar22;
  ulonglong extraout_x14;
  ulonglong extraout_x14_00;
  ulonglong extraout_x14_01;
  ulonglong extraout_x14_02;
  ulonglong extraout_x14_03;
  int extraout_w15;
  int iVar23;
  uint extraout_w15_00;
  uint extraout_w15_01;
  uint extraout_w15_02;
  uint extraout_w15_03;
  uint extraout_w15_04;
  uint extraout_w15_05;
  uint extraout_w15_06;
  uint extraout_w15_07;
  uint extraout_w15_08;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  uint auStack_d8 [4];
  uint local_c8 [34];
  
  uVar15 = (ulonglong)param_3;
  uVar26 = 1 - ((int)param_3 >> 0x1f);
  param_1 = param_1 & 0xffffffff;
  param_2 = param_2 & 0xffffffff;
  uVar11 = param_4 & 0xffffffff;
  if ((int)param_3 < 0) {
    uVar11 = ZEXT48((undefined4 *)param_4 + 1);
    local_c8[1] = *(undefined4 *)param_4;
  }
  uVar6 = 1;
  if ((param_3 & 0x7ff) == 0x26 || (param_3 & 0x7ff) == 0x4d) {
    uVar6 = 2;
  }
  uVar21 = (ulonglong)uVar6;
  uVar27 = 0;
  uVar6 = 0;
  do {
    uVar13 = (uint)uVar15;
    uVar9 = *(uint *)uVar11;
    puVar25 = (uint *)uVar11 + 1;
    uVar12 = ZEXT48(puVar25);
    if (uVar9 == 0) break;
    if (uVar6 == 0 || uVar9 != 0xffffffff) {
      if (uVar9 != 0xffffffff) goto LAB_10079d24;
    }
    else {
      uVar11 = uVar11 & 0xffffffff;
      do {
        puVar24 = (uint *)((int)uVar11 + 4);
        uVar9 = *puVar24;
        puVar25 = (uint *)((int)uVar12 + 4);
        uVar12 = ZEXT48(puVar25);
        uVar11 = ZEXT48(puVar24);
      } while (uVar9 == 0xffffffff);
LAB_10079d24:
      uVar13 = *puVar25;
      if ((uVar9 & 0x40000000) == 0) {
        uVar7 = 0;
        uVar10 = 0;
      }
      else {
        puVar24 = puVar25 + 1;
        puVar25 = puVar25 + 2;
        uVar7 = *puVar24;
        while (uVar7 == 0xffffffff) {
          puVar24 = puVar24 + 1;
          puVar25 = puVar25 + 1;
          uVar7 = *puVar24;
        }
        uVar10 = (undefined1)*puVar25;
      }
      uVar16 = uVar9 >> 0x10 & 3;
      puVar24 = local_c8 + uVar26;
      uVar27 = uVar9 & 0xff;
      if (1 < uVar16) {
        uVar27 = uVar9 >> 0xe & 3;
      }
      local_c8[uVar26 + 1] = uVar27;
      uVar27 = uVar9 >> 0x12 & 3;
      uVar20 = 2;
      if ((~(uVar9 >> 0x1b) & 4) == 0) {
        uVar20 = 0;
      }
      local_c8[uVar26 + 2] = uVar9 & 0xff;
      uVar12 = ZEXT48(puVar25 + 1);
      iVar23 = uVar16 + 1;
      uVar13 = ((1 << (ulonglong)(uVar9 >> 0x14 & 7)) + 0xffU & (uint)(byte)uVar13) <<
               (ulonglong)uVar27 & 0xff;
      if ((uVar9 & 0x40000000) == 0) {
        *puVar24 = uVar20 | (uVar13 | uVar16 << 0x10 | uVar9 & 0x3f00) << 4;
      }
      else {
        *puVar24 = uVar20 | (uVar13 | (uVar16 | 0x60) << 0x10 | uVar9 & 0x3f00) << 4;
        uVar6 = FUN_10079b60(uVar7,uVar10,1,uVar12,0,0);
        puVar24[iVar23] = uVar6;
        (puVar24 + iVar23)[1] = extraout_w13 & 0xff;
        iVar23 = extraout_w15 + 2;
        uVar21 = extraout_x12;
        param_2 = extraout_x14;
        uVar6 = extraout_w11;
        uVar9 = extraout_w10;
      }
      uVar26 = iVar23 + uVar26;
    }
    puVar25 = (uint *)uVar12;
    uVar13 = (uint)uVar15;
    uVar6 = uVar6 + 1;
    uVar11 = uVar12;
  } while (uVar6 < (uint)uVar21);
  if ((uVar9 != 0) && (uVar6 = *puVar25, uVar6 != 0)) {
    do {
      puVar19 = puVar25 + 1;
      puVar24 = puVar19;
      if (uVar6 != 0xffffffff) {
        uVar9 = *puVar19;
        uVar7 = uVar6 >> 8 & 0x3f;
        puVar24 = puVar25 + 2;
        uVar20 = uVar9 & 0xff;
        uVar16 = uVar20;
        if (((uVar9 & 0x100) != 0) && (uVar18 = 0, uVar27 != 0)) {
          do {
            uVar18 = uVar18 + 1 & 0xff;
            uVar16 = uVar16 & 0xfffffc03 | (uVar16 & 0x3f) << 2;
          } while (uVar18 < uVar27);
        }
        uVar18 = uVar27 + uVar9 & 0xff;
        if ((uVar9 & 0x100) == 0) {
          uVar18 = uVar20;
        }
        if (uVar7 == 4) {
          uVar9 = 0;
          uVar7 = uVar6 >> 0x14 & 7;
          if (uVar7 != 0) {
            do {
              puVar19 = puVar19 + 1;
              puVar24 = puVar24 + 1;
              puVar25 = auStack_d8 + uVar9;
              uVar9 = uVar9 + 1;
              *puVar25 = *puVar19 & (~(uVar6 << 4) | 0x7fffffff) ^ uVar6 & 0x80000000;
            } while (uVar9 < uVar7);
          }
          if (uVar7 < 4) {
            uVar16 = 0;
            uVar6 = 0x4001;
          }
          else if ((uVar6 >> 0x1c & 1) == 0) {
            uVar6 = 0x4e46;
            if (uVar7 != 4) {
              uVar6 = 0x4e40;
            }
          }
          else {
            uVar6 = 0x400a;
            if (uVar7 != 4) {
              uVar6 = 0x4008;
            }
            uVar6 = uVar6 | (uVar18 & 3) << 4;
            uVar16 = 0xe4;
          }
          local_c8[uVar26] = uVar6;
          uVar6 = 0;
          if (uVar7 != 0) {
            do {
              iVar23 = uVar6 + 1;
              uVar9 = uVar6 & 0xf;
              uVar6 = uVar6 + 1;
              local_c8[uVar26 + iVar23] = auStack_d8[uVar16 >> (ulonglong)(uVar9 << 1) & 3];
            } while (uVar6 < uVar7);
          }
          uVar26 = uVar7 + uVar26 + 1;
          goto LAB_1007a754;
        }
        if (1 < uVar7 - 8) {
          if ((uVar6 & 0x40000000) == 0) {
            uVar10 = 0;
          }
          else {
            puVar25 = puVar25 + 3;
            uVar9 = *puVar24;
            while (uVar9 == 0xffffffff) {
              puVar24 = puVar24 + 1;
              puVar25 = puVar25 + 1;
              uVar9 = *puVar24;
            }
            uVar10 = (undefined1)*puVar25;
            puVar24 = puVar25 + 1;
          }
          uVar9 = uVar6 & 0x10000000;
          if ((uVar6 & 0x10000000) == 0) {
            uVar18 = uVar16;
          }
          uVar2 = uVar6 >> 0x10 & 3;
          puVar25 = local_c8 + uVar26;
          uVar16 = uVar6 & 0xff;
          uVar20 = uVar16;
          if (1 < uVar2) {
            uVar20 = uVar6 >> 0xe & 3;
          }
          uVar14 = uVar2;
          if ((uVar7 - 6 < 2) &&
             (iVar23 = *(int *)param_1, uVar14 = 2,
             (iVar23 == 0x30051 || (iVar23 - 0x51U & 0xfffcffff) != 0) || uVar2 != 1)) {
            uVar14 = uVar2;
          }
          uVar7 = ~(uVar6 >> 0x1b) & 4;
          if ((uVar6 & 0x88000000) == 0) {
            if ((uVar6 & 0x40000000) == 0) {
              if (uVar9 == 0) {
                uVar7 = FUN_10079aa0(uVar6,uVar18,uVar14,uVar7,0,0);
                uVar9 = extraout_w15_07;
              }
              else {
                uVar7 = FUN_10079b60();
                uVar9 = extraout_w15_06;
              }
              local_c8[uVar26 + 1] = uVar20;
              *puVar25 = uVar7;
              local_c8[uVar26 + 2] = uVar16;
              iVar23 = uVar14 + 1;
            }
            else {
              uVar8 = 3;
              uVar4 = 0;
              if (uVar14 < 2) {
                uVar8 = 0;
                uVar4 = 3;
              }
              if (uVar9 == 0) {
                uVar9 = FUN_10079aa0(uVar6,uVar18,uVar14,uVar7,uVar4,uVar8);
                uVar11 = extraout_x14_03;
              }
              else {
                uVar9 = FUN_10079b60();
                uVar11 = extraout_x14_02;
              }
              local_c8[uVar26 + 1] = uVar20;
              *puVar25 = uVar9;
              local_c8[uVar26 + 2] = uVar16;
              uVar8 = FUN_10079b60(uVar11 & 0xffffffff,uVar10,1);
              *extraout_w10_01 = uVar8;
              extraout_w10_01[1] = extraout_w14_00 & 0xff;
              iVar23 = extraout_w11_00 + 2;
              uVar9 = extraout_w15_05;
            }
          }
          else {
            if ((uVar6 & 0x40000000) == 0) {
              if (uVar9 == 0) {
                uVar7 = FUN_10079aa0(uVar6,uVar18,uVar14,uVar7,0,0);
                uVar9 = extraout_w15_04;
              }
              else {
                uVar7 = FUN_10079b60();
                uVar9 = extraout_w15_03;
              }
              *puVar25 = uVar7 | 0x80000000;
              local_c8[uVar26 + 1] =
                   *(uint *)(&DAT_1009ec00 + ((uVar9 & 0x8000000 | uVar9 >> 5) >> 0x1a) * 4);
              local_c8[uVar26 + 2] = uVar20;
              local_c8[uVar26 + 3] = uVar16;
            }
            else {
              uVar8 = 3;
              uVar4 = 0;
              if (uVar14 < 2) {
                uVar8 = 0;
                uVar4 = 3;
              }
              if (uVar9 == 0) {
                uVar7 = FUN_10079aa0(uVar6,uVar18,uVar14,uVar7,uVar4,uVar8);
                uVar11 = extraout_x14_01;
                uVar9 = extraout_w15_01;
              }
              else {
                uVar7 = FUN_10079b60();
                uVar11 = extraout_x14_00;
                uVar9 = extraout_w15_00;
              }
              *puVar25 = uVar7 | 0x80000000;
              uVar14 = uVar14 + 2;
              local_c8[uVar26 + 1] =
                   *(uint *)(&DAT_1009ec00 + ((uVar9 & 0x8000000 | uVar9 >> 5) >> 0x1a) * 4);
              local_c8[uVar26 + 2] = uVar20;
              local_c8[uVar26 + 3] = uVar16;
              uVar8 = FUN_10079b60(uVar11 & 0xffffffff,uVar10,1);
              *extraout_w10_00 = uVar8;
              extraout_w10_00[1] = extraout_w14 & 0xff;
              uVar9 = extraout_w15_02;
            }
            iVar23 = uVar14 + 2;
          }
          if ((uVar9 & 0x3f00) == 0x600) {
            puVar25 = (uint *)((int)param_1 + 0x10);
LAB_1007a18c:
            *puVar25 = 1 << (ulonglong)(uVar6 & 0x1f) | *puVar25;
          }
          else if ((uVar9 & 0x3f00) == 0x700) {
            puVar25 = (uint *)((int)param_1 + 0xc);
            goto LAB_1007a18c;
          }
          uVar26 = iVar23 + uVar26;
          goto LAB_1007a754;
        }
        uVar9 = *puVar24;
        if ((uVar6 & 0x40000000) == 0) {
          uVar20 = 0;
          uVar10 = 0;
        }
        else {
          puVar19 = puVar25 + 3;
          puVar24 = puVar25 + 4;
          uVar20 = *puVar19;
          while (uVar20 == 0xffffffff) {
            puVar19 = puVar19 + 1;
            puVar24 = puVar24 + 1;
            uVar20 = *puVar19;
          }
          uVar10 = (undefined1)*puVar24;
        }
        uVar2 = uVar6 & 0x10000000;
        if ((uVar6 & 0x10000000) == 0) {
          uVar18 = uVar16;
        }
        puVar25 = local_c8 + uVar26;
        puVar24 = puVar24 + 1;
        iVar23 = 0;
        uVar16 = 0xe4;
        switch(uVar6 >> 0x14 & 7) {
        case 1:
          iVar17 = 0x1009ec18;
          break;
        case 2:
          iVar17 = 0x1009ec14;
          break;
        case 3:
          iVar17 = 0x1009ec10;
          break;
        default:
          goto switchD_1007a240_caseD_4;
        }
        uVar16 = (uint)*(byte *)((uVar9 >> 2 & 3) + iVar17);
switchD_1007a240_caseD_4:
        uVar3 = uVar6 >> 0x10 & 3;
        uVar14 = uVar3 + 1;
        if ((1 < uVar14) &&
           (iVar17 = *(int *)param_1, iVar17 != 0x30051 && (iVar17 - 0x51U & 0xfffcffff) == 0)) {
          uVar14 = uVar3 + 2;
        }
        if ((uVar6 & 0x40000000) == 0) {
          uVar20 = uVar7 | (uVar14 & 3) << 8;
          if (uVar2 == 0) {
            uVar16 = ((((uVar16 >> (ulonglong)((uVar18 >> 6) << 1) & 3) << 2 |
                       uVar16 >> (ulonglong)((uVar18 >> 4 & 3) << 1) & 3) << 2 |
                      uVar16 >> (ulonglong)((uVar18 >> 2 & 3) << 1) & 3) << 2 |
                      uVar16 >> (ulonglong)((uVar18 & 3) << 1) & 3 | uVar20 << 8) << 4 | 6;
          }
          else {
            uVar16 = (uVar18 & 3 | uVar20 << 8) << 4 | 10;
          }
          *puVar25 = uVar16;
          bVar5 = (uVar6 & 0x88000000) != 0;
          if (bVar5) {
            *puVar25 = uVar16 | 0x80000000;
            local_c8[uVar26 + 1] =
                 *(uint *)(&DAT_1009ec00 + ((uVar6 & 0x8000000 | uVar6 >> 5) >> 0x1a) * 4);
          }
          iVar23 = bVar5 + 1;
          switch(uVar14) {
          default:
            goto switchD_1007a5f8_caseD_1;
          case 2:
            puVar19 = puVar25 + iVar23;
            iVar17 = 1;
            break;
          case 3:
            iVar17 = 2;
            puVar25[iVar23] = uVar6 & 0xff;
            puVar19 = puVar25 + iVar23 + 1;
          }
          iVar23 = iVar23 + iVar17;
          *puVar19 = uVar6 & 0xff;
switchD_1007a5f8_caseD_1:
          uVar9 = uVar9 >> 4;
          puVar25 = puVar25 + iVar23;
          iVar23 = iVar23 + 1;
          iVar17 = 0;
        }
        else {
          switch(uVar14) {
          case 1:
            if (uVar2 == 0) {
              uVar16 = ((((uVar16 >> (ulonglong)((uVar18 >> 6) << 1) & 3) << 2 |
                         uVar16 >> (ulonglong)((uVar18 >> 4 & 3) << 1) & 3) << 2 |
                        uVar16 >> (ulonglong)((uVar18 >> 2 & 3) << 1) & 3) << 2 |
                        uVar16 >> (ulonglong)((uVar18 & 3) << 1) & 3 |
                       (uVar7 | uVar14 << 8 & 0x3ff) << 8) << 4 | 0xc00006;
            }
            else {
              uVar16 = (uVar18 & 3 | (uVar7 | uVar14 << 8) << 8) << 4 | 0xc0000a;
            }
            *puVar25 = uVar16;
            bVar5 = (uVar6 & 0x88000000) != 0;
            if (bVar5) {
              *puVar25 = uVar16 | 0x80000000;
              local_c8[uVar26 + 1] =
                   *(uint *)(&DAT_1009ec00 + ((uVar6 & 0x8000000 | uVar6 >> 5) >> 0x1a) * 4);
            }
            iVar23 = bVar5 + 1;
            break;
          case 2:
            if (uVar2 == 0) {
              uVar16 = ((((uVar16 >> (ulonglong)((uVar18 >> 6) << 1) & 3) << 2 |
                         uVar16 >> (ulonglong)((uVar18 >> 4 & 3) << 1) & 3) << 2 |
                        uVar16 >> (ulonglong)((uVar18 >> 2 & 3) << 1) & 3) << 2 |
                        uVar16 >> (ulonglong)((uVar18 & 3) << 1) & 3 |
                       (uVar7 | uVar14 << 8 & 0x3ff) << 8) << 4 | 0x6000006;
            }
            else {
              uVar16 = (uVar18 & 3 | (uVar7 | uVar14 << 8 & 0x3ff) << 8) << 4 | 0x600000a;
            }
            *puVar25 = uVar16;
            bVar5 = (uVar6 & 0x88000000) != 0;
            if (bVar5) {
              *puVar25 = uVar16 | 0x80000000;
              local_c8[uVar26 + 1] =
                   *(uint *)(&DAT_1009ec00 + ((uVar6 & 0x8000000 | uVar6 >> 5) >> 0x1a) * 4);
            }
            uVar16 = (uint)bVar5;
            iVar23 = uVar16 + 2;
            puVar25[uVar16 + 1] = uVar6 & 0xff;
            break;
          case 3:
            if (uVar2 == 0) {
              uVar16 = ((((uVar16 >> (ulonglong)((uVar18 >> 6) << 1) & 3) << 2 |
                         uVar16 >> (ulonglong)((uVar18 >> 4 & 3) << 1) & 3) << 2 |
                        uVar16 >> (ulonglong)((uVar18 >> 2 & 3) << 1) & 3) << 2 |
                        uVar16 >> (ulonglong)((uVar18 & 3) << 1) & 3 |
                       (uVar7 | uVar14 << 8 & 0x3ff) << 8) << 4 | 0x30000006;
            }
            else {
              uVar16 = (uVar18 & 3 | (uVar7 | uVar14 << 8 & 0x3ff) << 8) << 4 | 0x3000000a;
            }
            *puVar25 = uVar16;
            bVar5 = (uVar6 & 0x88000000) != 0;
            if (bVar5) {
              *puVar25 = uVar16 | 0x80000000;
              local_c8[uVar26 + 1] =
                   *(uint *)(&DAT_1009ec00 + ((uVar6 & 0x8000000 | uVar6 >> 5) >> 0x1a) * 4);
            }
            uVar16 = (uint)bVar5;
            iVar23 = uVar16 + 3;
            puVar25[uVar16 + 1] = uVar6 & 0xff;
            puVar25[uVar16 + 2] = uVar6 & 0xff;
          }
          puVar25[iVar23] = uVar9 >> 4;
          uVar8 = FUN_10079b60(uVar20,uVar10,1,uVar7,0,0);
          *(undefined4 *)(extraout_w13_00 + 4) = uVar8;
          uVar9 = extraout_w10_02 & 0xff;
          puVar25 = (uint *)(extraout_w13_00 + 8);
          iVar23 = extraout_w12 + 3;
          uVar6 = extraout_w15_08;
          iVar17 = extraout_w11_01;
        }
        *puVar25 = uVar9;
        if (uVar7 == 8) {
          puVar25 = (uint *)((int)param_1 + 8);
          uVar6 = 1 << (ulonglong)(uVar6 & 0x1f);
          *puVar25 = uVar6 | *puVar25;
          if (iVar17 != 0) {
            puVar25 = (uint *)((int)param_1 + 4);
            *puVar25 = *puVar25 | uVar6;
          }
        }
        uVar26 = iVar23 + uVar26;
      }
LAB_1007a754:
      uVar6 = *puVar24;
      puVar25 = puVar24;
    } while (uVar6 != 0);
    param_2 = param_2 & 0xffffffff;
  }
  local_c8[0] = uVar13 | (uVar26 & 0x7f) << 0x18;
  if ((uVar26 != 0) && (piVar22 = (int *)param_2, (char)piVar22[3] != '\0')) {
    piVar1 = piVar22 + 1;
    iVar23 = uVar26 * 4;
    if ((uint)piVar22[2] < (uint)((*piVar1 - *piVar22) + iVar23)) {
      FUN_1007a898(param_2 & 0xffffffff,iVar23);
    }
    puVar24 = (uint *)*piVar1;
    puVar25 = local_c8;
    uVar27 = uVar26 >> 1;
    uVar6 = 0;
    if (uVar27 != 0) {
      FUN_10081ee0(puVar24,puVar25,(ulonglong)uVar27 << 3);
      do {
        uVar6 = uVar6 + 1;
        puVar24 = puVar24 + 2;
        puVar25 = puVar25 + 2;
      } while (uVar6 < uVar27);
    }
    if ((uVar26 & 1) != 0) {
      *puVar24 = *puVar25;
    }
    *piVar1 = iVar23 + *piVar1;
  }
  return;
}

