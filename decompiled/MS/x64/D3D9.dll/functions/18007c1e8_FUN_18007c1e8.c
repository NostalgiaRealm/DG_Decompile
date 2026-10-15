/*
 * FUN_18007c1e8 at 18007c1e8
 * uint * __fastcall FUN_18007c1e8(undefined8 param_1, uint * param_2, uint param_3, int param_4, longlong param_5, char param_6, char param_7)
 * Address ranges: 18007c1e8-18007c790
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_18007c1e8(undefined8 param_1,uint *param_2,uint param_3,int param_4,longlong param_5,
                    char param_6,char param_7)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  
  if (param_3 != 0) {
    uVar20 = 0;
    lVar14 = 0;
    do {
      uVar6 = *param_2;
      iVar10 = 0;
      if (uVar20 == 1) {
        iVar10 = param_4;
      }
      uVar17 = (uVar6 & 0x7ff) + iVar10;
      uVar9 = (ulonglong)uVar17;
      uVar11 = 0;
      uVar18 = uVar6 & 0x2000;
      bVar16 = 0;
      bVar5 = (byte)(uVar6 >> 0x10);
      if (param_6 != '\0') {
        bVar5 = bVar5 >> 6;
        bVar5 = ((bVar5 << 2 | bVar5) << 2 | bVar5) << 2 | bVar5;
      }
      if (uVar18 != 0) {
        param_2 = param_2 + 1;
        uVar12 = (*param_2 >> 0x14 & 0x700 | *param_2 & 0x1800) >> 8;
        if (uVar12 == 3) {
          uVar11 = *(uint *)(param_5 + 0x238) | 0x10000000;
          bVar16 = (byte)(*param_2 >> 0x10) & 3;
        }
        else if (uVar12 == 0xf) {
          bVar16 = 1;
          uVar11 = *(uint *)(param_5 + 0x2b4 + (ulonglong)(*(int *)(param_5 + 0x2f0) - 1) * 4) |
                   0x10000000;
        }
      }
      uVar13 = 0;
      param_2 = param_2 + 1;
      uVar12 = uVar6 & 0xf000000;
      if (param_7 != '\0') {
        uVar12 = 0xb000000;
      }
      uVar6 = uVar6 >> 0x14 & 0x700 | uVar6 & 0x1800;
      uVar7 = uVar6 >> 8;
      if (uVar6 == 0) {
        uVar8 = FUN_180085084(0,param_5,uVar17);
        *(undefined4 *)(param_5 + 0x3d0 + lVar14 * 0x30) = uVar8;
        *(undefined4 *)(param_5 + 0x3e0 + lVar14 * 0x30) = 0xffffffff;
        *(byte *)(param_5 + 0x3d4 + lVar14 * 0x30) = bVar5;
        *(undefined4 *)(param_5 + 0x3ec + lVar14 * 0x30) = 0xffffffff;
        *(undefined4 *)(param_5 + 1000 + lVar14 * 0x30) = 0xffffffff;
        *(undefined4 *)(param_5 + 0x3e4 + lVar14 * 0x30) = 0xffffffff;
LAB_18007c70d:
        if (uVar12 == 0x1000000) {
          puVar1 = (uint *)(param_5 + 0x3d0 + lVar14 * 0x30);
          *puVar1 = *puVar1 | 0x80000000;
        }
        else if (uVar12 == 0xb000000) {
          puVar1 = (uint *)(param_5 + 0x3d0 + lVar14 * 0x30);
          *puVar1 = *puVar1 | 0x8000000;
        }
        else if (uVar12 == 0xc000000) {
          puVar1 = (uint *)(param_5 + 0x3d0 + lVar14 * 0x30);
          *puVar1 = *puVar1 | 0x88000000;
        }
      }
      else {
        if (uVar7 == 1) {
          if (uVar18 == 0) {
            uVar8 = *(undefined4 *)(param_5 + 0x100 + uVar9 * 4);
            *(undefined4 *)(param_5 + 0x3e0 + lVar14 * 0x30) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x3d0 + lVar14 * 0x30) = uVar8;
            *(byte *)(param_5 + 0x3d4 + lVar14 * 0x30) = bVar5;
            *(undefined4 *)(param_5 + 0x3ec + lVar14 * 0x30) = 0xffffffff;
            *(undefined4 *)(param_5 + 1000 + lVar14 * 0x30) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x3e4 + lVar14 * 0x30) = 0xffffffff;
          }
          else {
            uVar6 = *(uint *)(param_5 + 0x23c + uVar9 * 4);
            *(byte *)(param_5 + 0x3d4 + lVar14 * 0x30) = bVar5;
            *(uint *)(param_5 + 0x3d0 + lVar14 * 0x30) = uVar6 | 0x40000000;
            *(undefined4 *)(param_5 + 0x3e0 + lVar14 * 0x30) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x3ec + lVar14 * 0x30) = 0xffffffff;
            *(undefined4 *)(param_5 + 1000 + lVar14 * 0x30) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x3e4 + lVar14 * 0x30) = 0xffffffff;
LAB_18007c633:
            *(uint *)(param_5 + 0x3f0 + lVar14 * 0x30) = uVar11;
            *(byte *)(param_5 + 0x3f4 + lVar14 * 0x30) = bVar16;
          }
          goto LAB_18007c70d;
        }
        if (uVar7 != 2) {
          if (uVar7 == 7) {
            if ((*(char *)(param_5 + 0xdc) == '\0') ||
               (lVar19 = *(longlong *)(param_5 + 0x10), *(char *)(uVar9 + 0x48c5 + lVar19) == '\0'))
            {
              *(undefined4 *)(param_5 + 0x3d0 + lVar14 * 0x30) = *(undefined4 *)(param_5 + 0x2dc);
              *(byte *)(param_5 + 0x3d4 + lVar14 * 0x30) = bVar5;
              *(uint *)(param_5 + 0x3e0 + lVar14 * 0x30) = uVar17 * 0x10;
              *(undefined4 *)(param_5 + 0x3ec + lVar14 * 0x30) = 0xffffffff;
              *(undefined4 *)(param_5 + 1000 + lVar14 * 0x30) = 0xffffffff;
              *(undefined4 *)(param_5 + 0x3e4 + lVar14 * 0x30) = 0xffffffff;
            }
            else {
              uVar9 = (ulonglong)(uVar17 * 4);
              uVar8 = *(undefined4 *)(lVar19 + 0x48d8 + ((bVar5 >> 6) + uVar9) * 4);
              uVar2 = *(undefined4 *)(lVar19 + 0x48d8 + ((bVar5 >> 4 & 3) + uVar9) * 4);
              uVar3 = *(undefined4 *)(lVar19 + 0x48d8 + ((bVar5 >> 2 & 3) + uVar9) * 4);
              uVar4 = *(undefined4 *)(lVar19 + 0x48d8 + ((bVar5 & 3) + uVar9) * 4);
              *(undefined4 *)(param_5 + 0x3d0 + lVar14 * 0x30) = 0x410400;
              *(undefined1 *)(param_5 + 0x3d4 + lVar14 * 0x30) = 0xe4;
              *(undefined4 *)(param_5 + 0x3e0 + lVar14 * 0x30) = uVar4;
              *(undefined4 *)(param_5 + 0x3e4 + lVar14 * 0x30) = uVar3;
              *(undefined4 *)(param_5 + 1000 + lVar14 * 0x30) = uVar2;
              *(undefined4 *)(param_5 + 0x3ec + lVar14 * 0x30) = uVar8;
            }
          }
          else if (uVar7 == 10) {
            uVar15 = 0;
            lVar19 = lVar14 * 6;
            uVar9 = FUN_1800ec878((int *)(param_5 + 0x20),uVar17,0,uVar17);
            *(int *)(param_5 + 0x3d0 + lVar19 * 8) = (int)uVar9;
            *(undefined4 *)(param_5 + 0x3e0 + lVar19 * 8) = 0xffffffff;
            *(undefined1 *)(param_5 + 0x3d4 + lVar19 * 8) = uVar15;
            *(undefined4 *)(param_5 + 0x3ec + lVar19 * 8) = 0xffffffff;
            *(undefined4 *)(param_5 + 1000 + lVar19 * 8) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x3e4 + lVar19 * 8) = 0xffffffff;
          }
          else if (uVar7 == 0x12) {
            *(uint *)(param_5 + 0x3d0 + lVar14 * 0x30) = uVar17 | 0x20410a00;
            *(undefined4 *)(param_5 + 0x3e0 + lVar14 * 0x30) = 0xffffffff;
            *(undefined1 *)(param_5 + 0x3d4 + lVar14 * 0x30) = 0;
            *(undefined4 *)(param_5 + 0x3ec + lVar14 * 0x30) = 0xffffffff;
            *(undefined4 *)(param_5 + 1000 + lVar14 * 0x30) = 0xffffffff;
            *(undefined4 *)(param_5 + 0x3e4 + lVar14 * 0x30) = 0xffffffff;
          }
          goto LAB_18007c70d;
        }
        if (((*(char *)(param_5 + 0xdc) == '\0') || (uVar18 != 0)) ||
           (lVar19 = *(longlong *)(param_5 + 0x10), *(char *)(uVar9 + 0x44f + lVar19) == '\0')) {
          *(uint *)(param_5 + 0x3d0 + lVar14 * 0x30) =
               -(uint)(uVar18 != 0) & 0x40000000 | *(uint *)(param_5 + 0x2dc);
          *(byte *)(param_5 + 0x3d4 + lVar14 * 0x30) = bVar5;
          *(uint *)(param_5 + 0x3e0 + lVar14 * 0x30) = uVar17 * 0x10 + 0x140;
          *(undefined4 *)(param_5 + 0x3ec + lVar14 * 0x30) = 0xffffffff;
          *(undefined4 *)(param_5 + 1000 + lVar14 * 0x30) = 0xffffffff;
          *(undefined4 *)(param_5 + 0x3e4 + lVar14 * 0x30) = 0xffffffff;
          if (uVar18 != 0) goto LAB_18007c633;
          goto LAB_18007c70d;
        }
        uVar6 = (-(uint)((uVar12 + 0xf5000000 & 0xfeffffff) != 0) & 0x80000000) + 0x7fffffff;
        if ((uVar12 == 0x1000000) || (uVar12 == 0xc000000)) {
          uVar13 = 0x80000000;
        }
        uVar9 = (ulonglong)(uVar17 * 4);
        uVar11 = *(uint *)(lVar19 + 0x850 + ((bVar5 >> 6) + uVar9) * 4);
        uVar17 = *(uint *)(lVar19 + 0x850 + ((bVar5 >> 4 & 3) + uVar9) * 4);
        uVar18 = *(uint *)(lVar19 + 0x850 + ((bVar5 >> 2 & 3) + uVar9) * 4);
        uVar12 = *(uint *)(lVar19 + 0x850 + ((bVar5 & 3) + uVar9) * 4);
        *(undefined4 *)(param_5 + 0x3d0 + lVar14 * 0x30) = 0x410400;
        *(undefined1 *)(param_5 + 0x3d4 + lVar14 * 0x30) = 0xe4;
        *(uint *)(param_5 + 0x3e0 + lVar14 * 0x30) = uVar12 & uVar6 ^ uVar13;
        *(uint *)(param_5 + 0x3e4 + lVar14 * 0x30) = uVar18 & uVar6 ^ uVar13;
        *(uint *)(param_5 + 0x3ec + lVar14 * 0x30) = uVar11 & uVar6 ^ uVar13;
        *(uint *)(param_5 + 1000 + lVar14 * 0x30) = uVar17 & uVar6 ^ uVar13;
      }
      param_7 = '\0';
      uVar20 = uVar20 + 1;
      lVar14 = lVar14 + 1;
    } while (uVar20 < param_3);
  }
  return param_2;
}

