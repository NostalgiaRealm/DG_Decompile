/*
 * FUN_180065f48 at 180065f48
 * undefined FUN_180065f48(void)
 * Address ranges: 180065f48-1800666af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180065f48(ulonglong param_1,uint *param_2,uint param_3,int param_4,longlong param_5,
                    undefined8 param_6,char param_7,char param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 extraout_x1;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong extraout_x10;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 in_stack_ffffffffffffff60;
  uint local_70;
  
  if (param_3 != 0) {
    lVar17 = 0;
    local_70 = 0;
    do {
      uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
      uVar18 = *param_2;
      uVar14 = uVar18 >> 0x10 & 0xff;
      iVar9 = param_4;
      if (local_70 != 1) {
        iVar9 = 0;
      }
      uVar13 = iVar9 + (uVar18 & 0x7ff);
      uVar16 = (ulonglong)uVar13;
      if ((uVar18 & 0x2000) == 0) {
        uVar8 = 0;
      }
      else {
        param_2 = param_2 + 1;
        uVar8 = *param_2;
      }
      if (param_7 != '\0') {
        uVar14 = uVar18 >> 0x16 & 3;
        uVar14 = uVar14 | (uVar14 | (uVar14 | uVar14 << 2) << 2) << 2;
      }
      uVar15 = (ulonglong)uVar14;
      param_2 = param_2 + 1;
      uVar2 = 0xb000000;
      if (param_8 == '\0') {
        uVar2 = uVar18 & 0xf000000;
      }
      uVar1 = uVar18 & 0x1800 | uVar18 >> 0x14 & 0x700;
      uVar3 = (undefined1)uVar14;
      if (uVar1 < 0x100) {
        lVar10 = param_5 + 0x218;
        uVar18 = *(uint *)(lVar10 + uVar16 * 4);
        param_1 = (ulonglong)uVar18;
        if (uVar18 == 0) {
          param_1 = FUN_1800f42d0(param_5,4,1);
          *(int *)(lVar10 + uVar16 * 4) = (int)param_1;
        }
        lVar10 = lVar17 * 0x30;
        *(int *)(param_5 + lVar10 + 0x3f0) = (int)param_1;
        *(undefined1 *)(param_5 + 0x3f4 + lVar10) = uVar3;
        *(undefined4 *)(param_5 + 0x400 + lVar10) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x40c + lVar10) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x408 + lVar10) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x404 + lVar10) = 0xffffffff;
      }
      else {
        uVar1 = uVar1 >> 8;
        if (uVar1 == 1) {
          lVar10 = lVar17 * 0x30;
          if ((uVar18 & 0x2000) == 0) {
            uVar8 = 0;
          }
          if (uVar8 == 0) {
            if (*(char *)(*(longlong *)(param_5 + 0x100) + 0x126d) == '\x03') {
              if (*(ulonglong *)(param_5 + 0x2c0) == 0) {
                *(undefined4 *)(lVar10 + param_5 + 0x408) = 0xffffffff;
                *(undefined4 *)(lVar10 + param_5 + 0x40c) = 0xffffffff;
                *(undefined4 *)(param_5 + lVar10 + 0x3f0) = 0x40410102;
                *(undefined1 *)(lVar10 + param_5 + 0x3f4) = uVar3;
                *(undefined4 *)(lVar10 + param_5 + 0x404) = 0xffffffff;
                lVar11 = param_5 + 0x298;
                *(undefined4 *)(lVar10 + param_5 + 0x400) = 0xffffffff;
                if (*(int *)(lVar11 + uVar16 * 4) == 0) {
                  uVar5 = FUN_1800f42d0(param_5,1,1);
                  *(undefined4 *)(lVar11 + uVar16 * 4) = uVar5;
                  param_1 = FUN_1800f5730(param_5,param_6,0x36,uVar5,1,
                                          *(undefined4 *)(param_5 + 0x88),0xff,uVar13 * 0x10);
                }
                *(undefined4 *)(lVar10 + param_5 + 0x410) = *(undefined4 *)(lVar11 + uVar16 * 4);
                *(undefined1 *)(lVar10 + param_5 + 0x414) = 0;
                goto LAB_180066518;
              }
              uVar16 = *(ulonglong *)(param_5 + 0x2c0) >> ((uVar16 & 0xf) << 2);
              if ((uVar16 & 0xf) == 0) {
                uVar18 = *(uint *)(param_5 + 0xac);
                uVar13 = 0xe4;
                uVar5 = *(undefined4 *)(&DAT_1802349d8 + ((ulonglong)(uVar14 >> 2) & 3) * 4);
                uVar4 = *(undefined4 *)(&DAT_1802349d8 + (uVar15 & 3) * 4);
                uVar6 = *(undefined4 *)(&DAT_1802349d8 + ((ulonglong)(uVar14 >> 4) & 3) * 4);
                uVar12 = *(undefined4 *)(&DAT_1802349d8 + (ulonglong)(uVar14 >> 6) * 4);
              }
              else {
                uVar18 = ((uint)uVar16 & 0xf) + 1 | 0x410100;
                uVar6 = 0xffffffff;
                uVar12 = 0xffffffff;
                uVar5 = 0xffffffff;
                uVar4 = 0xffffffff;
                uVar13 = uVar14;
              }
              *(undefined4 *)(lVar10 + param_5 + 0x40c) = uVar12;
              *(undefined4 *)(lVar10 + param_5 + 0x408) = uVar6;
              *(uint *)(param_5 + lVar10 + 0x3f0) = uVar18;
              *(char *)(lVar10 + param_5 + 0x3f4) = (char)uVar13;
              *(undefined4 *)(lVar10 + param_5 + 0x400) = uVar4;
              *(undefined4 *)(lVar10 + param_5 + 0x404) = uVar5;
            }
            else {
              lVar11 = param_5 + 0x298;
              if (*(int *)(lVar11 + uVar16 * 4) == 0) {
                uVar5 = FUN_1800f42d0(param_5,4,1);
                *(undefined4 *)(lVar11 + uVar16 * 4) = uVar5;
                FUN_1800f5ea8(0xe4,*(undefined1 *)(*(longlong *)(param_5 + 0x100) + uVar16));
                param_1 = FUN_1800f5730(param_5,param_6,0x2036);
              }
              *(undefined4 *)(param_5 + lVar10 + 0x3f0) = *(undefined4 *)(lVar11 + uVar16 * 4);
              *(undefined1 *)(lVar10 + param_5 + 0x3f4) = uVar3;
              *(undefined4 *)(lVar10 + param_5 + 0x400) = 0xffffffff;
              *(undefined4 *)(lVar10 + param_5 + 0x40c) = 0xffffffff;
              *(undefined4 *)(lVar10 + param_5 + 0x408) = 0xffffffff;
              *(undefined4 *)(lVar10 + param_5 + 0x404) = 0xffffffff;
            }
          }
          else if ((uVar8 & 0x1800 | uVar8 >> 0x14 & 0x7ff) >> 8 == 0xf) {
            uVar18 = *(uint *)(param_5 + 0x304);
            uVar14 = *(uint *)(param_5 + 0x308);
            if (*(char *)(param_5 + 0x531) == '\0') {
              uVar14 = *(int *)(param_5 + 0x4f4) - 1;
              uVar18 = *(uint *)(param_5 + 0x2e4 + (ulonglong)uVar14 * 4);
              uVar14 = *(uint *)(param_5 + 0x2f4 + (ulonglong)uVar14 * 4);
            }
            if (uVar14 != uVar13) {
              in_stack_ffffffffffffff60 = 0;
              param_1 = FUN_1800f5730(param_5,param_6,0x36,uVar18,8,
                                      *(uint *)(param_5 + 0x88) | 0x40000000,0xff,
                                      (uVar16 & 0xfffffff) << 4,uVar18 | 0x10000000,1,0);
              *(uint *)(param_5 + 0x2f4 + (ulonglong)(*(int *)(param_5 + 0x4f4) - 1) * 4) = uVar13;
            }
            uVar14 = 0x40410102;
            if (*(int *)(param_5 + 0x2cc) != -1) {
              uVar14 = *(int *)(param_5 + 0x2cc) << 0xe | 0x40420300;
            }
            *(uint *)(param_5 + lVar10 + 0x3f0) = uVar14;
            *(undefined1 *)(lVar10 + param_5 + 0x3f4) = uVar3;
            *(undefined4 *)(lVar10 + param_5 + 0x400) = 0xffffffff;
            *(undefined4 *)(lVar10 + param_5 + 0x40c) = 0xffffffff;
            *(undefined4 *)(lVar10 + param_5 + 0x408) = 0xffffffff;
            *(undefined4 *)(lVar10 + param_5 + 0x404) = 0xffffffff;
            *(uint *)(lVar10 + param_5 + 0x410) = uVar18;
            *(undefined1 *)(lVar10 + param_5 + 0x414) = 3;
LAB_180066518:
            *(undefined1 *)(param_5 + 0x2c8) = 1;
          }
        }
        else if (uVar1 == 2) {
          if ((*(char *)(param_5 + 0xf8) == '\0') ||
             (lVar10 = *(longlong *)(param_5 + 0x100), *(char *)(lVar10 + uVar16 + 0x331) == '\0'))
          {
            uVar5 = *(undefined4 *)(param_5 + 0x78);
            iVar9 = uVar13 * 0x10 + 0x80;
LAB_1800661f4:
            uVar12 = 0xffffffff;
            uVar4 = 0xffffffff;
            uVar6 = 0xffffffff;
          }
          else {
            uVar13 = uVar13 * 4;
            uVar4 = *(undefined4 *)
                     (lVar10 + (((ulonglong)(uVar14 >> 4) & 3) + (ulonglong)uVar13) * 4 + 0x414);
            uVar6 = *(undefined4 *)
                     ((ulonglong)(uVar14 >> 6) * 4 + (ulonglong)uVar13 * 4 + lVar10 + 0x414);
            uVar12 = *(undefined4 *)
                      (lVar10 + (((ulonglong)(uVar14 >> 2) & 3) + (ulonglong)uVar13) * 4 + 0x414);
            iVar9 = *(int *)(lVar10 + ((uVar15 & 3) + (ulonglong)uVar13) * 4 + 0x414);
LAB_1800661e0:
            uVar14 = 0xe4;
            uVar5 = 0x410400;
          }
          lVar10 = param_5 + lVar17 * 0x30;
          *(undefined4 *)(lVar10 + 0x3f0) = uVar5;
          *(char *)(lVar10 + 0x3f4) = (char)uVar14;
          *(int *)(lVar10 + 0x400) = iVar9;
          *(undefined4 *)(lVar10 + 0x404) = uVar12;
          *(undefined4 *)(lVar10 + 0x408) = uVar4;
          *(undefined4 *)(lVar10 + 0x40c) = uVar6;
        }
        else if (uVar1 == 3) {
          *(uint *)(param_5 + lVar17 * 0x30 + 0x3f0) = uVar13 + 5 | 0x410100;
          *(undefined1 *)(param_5 + 0x3f4 + lVar17 * 0x30) = uVar3;
LAB_180066244:
          lVar10 = lVar17 * 0x30;
          *(undefined4 *)(param_5 + 0x400 + lVar10) = 0xffffffff;
          *(undefined4 *)(param_5 + 0x40c + lVar10) = 0xffffffff;
          *(undefined4 *)(param_5 + 0x408 + lVar10) = 0xffffffff;
          *(undefined4 *)(param_5 + 0x404 + lVar10) = 0xffffffff;
        }
        else {
          if (uVar1 == 7) {
            if ((*(char *)(param_5 + 0xf8) == '\0') ||
               (lVar10 = *(longlong *)(param_5 + 0x100), *(char *)(lVar10 + uVar16 + 400) == '\0'))
            {
              uVar5 = *(undefined4 *)(param_5 + 0x88);
              iVar9 = uVar13 * 0x10;
              goto LAB_1800661f4;
            }
            uVar13 = uVar13 * 4;
            uVar4 = *(undefined4 *)
                     (lVar10 + (((ulonglong)(uVar14 >> 4) & 3) + (ulonglong)uVar13) * 4 + 0x1a0);
            uVar6 = *(undefined4 *)
                     ((ulonglong)(uVar14 >> 6) * 4 + (ulonglong)uVar13 * 4 + lVar10 + 0x1a0);
            uVar12 = *(undefined4 *)
                      (lVar10 + (((ulonglong)(uVar14 >> 2) & 3) + (ulonglong)uVar13) * 4 + 0x1a0);
            iVar9 = *(int *)(lVar10 + ((uVar15 & 3) + (ulonglong)uVar13) * 4 + 0x1a0);
            goto LAB_1800661e0;
          }
          if (uVar1 == 10) {
            uVar5 = func_0x0001802136f8(lVar17 * 3,param_5,uVar16,0,uVar16);
            *(undefined4 *)(param_5 + extraout_x10 + 0x3f0) = uVar5;
            *(undefined1 *)(param_5 + 0x3f4 + extraout_x10) = uVar3;
            *(undefined4 *)(param_5 + 0x400 + extraout_x10) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x40c + extraout_x10) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x408 + extraout_x10) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x404 + extraout_x10) = 0xffffffff;
            param_1 = func_0x0001802136f8(param_5,extraout_x1,1,uVar13 + 0x10);
            *(undefined1 *)(param_5 + 0x4b4) = uVar3;
            puVar7 = (undefined8 *)(param_5 + 0x4c0);
            *(int *)(param_5 + 0x4b0) = (int)param_1;
          }
          else {
            if (uVar1 != 0x11) {
              if (uVar1 != 0x12) goto LAB_180066610;
              *(uint *)(param_5 + lVar17 * 0x30 + 0x3f0) = uVar13 | 0x20410a00;
              *(undefined1 *)(param_5 + 0x3f4 + lVar17 * 0x30) = 0;
              goto LAB_180066244;
            }
            if (uVar13 == 1) {
              if (*(int *)(param_5 + 0x314) == 0) {
                uVar4 = FUN_1800f42d0(param_5,1,1);
                *(undefined4 *)(param_5 + 0x314) = uVar4;
                in_stack_ffffffffffffff60 = CONCAT44(uVar5,*(undefined4 *)(param_5 + 0xa8));
                FUN_1800f5730(param_5,param_6,0x37,uVar4,1,0x41010d,0,
                              *(undefined4 *)(param_5 + 0xa8),0xe4,0x3f800000,
                              in_stack_ffffffffffffff60,0xe4,0xbf800000,0);
              }
              param_1 = (ulonglong)*(uint *)(param_5 + 0x314);
              uVar14 = 0;
            }
            else {
              param_1 = FUN_180065980(param_1,param_5,param_6);
            }
            lVar10 = param_5 + lVar17 * 0x30;
            *(int *)(lVar10 + 0x3f0) = (int)param_1;
            puVar7 = (undefined8 *)(lVar10 + 0x400);
            *(char *)(lVar10 + 0x3f4) = (char)uVar14;
          }
          *puVar7 = 0xffffffffffffffff;
          puVar7[1] = 0xffffffffffffffff;
        }
      }
LAB_180066610:
      lVar10 = param_5 + 0x3f0;
      lVar11 = lVar17 * 0x30;
      if (uVar2 == 0x1000000) {
        uVar18 = *(uint *)(lVar10 + lVar11) | 0x80000000;
LAB_180066668:
        *(uint *)(lVar10 + lVar11) = uVar18;
      }
      else {
        if (uVar2 == 0xb000000) {
          uVar18 = *(uint *)(lVar10 + lVar11) | 0x8000000;
          goto LAB_180066668;
        }
        if (uVar2 == 0xc000000) {
          uVar18 = *(uint *)(lVar10 + lVar11) | 0x88000000;
          goto LAB_180066668;
        }
      }
      param_8 = '\0';
      lVar17 = lVar17 + 1;
      local_70 = local_70 + 1;
    } while (local_70 < param_3);
  }
  return param_2;
}

