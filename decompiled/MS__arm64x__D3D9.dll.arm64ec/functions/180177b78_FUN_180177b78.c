/*
 * FUN_180177b78 at 180177b78
 * undefined FUN_180177b78(void)
 * Address ranges: 180177b78-18017830b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180177b78(undefined8 param_1,uint *param_2,uint param_3,int param_4,longlong param_5,
                    undefined8 param_6,char param_7,char param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined8 extraout_x1;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong extraout_x10;
  int iVar13;
  longlong lVar14;
  undefined4 uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint local_d0 [2];
  uint local_c8;
  undefined8 local_c0;
  longlong local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  uint local_70;
  uint *local_50;
  
  if (param_3 != 0) {
    lVar19 = 0;
    local_70 = 0;
    puVar6 = param_2;
    local_50 = param_2;
    do {
      uVar20 = *local_50;
      uVar16 = uVar20 >> 0x10 & 0xff;
      iVar13 = param_4;
      if (local_70 != 1) {
        iVar13 = 0;
      }
      uVar7 = iVar13 + (uVar20 & 0x7ff);
      uVar18 = (ulonglong)uVar7;
      if ((uVar20 & 0x2000) == 0) {
        uVar9 = 0;
      }
      else {
        local_50 = local_50 + 1;
        uVar9 = *local_50;
      }
      if (param_7 != '\0') {
        uVar16 = uVar20 >> 0x16 & 3;
        uVar16 = uVar16 | (uVar16 | (uVar16 | uVar16 << 2) << 2) << 2;
      }
      uVar17 = (ulonglong)uVar16;
      param_2 = local_50 + 1;
      uVar2 = 0xb000000;
      if (param_8 == '\0') {
        uVar2 = uVar20 & 0xf000000;
      }
      uVar1 = uVar20 & 0x1800 | uVar20 >> 0x14 & 0x700;
      uVar4 = (undefined1)uVar16;
      if (uVar1 < 0x100) {
        lVar11 = param_5 + 0x218;
        uVar20 = *(uint *)(lVar11 + uVar18 * 4);
        puVar6 = (uint *)(ulonglong)uVar20;
        if (uVar20 == 0) {
          puVar6 = (uint *)FUN_180213760(param_5,4,1);
          *(int *)(lVar11 + uVar18 * 4) = (int)puVar6;
        }
        *(int *)(param_5 + lVar19 * 0x30 + 0x3f0) = (int)puVar6;
LAB_180178244:
        *(undefined1 *)(param_5 + 0x3f4 + lVar19 * 0x30) = uVar4;
LAB_18017824c:
        lVar11 = lVar19 * 0x30;
        *(undefined4 *)(param_5 + 0x400 + lVar11) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x40c + lVar11) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x408 + lVar11) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x404 + lVar11) = 0xffffffff;
      }
      else {
        uVar1 = uVar1 >> 8;
        if (uVar1 == 1) {
          lVar11 = lVar19 * 0x30;
          if ((uVar20 & 0x2000) == 0) {
            uVar9 = 0;
          }
          if (uVar9 == 0) {
            if (*(char *)(*(longlong *)(param_5 + 0x100) + 0x126d) == '\x03') {
              if (*(ulonglong *)(param_5 + 0x2c0) == 0) {
                *(undefined4 *)(param_5 + lVar11 + 0x3f0) = 0x40410102;
                *(undefined1 *)(lVar11 + param_5 + 0x3f4) = uVar4;
                *(undefined4 *)(lVar11 + param_5 + 0x40c) = 0xffffffff;
                *(undefined4 *)(lVar11 + param_5 + 0x400) = 0xffffffff;
                *(undefined4 *)(lVar11 + param_5 + 0x404) = 0xffffffff;
                *(undefined4 *)(lVar11 + param_5 + 0x408) = 0xffffffff;
                puVar6 = (uint *)FUN_180177508(puVar6,param_5,param_6,uVar18);
                *(int *)(lVar11 + param_5 + 0x410) = (int)puVar6;
                *(undefined1 *)(lVar11 + param_5 + 0x414) = 0;
                goto LAB_18017815c;
              }
              uVar18 = *(ulonglong *)(param_5 + 0x2c0) >> ((uVar18 & 0xf) << 2);
              if ((uVar18 & 0xf) == 0) {
                uVar20 = *(uint *)(param_5 + 0xac);
                uVar5 = *(undefined4 *)(&DAT_18022c448 + (uVar17 & 3) * 4);
                uVar8 = *(undefined4 *)(&DAT_18022c448 + ((ulonglong)(uVar16 >> 2) & 3) * 4);
                uVar7 = 0xe4;
                uVar15 = *(undefined4 *)(&DAT_18022c448 + ((ulonglong)(uVar16 >> 4) & 3) * 4);
                uVar12 = *(undefined4 *)(&DAT_18022c448 + (ulonglong)(uVar16 >> 6) * 4);
              }
              else {
                uVar20 = ((uint)uVar18 & 0xf) + 1 | 0x410100;
                uVar15 = 0xffffffff;
                uVar12 = 0xffffffff;
                uVar8 = 0xffffffff;
                uVar5 = 0xffffffff;
                uVar7 = uVar16;
              }
              *(undefined4 *)(lVar11 + param_5 + 0x40c) = uVar12;
              *(undefined4 *)(lVar11 + param_5 + 0x408) = uVar15;
              *(uint *)(param_5 + lVar11 + 0x3f0) = uVar20;
              *(char *)(lVar11 + param_5 + 0x3f4) = (char)uVar7;
              *(undefined4 *)(lVar11 + param_5 + 0x400) = uVar5;
              *(undefined4 *)(lVar11 + param_5 + 0x404) = uVar8;
            }
            else {
              lVar14 = param_5 + 0x298;
              if (*(int *)(lVar14 + uVar18 * 4) == 0) {
                uVar5 = FUN_180213760(param_5,4,1);
                *(undefined4 *)(lVar14 + uVar18 * 4) = uVar5;
                bVar3 = *(byte *)(*(longlong *)(param_5 + 0x100) + uVar18);
                uVar20 = (uint)bVar3;
                uVar5 = FUN_180213268(0xe4,bVar3);
                local_d0[0] = uVar20;
                local_b8 = 0;
                local_c8 = uVar7 + 2 | 0x410100;
                local_c0 = CONCAT44(local_c0._4_4_,uVar5) & 0xffffffff000000ff;
                puVar6 = (uint *)FUN_180214c88(param_5,param_6,0x2036);
              }
              *(undefined4 *)(param_5 + lVar11 + 0x3f0) = *(undefined4 *)(lVar14 + uVar18 * 4);
              *(undefined1 *)(lVar11 + param_5 + 0x3f4) = uVar4;
              *(undefined4 *)(lVar11 + param_5 + 0x400) = 0xffffffff;
              *(undefined4 *)(lVar11 + param_5 + 0x40c) = 0xffffffff;
              *(undefined4 *)(lVar11 + param_5 + 0x408) = 0xffffffff;
              *(undefined4 *)(lVar11 + param_5 + 0x404) = 0xffffffff;
            }
          }
          else if ((uVar9 & 0x1800 | uVar9 >> 0x14 & 0x7ff) >> 8 == 0xf) {
            uVar20 = *(uint *)(param_5 + 0x304);
            uVar16 = *(uint *)(param_5 + 0x308);
            if (*(char *)(param_5 + 0x531) == '\0') {
              uVar16 = *(int *)(param_5 + 0x4f4) - 1;
              uVar20 = *(uint *)(param_5 + 0x2e4 + (ulonglong)uVar16 * 4);
              uVar16 = *(uint *)(param_5 + 0x2f4 + (ulonglong)uVar16 * 4);
            }
            if (uVar16 != uVar7) {
              local_b0 = uVar20 | 0x10000000;
              local_b8 = (uVar18 & 0xfffffff) << 4;
              local_a0 = 0;
              local_c8 = *(uint *)(param_5 + 0x88) | 0x40000000;
              local_a8 = 1;
              local_c0 = CONCAT44(local_c0._4_4_,0xff);
              local_d0[0] = 8;
              puVar6 = (uint *)FUN_180214c88(param_5,param_6,0x36,uVar20,local_d0,0x38);
              *(uint *)(param_5 + 0x2f4 + (ulonglong)(*(int *)(param_5 + 0x4f4) - 1) * 4) = uVar7;
            }
            uVar16 = 0x40410102;
            if (*(int *)(param_5 + 0x2cc) != -1) {
              uVar16 = *(int *)(param_5 + 0x2cc) << 0xe | 0x40420300;
            }
            *(uint *)(param_5 + lVar11 + 0x3f0) = uVar16;
            *(undefined1 *)(lVar11 + param_5 + 0x3f4) = uVar4;
            *(undefined4 *)(lVar11 + param_5 + 0x400) = 0xffffffff;
            *(undefined4 *)(lVar11 + param_5 + 0x40c) = 0xffffffff;
            *(undefined4 *)(lVar11 + param_5 + 0x408) = 0xffffffff;
            *(undefined4 *)(lVar11 + param_5 + 0x404) = 0xffffffff;
            *(uint *)(lVar11 + param_5 + 0x410) = uVar20;
            *(undefined1 *)(lVar11 + param_5 + 0x414) = 3;
LAB_18017815c:
            *(undefined1 *)(param_5 + 0x2c8) = 1;
          }
        }
        else if (uVar1 == 2) {
          if ((*(char *)(param_5 + 0xf8) == '\0') ||
             (lVar11 = *(longlong *)(param_5 + 0x100), *(char *)(lVar11 + uVar18 + 0x331) == '\0'))
          {
            uVar12 = *(undefined4 *)(param_5 + 0x78);
            iVar13 = uVar7 * 0x10 + 0x80;
            uVar5 = 0xffffffff;
            uVar15 = 0xffffffff;
            uVar8 = 0xffffffff;
          }
          else {
            uVar7 = uVar7 * 4;
            uVar5 = *(undefined4 *)
                     ((ulonglong)(uVar16 >> 6) * 4 + (ulonglong)uVar7 * 4 + lVar11 + 0x414);
            uVar20 = uVar16 >> 4;
            uVar8 = *(undefined4 *)
                     (lVar11 + (((ulonglong)(uVar16 >> 2) & 3) + (ulonglong)uVar7) * 4 + 0x414);
            uVar16 = 0xe4;
            uVar12 = 0x410400;
            uVar15 = *(undefined4 *)
                      (lVar11 + (((ulonglong)uVar20 & 3) + (ulonglong)uVar7) * 4 + 0x414);
            iVar13 = *(int *)(lVar11 + ((uVar17 & 3) + (ulonglong)uVar7) * 4 + 0x414);
          }
          lVar11 = param_5 + lVar19 * 0x30;
          *(undefined4 *)(lVar11 + 0x3f0) = uVar12;
          *(char *)(lVar11 + 0x3f4) = (char)uVar16;
          *(int *)(lVar11 + 0x400) = iVar13;
          *(undefined4 *)(lVar11 + 0x404) = uVar8;
          *(undefined4 *)(lVar11 + 0x408) = uVar15;
          *(undefined4 *)(lVar11 + 0x40c) = uVar5;
        }
        else {
          if (uVar1 == 3) {
            *(uint *)(param_5 + lVar19 * 0x30 + 0x3f0) = uVar7 + 5 | 0x410100;
            goto LAB_180178244;
          }
          if (uVar1 == 7) {
            if ((*(char *)(param_5 + 0xf8) == '\0') ||
               (lVar11 = *(longlong *)(param_5 + 0x100), *(char *)(lVar11 + uVar18 + 400) == '\0'))
            {
              uVar12 = *(undefined4 *)(param_5 + 0x88);
              uVar8 = 0xffffffff;
              uVar5 = 0xffffffff;
              uVar15 = 0xffffffff;
              iVar13 = uVar7 * 0x10;
            }
            else {
              uVar7 = uVar7 * 4;
              uVar5 = *(undefined4 *)
                       (lVar11 + (((ulonglong)(uVar16 >> 4) & 3) + (ulonglong)uVar7) * 4 + 0x1a0);
              uVar8 = *(undefined4 *)
                       ((ulonglong)(uVar16 >> 6) * 4 + (ulonglong)uVar7 * 4 + lVar11 + 0x1a0);
              uVar15 = *(undefined4 *)
                        (lVar11 + (((ulonglong)(uVar16 >> 2) & 3) + (ulonglong)uVar7) * 4 + 0x1a0);
              uVar16 = 0xe4;
              uVar12 = 0x410400;
              iVar13 = *(int *)(lVar11 + ((uVar17 & 3) + (ulonglong)uVar7) * 4 + 0x1a0);
            }
            lVar11 = param_5 + lVar19 * 0x30;
            *(undefined4 *)(lVar11 + 0x3f0) = uVar12;
            *(char *)(lVar11 + 0x3f4) = (char)uVar16;
            *(int *)(lVar11 + 0x400) = iVar13;
            *(undefined4 *)(lVar11 + 0x404) = uVar15;
            *(undefined4 *)(lVar11 + 0x408) = uVar5;
            *(undefined4 *)(lVar11 + 0x40c) = uVar8;
          }
          else {
            if (uVar1 == 10) {
              uVar5 = FUN_1802136f8(lVar19 * 3,param_5,uVar18,0,uVar18);
              *(undefined4 *)(param_5 + extraout_x10 + 0x3f0) = uVar5;
              *(undefined1 *)(param_5 + 0x3f4 + extraout_x10) = uVar4;
              *(undefined4 *)(param_5 + 0x400 + extraout_x10) = 0xffffffff;
              *(undefined4 *)(param_5 + 0x40c + extraout_x10) = 0xffffffff;
              *(undefined4 *)(param_5 + 0x408 + extraout_x10) = 0xffffffff;
              *(undefined4 *)(param_5 + 0x404 + extraout_x10) = 0xffffffff;
              puVar6 = (uint *)FUN_1802136f8(param_5,extraout_x1,1,uVar7 + 0x10);
              *(undefined1 *)(param_5 + 0x4b4) = uVar4;
              puVar10 = (undefined8 *)(param_5 + 0x4c0);
              *(int *)(param_5 + 0x4b0) = (int)puVar6;
            }
            else {
              if (uVar1 != 0x11) {
                if (uVar1 != 0x12) goto LAB_180178270;
                *(uint *)(param_5 + lVar19 * 0x30 + 0x3f0) = uVar7 | 0x20410a00;
                *(undefined1 *)(param_5 + 0x3f4 + lVar19 * 0x30) = 0;
                goto LAB_18017824c;
              }
              if (uVar7 == 1) {
                if (*(int *)(param_5 + 0x314) == 0) {
                  uVar5 = FUN_180213760(param_5,1,1);
                  local_98 = 0xe4;
                  local_b0 = 0xe4;
                  local_c8 = 0x41010d;
                  *(undefined4 *)(param_5 + 0x314) = uVar5;
                  local_d0[0] = 1;
                  local_88 = 0;
                  local_90 = 0xbf800000;
                  local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(param_5 + 0xa8));
                  local_a8 = 0x3f800000;
                  local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_5 + 0xa8));
                  local_c0 = 0;
                  FUN_180214c88(param_5,param_6,0x37,uVar5,local_d0,0x50);
                }
                puVar6 = (uint *)(ulonglong)*(uint *)(param_5 + 0x314);
                uVar16 = 0;
              }
              else {
                puVar6 = (uint *)FUN_180177590(puVar6,param_5,param_6);
              }
              lVar11 = param_5 + lVar19 * 0x30;
              *(int *)(lVar11 + 0x3f0) = (int)puVar6;
              puVar10 = (undefined8 *)(lVar11 + 0x400);
              *(char *)(lVar11 + 0x3f4) = (char)uVar16;
            }
            *puVar10 = 0xffffffffffffffff;
            puVar10[1] = 0xffffffffffffffff;
          }
        }
      }
LAB_180178270:
      lVar11 = param_5 + 0x3f0;
      lVar14 = lVar19 * 0x30;
      if (uVar2 == 0x1000000) {
        uVar20 = *(uint *)(lVar11 + lVar14) | 0x80000000;
LAB_1801782c8:
        *(uint *)(lVar11 + lVar14) = uVar20;
      }
      else {
        if (uVar2 == 0xb000000) {
          uVar20 = *(uint *)(lVar11 + lVar14) | 0x8000000;
          goto LAB_1801782c8;
        }
        if (uVar2 == 0xc000000) {
          uVar20 = *(uint *)(lVar11 + lVar14) | 0x88000000;
          goto LAB_1801782c8;
        }
      }
      param_8 = '\0';
      lVar19 = lVar19 + 1;
      local_70 = local_70 + 1;
      local_50 = param_2;
    } while (local_70 < param_3);
  }
  return param_2;
}

