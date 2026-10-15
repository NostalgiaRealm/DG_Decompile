/*
 * FUN_180002a98 at 180002a98
 * undefined FUN_180002a98(void)
 * Address ranges: 180002a98-180002f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180002a98(undefined8 param_1,uint param_2,int param_3,longlong param_4,int *param_5,
             longlong *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  longlong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int iVar14;
  undefined8 *extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  int iVar15;
  ulonglong extraout_x11;
  int extraout_w12;
  uint extraout_w13;
  int extraout_w14;
  longlong extraout_x15;
  undefined8 extraout_x15_00;
  undefined8 extraout_x15_01;
  undefined8 extraout_x15_02;
  undefined8 extraout_x15_03;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  
  uVar9 = (ulonglong)(uint)param_5[2];
  uVar17 = (ulonglong)param_2;
  iVar4 = param_3;
  iVar2 = func_0x000180106a90(uVar9);
  iVar5 = param_5[0xc];
  uVar3 = func_0x000180106a90(iVar5);
  if (iVar4 == 2) {
    puVar12 = &DAT_180248cd8;
    puVar11 = &DAT_180248cc0;
    puVar19 = &DAT_180248b88;
  }
  else {
    uVar18 = *(uint *)(extraout_x15 + 0x10);
    puVar11 = &DAT_180248e70 + (ulonglong)uVar18 * 0x36;
    puVar19 = (uint *)((ulonglong)uVar18 * 0x1b0 + 0x180248d38);
    puVar12 = &DAT_180248e88 + (ulonglong)uVar18 * 0x36;
  }
  iVar4 = param_5[6];
  uVar18 = param_5[0xf];
  uVar6 = func_0x0001801073a0(*puVar12,iVar2);
  if ((uVar6 & 1) == 0) {
    return 0x8876086c;
  }
  iVar10 = param_5[4];
  if (((0x10 < iVar10 || 3 < extraout_w13) || extraout_w14 == 0) || extraout_w12 == 0) {
    return 0x8876086c;
  }
  iVar1 = param_5[0xb];
  uVar8 = extraout_x15_00;
  iVar15 = extraout_w11;
  iVar14 = extraout_w10;
  if ((iVar1 != 0) &&
     (uVar6 = func_0x0001801073a0(*puVar11,uVar3), uVar8 = extraout_x15_01, iVar15 = extraout_w11_00
     , iVar14 = extraout_w10_00, (uVar6 & 1) == 0)) {
    return 0x8876086c;
  }
  if (iVar15 == 0) {
    return 0x8876086c;
  }
  if (iVar14 == 0) {
    return 0x8876086c;
  }
  if (iVar10 != 0 && iVar4 != 1) {
    return 0x8876086c;
  }
  iVar4 = FUN_180002908(uVar8,uVar17,param_3);
  if (-1 < iVar4) {
    if (iVar1 != 0) {
      iVar4 = FUN_180001e98(extraout_x15_02,param_3,uVar9 & 0xffffffff);
      if (iVar4 < 0) {
        return 0x8876086c;
      }
      iVar5 = FUN_180002908(extraout_x15_03,uVar17,param_3,iVar5);
      if (iVar5 < 0) {
        return 0x8876086c;
      }
    }
    iVar5 = param_5[10];
    lVar16 = *(longlong *)(param_5 + 8);
    lVar7 = (*__imp_USER32_dll_GetDesktopWindow)();
    if (lVar16 == lVar7 || lVar16 == 0) {
      lVar16 = param_4;
    }
    *param_6 = lVar16;
    *(int *)(param_6 + 1) = *param_5;
    *(int *)((longlong)param_6 + 0xc) = param_5[1];
    *(uint *)((longlong)param_6 + 0x1c) = (uint)(byte)(&DAT_180229a68)[iVar2];
    *(int *)(param_6 + 4) = *param_5;
    *(int *)((longlong)param_6 + 0x24) = param_5[1];
    param_6[6] = 0x100000001;
    if (uVar18 == 0x80000000) {
      uVar18 = 0;
    }
    else if (uVar18 == 0) {
      uVar18 = (uint)(param_5[10] == 0);
    }
    *(uint *)(param_6 + 8) = uVar18;
    *(int *)((longlong)param_6 + 0x3c) = param_5[6];
    iVar4 = param_5[3];
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    *(int *)((longlong)param_6 + 0x44) = iVar4;
    iVar4 = param_5[2];
    *(int *)(param_6 + 9) = iVar2;
    *(int *)(param_6 + 10) = iVar4;
    if (param_5[0xb] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_5[0xc];
    }
    *(int *)((longlong)param_6 + 0x54) = iVar4;
    lVar16 = DAT_18024de60;
    uVar9 = 600;
    if (param_5[0xb] == 0) {
      uVar3 = 0x2a;
    }
    *(undefined4 *)((longlong)param_6 + 0x4c) = uVar3;
    *(int *)(param_6 + 0xb) = param_5[4];
    *(int *)((longlong)param_6 + 0x5c) = param_5[5];
    puVar12 = &DAT_180253850;
    if ((param_5[2] == 0x23) && (*(int *)(lVar16 + 0x8d2) == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = func_0x00018021fb80((&DAT_180253850)[uVar17 * 0x4b] + 8);
      lVar16 = extraout_x9;
      puVar12 = extraout_x10;
      uVar9 = extraout_x11;
    }
    lVar7 = uVar17 * (uVar9 & 0xffffffff);
    *(int *)(param_6 + 7) = (int)uVar8;
    *(uint *)(param_6 + 0xc) = param_2;
    *(undefined4 *)((longlong)param_6 + 100) = *(undefined4 *)((longlong)puVar12 + lVar7 + 0x20);
    *(int *)(param_6 + 0xd) = *(int *)((longlong)puVar12 + lVar7 + 0x20) + 1;
    *(int *)((longlong)param_6 + 0x6c) = param_5[0xd];
    *(byte *)(param_6 + 0xe) = (byte)param_5[0xd] & 1;
    *(bool *)((longlong)param_6 + 0x71) = param_5[10] != 0;
    if ((*(char *)(lVar16 + 0x881) == '\0') && (*(char *)(lVar16 + 0x820) != '\0')) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    *(undefined1 *)((longlong)param_6 + 0x72) = uVar13;
    *(byte *)((longlong)param_6 + 0x73) = (byte)(*puVar19 >> 0x11) & 1;
    if (param_5[6] == 4) {
      return 0x80004005;
    }
    if (iVar5 == 0) {
      lVar16 = FUN_180020a28(uVar8,param_2,*param_5,param_5[1]);
      if (lVar16 == 0) {
        return 0x8876086c;
      }
      *(undefined4 *)(param_6 + 2) = *(undefined4 *)(lVar16 + 8);
      *(undefined4 *)((longlong)param_6 + 0x14) = *(undefined4 *)(lVar16 + 0xc);
      *(undefined4 *)(param_6 + 3) = *(undefined4 *)(lVar16 + 0x10);
      FUN_180020b90(&local_70,param_6 + 1,uVar17);
      param_6[5] = lStack_68;
      param_6[4] = local_70;
      param_6[6] = local_60;
      if (param_5[0xe] != 0) {
        return 0;
      }
      uVar9 = FUN_18001f9b8();
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      *(undefined4 *)(param_6 + 5) = *(undefined4 *)((longlong)puVar12 + lVar7 + 0x180);
      uVar3 = *(undefined4 *)((longlong)puVar12 + lVar7 + 0x184);
    }
    else {
      if (param_5[0xe] != 0) {
        return 0x8876086c;
      }
      if (*param_5 == 0) {
        return 0x8876086c;
      }
      if (param_5[1] == 0) {
        return 0x8876086c;
      }
      *(undefined4 *)(param_6 + 2) = *(undefined4 *)((longlong)puVar12 + lVar7 + 0x198);
      *(undefined4 *)((longlong)param_6 + 0x14) =
           *(undefined4 *)((longlong)&DAT_1802539e8 + lVar7 + 4);
      *(undefined4 *)(param_6 + 3) = *(undefined4 *)((longlong)&DAT_1802539f0 + lVar7);
      *(undefined4 *)(param_6 + 5) = *(undefined4 *)((longlong)puVar12 + lVar7 + 0x198);
      uVar3 = *(undefined4 *)((longlong)&DAT_1802539e8 + lVar7 + 4);
    }
    *(undefined4 *)((longlong)param_6 + 0x2c) = uVar3;
    return 0;
  }
  return 0x8876086c;
}

