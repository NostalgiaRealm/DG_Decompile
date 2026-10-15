/*
 * FUN_18006fb88 at 18006fb88
 * undefined FUN_18006fb88(void)
 * Address ranges: 18006fb88-18007002f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18006fb88(undefined8 param_1,uint *param_2,uint param_3,int param_4,longlong param_5,
                    char param_6,char param_7)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  longlong extraout_x10;
  longlong lVar15;
  undefined4 uVar16;
  longlong extraout_x11;
  undefined4 uVar17;
  longlong extraout_x12;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  
  if (param_3 != 0) {
    uVar22 = 0;
    lVar8 = 0;
    lVar1 = param_5 + 0x3d0;
    uVar7 = 0xffffffff;
    do {
      iVar5 = param_4;
      if (uVar22 != 1) {
        iVar5 = 0;
      }
      uVar10 = *param_2;
      uVar11 = iVar5 + (uVar10 & 0x7ff);
      uVar6 = (ulonglong)uVar11;
      uVar9 = uVar10 & 0x2000;
      if (param_6 == '\0') {
        uVar19 = uVar10 >> 0x10 & 0xff;
      }
      else {
        uVar19 = uVar10 >> 0x16 & 3;
        uVar19 = uVar19 | (uVar19 | (uVar19 | uVar19 << 2) << 2) << 2;
      }
      uVar20 = (ulonglong)uVar19;
      uVar13 = 0;
      bVar12 = 0;
      if (uVar9 != 0) {
        uVar21 = param_2[1];
        uVar2 = (uVar21 & 0x1800 | uVar21 >> 0x14 & 0x7ff) >> 8;
        if (uVar2 == 3) {
          uVar13 = *(uint *)(param_5 + 0x238) | 0x10000000;
          bVar12 = (byte)(uVar21 >> 0x10) & 3;
        }
        else {
          bVar12 = 0;
          if (uVar2 == 0xf) {
            uVar13 = *(uint *)(param_5 + 0x2b4 + (ulonglong)(*(int *)(param_5 + 0x2f0) - 1) * 4) |
                     0x10000000;
            bVar12 = 1;
          }
        }
        param_2 = param_2 + 1;
      }
      uVar21 = 0xb000000;
      if (param_7 == '\0') {
        uVar21 = uVar10 & 0xf000000;
      }
      uVar10 = uVar10 & 0x1800 | uVar10 >> 0x14 & 0x700;
      param_2 = param_2 + 1;
      uVar3 = (undefined1)uVar19;
      if (uVar10 < 0x100) {
        lVar15 = param_5 + 0x140;
        iVar5 = *(int *)(lVar15 + uVar6 * 4);
        if (iVar5 == 0) {
          iVar5 = FUN_1800f42d0(param_5 + 0x20,4,1);
          *(int *)(lVar15 + (uVar6 & 0xffffffff) * 4) = iVar5;
        }
        lVar15 = lVar8 * 0x30 + param_5;
        *(undefined1 *)(lVar15 + 0x3d4) = uVar3;
        *(int *)(param_5 + 0x3d0 + lVar8 * 0x30) = iVar5;
        goto LAB_18006ffac;
      }
      uVar10 = uVar10 >> 8;
      uVar4 = (undefined4)uVar7;
      if (uVar10 == 1) {
        lVar18 = lVar8 * 0x30;
        lVar15 = lVar18 + param_5;
        if (uVar9 == 0) {
          uVar17 = *(undefined4 *)(param_5 + 0x100 + uVar6 * 4);
          *(undefined1 *)(lVar15 + 0x3d4) = uVar3;
          *(undefined4 *)(lVar1 + lVar18) = uVar17;
          *(undefined4 *)(lVar15 + 0x3e0) = uVar4;
          *(undefined4 *)(lVar15 + 0x3e4) = uVar4;
          *(undefined4 *)(lVar15 + 1000) = uVar4;
          *(undefined4 *)(lVar15 + 0x3ec) = uVar4;
        }
        else {
          uVar11 = *(uint *)(param_5 + 0x23c + uVar6 * 4);
          *(undefined1 *)(lVar15 + 0x3d4) = uVar3;
          *(uint *)(lVar1 + lVar18) = uVar11 | 0x40000000;
          *(undefined4 *)(lVar15 + 0x3e0) = uVar4;
          *(undefined4 *)(lVar15 + 0x3e4) = uVar4;
          *(undefined4 *)(lVar15 + 1000) = uVar4;
          *(undefined4 *)(lVar15 + 0x3ec) = uVar4;
          *(uint *)(lVar15 + 0x3f0) = uVar13;
          *(byte *)(lVar15 + 0x3f4) = bVar12;
        }
      }
      else if (uVar10 == 2) {
        if (((*(char *)(param_5 + 0xdc) == '\0') || (uVar9 != 0)) ||
           (lVar15 = *(longlong *)(param_5 + 0x10), *(char *)(lVar15 + uVar6 + 0x44f) == '\0')) {
          uVar10 = *(uint *)(param_5 + 0x2dc);
          lVar15 = lVar8 * 0x30 + param_5;
          *(undefined1 *)(lVar15 + 0x3d4) = uVar3;
          *(uint *)(param_5 + 0x3d0 + lVar8 * 0x30) = uVar10 | (uint)(uVar9 != 0) << 0x1e;
          *(uint *)(lVar15 + 0x3e0) = uVar11 * 0x10 + 0x140;
          *(undefined8 *)(lVar15 + 0x3e4) = 0xffffffffffffffff;
          *(undefined4 *)(lVar15 + 0x3ec) = uVar4;
          if (uVar9 != 0) {
            *(uint *)(lVar15 + 0x3f0) = uVar13;
            *(byte *)(lVar15 + 0x3f4) = bVar12;
          }
        }
        else {
          uVar9 = 0x7fffffff;
          if ((uVar21 + 0xf5000000 & 0xfeffffff) != 0) {
            uVar9 = 0xffffffff;
          }
          uVar10 = 0;
          if (uVar21 == 0x1000000 || uVar21 == 0xc000000) {
            uVar10 = 0x80000000;
          }
          uVar11 = uVar11 * 4;
          uVar21 = 0;
          uVar13 = *(uint *)((ulonglong)(uVar19 >> 6) * 4 + (ulonglong)uVar11 * 4 + lVar15 + 0x850);
          uVar2 = *(uint *)(lVar15 + (((ulonglong)(uVar19 >> 4) & 3) + (ulonglong)uVar11) * 4 +
                           0x850);
          uVar19 = *(uint *)(lVar15 + (((ulonglong)(uVar19 >> 2) & 3) + (ulonglong)uVar11) * 4 +
                            0x850);
          uVar11 = *(uint *)(lVar15 + ((uVar20 & 3) + (ulonglong)uVar11) * 4 + 0x850);
          *(undefined4 *)(param_5 + 0x3d0 + lVar8 * 0x30) = 0x410400;
          lVar15 = lVar8 * 0x30 + param_5;
          *(undefined1 *)(lVar15 + 0x3d4) = 0xe4;
          *(uint *)(lVar15 + 0x3e0) = uVar11 & uVar9 ^ uVar10;
          *(uint *)(lVar15 + 0x3e4) = uVar19 & uVar9 ^ uVar10;
          *(uint *)(lVar15 + 1000) = uVar2 & uVar9 ^ uVar10;
          *(uint *)(lVar15 + 0x3ec) = uVar13 & uVar9 ^ uVar10;
        }
      }
      else if (uVar10 == 7) {
        if ((*(char *)(param_5 + 0xdc) == '\0') ||
           (lVar15 = *(longlong *)(param_5 + 0x10), *(char *)(lVar15 + uVar6 + 0x48c5) == '\0')) {
          uVar4 = *(undefined4 *)(param_5 + 0x2dc);
          uVar17 = 0xffffffff;
          uVar16 = 0xffffffff;
          uVar14 = 0xffffffff;
          iVar5 = uVar11 * 0x10;
        }
        else {
          uVar11 = uVar11 * 4;
          uVar4 = 0x410400;
          uVar17 = *(undefined4 *)
                    ((ulonglong)(uVar19 >> 6) * 4 + (ulonglong)uVar11 * 4 + lVar15 + 0x48d8);
          uVar16 = *(undefined4 *)
                    (lVar15 + (((ulonglong)(uVar19 >> 4) & 3) + (ulonglong)uVar11) * 4 + 0x48d8);
          uVar9 = uVar19 >> 2;
          uVar19 = 0xe4;
          uVar14 = *(undefined4 *)
                    (lVar15 + (((ulonglong)uVar9 & 3) + (ulonglong)uVar11) * 4 + 0x48d8);
          iVar5 = *(int *)(lVar15 + ((uVar20 & 3) + (ulonglong)uVar11) * 4 + 0x48d8);
        }
        *(undefined4 *)(param_5 + 0x3d0 + lVar8 * 0x30) = uVar4;
        lVar15 = param_5 + lVar8 * 0x30;
        *(char *)(param_5 + lVar8 * 0x30 + 0x3d4) = (char)uVar19;
        *(int *)(param_5 + lVar8 * 0x30 + 0x3e0) = iVar5;
        *(undefined4 *)(lVar8 * 0x30 + param_5 + 0x3e4) = uVar14;
        *(undefined4 *)(lVar15 + 1000) = uVar16;
        *(undefined4 *)(lVar15 + 0x3ec) = uVar17;
      }
      else {
        if (uVar10 == 10) {
          uVar4 = func_0x0001802136f8(lVar8 * 3,param_5 + 0x20,uVar6,0);
          *(undefined1 *)(extraout_x11 + 0x3d4) = 0;
          *(undefined4 *)(extraout_x10 + extraout_x12) = uVar4;
          lVar15 = extraout_x11;
        }
        else {
          if (uVar10 != 0x12) goto LAB_18006ffb0;
          lVar15 = lVar8 * 0x30 + param_5;
          *(uint *)(param_5 + 0x3d0 + lVar8 * 0x30) = uVar11 | 0x20410a00;
          *(undefined1 *)(lVar15 + 0x3d4) = 0;
        }
LAB_18006ffac:
        *(undefined8 *)(lVar15 + 0x3e0) = 0xffffffffffffffff;
        *(undefined8 *)(lVar15 + 1000) = 0xffffffffffffffff;
      }
LAB_18006ffb0:
      lVar15 = lVar8 * 0x30;
      if (uVar21 == 0x1000000) {
        uVar11 = *(uint *)(lVar1 + lVar15) | 0x80000000;
LAB_18006fff4:
        *(uint *)(lVar1 + lVar15) = uVar11;
      }
      else {
        if (uVar21 == 0xb000000) {
          uVar11 = *(uint *)(lVar1 + lVar15) | 0x8000000;
          goto LAB_18006fff4;
        }
        if (uVar21 == 0xc000000) {
          uVar11 = *(uint *)(lVar1 + lVar15) | 0x88000000;
          goto LAB_18006fff4;
        }
      }
      uVar22 = uVar22 + 1;
      param_7 = '\0';
      lVar8 = lVar8 + 1;
    } while (uVar22 < param_3);
  }
  return param_2;
}

