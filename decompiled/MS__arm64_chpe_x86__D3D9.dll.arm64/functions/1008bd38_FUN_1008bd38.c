/*
 * FUN_1008bd38 at 1008bd38
 * undefined FUN_1008bd38(void)
 * Address ranges: 1008bd38-1008c1af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1008bd38(ulonglong param_1,uint *param_2,uint param_3,int param_4,int param_5,
                   undefined4 param_6,char param_7,char param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_w1;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  undefined8 extraout_x11;
  undefined4 *extraout_w12;
  undefined4 *extraout_w12_00;
  undefined4 uVar11;
  int iVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar15 = 0;
  if (param_3 != 0) {
    do {
      uVar4 = *param_2;
      iVar12 = param_4;
      if (uVar15 != 1) {
        iVar12 = 0;
      }
      uVar14 = uVar4 >> 0x10 & 0xff;
      uVar3 = uVar4 >> 0xd & 1;
      if ((uVar4 >> 0xd & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = param_2[1];
      }
      if (uVar3 != 0) {
        param_2 = param_2 + 1;
      }
      if (param_7 != '\0') {
        uVar14 = uVar14 >> 6;
        uVar14 = uVar14 | (uVar14 | (uVar14 | uVar14 << 2) << 2) << 2;
      }
      param_2 = param_2 + 1;
      uVar1 = 0xb000000;
      if (param_8 == '\0') {
        uVar1 = uVar4 & 0xf000000;
      }
      uVar2 = (uVar4 & 0x1800 | uVar4 >> 0x14 & 0x7ff) >> 8;
      if (0x12 < uVar2) goto switchD_1008be0c_caseD_4;
      uVar4 = (uVar4 & 0x7ff) + iVar12;
      uVar13 = (undefined1)uVar14;
      switch(uVar2) {
      case 0:
        puVar9 = (uint *)(param_5 + uVar15 * 0x30 + 0x3e0);
        param_1 = FUN_100883a0(param_1,param_5,uVar4);
        *puVar9 = (uint)param_1;
        *(undefined1 *)(puVar9 + 1) = uVar13;
        puVar9[4] = 0xffffffff;
        puVar9[5] = 0xffffffff;
        goto LAB_1008be44;
      case 1:
        if (uVar3 == 0) {
          uVar6 = 0;
        }
        param_1 = FUN_1008ba68(param_1,param_5,param_6,uVar4,uVar14,uVar6,
                               param_5 + uVar15 * 0x30 + 0x3e0);
        break;
      case 2:
        if ((*(char *)(param_5 + 0xf0) == '\0') ||
           (iVar10 = *(int *)(param_5 + 0xf4), *(char *)(iVar10 + uVar4 + 0x331) == '\0')) {
          iVar12 = (uVar4 + 8) * 0x10;
          uVar11 = *(undefined4 *)(param_5 + 0x70);
          uVar5 = 0xffffffff;
          uVar8 = 0xffffffff;
          uVar7 = 0xffffffff;
        }
        else {
          uVar5 = *(undefined4 *)(((uVar14 >> 6) << 2 | uVar4 * 0x10) + iVar10 + 0x414);
          uVar8 = *(undefined4 *)(((uVar14 >> 4 & 3) << 2 | uVar4 * 0x10) + iVar10 + 0x414);
          iVar12 = *(int *)(((uVar14 & 3) << 2 | uVar4 * 0x10) + iVar10 + 0x414);
          uVar7 = *(undefined4 *)((uVar14 & 0xc | uVar4 * 0x10) + iVar10 + 0x414);
          uVar14 = 0xe4;
          uVar11 = 0x410400;
        }
        uVar13 = (undefined1)uVar14;
        goto LAB_1008bee4;
      case 3:
        puVar9 = (uint *)(param_5 + uVar15 * 0x30 + 0x3e0);
        *puVar9 = uVar4 + 5 | 0x410100;
        goto LAB_1008c018;
      case 7:
        if ((*(char *)(param_5 + 0xf0) == '\0') ||
           (iVar12 = *(int *)(param_5 + 0xf4), *(char *)(iVar12 + uVar4 + 400) == '\0')) {
          uVar11 = *(undefined4 *)(param_5 + 0x80);
          uVar5 = 0xffffffff;
          uVar8 = 0xffffffff;
          uVar7 = 0xffffffff;
          iVar12 = uVar4 * 0x10;
        }
        else {
          iVar10 = uVar4 + 0x1a;
          uVar11 = 0x410400;
          uVar5 = *(undefined4 *)(iVar12 + (uVar14 >> 6 | iVar10 * 4) * 4);
          uVar8 = *(undefined4 *)(iVar12 + (uVar14 >> 4 & 3 | iVar10 * 4) * 4);
          uVar3 = uVar14 >> 2;
          uVar4 = uVar14 & 3;
          uVar14 = 0xe4;
          uVar7 = *(undefined4 *)(iVar12 + (uVar3 & 3 | iVar10 * 4) * 4);
          iVar12 = *(int *)(iVar12 + (uVar4 | iVar10 * 4) * 4);
        }
        uVar13 = (undefined1)uVar14;
LAB_1008bee4:
        iVar10 = param_5 + uVar15 * 0x30;
        *(undefined4 *)(iVar10 + 0x3e0) = uVar11;
        *(undefined1 *)(iVar10 + 0x3e4) = uVar13;
        *(int *)(iVar10 + 0x3f0) = iVar12;
        *(undefined4 *)(iVar10 + 0x3f4) = uVar7;
        *(undefined4 *)(iVar10 + 0x3f8) = uVar8;
        *(undefined4 *)(iVar10 + 0x3fc) = uVar5;
        break;
      case 10:
        uVar5 = FUN_10121528(param_5,uVar4,0,uVar4);
        *extraout_w12 = uVar5;
        *(undefined1 *)(extraout_w12 + 1) = uVar13;
        *(undefined8 *)(extraout_w12 + 4) = 0xffffffffffffffff;
        *(undefined8 *)(extraout_w12 + 6) = 0xffffffffffffffff;
        param_1 = FUN_10121528(param_5,extraout_w1,1,extraout_w1 + 0x10);
        *extraout_w12_00 = (int)param_1;
        *(undefined1 *)(extraout_w12_00 + 1) = uVar13;
        *(undefined8 *)(extraout_w12_00 + 4) = extraout_x11;
        *(undefined8 *)(extraout_w12_00 + 6) = extraout_x11;
        break;
      case 0x11:
        if (uVar4 == 1) {
          uVar14 = 0;
          uVar4 = FUN_1008b768();
        }
        else {
          uVar4 = FUN_1008b658(param_1,param_5,param_6);
        }
        param_1 = (ulonglong)uVar4;
        puVar9 = (uint *)(param_5 + uVar15 * 0x30 + 0x3e0);
        *puVar9 = uVar4;
LAB_1008c018:
        *(char *)(puVar9 + 1) = (char)uVar14;
LAB_1008c020:
        puVar9[4] = 0xffffffff;
        puVar9[5] = 0xffffffff;
LAB_1008be44:
        puVar9[6] = 0xffffffff;
        puVar9[7] = 0xffffffff;
        break;
      case 0x12:
        iVar12 = param_5 + uVar15 * 0x30;
        puVar9 = (uint *)(iVar12 + 0x3e0);
        *puVar9 = uVar4 | 0x20410a00;
        *(undefined1 *)(iVar12 + 0x3e4) = 0;
        goto LAB_1008c020;
      }
switchD_1008be0c_caseD_4:
      if (uVar1 == 0x1000000) {
        iVar12 = param_5 + uVar15 * 0x30;
        uVar4 = *(uint *)(iVar12 + 0x3e0) | 0x80000000;
LAB_1008c178:
        *(uint *)(iVar12 + 0x3e0) = uVar4;
      }
      else {
        if (uVar1 == 0xb000000) {
          iVar12 = param_5 + uVar15 * 0x30;
          uVar4 = *(uint *)(iVar12 + 0x3e0) | 0x8000000;
          goto LAB_1008c178;
        }
        if (uVar1 == 0xc000000) {
          iVar12 = param_5 + uVar15 * 0x30;
          uVar4 = *(uint *)(iVar12 + 0x3e0) | 0x88000000;
          goto LAB_1008c178;
        }
      }
      uVar15 = uVar15 + 1;
      param_8 = '\0';
    } while (uVar15 < param_3);
  }
  return param_2;
}

