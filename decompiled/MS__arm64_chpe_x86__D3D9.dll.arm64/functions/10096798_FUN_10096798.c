/*
 * FUN_10096798 at 10096798
 * undefined FUN_10096798(void)
 * Address ranges: 10096798-10096c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10096798(undefined8 param_1,uint *param_2,uint param_3,int param_4,int param_5,
                   char param_6,char param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined4 uVar14;
  uint *extraout_w11;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  
  uVar17 = 0;
  if (param_3 != 0) {
    iVar18 = 0x14;
    do {
      uVar6 = *param_2;
      iVar9 = param_4;
      if (uVar17 != 1) {
        iVar9 = 0;
      }
      uVar1 = iVar9 + (uVar6 & 0x7ff);
      uVar10 = uVar6 >> 0xd & 1;
      uVar7 = uVar6 >> 0x10 & 0xff;
      if (param_6 != '\0') {
        uVar7 = uVar7 >> 6;
        uVar7 = uVar7 | (uVar7 | (uVar7 | uVar7 << 2) << 2) << 2;
      }
      uVar15 = 0;
      bVar13 = 0;
      if (uVar10 != 0) {
        param_2 = param_2 + 1;
        uVar4 = *param_2;
        uVar5 = (uVar4 & 0x1800 | uVar4 >> 0x14 & 0x7ff) >> 8;
        if (uVar5 == 3) {
          puVar11 = (uint *)(param_5 + 0x224);
          bVar13 = (byte)(uVar4 >> 0x10) & 3;
        }
        else {
          bVar13 = 0;
          if (uVar5 != 0xf) goto LAB_10096874;
          bVar13 = 1;
          puVar11 = (uint *)(param_5 + *(int *)(param_5 + 0x2dc) * 4 + 0x29c);
        }
        uVar15 = *puVar11 | 0x10000000;
      }
LAB_10096874:
      uVar4 = 0xb000000;
      if (param_7 == '\0') {
        uVar4 = uVar6 & 0xf000000;
      }
      uVar6 = (uVar6 & 0x1800 | uVar6 >> 0x14 & 0x7ff) >> 8;
      param_2 = param_2 + 1;
      switch(uVar6) {
      case 0:
        puVar11 = (uint *)(param_5 + (uVar1 + 0x4b) * 4);
        uVar6 = *puVar11;
        if (uVar6 == 0) {
          uVar6 = FUN_10121590(param_5 + 0x18,4,1);
          *puVar11 = uVar6;
        }
        puVar11 = (uint *)(param_5 + iVar18 * 0x30);
        *puVar11 = uVar6;
LAB_100968f0:
        *(char *)(puVar11 + 1) = (char)uVar7;
LAB_10096be8:
        puVar11[4] = 0xffffffff;
        puVar11[5] = 0xffffffff;
        goto LAB_10096bf4;
      case 1:
        if (uVar10 == 0) {
          puVar11 = (uint *)(param_5 + iVar18 * 0x30);
          *puVar11 = *(uint *)(param_5 + uVar1 * 4 + 0xec);
          goto LAB_100968f0;
        }
        puVar11 = (uint *)(param_5 + iVar18 * 0x30);
        *puVar11 = *(uint *)(param_5 + uVar1 * 4 + 0x228) | 0x40000000;
        *(char *)(puVar11 + 1) = (char)uVar7;
        puVar11[4] = 0xffffffff;
        puVar11[5] = 0xffffffff;
        puVar11[6] = 0xffffffff;
        puVar11[7] = 0xffffffff;
LAB_10096b1c:
        iVar9 = param_5 + uVar17 * 0x30;
        *(uint *)(iVar9 + 0x3e0) = uVar15;
        *(byte *)(iVar9 + 0x3e4) = bVar13;
        break;
      case 2:
        if (((*(char *)(param_5 + 200) == '\0') || (uVar10 != 0)) ||
           (iVar9 = *(int *)(param_5 + 0x10), *(char *)(iVar9 + uVar1 + 0x44f) == '\0')) {
          puVar11 = (uint *)(param_5 + iVar18 * 0x30);
          *puVar11 = *(uint *)(param_5 + 0x2c8) | uVar10 << 0x1e;
          *(char *)(puVar11 + 1) = (char)uVar7;
          puVar11[4] = (uVar1 + 0x14) * 0x10;
          puVar11[5] = 0xffffffff;
          puVar11[6] = 0xffffffff;
          puVar11[7] = 0xffffffff;
          if (uVar10 != 0) goto LAB_10096b1c;
          break;
        }
        uVar6 = 0x7fffffff;
        if ((uVar4 + 0xf5000000 & 0xfeffffff) != 0) {
          uVar6 = 0xffffffff;
        }
        uVar10 = 0;
        if (uVar4 == 0x1000000 || uVar4 == 0xc000000) {
          uVar10 = 0x80000000;
        }
        iVar2 = uVar1 + 0x85;
        uVar1 = *(uint *)(iVar9 + (uVar7 >> 6 | iVar2 * 4) * 4);
        uVar15 = *(uint *)(iVar9 + (uVar7 >> 4 & 3 | iVar2 * 4) * 4);
        uVar4 = *(uint *)(iVar9 + (uVar7 >> 2 & 3 | iVar2 * 4) * 4);
        uVar7 = *(uint *)(iVar9 + (uVar7 & 3 | iVar2 * 4) * 4);
        puVar3 = (undefined4 *)(param_5 + iVar18 * 0x30);
        *puVar3 = 0x410400;
        *(undefined1 *)(puVar3 + 1) = 0xe4;
        puVar3[4] = uVar7 & uVar6 ^ uVar10;
        puVar3[5] = uVar4 & uVar6 ^ uVar10;
        puVar3[6] = uVar15 & uVar6 ^ uVar10;
        puVar3[7] = uVar1 & uVar6 ^ uVar10;
        goto LAB_10096c60;
      case 3:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
        break;
      case 7:
        if ((*(char *)(param_5 + 200) == '\0') ||
           (iVar9 = *(int *)(param_5 + 0x10), *(char *)(iVar9 + uVar1 + 0x48c5) == '\0')) {
          uVar8 = *(undefined4 *)(param_5 + 0x2c8);
          uVar16 = 0xffffffff;
          uVar14 = 0xffffffff;
          uVar12 = 0xffffffff;
          iVar9 = uVar1 * 0x10;
        }
        else {
          uVar16 = *(undefined4 *)(((uVar7 >> 6) << 2 | uVar1 * 0x10) + iVar9 + 0x48d8);
          uVar14 = *(undefined4 *)(((uVar7 >> 4 & 3) << 2 | uVar1 * 0x10) + iVar9 + 0x48d8);
          uVar12 = *(undefined4 *)((uVar7 & 0xc | uVar1 * 0x10) + iVar9 + 0x48d8);
          iVar9 = *(int *)(((uVar7 & 3) << 2 | uVar1 * 0x10) + iVar9 + 0x48d8);
          uVar7 = 0xe4;
          uVar8 = 0x410400;
        }
        iVar2 = param_5 + uVar17 * 0x30;
        *(undefined4 *)(iVar2 + 0x3c0) = uVar8;
        *(char *)(iVar2 + 0x3c4) = (char)uVar7;
        *(int *)(iVar2 + 0x3d0) = iVar9;
        *(undefined4 *)(iVar2 + 0x3d4) = uVar12;
        *(undefined4 *)(iVar2 + 0x3d8) = uVar14;
        *(undefined4 *)(iVar2 + 0x3dc) = uVar16;
        break;
      case 10:
        uVar6 = FUN_10121528(param_5 + 0x18,uVar1,0,uVar1);
        *(undefined1 *)(extraout_w11 + 1) = 0;
        *extraout_w11 = uVar6;
        extraout_w11[4] = 0xffffffff;
        extraout_w11[5] = 0xffffffff;
        puVar11 = extraout_w11;
LAB_10096bf4:
        puVar11[6] = 0xffffffff;
        puVar11[7] = 0xffffffff;
        break;
      default:
        if (uVar6 == 0x12) {
          puVar11 = (uint *)(param_5 + iVar18 * 0x30);
          *puVar11 = uVar1 | 0x20410a00;
          *(undefined1 *)(puVar11 + 1) = 0;
          goto LAB_10096be8;
        }
      }
      if (uVar4 == 0x1000000) {
        puVar11 = (uint *)(param_5 + iVar18 * 0x30);
        uVar6 = *puVar11 | 0x80000000;
LAB_10096c5c:
        *puVar11 = uVar6;
      }
      else {
        if (uVar4 == 0xb000000) {
          puVar11 = (uint *)(param_5 + iVar18 * 0x30);
          uVar6 = *puVar11 | 0x8000000;
          goto LAB_10096c5c;
        }
        if (uVar4 == 0xc000000) {
          puVar11 = (uint *)(param_5 + iVar18 * 0x30);
          *puVar11 = *puVar11 | 0x88000000;
        }
      }
LAB_10096c60:
      uVar17 = uVar17 + 1;
      param_7 = '\0';
      iVar18 = iVar18 + 1;
    } while (uVar17 < param_3);
  }
  return param_2;
}

