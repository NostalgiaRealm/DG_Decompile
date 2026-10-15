/*
 * FUN_1800022a8 at 1800022a8
 * undefined FUN_1800022a8(void)
 * Address ranges: 1800022a8-1800028eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800022a8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                       uint param_5,uint param_6,undefined8 param_7,int param_8,byte param_9)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  int extraout_w10;
  ulonglong extraout_x10;
  int *extraout_x10_00;
  int *extraout_x10_01;
  int *piVar16;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  char *extraout_x11_01;
  char *extraout_x11_02;
  char *pcVar17;
  longlong extraout_x12;
  char *extraout_x12_00;
  char *extraout_x12_01;
  char *pcVar18;
  ulonglong extraout_x13;
  ulonglong extraout_x13_00;
  int extraout_w14;
  int extraout_w15;
  int extraout_w15_00;
  int extraout_w15_01;
  int extraout_w15_02;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 auVar22 [12];
  undefined1 auStack_30 [16];
  
  uVar11 = (uint)param_9;
  uVar13 = 0x8876086c;
  uVar6 = FUN_180002178(param_6 & 0xffc07fff,param_1,param_3);
  if (((uVar6 & 1) == 0) || (6 < extraout_w15 - 1U)) goto LAB_1800028d8;
  uVar12 = (uint)extraout_x10;
  if ((extraout_w15 - 2U & 0xfffffffd) == 0) {
    uVar6 = extraout_x10 & 0xfffffdff;
LAB_180002368:
    bVar3 = uVar6 == 0;
  }
  else if ((extraout_w15 - 3U & 0xfffffffd) == 0) {
    if ((uVar12 == 0x200 || uVar12 < 4) || (uVar12 == 0x600 || (uVar12 == 0x400 || uVar12 == 0x401))
       ) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    if ((extraout_w15 == 6) || (extraout_w15 == 7)) {
      uVar6 = extraout_x10 & 0xfffffc07;
      goto LAB_180002368;
    }
    if (extraout_w15 != 1) goto LAB_1800028d8;
    bVar3 = uVar12 < 4;
  }
  if ((!bVar3) || (3 < param_5)) goto LAB_1800028d8;
  uVar10 = 0x8876086a;
  uVar13 = (ulonglong)(((uVar11 ^ 1) & 0xff) * 2 + 0x8876086a);
  uVar6 = func_0x0001801072f0(extraout_x11 & 0xffffffff);
  if ((uVar6 & 1) == 0) goto LAB_1800028d8;
  uVar6 = (ulonglong)*(uint *)(extraout_x12 + 0x10);
  uVar4 = func_0x000180106a90(extraout_x11_00 & 0xffffffff);
  uVar7 = func_0x0001801073a0((&DAT_180248e88)[uVar6 * 0x36],uVar4);
  if ((uVar7 & 1) == 0) goto LAB_1800028d8;
  iVar5 = func_0x000180106a90(param_8);
  uVar12 = (uint)uVar10;
  uVar11 = (uint)uVar13;
  if (param_3 == 2) {
    puVar14 = &DAT_180248b80;
    puVar15 = &DAT_180248cb8;
    puVar21 = &DAT_180248cd0;
    puVar20 = &DAT_180248cc8;
    puVar19 = &DAT_180248cb8;
  }
  else {
    puVar21 = &DAT_180248e80 + uVar6 * 0x36;
    puVar20 = &DAT_180248e78 + uVar6 * 0x36;
    puVar15 = &DAT_180248e68 + uVar6 * 0x36;
    puVar14 = &DAT_180248d30 + uVar6 * 0x1b0;
    puVar19 = &DAT_180248e68 + uVar6 * 0x36;
  }
  if (extraout_w14 == 0) {
    if (param_5 != 3) {
      if (param_8 != 0x14) {
        auVar22 = func_0x0001801073a0(*puVar20);
        iVar5 = auVar22._8_4_;
        if ((auVar22._0_8_ & 0xff) != 0) {
          uVar11 = 0;
        }
        uVar13 = (ulonglong)uVar11;
      }
      uVar11 = (uint)uVar10;
      uVar12 = (uint)uVar13;
      if ((int)uVar12 < 0) goto LAB_1800028d8;
      if ((param_6 >> 10 & 1) != 0) {
        uVar13 = 0x876086f;
        goto LAB_1800028d8;
      }
      uVar1 = param_6 & 0x3f8000;
      if (uVar1 != 0x220000 && (param_6 & 0x1d8000) == 0) goto LAB_1800028d8;
      if (uVar1 == 0x8000) {
LAB_1800025e8:
        uVar13 = uVar10 & 0xffffffff;
        goto LAB_1800028d8;
      }
      if (uVar1 == 0x10000) {
        uVar6 = 0;
        do {
          if (iVar5 == (&DAT_180229a20)[uVar6]) goto LAB_180002768;
          uVar1 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar1;
        } while (uVar1 < 0x11);
LAB_180002760:
        bVar3 = false;
      }
      else {
        if (uVar1 == 0x40000) {
          uVar6 = 0;
          do {
            if (iVar5 == (&DAT_1802299f0)[uVar6]) goto LAB_180002768;
            uVar1 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar1;
          } while (uVar1 < 9);
          goto LAB_180002760;
        }
        if (uVar1 == 0x80000) goto LAB_1800025e8;
        if (uVar1 != 0x100000) goto LAB_1800028d8;
        uVar6 = 0;
        do {
          if (iVar5 == (&DAT_1802299d0)[uVar6]) goto LAB_180002760;
          uVar1 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar1;
        } while (uVar1 < 8);
LAB_180002768:
        bVar3 = true;
      }
      if (!bVar3) {
        uVar12 = uVar11;
      }
      uVar13 = (ulonglong)uVar12;
      goto LAB_1800028d8;
    }
LAB_1800028b0:
    if (param_6 != 0) goto LAB_1800028d8;
    iVar5 = func_0x000180106dc0(param_8);
    if (iVar5 == -1) {
LAB_1800028c4:
      iVar5 = func_0x000180107018(param_8);
      if (iVar5 < 1) goto LAB_1800028d8;
    }
  }
  else {
    if ((extraout_w15_00 - 3U & 0xfffffffd) == 0) {
      if (param_5 != 3) {
        if ((param_8 == 0x46) || ((param_8 == 0x14 && (1 < param_5 - 1 || param_6 != 0)))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((((param_6 & 0x201) == 0x201) || ((param_6 & 0x202) == 0x202)) || (!bVar3))
        goto LAB_1800028d8;
        func_0x0001801073a0(*puVar15);
        auVar22 = func_0x0001801073a0(*puVar21);
        iVar5 = auVar22._8_4_;
        uVar11 = (uint)uVar10;
        if (((auVar22._0_8_ & 1) == 0) || ((param_6 & 1) != 0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((extraout_w10 == 0) && (extraout_w15_02 != 3 || !bVar3)) goto LAB_1800028d8;
        if ((param_6 & 3) != 0) {
          uVar6 = 0;
          do {
            if (iVar5 == (&DAT_180229850)[uVar6]) {
              if ((param_5 == 0) || (param_3 == 3 && param_5 == 2)) goto LAB_180002700;
              break;
            }
            uVar12 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar12;
          } while (uVar12 < 0x1c);
          goto LAB_1800028d8;
        }
LAB_180002700:
        uVar13 = 0;
        uVar12 = 0;
        if (((param_6 >> 10 & 1) != 0) || (param_6 = param_6 & 0x3f8000, param_6 == 0x80000))
        goto LAB_1800028d8;
        if (param_6 == 0x100000) {
          uVar6 = 0;
          do {
            if (iVar5 == (&DAT_1802299d0)[uVar6]) goto LAB_1800025e8;
            uVar11 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar11;
          } while (uVar11 < 8);
          goto LAB_1800028d8;
        }
        if (param_6 == 0x200000 || param_6 == 0x8000) goto LAB_1800028d8;
        if (param_6 == 0x10000) {
          uVar6 = 0;
          do {
            if (iVar5 == (&DAT_180229a20)[uVar6]) goto LAB_180002768;
            uVar1 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar1;
          } while (uVar1 < 0x11);
        }
        else {
          if (param_6 != 0x40000) goto LAB_1800028d8;
          uVar6 = 0;
          do {
            if (iVar5 == (&DAT_1802299f0)[uVar6]) goto LAB_180002768;
            uVar1 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar1;
          } while (uVar1 < 9);
        }
        goto LAB_180002760;
      }
      goto LAB_1800028b0;
    }
    if (extraout_w15_00 == 6) {
      if (param_8 == 100) {
        if ((param_5 != 3 || param_6 == 0) && ((param_5 != 1 || ((param_6 >> 9 & 1) == 0)))) {
          uVar11 = 0;
        }
        if ((param_6 & 0x3f8000) != 0) {
          uVar11 = uVar12;
        }
        uVar13 = (ulonglong)uVar11;
      }
      goto LAB_1800028d8;
    }
    if (extraout_w15_00 == 7) {
      if (1 < param_8 - 0x65U) goto LAB_1800028d8;
      if ((param_5 != 3 || param_6 == 0) && ((param_5 != 1 || ((param_6 >> 9 & 1) == 0)))) {
        uVar13 = 0;
      }
      if ((param_6 & 0x3f8000) == 0) goto LAB_1800028d8;
      goto LAB_1800025e8;
    }
    if (extraout_w15_00 != 1) goto LAB_1800028d8;
    if (param_5 != 3) {
      lVar9 = 0x130;
      if ((param_6 & 2) != 0) {
        lVar9 = 0x140;
      }
      auVar22 = func_0x0001801073a0(*(undefined8 *)(puVar14 + lVar9));
      iVar5 = auVar22._8_4_;
      piVar16 = extraout_x10_00;
      pcVar17 = extraout_x11_01;
      pcVar18 = extraout_x12_00;
      uVar6 = extraout_x13;
      if ((auVar22._0_8_ & 1) == 0) {
        if (param_5 == 2 && extraout_w15_01 == 0) {
          auVar22 = func_0x0001801073a0(*puVar19);
          iVar5 = auVar22._8_4_;
          piVar16 = extraout_x10_01;
          pcVar17 = extraout_x11_02;
          pcVar18 = extraout_x12_01;
          uVar6 = extraout_x13_00;
          if ((auVar22._0_8_ & 1) != 0) goto LAB_1800024a4;
        }
      }
      else {
LAB_1800024a4:
        if ((param_6 & 1) == 0) {
LAB_1800024d0:
          if ((param_8 != 0x14 && iVar5 != 0) || ((param_5 == 2 && (param_6 == 0)))) {
            uVar11 = 0;
          }
        }
        else {
          uVar13 = 0;
          do {
            if (iVar5 == (&DAT_180229850)[uVar13]) goto LAB_1800024d0;
            uVar1 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar1;
          } while (uVar1 < 0x1c);
        }
      }
      uVar1 = uVar11;
      if ((param_6 & 0x3f8000) != 0x80000) {
        uVar1 = uVar12;
      }
      if ((param_6 & 0x3f8000) != 0) {
        uVar11 = uVar1;
      }
      if (*piVar16 == 0x10de || *piVar16 == 0) {
        if (param_8 == 0x434f5441) {
          if (*pcVar17 != '\0') goto LAB_1800028d4;
        }
        else if ((param_8 == 0x41415353) && (*pcVar18 != '\0')) {
          plVar8 = (longlong *)(&DAT_180253860)[(uVar6 & 0xffffffff) * 0x4b];
          if (plVar8 == (longlong *)0x0) {
            iVar5 = (**(code **)(*DAT_18024de58 + 0x50))
                              (DAT_18024de58,(&DAT_18025386c)[(uVar6 & 0xffffffff) * 0x96]);
            cVar2 = 1 < iVar5;
          }
          else {
            lVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,auStack_30);
            cVar2 = *(char *)(lVar9 + 1);
          }
          uVar12 = 0;
          if (cVar2 == '\0') {
            uVar12 = uVar11;
          }
          uVar13 = (ulonglong)uVar12;
          goto LAB_1800028d8;
        }
      }
      uVar13 = (ulonglong)uVar11;
      goto LAB_1800028d8;
    }
    if (param_6 != 0) goto LAB_1800028d8;
    iVar5 = func_0x000180106dc0(param_8);
    if (iVar5 < 1) goto LAB_1800028c4;
  }
LAB_1800028d4:
  uVar13 = 0;
LAB_1800028d8:
  return uVar13 & 0xffffffff;
}

