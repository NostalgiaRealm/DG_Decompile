/*
 * FUN_180107cc8 at 180107cc8
 * undefined FUN_180107cc8(void)
 * Address ranges: 180107cc8-18010815b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180107cc8(longlong param_1,uint param_2,int param_3,longlong param_4,int *param_5,
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
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined8 *puVar15;
  longlong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int iVar16;
  uint *puVar17;
  undefined8 *extraout_x10;
  int extraout_w11;
  ulonglong extraout_x11;
  uint extraout_w12;
  int extraout_w15;
  longlong lVar18;
  ulonglong uVar19;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  
  uVar9 = (ulonglong)(uint)param_5[2];
  uVar19 = (ulonglong)param_2;
  iVar4 = param_3;
  iVar2 = FUN_180106a90(uVar9);
  iVar5 = param_5[0xc];
  uVar3 = FUN_180106a90(iVar5);
  if (iVar4 == 2) {
    puVar15 = &DAT_1802463c8;
    puVar12 = &DAT_1802463b0;
    puVar17 = &DAT_180246278;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x10);
    puVar15 = &DAT_180246578 + (ulonglong)uVar13 * 0x36;
    puVar12 = &DAT_180246560 + (ulonglong)uVar13 * 0x36;
    puVar17 = (uint *)((ulonglong)uVar13 * 0x1b0 + 0x180246428);
  }
  iVar4 = param_5[6];
  uVar13 = param_5[0xf];
  if (((uVar13 < 9) && ((0x117U >> (ulonglong)(uVar13 & 0x1f) & 1) != 0)) ||
     (iVar10 = 0, uVar13 == 0x80000000)) {
    iVar10 = 1;
  }
  uVar6 = FUN_1801073a0(*puVar15,iVar2);
  if ((uVar6 & 1) == 0) {
    return 0x8876086c;
  }
  iVar11 = param_5[4];
  if (((0x10 < iVar11 || 3 < extraout_w12) || extraout_w15 == 0) || extraout_w11 == 0) {
    return 0x8876086c;
  }
  iVar1 = param_5[0xb];
  iVar16 = extraout_w10;
  if ((iVar1 != 0) &&
     (uVar6 = FUN_1801073a0(*puVar12,uVar3), iVar16 = extraout_w10_00, (uVar6 & 1) == 0)) {
    return 0x8876086c;
  }
  if (iVar16 == 0) {
    return 0x8876086c;
  }
  if (iVar10 == 0) {
    return 0x8876086c;
  }
  if (iVar11 != 0 && iVar4 != 1) {
    return 0x8876086c;
  }
  iVar4 = FUN_180107b38(param_1,uVar19,param_3);
  if (-1 < iVar4) {
    if (iVar1 != 0) {
      iVar4 = FUN_180106760(param_1,param_3,uVar9 & 0xffffffff);
      if (iVar4 < 0) {
        return 0x8876086c;
      }
      iVar5 = FUN_180107b38(param_1,uVar19,param_3,iVar5);
      if (iVar5 < 0) {
        return 0x8876086c;
      }
    }
    iVar5 = param_5[10];
    lVar18 = *(longlong *)(param_5 + 8);
    lVar7 = thunk_FUN_180223bd0();
    if (lVar18 == lVar7 || lVar18 == 0) {
      lVar18 = param_4;
    }
    *param_6 = lVar18;
    *(int *)(param_6 + 1) = *param_5;
    *(int *)((longlong)param_6 + 0xc) = param_5[1];
    *(uint *)((longlong)param_6 + 0x1c) = (uint)(byte)(&DAT_180229a68)[iVar2];
    *(int *)(param_6 + 4) = *param_5;
    *(int *)((longlong)param_6 + 0x24) = param_5[1];
    param_6[6] = 0x100000001;
    if (uVar13 == 0x80000000) {
      uVar13 = 0;
    }
    else if (uVar13 == 0) {
      uVar13 = (uint)(param_5[10] == 0);
    }
    *(uint *)(param_6 + 8) = uVar13;
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
    lVar18 = DAT_18024d928;
    uVar9 = 600;
    if (param_5[0xb] == 0) {
      uVar3 = 0x2a;
    }
    *(undefined4 *)((longlong)param_6 + 0x4c) = uVar3;
    *(int *)(param_6 + 0xb) = param_5[4];
    *(int *)((longlong)param_6 + 0x5c) = param_5[5];
    puVar15 = &DAT_18024e840;
    if ((param_5[2] == 0x23) && (*(int *)(lVar18 + 0x8d2) == 0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = FUN_18021fb80((&DAT_18024e840)[uVar19 * 0x4b] + 8);
      lVar18 = extraout_x9;
      puVar15 = extraout_x10;
      uVar9 = extraout_x11;
    }
    lVar7 = uVar19 * (uVar9 & 0xffffffff);
    *(int *)(param_6 + 7) = (int)uVar8;
    *(uint *)(param_6 + 0xc) = param_2;
    *(undefined4 *)((longlong)param_6 + 100) = *(undefined4 *)((longlong)puVar15 + lVar7 + 0x20);
    *(int *)(param_6 + 0xd) = *(int *)((longlong)puVar15 + lVar7 + 0x20) + 1;
    *(int *)((longlong)param_6 + 0x6c) = param_5[0xd];
    *(byte *)(param_6 + 0xe) = (byte)param_5[0xd] & 1;
    *(bool *)((longlong)param_6 + 0x71) = param_5[10] != 0;
    if ((*(char *)(lVar18 + 0x881) == '\0') && (*(char *)(lVar18 + 0x820) != '\0')) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    *(undefined1 *)((longlong)param_6 + 0x72) = uVar14;
    *(byte *)((longlong)param_6 + 0x73) = (byte)(*puVar17 >> 0x11) & 1;
    if (param_5[6] == 4) {
      return 0x80004005;
    }
    if (iVar5 == 0) {
      lVar18 = FUN_18012cea0(uVar8,param_2,*param_5,param_5[1]);
      if (lVar18 == 0) {
        return 0x8876086c;
      }
      *(undefined4 *)(param_6 + 2) = *(undefined4 *)(lVar18 + 8);
      *(undefined4 *)((longlong)param_6 + 0x14) = *(undefined4 *)(lVar18 + 0xc);
      *(undefined4 *)(param_6 + 3) = *(undefined4 *)(lVar18 + 0x10);
      FUN_18012cfb8(&local_60,param_6 + 1,uVar19);
      param_6[5] = lStack_58;
      param_6[4] = local_60;
      param_6[6] = local_50;
      if (param_5[0xe] != 0) {
        return 0;
      }
      uVar9 = FUN_18012bcd8();
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      *(undefined4 *)(param_6 + 5) = *(undefined4 *)((longlong)puVar15 + lVar7 + 0x180);
      uVar3 = *(undefined4 *)((longlong)puVar15 + lVar7 + 0x184);
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
      *(undefined4 *)(param_6 + 2) = *(undefined4 *)((longlong)puVar15 + lVar7 + 0x198);
      *(undefined4 *)((longlong)param_6 + 0x14) =
           *(undefined4 *)((longlong)&DAT_18024e9d8 + lVar7 + 4);
      *(undefined4 *)(param_6 + 3) = *(undefined4 *)((longlong)&DAT_18024e9e0 + lVar7);
      *(undefined4 *)(param_6 + 5) = *(undefined4 *)((longlong)puVar15 + lVar7 + 0x198);
      uVar3 = *(undefined4 *)((longlong)&DAT_18024e9d8 + lVar7 + 4);
    }
    *(undefined4 *)((longlong)param_6 + 0x2c) = uVar3;
    return 0;
  }
  return 0x8876086c;
}

