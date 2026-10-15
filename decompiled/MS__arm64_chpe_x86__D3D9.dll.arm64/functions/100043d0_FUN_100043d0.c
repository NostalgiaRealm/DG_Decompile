/*
 * FUN_100043d0 at 100043d0
 * undefined FUN_100043d0(void)
 * Address ranges: 100043d0-10004aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100043d0(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,int *param_6,
                undefined8 param_7,byte param_8)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  int *piVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  int *extraout_w1;
  int *extraout_w1_00;
  int *piVar21;
  int *extraout_w1_01;
  uint uVar22;
  undefined8 *puVar23;
  int *piVar24;
  undefined1 uVar25;
  uint uVar26;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  piVar24 = param_5 + 2;
  iVar17 = *piVar24;
  iVar13 = FUN_10003020(iVar17);
  iVar18 = param_5[10];
  iVar14 = FUN_10003020(iVar18);
  iVar15 = FUN_10004ff0(param_1,param_3);
  piVar3 = param_5 + 6;
  iVar4 = *piVar3;
  puVar1 = (uint *)(param_5 + 0xb);
  uVar19 = param_5[3];
  uVar22 = 0xfffff008;
  if (*(char *)(param_1 + 0x47) == '\0') {
    uVar22 = 0xffffffe8;
  }
  bVar12 = (uVar22 & *puVar1) == 0;
  if (((*puVar1 >> 1 & 1) != 0) && (param_5[9] != 0)) {
    bVar12 = (iVar18 != 0x46 && iVar18 != 0x52) && bVar12;
  }
  uVar22 = param_5[0xd];
  if (((uVar22 < 9) && ((0x117U >> (ulonglong)(uVar22 & 0x1f) & 1) != 0)) ||
     (bVar10 = false, uVar22 == 0x80000000)) {
    bVar10 = true;
  }
  uVar20 = FUN_10003900(*(undefined4 *)(iVar15 + 0x144),iVar13);
  if ((uVar20 & 1) == 0) {
    return -0x7789f794;
  }
  iVar5 = param_5[4];
  if (((0x10 < iVar5 || 3 < uVar19) || 4 < iVar4 - 1U) || 1 < uVar19 && iVar4 == 3) {
    return -0x7789f794;
  }
  piVar11 = param_5 + 9;
  iVar6 = *piVar11;
  if ((iVar6 != 0) &&
     (uVar20 = FUN_10003900(*(undefined4 *)(iVar15 + 0x138),iVar14), (uVar20 & 1) == 0)) {
    return -0x7789f794;
  }
  if (!bVar12) {
    return -0x7789f794;
  }
  if (!bVar10) {
    return -0x7789f794;
  }
  if (iVar5 != 0 && iVar4 != 1) {
    return -0x7789f794;
  }
  iVar4 = param_5[5];
  iVar9 = ((param_8 ^ 1) + 0xc43b0435) * 2;
  piVar2 = param_5 + 8;
  iVar7 = *piVar2;
  iVar16 = FUN_10004200(param_1,param_2,param_3,iVar17,iVar7 != 0,iVar5,iVar4,1);
  if (-1 < iVar16) {
    if (iVar6 != 0) {
      iVar17 = FUN_10002ba8(param_1,param_3,iVar17,iVar17,iVar18);
      if (iVar17 < 0) {
        return iVar9;
      }
      iVar17 = FUN_10004200(param_1,param_2,param_3,iVar18,iVar7 != 0,iVar5,iVar4,1);
      if (iVar17 < 0) {
        return iVar9;
      }
    }
    iVar17 = param_5[7];
    iVar18 = (*(code *)PTR_FUN_1016c1cc)();
    uVar20 = ZEXT48(param_6 + 1);
    piVar21 = param_5 + 1;
    if (iVar17 == iVar18 || iVar17 == 0) {
      iVar17 = param_4;
    }
    *param_6 = iVar17;
    param_6[1] = *param_5;
    param_6[2] = *piVar21;
    param_6[6] = (uint)*(byte *)(iVar13 + 0x101607d8);
    param_6[7] = *param_5;
    param_6[8] = *piVar21;
    param_6[0xb] = 1;
    param_6[0xc] = 1;
    if (uVar22 == 0x80000000) {
      uVar22 = 0;
    }
    else if (uVar22 == 0) {
      uVar22 = (uint)(*piVar2 == 0);
    }
    param_6[0xf] = uVar22;
    param_6[0xe] = *piVar3;
    uVar22 = param_5[3];
    if (uVar22 == 0) {
      uVar22 = 1;
    }
    param_6[0x10] = uVar22;
    param_6[0x13] = *piVar24;
    param_6[0x11] = iVar13;
    if (*piVar11 == 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = param_5[10];
    }
    param_6[0x14] = iVar17;
    iVar17 = 0x10170000;
    if (*piVar11 == 0) {
      iVar14 = 0x2a;
    }
    param_6[0x12] = iVar14;
    param_6[0x15] = param_5[4];
    param_6[0x16] = param_5[5];
    if (*piVar24 == 0x23) {
      if (*(int *)(DAT_10170ad0 + 0x836) == 0) {
        iVar14 = 1;
      }
      else {
        iVar14 = FUN_1012ed18((&DAT_10171380)[param_2 * 0x8a] + 4);
        iVar17 = extraout_w11;
        piVar21 = extraout_w1;
      }
    }
    else {
      iVar14 = FUN_1012ed18((&DAT_10171380)[param_2 * 0x8a] + 4);
      iVar17 = extraout_w11_00;
      piVar21 = extraout_w1_00;
    }
    param_6[0xd] = iVar14;
    param_6[0x17] = param_2;
    param_6[0x18] = (&DAT_10171394)[param_2 * 0x8a];
    param_6[0x19] = (&DAT_10171394)[param_2 * 0x8a] + 1;
    param_6[0x1a] = *puVar1;
    *(byte *)(param_6 + 0x1b) = (byte)*puVar1 & 1;
    *(bool *)((int)param_6 + 0x6d) = *piVar2 != 0;
    if ((*(char *)(*(int *)(iVar17 + 0xad0) + 0x7e5) == '\0') &&
       (*(char *)(*(int *)(iVar17 + 0xad0) + 0x784) != '\0')) {
      uVar25 = 1;
    }
    else {
      uVar25 = 0;
    }
    *(undefined1 *)((int)param_6 + 0x6e) = uVar25;
    *(byte *)((int)param_6 + 0x6f) = (byte)(*(uint *)(iVar15 + 8) >> 0x11) & 1;
    if (*piVar3 == 4) {
      return -0x7fffbffb;
    }
    uVar22 = param_5[0xc];
    if (iVar7 == 0) {
      uVar19 = FUN_1003a518();
      if ((uVar22 == 0) || ((uVar19 & 1) != 0)) {
        puVar23 = &DAT_1017158c;
      }
      else {
        puVar23 = &DAT_10171580;
      }
      uVar8 = *(uint *)((int)(puVar23 + param_2 * 0x45) + 4);
      if (uVar8 == 0) {
        return iVar9;
      }
      piVar24 = (int *)0x0;
      uVar26 = 0;
      do {
        piVar3 = (int *)(*(int *)(puVar23 + param_2 * 0x45) + uVar26 * 0x18);
        piVar11 = piVar24;
        if ((((*piVar3 == *param_5) && (piVar3[1] == *extraout_w1_01)) &&
            ((uVar22 == 0 ||
             ((((uVar19 & 1) != 0 || ((uint)piVar3[4] <= uVar22)) || ((uint)piVar3[4] <= uVar22 + 1)
              ))))) && (piVar11 = piVar3, piVar24 != (int *)0x0)) {
          iVar17 = uVar22 - piVar24[4];
          iVar18 = uVar22 - piVar3[4];
          iVar14 = -iVar18;
          if (-1 < iVar18) {
            iVar14 = iVar18;
          }
          iVar18 = -iVar17;
          if (-1 < iVar17) {
            iVar18 = iVar17;
          }
          piVar11 = piVar24;
          if (iVar14 < iVar18) {
            piVar11 = piVar3;
          }
        }
        piVar24 = piVar11;
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar8);
      if (piVar24 == (int *)0x0) {
        return iVar9;
      }
      param_6[3] = piVar24[2];
      param_6[4] = piVar24[3];
      param_6[5] = piVar24[4];
      FUN_1003b878(uVar20 & 0xffffffff,param_2);
      *(undefined8 *)(param_6 + 9) = uStack_58;
      *(undefined8 *)(param_6 + 7) = local_60;
      *(undefined8 *)(param_6 + 0xb) = local_50;
      if (param_5[0xc] != 0) {
        return 0;
      }
      uVar20 = FUN_1003a518();
      if ((uVar20 & 1) != 0) {
        return 0;
      }
      param_6[9] = *(int *)(&DAT_101714ec + param_2 * 0x45);
      iVar14 = *(int *)((int)&DAT_101714ec + param_2 * 0x228 + 4);
    }
    else {
      if (uVar22 != 0) {
        return iVar9;
      }
      if (*param_5 == 0) {
        return iVar9;
      }
      if (*piVar21 == 0) {
        return iVar9;
      }
      param_6[3] = *(int *)(&DAT_10171504 + param_2 * 0x45);
      piVar24 = (int *)((int)&DAT_10171504 + param_2 * 0x228 + 4);
      param_6[4] = *piVar24;
      param_6[5] = *(int *)(&DAT_1017150c + param_2 * 0x45);
      param_6[9] = *(int *)(&DAT_10171504 + param_2 * 0x45);
      iVar14 = *piVar24;
    }
    param_6[10] = iVar14;
    return 0;
  }
  return iVar9;
}

