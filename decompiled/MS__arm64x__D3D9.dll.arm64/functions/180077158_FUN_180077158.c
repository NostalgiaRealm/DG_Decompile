/*
 * FUN_180077158 at 180077158
 * undefined FUN_180077158(void)
 * Address ranges: 180077158-180077553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180077158(undefined8 param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                    longlong param_6,undefined8 param_7,char param_8,char param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  
  if (1 < *(byte *)(*(longlong *)(param_6 + 0x10) + 0x4a6c)) {
    puVar8 = (uint *)FUN_18006f870();
    return puVar8;
  }
  *(undefined4 *)(param_6 + 0x480) = 0;
  uVar16 = *param_2;
  uVar13 = 0xffffffffffffffff;
  uVar10 = (uVar16 & param_3) >> 0x10 & 0xf;
  uVar9 = (undefined1)uVar10;
  uVar1 = uVar16 & 0x1800 | uVar16 >> 0x14 & 0x700;
  uVar16 = uVar16 & 0x7ff;
  if (uVar1 < 0x100) {
    lVar12 = param_6 + (ulonglong)uVar16 * 4;
    iVar7 = *(int *)(lVar12 + 0x140);
    if (iVar7 == 0) {
      iVar7 = FUN_1800f42d0(param_6 + 0x20,4,1);
      *(int *)(lVar12 + 0x140) = iVar7;
    }
    *(int *)(param_6 + 800) = iVar7;
    *(undefined1 *)(param_6 + 0x324) = uVar9;
  }
  else {
    uVar1 = uVar1 >> 8;
    if (uVar1 != 3) {
      if (uVar1 == 4) {
        if (uVar16 == 0) {
          uVar14 = *(undefined4 *)(param_6 + 0x1fc);
        }
        else if (uVar16 == 1) {
          uVar14 = *(undefined4 *)(param_6 + 0x200);
          uVar10 = 1;
        }
        else {
          if (uVar16 != 2) goto LAB_1800772b4;
          uVar14 = *(undefined4 *)(param_6 + 0x204);
          uVar10 = 2;
        }
      }
      else {
        if (uVar1 == 5) {
          func_0x00018018b228(param_1,param_6,
                              *(undefined4 *)(param_6 + (ulonglong)uVar16 * 4 + 0x208),uVar10,
                              param_6 + 800);
          *(undefined4 *)(param_6 + 0x480) = 0x2000;
          goto LAB_1800772b4;
        }
        if (uVar1 != 6) goto LAB_1800772b4;
        uVar14 = *(undefined4 *)(param_6 + (ulonglong)uVar16 * 4 + 0x210);
      }
      func_0x00018018b228(param_1,param_6,uVar14,uVar10,param_6 + 800);
      goto LAB_1800772b4;
    }
    *(undefined4 *)(param_6 + 800) = *(undefined4 *)(param_6 + 0x238);
    *(undefined1 *)(param_6 + 0x324) = 1;
  }
  *(undefined8 *)(param_6 + 0x330) = uVar13;
  *(undefined8 *)(param_6 + 0x338) = uVar13;
LAB_1800772b4:
  if (param_4 != 0) {
    lVar12 = param_6 + 0x3d0;
    lVar11 = 0;
    uVar16 = 0;
    do {
      uVar1 = uVar16 + 1;
      uVar10 = param_2[uVar1];
      iVar7 = param_5;
      if (uVar16 != 1) {
        iVar7 = 0;
      }
      uVar16 = iVar7 + (uVar10 & 0x7ff);
      if (param_8 == '\0') {
        uVar5 = uVar10 >> 0x10;
      }
      else {
        uVar5 = uVar10 >> 0x16 & 3;
        uVar5 = uVar10 >> 0x10 & 0xffc0 | (uVar5 | uVar5 << 2) << 2 | uVar5;
      }
      bVar6 = (uVar10 & 0xf000000) == 0x1000000;
      uVar15 = uVar10 & 0x1800 | uVar10 >> 0x14 & 0x700;
      uVar9 = (undefined1)uVar5;
      if (uVar15 < 0x100) {
        lVar17 = param_6 + 0x140;
        iVar7 = *(int *)(lVar17 + (ulonglong)uVar16 * 4);
        if (iVar7 == 0) {
          iVar7 = FUN_1800f42d0(param_6 + 0x20,4,1);
          *(int *)(lVar17 + (ulonglong)uVar16 * 4) = iVar7;
        }
        lVar17 = lVar11 * 0x30 + param_6;
        *(int *)(lVar12 + lVar11 * 0x30) = iVar7;
        *(undefined1 *)(lVar17 + 0x3d4) = uVar9;
LAB_1800774f0:
        *(undefined8 *)(lVar17 + 0x3e0) = uVar13;
        *(undefined8 *)(lVar17 + 1000) = uVar13;
      }
      else {
        uVar15 = uVar15 >> 8;
        if (uVar15 == 1) {
          lVar17 = lVar11 * 0x30 + param_6;
          uVar14 = *(undefined4 *)(param_6 + 0x100 + (ulonglong)uVar16 * 4);
          *(undefined1 *)(lVar17 + 0x3d4) = uVar9;
LAB_18007736c:
          *(undefined4 *)(lVar12 + lVar11 * 0x30) = uVar14;
          goto LAB_1800774f0;
        }
        if (uVar15 == 2) {
          uVar15 = uVar10 & 0x2000;
          if (((*(char *)(param_6 + 0xdc) == '\0') || (uVar15 != 0)) ||
             (lVar17 = *(longlong *)(param_6 + 0x10),
             *(char *)(lVar17 + (ulonglong)uVar16 + 0x44f) == '\0')) {
            uVar14 = 0x40410804;
            if (uVar15 == 0) {
              uVar14 = 0x410804;
            }
            *(undefined4 *)(lVar12 + lVar11 * 0x30) = uVar14;
            lVar17 = lVar11 * 0x30 + param_6;
            *(undefined1 *)(lVar17 + 0x3d4) = uVar9;
            *(uint *)(lVar17 + 0x3e0) = uVar16 * 0x10 + 0x140;
            *(undefined4 *)(lVar17 + 0x3ec) = 0xffffffff;
            *(undefined8 *)(lVar17 + 0x3e4) = uVar13;
            if (uVar15 != 0) {
              uVar16 = *(uint *)(param_6 + 0x238);
              *(undefined1 *)(lVar17 + 0x3f4) = 0;
              *(uint *)(lVar17 + 0x3f0) = uVar16 | 0x10000000;
            }
          }
          else {
            uVar15 = 0x7fffffff;
            if (param_9 == '\0') {
              uVar15 = 0xffffffff;
            }
            uVar16 = uVar16 * 4;
            uVar2 = 0x80000000;
            if ((uVar10 & 0xf000000) != 0x1000000) {
              uVar2 = 0;
            }
            uVar10 = *(uint *)(((ulonglong)(uVar5 >> 6) & 3) * 4 + (ulonglong)uVar16 * 4 + lVar17 +
                              0x850);
            param_9 = '\0';
            bVar6 = false;
            uVar3 = *(uint *)(lVar17 + (((ulonglong)(uVar5 >> 4) & 3) + (ulonglong)uVar16) * 4 +
                             0x850);
            uVar4 = *(uint *)(lVar17 + (((ulonglong)(uVar5 >> 2) & 3) + (ulonglong)uVar16) * 4 +
                             0x850);
            uVar16 = *(uint *)(lVar17 + (((ulonglong)uVar5 & 3) + (ulonglong)uVar16) * 4 + 0x850);
            *(undefined4 *)(lVar12 + lVar11 * 0x30) = 0x410400;
            lVar17 = lVar11 * 0x30 + param_6;
            *(undefined1 *)(lVar17 + 0x3d4) = 0xe4;
            *(uint *)(lVar17 + 0x3e0) = uVar16 & uVar15 ^ uVar2;
            *(uint *)(lVar17 + 0x3e4) = uVar4 & uVar15 ^ uVar2;
            *(uint *)(lVar17 + 1000) = uVar3 & uVar15 ^ uVar2;
            *(uint *)(lVar17 + 0x3ec) = uVar10 & uVar15 ^ uVar2;
          }
        }
        else if (uVar15 == 3) {
          uVar14 = *(undefined4 *)(param_6 + 0x238);
          lVar17 = lVar11 * 0x30 + param_6;
          *(undefined1 *)(lVar17 + 0x3d4) = 0xe4;
          goto LAB_18007736c;
        }
      }
      uVar16 = 0x8000000;
      if (param_9 == '\0') {
        uVar16 = 0;
      }
      uVar10 = 0x80000000;
      if (!bVar6) {
        uVar10 = uVar16;
      }
      *(uint *)(lVar12 + lVar11 * 0x30) = uVar10 | *(uint *)(lVar12 + lVar11 * 0x30);
      lVar11 = lVar11 + 1;
      uVar16 = uVar1;
    } while (uVar1 < param_4);
  }
  return param_2 + (ulonglong)param_4 + 1;
}

