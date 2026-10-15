/*
 * FUN_100d6170 at 100d6170
 * undefined FUN_100d6170(void)
 * Address ranges: 100d6170-100d679b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d6170(int param_1,int param_2,undefined8 *param_3,int param_4,undefined8 *param_5,
                uint param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int extraout_w11;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  iVar5 = -0x7789f794;
  iVar13 = -0x7789f794;
  if (param_2 == 0) {
    return -0x7789f794;
  }
  if (param_4 == 0 || 7 < param_6) {
    return -0x7789f794;
  }
  if ((0xcfU >> (ulonglong)(param_6 & 0x1f) & 1) == 0) {
    return -0x7789f794;
  }
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar8 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar8 = true;
    iVar11 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar11 == 0) {
      FUN_100071d0(0);
    }
  }
  piVar6 = (int *)(param_2 + -0x34);
  iVar11 = *piVar6;
  cVar9 = FUN_100038a0(iVar11);
  iVar3 = *(int *)(param_4 + -0x34);
  if (cVar9 == '\0') {
    uVar15 = FUN_100038a0(iVar3);
    if ((uVar15 & 1) != 0) goto LAB_100d66c4;
    iVar13 = FUN_100d0640(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + -0x58ec),iVar11,
                          iVar3);
  }
  else {
    iVar13 = iVar5;
    if (iVar11 == iVar3) {
      iVar13 = 0;
    }
  }
  if (iVar13 < 0) goto LAB_100d66c4;
  (*(code *)PTR_FUN_1016c26c)
            (auStack_80,0,0,*(undefined4 *)(param_2 + -0x1c),*(undefined4 *)(param_2 + -0x18));
  (*(code *)PTR_FUN_1016c26c)
            (auStack_70,0,0,*(undefined4 *)(param_4 + -0x1c),*(undefined4 *)(param_4 + -0x18));
  if (param_3 == (undefined8 *)0x0) {
    param_3 = auStack_80;
  }
  uStack_98 = param_3[1];
  local_a0 = *param_3;
  if (param_5 == (undefined8 *)0x0) {
    param_5 = auStack_70;
  }
  uStack_88 = param_5[1];
  local_90 = *param_5;
  (*(code *)PTR_FUN_1016c208)(auStack_60,&local_a0,auStack_80);
  (*(code *)PTR_FUN_1016c208)(auStack_50,&local_90,auStack_70);
  if ((int)uStack_98 - (int)local_a0 == (int)uStack_88 - (int)local_90) {
    bVar7 = false;
    if (uStack_98._4_4_ - local_a0._4_4_ != uStack_88._4_4_ - local_90._4_4_) goto LAB_100d6398;
  }
  else {
LAB_100d6398:
    bVar7 = true;
  }
  uVar14 = (*(code *)PTR_FUN_1016c1a4)(auStack_60,&local_a0);
  if (((int)uVar14 == 0) ||
     (uVar14 = (*(code *)PTR_FUN_1016c1a4)(auStack_50,&local_90), (int)uVar14 == 0)) {
    iVar13 = iVar5;
  }
  iVar11 = *(int *)(param_2 + 0x2c);
  iVar3 = *(int *)(param_4 + 0x2c);
  bVar1 = false;
  bVar2 = false;
  if (iVar11 != 0) {
    bVar1 = (*(uint *)(*(int *)(iVar11 + 0x88) + 0x30) >> 10 & 1) != 0 &&
            *(int *)(iVar11 + 0x88) != param_2 + -0x5c;
  }
  if (iVar3 != 0) {
    bVar2 = (*(uint *)(*(int *)(iVar3 + 0x88) + 0x30) >> 10 & 1) != 0 &&
            *(int *)(iVar3 + 0x88) != param_4 + -0x5c;
  }
  iVar12 = iVar5;
  if ((!bVar1) && (!bVar2)) {
    if (-1 < iVar13) {
      if ((*(int *)(param_2 + -0x28) != 0) || (*(int *)(param_4 + -0x28) != 0)) goto LAB_100d64c4;
      if (param_6 != 0) {
        if (param_6 == 1) {
          uVar17 = *(uint *)(*(int *)(param_1 + 0x50) + 0xf4) & 0x1000100;
          uVar16 = 0x1000100;
        }
        else {
          if (param_6 != 2) goto LAB_100d64c4;
          uVar17 = *(uint *)(*(int *)(param_1 + 0x50) + 0xf4) & 0x2000200;
          uVar16 = 0x2000200;
        }
        if (uVar17 != uVar16) goto LAB_100d64c4;
      }
    }
    iVar12 = iVar13;
  }
LAB_100d64c4:
  uVar14 = FUN_100d2960(uVar14,piVar6);
  cVar10 = FUN_100d2960(uVar14,(int *)(param_4 + -0x34));
  if ((((*(int *)(param_2 + -0x20) == *(int *)(param_4 + -0x20)) &&
       (*(int *)(param_2 + -0x24) == *(int *)(param_4 + -0x24))) || (extraout_w11 == 0)) ||
     (cVar10 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar13 = iVar12;
  if (-1 < iVar12) {
    if (!bVar1) {
      iVar12 = iVar5;
    }
    iVar13 = iVar12;
    if (((-1 < iVar12) && (bVar7)) && (iVar13 = iVar5, param_2 != param_4)) {
      iVar4 = *piVar6;
      uVar15 = FUN_10003810(iVar4);
      iVar13 = iVar12;
      if (((uVar15 & 1) != 0) && (iVar4 != 0x59565955 && iVar4 != 0x32595559)) {
        iVar13 = iVar5;
      }
    }
  }
  if (iVar11 == 0) {
    piVar6 = (int *)(param_2 + 0x14);
  }
  else {
    piVar6 = (int *)(iVar11 + 0x18);
  }
  iVar11 = *piVar6;
  if (iVar3 == 0) {
    piVar6 = (int *)(param_4 + 0x14);
  }
  else {
    piVar6 = (int *)(iVar3 + 0x18);
  }
  iVar3 = *piVar6;
  if (-1 < iVar13) {
    if (((iVar11 - 3U & 0xfffffffd) == 0) || ((iVar3 - 3U & 0xfffffffd) == 0)) {
      if ((*(uint *)(*(int *)(param_1 + 0x50) + 0xd4) >> 4 & 1) != 0) {
        if (iVar3 != 3) goto LAB_100d65dc;
        goto LAB_100d65e4;
      }
    }
    else {
LAB_100d65dc:
      if (iVar3 == 5) {
LAB_100d65e4:
        if ((*(uint *)(param_4 + -0x2c) & 3) == 0) goto LAB_100d661c;
      }
      if (((iVar3 != 1) || ((*(uint *)(param_4 + -0x2c) & 3) != 0)) || (iVar11 == 1 && !bVar7))
      goto LAB_100d6620;
    }
LAB_100d661c:
    iVar13 = -0x7789f794;
  }
LAB_100d6620:
  if (cVar9 == '\0') {
    if (iVar13 < 0) goto LAB_100d66c4;
LAB_100d66f4:
    if (((*(uint *)(*(int *)(param_2 + -0x58) + 0xb8) >> 0xb & 1) == 0) &&
       ((*(uint *)(*(int *)(param_4 + -0x58) + 0xb8) >> 0xb & 1) == 0)) {
      if (param_2 == param_4) {
        iVar13 = -0x7789f7d9;
      }
      if ((-1 < iVar13) && (*(char *)(param_1 + -0x17) == '\0')) {
        iVar13 = FUN_100d4120(param_1 + -0x66b4,param_2 + -0x5c,param_4 + -0x5c,&local_a0,&local_90,
                              bVar7 && param_6 == 2);
      }
      goto LAB_100d66c4;
    }
  }
  else {
    if (iVar13 < 0) goto LAB_100d66c4;
    if (bVar7) {
      iVar13 = iVar5;
    }
    if (iVar13 < 0) goto LAB_100d66c4;
    iVar12 = (*(code *)PTR_FUN_1016c1a4)(auStack_80,&local_a0);
    if (iVar12 == 0) {
      iVar13 = iVar5;
    }
    if (iVar13 < 0) goto LAB_100d66c4;
    if ((((*(char *)(param_1 + 0x4c) != '\0') ||
         (((iVar11 - 3U & 0xfffffffd) != 0 && ((iVar3 - 3U & 0xfffffffd) != 0)))) &&
        ((*(uint *)(*(int *)(param_2 + -0x58) + 0xb8) >> 9 & 1) == 0)) &&
       (((*(uint *)(*(int *)(param_4 + -0x58) + 0xb8) >> 9 & 1) == 0 &&
        (*(char *)(param_1 + -0x59ef) == '\0')))) goto LAB_100d66f4;
  }
  iVar13 = -0x7789f794;
LAB_100d66c4:
  if (bVar8) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return iVar13;
}

