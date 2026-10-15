/*
 * FUN_1801074b0 at 1801074b0
 * undefined FUN_1801074b0(void)
 * Address ranges: 1801074b0-180107b1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801074b0(undefined8 param_1,undefined8 param_2,int param_3,ulonglong param_4,
                       uint param_5,uint param_6,int param_7,ulonglong param_8)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint extraout_w10;
  int extraout_w10_00;
  char *extraout_x10;
  char *extraout_x10_00;
  char *pcVar16;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  uint extraout_w12;
  uint extraout_w12_00;
  uint uVar17;
  uint uVar18;
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  ulonglong extraout_x12_01;
  ulonglong extraout_x12_02;
  longlong extraout_x15;
  char *extraout_x15_00;
  char *extraout_x15_01;
  char *pcVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 auVar22 [12];
  undefined1 auStack_40 [16];
  
  uVar12 = 0x8876086c;
  uVar5 = FUN_1801072a0(param_6 & 0xffc07fff,param_1,param_3);
  if (((uVar5 & 1) == 0) || (6 < param_7 - 1U)) goto LAB_180107b08;
  uVar18 = param_7 - 2U & 0xfffffffd;
  uVar11 = (uint)extraout_x12;
  if (uVar18 == 0) {
    uVar5 = extraout_x12 & 0xfffffdff;
LAB_180107570:
    bVar2 = uVar5 == 0;
  }
  else if ((param_7 - 3U & 0xfffffffd) == 0) {
    if ((uVar11 == 0x200 || uVar11 < 4) || (uVar11 == 0x600 || (uVar11 == 0x400 || uVar11 == 0x401))
       ) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    if ((param_7 == 6) || (param_7 == 7)) {
      uVar5 = extraout_x12 & 0xfffffc07;
      goto LAB_180107570;
    }
    if (param_7 != 1) goto LAB_180107b08;
    bVar2 = uVar11 < 4;
  }
  if ((!bVar2) || (3 < param_5)) goto LAB_180107b08;
  uVar12 = (ulonglong)(((extraout_w10 ^ 1) & 0xff) * 2 + 0x8876086a);
  uVar5 = FUN_1801072f0(param_4 & 0xffffffff);
  if ((uVar5 & 1) == 0) goto LAB_180107b08;
  uVar5 = (ulonglong)*(uint *)(extraout_x15 + 0x10);
  uVar3 = FUN_180106a90(param_4 & 0xffffffff);
  uVar6 = FUN_1801073a0((&DAT_180246578)[uVar5 * 0x36],uVar3);
  if ((uVar6 & 1) == 0) goto LAB_180107b08;
  iVar4 = FUN_180106a90(param_8 & 0xffffffff);
  iVar13 = (int)param_8;
  uVar11 = (uint)uVar12;
  if (param_3 == 2) {
    puVar7 = &DAT_180246270;
    piVar10 = &DAT_1802463e8;
    puVar14 = &DAT_1802463a8;
    puVar21 = &DAT_1802463c0;
    puVar15 = &DAT_1802463b8;
    puVar20 = &DAT_1802463a8;
  }
  else {
    piVar10 = (int *)(&DAT_180246598 + uVar5 * 0x1b0);
    puVar14 = &DAT_180246558 + uVar5 * 0x36;
    puVar21 = &DAT_180246570 + uVar5 * 0x36;
    puVar7 = &DAT_180246420 + uVar5 * 0x1b0;
    puVar15 = &DAT_180246568 + uVar5 * 0x36;
    puVar20 = &DAT_180246558 + uVar5 * 0x36;
  }
  uVar5 = extraout_x12_00;
  if (uVar18 == 0) {
    if (param_5 != 3) {
      if (iVar13 != 0x14) {
        auVar22 = FUN_1801073a0(*puVar15);
        iVar4 = auVar22._8_4_;
        if ((auVar22._0_8_ & 0xff) != 0) {
          uVar11 = 0;
        }
        uVar12 = (ulonglong)uVar11;
        uVar5 = extraout_x12_02;
      }
      uVar18 = (uint)uVar5;
      uVar11 = (uint)uVar12;
      if ((int)uVar11 < 0) goto LAB_180107b08;
      if ((param_6 >> 10 & 1) != 0) {
        uVar12 = 0x876086f;
        goto LAB_180107b08;
      }
      uVar17 = param_6 & 0x3f8000;
      if (uVar17 != 0x220000 && (param_6 & 0x1d8000) == 0) goto LAB_180107b08;
      if (uVar17 == 0x8000) {
LAB_180107818:
        uVar12 = uVar5 & 0xffffffff;
        goto LAB_180107b08;
      }
      if (uVar17 == 0x10000) {
        uVar5 = 0;
        do {
          if (iVar4 == (&DAT_180229a20)[uVar5]) goto LAB_180107998;
          uVar17 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar17;
        } while (uVar17 < 0x11);
LAB_180107990:
        bVar2 = false;
      }
      else {
        if (uVar17 == 0x40000) {
          uVar5 = 0;
          do {
            if (iVar4 == (&DAT_1802299f0)[uVar5]) goto LAB_180107998;
            uVar17 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar17;
          } while (uVar17 < 9);
          goto LAB_180107990;
        }
        if (uVar17 == 0x80000) goto LAB_180107818;
        if (uVar17 != 0x100000) goto LAB_180107b08;
        uVar5 = 0;
        do {
          if (iVar4 == (&DAT_1802299d0)[uVar5]) goto LAB_180107990;
          uVar17 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar17;
        } while (uVar17 < 8);
LAB_180107998:
        bVar2 = true;
      }
      if (!bVar2) {
        uVar11 = uVar18;
      }
      uVar12 = (ulonglong)uVar11;
      goto LAB_180107b08;
    }
LAB_180107ae0:
    if (param_6 != 0) goto LAB_180107b08;
    iVar4 = FUN_180106dc0(param_8 & 0xffffffff);
    if (iVar4 == -1) {
LAB_180107af4:
      iVar4 = FUN_180107018(param_8 & 0xffffffff);
      if (iVar4 < 1) goto LAB_180107b08;
    }
  }
  else {
    if ((param_7 - 3U & 0xfffffffd) == 0) {
      if (param_5 != 3) {
        if ((iVar13 == 0x46) || ((iVar13 == 0x14 && (1 < param_5 - 1 || param_6 != 0)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((((param_6 & 0x201) == 0x201) || ((param_6 & 0x202) == 0x202)) || (!bVar2))
        goto LAB_180107b08;
        FUN_1801073a0(*puVar14);
        auVar22 = FUN_1801073a0(*puVar21);
        iVar4 = auVar22._8_4_;
        uVar18 = (uint)extraout_x12_01;
        if (((auVar22._0_8_ & 1) == 0) || ((param_6 & 1) != 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((extraout_w10_00 == 0) && (param_7 != 3 || !bVar2)) goto LAB_180107b08;
        if ((param_6 & 3) != 0) {
          uVar5 = 0;
          do {
            if (iVar4 == (&DAT_180229850)[uVar5]) {
              if ((param_5 == 0) || (param_3 == 3 && param_5 == 2)) goto LAB_180107930;
              break;
            }
            uVar11 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar11;
          } while (uVar11 < 0x1c);
          goto LAB_180107b08;
        }
LAB_180107930:
        uVar12 = 0;
        uVar11 = 0;
        if (((param_6 >> 10 & 1) != 0) || (param_6 = param_6 & 0x3f8000, param_6 == 0x80000))
        goto LAB_180107b08;
        if (param_6 == 0x100000) {
          uVar6 = 0;
          do {
            uVar5 = extraout_x12_01;
            if (iVar4 == (&DAT_1802299d0)[uVar6]) goto LAB_180107818;
            uVar18 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar18;
          } while (uVar18 < 8);
          goto LAB_180107b08;
        }
        if (param_6 == 0x200000 || param_6 == 0x8000) goto LAB_180107b08;
        if (param_6 == 0x10000) {
          uVar5 = 0;
          do {
            if (iVar4 == (&DAT_180229a20)[uVar5]) goto LAB_180107998;
            uVar17 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar17;
          } while (uVar17 < 0x11);
        }
        else {
          if (param_6 != 0x40000) goto LAB_180107b08;
          uVar5 = 0;
          do {
            if (iVar4 == (&DAT_1802299f0)[uVar5]) goto LAB_180107998;
            uVar17 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar17;
          } while (uVar17 < 9);
        }
        goto LAB_180107990;
      }
      goto LAB_180107ae0;
    }
    if (param_7 == 6) {
      if (iVar13 == 100) {
        if ((param_5 != 3 || param_6 == 0) && ((param_5 != 1 || ((param_6 >> 9 & 1) == 0)))) {
          uVar11 = 0;
        }
        if ((param_6 & 0x3f8000) != 0) {
          uVar11 = (uint)extraout_x12_00;
        }
        uVar12 = (ulonglong)uVar11;
      }
      goto LAB_180107b08;
    }
    if (param_7 == 7) {
      if (1 < iVar13 - 0x65U) goto LAB_180107b08;
      if ((param_5 != 3 || param_6 == 0) && ((param_5 != 1 || ((param_6 >> 9 & 1) == 0)))) {
        uVar12 = 0;
      }
      if ((param_6 & 0x3f8000) == 0) goto LAB_180107b08;
      goto LAB_180107818;
    }
    if (param_7 != 1) goto LAB_180107b08;
    if (param_5 != 3) {
      uVar18 = param_6 & 2;
      lVar9 = 0x130;
      if (uVar18 != 0) {
        lVar9 = 0x140;
      }
      auVar22 = FUN_1801073a0(*(undefined8 *)(puVar7 + lVar9));
      iVar4 = auVar22._8_4_;
      pcVar16 = extraout_x10;
      uVar5 = extraout_x11;
      pcVar19 = extraout_x15_00;
      uVar17 = extraout_w12;
      if ((auVar22._0_8_ & 1) == 0) {
        if (param_5 == 2 && uVar18 == 0) {
          auVar22 = FUN_1801073a0(*puVar20);
          iVar4 = auVar22._8_4_;
          pcVar16 = extraout_x10_00;
          uVar5 = extraout_x11_00;
          pcVar19 = extraout_x15_01;
          uVar17 = extraout_w12_00;
          if ((auVar22._0_8_ & 1) != 0) goto LAB_1801076ac;
        }
      }
      else {
LAB_1801076ac:
        if ((param_6 & 1) == 0) {
LAB_1801076d8:
          if ((iVar13 != 0x14 && iVar4 != 0) || ((param_5 == 2 && (param_6 == 0)))) {
            uVar11 = 0;
          }
        }
        else {
          uVar12 = 0;
          do {
            if (iVar4 == (&DAT_180229850)[uVar12]) goto LAB_1801076d8;
            uVar18 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar18;
          } while (uVar18 < 0x1c);
        }
      }
      uVar18 = uVar11;
      if ((param_6 & 0x3f8000) != 0x80000) {
        uVar18 = uVar17;
      }
      if ((param_6 & 0x3f8000) != 0) {
        uVar11 = uVar18;
      }
      if (*piVar10 == 0x10de || *piVar10 == 0) {
        if (iVar13 == 0x434f5441) {
          if (*pcVar16 != '\0') goto LAB_180107b04;
        }
        else if ((iVar13 == 0x41415353) && (*pcVar19 != '\0')) {
          puVar14 = &DAT_18024e840 + (uVar5 & 0xffffffff) * 0x4b;
          if ((&DAT_18024e850)[(uVar5 & 0xffffffff) * 0x4b] == 0) {
            uVar8 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            iVar4 = (*extraout_x11_02)(uVar8,*(undefined4 *)((longlong)puVar14 + 0x1c));
            cVar1 = 1 < iVar4;
          }
          else {
            uVar8 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
            lVar9 = (*extraout_x11_01)(uVar8,auStack_40);
            cVar1 = *(char *)(lVar9 + 1);
          }
          uVar18 = 0;
          if (cVar1 == '\0') {
            uVar18 = uVar11;
          }
          uVar12 = (ulonglong)uVar18;
          goto LAB_180107b08;
        }
      }
      uVar12 = (ulonglong)uVar11;
      goto LAB_180107b08;
    }
    if (param_6 != 0) goto LAB_180107b08;
    iVar4 = FUN_180106dc0(param_8 & 0xffffffff);
    if (iVar4 < 1) goto LAB_180107af4;
  }
LAB_180107b04:
  uVar12 = 0;
LAB_180107b08:
  return uVar12 & 0xffffffff;
}

