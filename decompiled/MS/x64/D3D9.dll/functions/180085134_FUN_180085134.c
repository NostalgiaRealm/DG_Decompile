/*
 * FUN_180085134 at 180085134
 * uint * __fastcall FUN_180085134(undefined8 param_1, uint * param_2, undefined4 param_3, uint param_4, int param_5, longlong param_6, char param_7, char param_8)
 * Address ranges: 180085134-1800855d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180085134(undefined8 param_1,uint *param_2,undefined4 param_3,uint param_4,int param_5,
                    longlong param_6,char param_7,char param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  char cVar15;
  undefined8 uVar16;
  longlong lVar18;
  bool bVar19;
  undefined8 uVar17;
  
  uVar17 = 0xffffffff;
  uVar16 = 0xffffffff;
  *(undefined4 *)(param_6 + 0x480) = 0;
  uVar7 = *param_2;
  bVar13 = (byte)(uVar7 >> 0x10) & (byte)((uint)param_3 >> 0x10);
  uVar14 = uVar7 & 0x7ff;
  uVar7 = (uVar7 >> 0x14 & 0x700 | uVar7 & 0x1800) >> 8;
  if (uVar7 == 0) {
    uVar6 = FUN_180085084(0,param_6,uVar14);
    *(byte *)(param_6 + 0x324) = bVar13 & 0xf;
  }
  else {
    if (uVar7 != 3) {
      if (uVar7 == 4) {
        uVar10 = 0;
        if (uVar14 == 0) {
          uVar7 = *(uint *)(param_6 + 0x1fc);
          goto LAB_180085219;
        }
        if (uVar14 == 1) {
          uVar7 = *(uint *)(param_6 + 0x200);
          bVar13 = 1;
        }
        else {
          if (uVar14 != 2) goto LAB_180085275;
          uVar7 = *(uint *)(param_6 + 0x204);
          bVar13 = 2;
        }
      }
      else {
        if (uVar7 == 5) {
          FUN_1800850c0(0,param_6,*(uint *)(param_6 + 0x208 + (ulonglong)uVar14 * 4),bVar13 & 0xf,
                        (uint *)(param_6 + 800));
          *(undefined4 *)(param_6 + 0x480) = 0x2000;
          uVar16 = uVar17;
          goto LAB_180085275;
        }
        uVar16 = uVar17;
        if (uVar7 != 6) goto LAB_180085275;
        uVar7 = *(uint *)(param_6 + 0x210 + (ulonglong)uVar14 * 4);
        uVar10 = 1;
LAB_180085219:
        bVar13 = bVar13 & 0xf;
      }
      FUN_1800850c0(uVar10,param_6,uVar7,bVar13,(uint *)(param_6 + 800));
      uVar16 = uVar17;
      goto LAB_180085275;
    }
    uVar6 = *(undefined4 *)(param_6 + 0x238);
    *(undefined1 *)(param_6 + 0x324) = 1;
  }
  uVar16 = 0xffffffff;
  *(undefined4 *)(param_6 + 0x334) = 0xffffffff;
  *(undefined4 *)(param_6 + 0x338) = 0xffffffff;
  *(undefined4 *)(param_6 + 0x33c) = 0xffffffff;
  *(undefined4 *)(param_6 + 0x330) = 0xffffffff;
  *(undefined4 *)(param_6 + 800) = uVar6;
LAB_180085275:
  if (param_4 != 0) {
    lVar18 = 0;
    cVar15 = param_8;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      uVar14 = param_2[uVar5];
      iVar8 = 0;
      if (uVar7 == 1) {
        iVar8 = param_5;
      }
      uVar7 = (uVar14 & 0x7ff) + iVar8;
      bVar13 = (byte)(uVar14 >> 0x10);
      if (param_7 != '\0') {
        bVar13 = (byte)((byte)(bVar13 & 0xcf | bVar13 >> 2) >> 2 | bVar13 & 0xc3) >> 2 |
                 bVar13 & 0xc0;
      }
      bVar19 = (uVar14 & 0xf000000) == 0x1000000;
      uVar9 = (uVar14 >> 0x14 & 0x700 | uVar14 & 0x1800) >> 8;
      if (uVar9 == 0) {
        uVar6 = FUN_180085084(0,param_6,uVar7);
        uVar16 = 0xffffffff;
        *(undefined4 *)(param_6 + 0x3e0 + lVar18 * 0x30) = 0xffffffff;
        *(undefined4 *)(param_6 + 0x3d0 + lVar18 * 0x30) = uVar6;
        *(byte *)(param_6 + 0x3d4 + lVar18 * 0x30) = bVar13;
        *(undefined4 *)(param_6 + 0x3ec + lVar18 * 0x30) = 0xffffffff;
        *(undefined4 *)(param_6 + 1000 + lVar18 * 0x30) = 0xffffffff;
        *(undefined4 *)(param_6 + 0x3e4 + lVar18 * 0x30) = 0xffffffff;
        cVar15 = param_8;
      }
      else {
        iVar8 = (int)uVar16;
        if (uVar9 == 1) {
          *(undefined4 *)(param_6 + 0x3d0 + lVar18 * 0x30) =
               *(undefined4 *)(param_6 + 0x100 + (ulonglong)uVar7 * 4);
          *(byte *)(param_6 + 0x3d4 + lVar18 * 0x30) = bVar13;
          *(int *)(param_6 + 0x3e0 + lVar18 * 0x30) = iVar8;
          *(int *)(param_6 + 0x3ec + lVar18 * 0x30) = iVar8;
          *(int *)(param_6 + 1000 + lVar18 * 0x30) = iVar8;
          *(int *)(param_6 + 0x3e4 + lVar18 * 0x30) = iVar8;
        }
        else if (uVar9 == 2) {
          uVar9 = uVar14 & 0x2000;
          if (((*(char *)(param_6 + 0xdc) == '\0') || (uVar9 != 0)) ||
             (lVar12 = *(longlong *)(param_6 + 0x10),
             *(char *)((ulonglong)uVar7 + 0x44f + lVar12) == '\0')) {
            *(byte *)(param_6 + 0x3d4 + lVar18 * 0x30) = bVar13;
            *(uint *)(param_6 + 0x3d0 + lVar18 * 0x30) =
                 (-(uint)(uVar9 != 0) & 0x40000000) + 0x410804;
            *(uint *)(param_6 + 0x3e0 + lVar18 * 0x30) = uVar7 * 0x10 + 0x140;
            *(int *)(param_6 + 0x3ec + lVar18 * 0x30) = iVar8;
            *(int *)(param_6 + 1000 + lVar18 * 0x30) = iVar8;
            *(int *)(param_6 + 0x3e4 + lVar18 * 0x30) = iVar8;
            if (uVar9 != 0) {
              uVar7 = *(uint *)(param_6 + 0x238);
              *(undefined1 *)(param_6 + 0x3f4 + lVar18 * 0x30) = 0;
              *(uint *)(param_6 + 0x3f0 + lVar18 * 0x30) = uVar7 | 0x10000000;
            }
          }
          else {
            uVar9 = (-(uint)(cVar15 != '\0') & 0x80000000) + iVar8;
            uVar11 = (ulonglong)(uVar7 * 4);
            uVar7 = 0;
            if ((uVar14 & 0xf000000) == 0x1000000) {
              uVar7 = 0x80000000;
            }
            bVar19 = false;
            uVar14 = *(uint *)(lVar12 + 0x850 + ((bVar13 >> 6) + uVar11) * 4);
            uVar2 = *(uint *)(lVar12 + 0x850 + ((bVar13 >> 4 & 3) + uVar11) * 4);
            uVar3 = *(uint *)(lVar12 + 0x850 + ((bVar13 >> 2 & 3) + uVar11) * 4);
            uVar4 = *(uint *)(lVar12 + 0x850 + ((bVar13 & 3) + uVar11) * 4);
            *(undefined4 *)(param_6 + 0x3d0 + lVar18 * 0x30) = 0x410400;
            *(undefined1 *)(param_6 + 0x3d4 + lVar18 * 0x30) = 0xe4;
            *(uint *)(param_6 + 0x3ec + lVar18 * 0x30) = uVar14 & uVar9 ^ uVar7;
            *(uint *)(param_6 + 0x3e0 + lVar18 * 0x30) = uVar4 & uVar9 ^ uVar7;
            param_8 = '\0';
            uVar16 = 0xffffffff;
            *(uint *)(param_6 + 0x3e4 + lVar18 * 0x30) = uVar3 & uVar9 ^ uVar7;
            *(uint *)(param_6 + 1000 + lVar18 * 0x30) = uVar2 & uVar9 ^ uVar7;
            cVar15 = '\0';
          }
        }
        else if (uVar9 == 3) {
          *(undefined4 *)(param_6 + 0x3d0 + lVar18 * 0x30) = *(undefined4 *)(param_6 + 0x238);
          *(undefined1 *)(param_6 + 0x3d4 + lVar18 * 0x30) = 0xe4;
          *(int *)(param_6 + 0x3e0 + lVar18 * 0x30) = iVar8;
          *(int *)(param_6 + 0x3ec + lVar18 * 0x30) = iVar8;
          *(int *)(param_6 + 1000 + lVar18 * 0x30) = iVar8;
          *(int *)(param_6 + 0x3e4 + lVar18 * 0x30) = iVar8;
        }
      }
      lVar12 = lVar18 * 0x30;
      uVar7 = -(uint)(cVar15 != '\0') & 0x8000000;
      if (bVar19) {
        uVar7 = 0x80000000;
      }
      lVar18 = lVar18 + 1;
      puVar1 = (uint *)(param_6 + 0x3d0 + lVar12);
      *puVar1 = *puVar1 | uVar7;
      uVar7 = uVar5;
    } while (uVar5 < param_4);
  }
  return param_2 + (ulonglong)param_4 + 1;
}

