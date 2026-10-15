/*
 * FUN_180182a88 at 180182a88
 * undefined FUN_180182a88(void)
 * Address ranges: 180182a88-180182f3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180182a88(undefined8 param_1,uint *param_2,uint param_3,int param_4,longlong param_5,
                    char param_6,char param_7)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong extraout_x10;
  longlong lVar13;
  undefined4 uVar14;
  longlong extraout_x11;
  undefined4 uVar15;
  longlong extraout_x12;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  uint local_50;
  
  if (param_3 != 0) {
    lVar20 = 0;
    local_50 = 0;
    lVar1 = param_5 + 0x3d0;
    do {
      uVar9 = *param_2;
      uVar8 = uVar9 & 0x2000;
      iVar6 = param_4;
      if (local_50 != 1) {
        iVar6 = 0;
      }
      uVar2 = iVar6 + (uVar9 & 0x7ff);
      uVar7 = (ulonglong)uVar2;
      if (param_6 == '\0') {
        uVar17 = uVar9 >> 0x10 & 0xff;
      }
      else {
        uVar17 = uVar9 >> 0x16 & 3;
        uVar17 = uVar17 | (uVar17 | (uVar17 | uVar17 << 2) << 2) << 2;
      }
      uVar18 = (ulonglong)uVar17;
      uVar11 = 0;
      bVar10 = 0;
      if (uVar8 != 0) {
        uVar19 = param_2[1];
        uVar3 = (uVar19 & 0x1800 | uVar19 >> 0x14 & 0x7ff) >> 8;
        if (uVar3 == 3) {
          uVar11 = *(uint *)(param_5 + 0x238) | 0x10000000;
          bVar10 = (byte)(uVar19 >> 0x10) & 3;
        }
        else {
          bVar10 = 0;
          if (uVar3 == 0xf) {
            uVar11 = *(uint *)(param_5 + 0x2b4 + (ulonglong)(*(int *)(param_5 + 0x2f0) - 1) * 4) |
                     0x10000000;
            bVar10 = 1;
          }
        }
        param_2 = param_2 + 1;
      }
      param_2 = param_2 + 1;
      uVar19 = 0xb000000;
      if (param_7 == '\0') {
        uVar19 = uVar9 & 0xf000000;
      }
      uVar9 = uVar9 & 0x1800 | uVar9 >> 0x14 & 0x700;
      uVar4 = (undefined1)uVar17;
      if (uVar9 < 0x100) {
        lVar13 = param_5 + 0x140;
        iVar6 = *(int *)(lVar13 + uVar7 * 4);
        if (iVar6 == 0) {
          iVar6 = FUN_180213760(param_5 + 0x20,4,1);
          *(int *)(lVar13 + (uVar7 & 0xffffffff) * 4) = iVar6;
        }
        lVar13 = lVar20 * 0x30 + param_5;
        *(undefined1 *)(lVar13 + 0x3d4) = uVar4;
        *(int *)(param_5 + 0x3d0 + lVar20 * 0x30) = iVar6;
        goto LAB_180182ea8;
      }
      uVar9 = uVar9 >> 8;
      if (uVar9 == 1) {
        lVar16 = lVar20 * 0x30;
        lVar13 = lVar16 + param_5;
        if (uVar8 == 0) {
          uVar5 = *(undefined4 *)(param_5 + 0x100 + uVar7 * 4);
          *(undefined1 *)(lVar13 + 0x3d4) = uVar4;
          *(undefined4 *)(lVar1 + lVar16) = uVar5;
          *(undefined4 *)(lVar13 + 0x3e0) = 0xffffffff;
          *(undefined4 *)(lVar13 + 0x3e4) = 0xffffffff;
          *(undefined4 *)(lVar13 + 1000) = 0xffffffff;
          *(undefined4 *)(lVar13 + 0x3ec) = 0xffffffff;
        }
        else {
          uVar8 = *(uint *)(param_5 + 0x23c + uVar7 * 4);
          *(undefined1 *)(lVar13 + 0x3d4) = uVar4;
          *(uint *)(lVar1 + lVar16) = uVar8 | 0x40000000;
          *(undefined4 *)(lVar13 + 0x3e0) = 0xffffffff;
          *(undefined4 *)(lVar13 + 0x3e4) = 0xffffffff;
          *(undefined4 *)(lVar13 + 1000) = 0xffffffff;
          *(undefined4 *)(lVar13 + 0x3ec) = 0xffffffff;
          *(uint *)(lVar13 + 0x3f0) = uVar11;
          *(byte *)(lVar13 + 0x3f4) = bVar10;
        }
      }
      else if (uVar9 == 2) {
        if (((*(char *)(param_5 + 0xdc) == '\0') || (uVar8 != 0)) ||
           (lVar13 = *(longlong *)(param_5 + 0x10), *(char *)(lVar13 + uVar7 + 0x44f) == '\0')) {
          uVar9 = *(uint *)(param_5 + 0x2dc);
          lVar13 = lVar20 * 0x30 + param_5;
          *(undefined1 *)(lVar13 + 0x3d4) = uVar4;
          *(uint *)(param_5 + 0x3d0 + lVar20 * 0x30) = uVar9 | (uint)(uVar8 != 0) << 0x1e;
          *(uint *)(lVar13 + 0x3e0) = uVar2 * 0x10 + 0x140;
          *(undefined8 *)(lVar13 + 0x3e4) = 0xffffffffffffffff;
          *(undefined4 *)(lVar13 + 0x3ec) = 0xffffffff;
          if (uVar8 != 0) {
            *(uint *)(lVar13 + 0x3f0) = uVar11;
            *(byte *)(lVar13 + 0x3f4) = bVar10;
          }
        }
        else {
          uVar8 = 0x7fffffff;
          if ((uVar19 + 0xf5000000 & 0xfeffffff) != 0) {
            uVar8 = 0xffffffff;
          }
          uVar9 = 0;
          if (uVar19 == 0x1000000 || uVar19 == 0xc000000) {
            uVar9 = 0x80000000;
          }
          uVar2 = uVar2 * 4;
          uVar19 = 0;
          uVar11 = *(uint *)((ulonglong)(uVar17 >> 6) * 4 + (ulonglong)uVar2 * 4 + lVar13 + 0x850);
          uVar3 = *(uint *)(lVar13 + (((ulonglong)(uVar17 >> 4) & 3) + (ulonglong)uVar2) * 4 + 0x850
                           );
          uVar17 = *(uint *)(lVar13 + (((ulonglong)(uVar17 >> 2) & 3) + (ulonglong)uVar2) * 4 +
                            0x850);
          uVar2 = *(uint *)(lVar13 + ((uVar18 & 3) + (ulonglong)uVar2) * 4 + 0x850);
          *(undefined4 *)(param_5 + 0x3d0 + lVar20 * 0x30) = 0x410400;
          lVar13 = lVar20 * 0x30 + param_5;
          *(undefined1 *)(lVar13 + 0x3d4) = 0xe4;
          *(uint *)(lVar13 + 0x3e0) = uVar2 & uVar8 ^ uVar9;
          *(uint *)(lVar13 + 0x3e4) = uVar17 & uVar8 ^ uVar9;
          *(uint *)(lVar13 + 1000) = uVar3 & uVar8 ^ uVar9;
          *(uint *)(lVar13 + 0x3ec) = uVar11 & uVar8 ^ uVar9;
        }
      }
      else if (uVar9 == 7) {
        if ((*(char *)(param_5 + 0xdc) == '\0') ||
           (lVar13 = *(longlong *)(param_5 + 0x10), *(char *)(lVar13 + uVar7 + 0x48c5) == '\0')) {
          uVar5 = *(undefined4 *)(param_5 + 0x2dc);
          uVar15 = 0xffffffff;
          uVar14 = 0xffffffff;
          uVar12 = 0xffffffff;
          iVar6 = uVar2 * 0x10;
        }
        else {
          uVar2 = uVar2 * 4;
          uVar5 = 0x410400;
          uVar15 = *(undefined4 *)
                    ((ulonglong)(uVar17 >> 6) * 4 + (ulonglong)uVar2 * 4 + lVar13 + 0x48d8);
          uVar14 = *(undefined4 *)
                    (lVar13 + (((ulonglong)(uVar17 >> 4) & 3) + (ulonglong)uVar2) * 4 + 0x48d8);
          uVar8 = uVar17 >> 2;
          uVar17 = 0xe4;
          uVar12 = *(undefined4 *)
                    (lVar13 + (((ulonglong)uVar8 & 3) + (ulonglong)uVar2) * 4 + 0x48d8);
          iVar6 = *(int *)(lVar13 + ((uVar18 & 3) + (ulonglong)uVar2) * 4 + 0x48d8);
        }
        *(undefined4 *)(param_5 + 0x3d0 + lVar20 * 0x30) = uVar5;
        lVar13 = param_5 + lVar20 * 0x30;
        *(char *)(param_5 + lVar20 * 0x30 + 0x3d4) = (char)uVar17;
        *(int *)(param_5 + lVar20 * 0x30 + 0x3e0) = iVar6;
        *(undefined4 *)(lVar20 * 0x30 + param_5 + 0x3e4) = uVar12;
        *(undefined4 *)(lVar13 + 1000) = uVar14;
        *(undefined4 *)(lVar13 + 0x3ec) = uVar15;
      }
      else {
        if (uVar9 == 10) {
          uVar5 = FUN_1802136f8(lVar20 * 3,param_5 + 0x20,uVar7,0);
          *(undefined1 *)(extraout_x11 + 0x3d4) = 0;
          *(undefined4 *)(extraout_x10 + extraout_x12) = uVar5;
          lVar13 = extraout_x11;
        }
        else {
          if (uVar9 != 0x12) goto LAB_180182eb0;
          lVar13 = lVar20 * 0x30 + param_5;
          *(uint *)(param_5 + 0x3d0 + lVar20 * 0x30) = uVar2 | 0x20410a00;
          *(undefined1 *)(lVar13 + 0x3d4) = 0;
        }
LAB_180182ea8:
        *(undefined8 *)(lVar13 + 0x3e0) = 0xffffffffffffffff;
        *(undefined8 *)(lVar13 + 1000) = 0xffffffffffffffff;
      }
LAB_180182eb0:
      lVar13 = lVar20 * 0x30;
      if (uVar19 == 0x1000000) {
        uVar8 = *(uint *)(lVar1 + lVar13) | 0x80000000;
LAB_180182f00:
        *(uint *)(lVar1 + lVar13) = uVar8;
      }
      else {
        if (uVar19 == 0xb000000) {
          uVar8 = *(uint *)(lVar1 + lVar13) | 0x8000000;
          goto LAB_180182f00;
        }
        if (uVar19 == 0xc000000) {
          uVar8 = *(uint *)(lVar1 + lVar13) | 0x88000000;
          goto LAB_180182f00;
        }
      }
      param_7 = '\0';
      lVar20 = lVar20 + 1;
      local_50 = local_50 + 1;
    } while (local_50 < param_3);
  }
  return param_2;
}

