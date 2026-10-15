/*
 * FUN_18018b280 at 18018b280
 * undefined FUN_18018b280(void)
 * Address ranges: 18018b280-18018b6a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18018b280(undefined8 param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                    longlong param_6,undefined8 param_7,char param_8,char param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if (1 < *(byte *)(*(longlong *)(param_6 + 0x10) + 0x4a6c)) {
    puVar7 = (uint *)FUN_180182740();
    return puVar7;
  }
  *(undefined4 *)(param_6 + 0x480) = 0;
  uVar16 = *param_2;
  uVar10 = (uVar16 & param_3) >> 0x10 & 0xf;
  uVar9 = (undefined1)uVar10;
  uVar1 = uVar16 & 0x1800 | uVar16 >> 0x14 & 0x700;
  uVar16 = uVar16 & 0x7ff;
  if (uVar1 < 0x100) {
    lVar12 = param_6 + (ulonglong)uVar16 * 4;
    iVar6 = *(int *)(lVar12 + 0x140);
    if (iVar6 == 0) {
      iVar6 = FUN_180213760(param_6 + 0x20,4,1);
      *(int *)(lVar12 + 0x140) = iVar6;
    }
    *(int *)(param_6 + 800) = iVar6;
    *(undefined1 *)(param_6 + 0x324) = uVar9;
  }
  else {
    uVar1 = uVar1 >> 8;
    if (uVar1 != 3) {
      if (uVar1 == 4) {
        if (uVar16 == 0) {
          uVar8 = *(undefined4 *)(param_6 + 0x1fc);
        }
        else if (uVar16 == 1) {
          uVar8 = *(undefined4 *)(param_6 + 0x200);
          uVar10 = 1;
        }
        else {
          if (uVar16 != 2) goto LAB_18018b3dc;
          uVar8 = *(undefined4 *)(param_6 + 0x204);
          uVar10 = 2;
        }
      }
      else {
        if (uVar1 == 5) {
          FUN_18018b228(param_1,param_6,*(undefined4 *)(param_6 + (ulonglong)uVar16 * 4 + 0x208),
                        uVar10,param_6 + 800);
          *(undefined4 *)(param_6 + 0x480) = 0x2000;
          goto LAB_18018b3dc;
        }
        if (uVar1 != 6) goto LAB_18018b3dc;
        uVar8 = *(undefined4 *)(param_6 + (ulonglong)uVar16 * 4 + 0x210);
      }
      FUN_18018b228(param_1,param_6,uVar8,uVar10,param_6 + 800);
      goto LAB_18018b3dc;
    }
    *(undefined4 *)(param_6 + 800) = *(undefined4 *)(param_6 + 0x238);
    *(undefined1 *)(param_6 + 0x324) = 1;
  }
  *(undefined8 *)(param_6 + 0x330) = 0xffffffffffffffff;
  *(undefined8 *)(param_6 + 0x338) = 0xffffffffffffffff;
LAB_18018b3dc:
  if (param_4 != 0) {
    lVar12 = param_6 + 0x3d0;
    lVar11 = 0;
    uVar16 = 0;
    do {
      uVar1 = uVar16 + 1;
      uVar10 = param_2[uVar1];
      iVar6 = param_5;
      if (uVar16 != 1) {
        iVar6 = 0;
      }
      uVar16 = iVar6 + (uVar10 & 0x7ff);
      if (param_8 == '\0') {
        uVar4 = uVar10 >> 0x10;
      }
      else {
        uVar4 = uVar10 >> 0x16 & 3;
        uVar4 = uVar10 >> 0x10 & 0xffffffc0 | (uVar4 | uVar4 << 2) << 2 | uVar4;
      }
      bVar5 = (uVar10 & 0xf000000) == 0x1000000;
      uVar14 = uVar10 & 0x1800 | uVar10 >> 0x14 & 0x700;
      uVar9 = (undefined1)uVar4;
      if (uVar14 < 0x100) {
        iVar6 = *(int *)(param_6 + 0x140 + (ulonglong)uVar16 * 4);
        if (iVar6 == 0) {
          iVar6 = FUN_180213760(param_6 + 0x20,4,1);
          *(int *)(param_6 + 0x140 + (ulonglong)uVar16 * 4) = iVar6;
        }
        lVar13 = lVar11 * 0x30 + param_6;
        *(int *)(lVar12 + lVar11 * 0x30) = iVar6;
        *(undefined1 *)(lVar13 + 0x3d4) = uVar9;
LAB_18018b634:
        *(undefined8 *)(lVar13 + 0x3e0) = 0xffffffffffffffff;
        *(undefined8 *)(lVar13 + 1000) = 0xffffffffffffffff;
      }
      else {
        uVar14 = uVar14 >> 8;
        if (uVar14 == 1) {
          uVar8 = *(undefined4 *)(param_6 + 0x100 + (ulonglong)uVar16 * 4);
          lVar13 = lVar11 * 0x30 + param_6;
          *(undefined1 *)(lVar13 + 0x3d4) = uVar9;
          *(undefined4 *)(lVar12 + lVar11 * 0x30) = uVar8;
          goto LAB_18018b634;
        }
        if (uVar14 == 2) {
          uVar14 = uVar10 & 0x2000;
          if (((*(char *)(param_6 + 0xdc) == '\0') || (uVar14 != 0)) ||
             (lVar13 = *(longlong *)(param_6 + 0x10),
             *(char *)(lVar13 + (ulonglong)uVar16 + 0x44f) == '\0')) {
            uVar8 = 0x40410804;
            if (uVar14 == 0) {
              uVar8 = 0x410804;
            }
            *(undefined4 *)(lVar12 + lVar11 * 0x30) = uVar8;
            lVar13 = lVar11 * 0x30 + param_6;
            *(undefined1 *)(lVar13 + 0x3d4) = uVar9;
            *(uint *)(lVar13 + 0x3e0) = uVar16 * 0x10 + 0x140;
            *(undefined4 *)(lVar13 + 0x3ec) = 0xffffffff;
            *(undefined8 *)(lVar13 + 0x3e4) = 0xffffffffffffffff;
            if (uVar14 != 0) {
              uVar16 = *(uint *)(param_6 + 0x238);
              *(undefined1 *)(lVar13 + 0x3f4) = 0;
              *(uint *)(lVar13 + 0x3f0) = uVar16 | 0x10000000;
            }
          }
          else {
            uVar14 = 0x7fffffff;
            if (param_9 == '\0') {
              uVar14 = 0xffffffff;
            }
            uVar15 = 0x80000000;
            if ((uVar10 & 0xf000000) != 0x1000000) {
              uVar15 = 0;
            }
            uVar16 = uVar16 * 4;
            param_9 = '\0';
            bVar5 = false;
            uVar10 = *(uint *)(((ulonglong)(uVar4 >> 6) & 3) * 4 + (ulonglong)uVar16 * 4 + lVar13 +
                              0x850);
            uVar2 = *(uint *)(lVar13 + (((ulonglong)(uVar4 >> 4) & 3) + (ulonglong)uVar16) * 4 +
                             0x850);
            uVar3 = *(uint *)(lVar13 + (((ulonglong)(uVar4 >> 2) & 3) + (ulonglong)uVar16) * 4 +
                             0x850);
            uVar16 = *(uint *)(lVar13 + (((ulonglong)uVar4 & 3) + (ulonglong)uVar16) * 4 + 0x850);
            *(undefined4 *)(lVar12 + lVar11 * 0x30) = 0x410400;
            lVar13 = lVar11 * 0x30 + param_6;
            *(undefined1 *)(lVar13 + 0x3d4) = 0xe4;
            *(uint *)(lVar13 + 0x3e0) = uVar16 & uVar14 ^ uVar15;
            *(uint *)(lVar13 + 0x3e4) = uVar3 & uVar14 ^ uVar15;
            *(uint *)(lVar13 + 1000) = uVar2 & uVar14 ^ uVar15;
            *(uint *)(lVar13 + 0x3ec) = uVar10 & uVar14 ^ uVar15;
          }
        }
        else if (uVar14 == 3) {
          lVar13 = lVar11 * 0x30 + param_6;
          *(undefined4 *)(lVar12 + lVar11 * 0x30) = *(undefined4 *)(param_6 + 0x238);
          *(undefined1 *)(lVar13 + 0x3d4) = 0xe4;
          goto LAB_18018b634;
        }
      }
      uVar16 = 0x8000000;
      if (param_9 == '\0') {
        uVar16 = 0;
      }
      uVar10 = 0x80000000;
      if (!bVar5) {
        uVar10 = uVar16;
      }
      *(uint *)(lVar12 + lVar11 * 0x30) = uVar10 | *(uint *)(lVar12 + lVar11 * 0x30);
      lVar11 = lVar11 + 1;
      uVar16 = uVar1;
    } while (uVar1 < param_4);
  }
  return param_2 + (ulonglong)param_4 + 1;
}

