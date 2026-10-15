/*
 * FUN_10022fe0 at 10022fe0
 * undefined FUN_10022fe0(void)
 * Address ranges: 10022fe0-10024337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10022fe0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  undefined4 extraout_w1;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined1 uVar24;
  uint *puVar25;
  int iVar26;
  uint uVar27;
  byte bVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 *puVar32;
  int iVar33;
  uint extraout_w14;
  uint extraout_w14_00;
  byte bVar34;
  byte bVar35;
  int extraout_w15;
  uint extraout_w15_00;
  uint extraout_w15_01;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  uint uVar39;
  char local_50 [4];
  uint uStack_4c;
  byte abStack_48 [8];
  
  piVar15 = (int *)FUN_100013c0();
  iVar11 = extraout_w15 * -0x10;
  pcVar10 = local_50 + iVar11;
  *(undefined4 *)(&stack0xfffffffc + iVar11) = extraout_w1;
  *(undefined4 *)(&stack0x00000000 + iVar11) = param_3;
  FUN_101325d0(&stack0x00000020 + iVar11,0,0x1328);
  iVar33 = *piVar15;
  *(int **)(&stack0xffffffe8 + iVar11) = piVar15;
  puVar37 = (uint *)(piVar15 + 1);
  (&stack0x0000128e)[iVar11] = (char)iVar33;
  bVar13 = iVar33 + 0xff00U < 5;
  uVar21 = (ulonglong)bVar13;
  uVar17 = (uint)bVar13;
  (&stack0x0000128d)[iVar11] = (char)((uint)iVar33 >> 8);
  *(undefined8 *)(&stack0x00001244 + iVar11) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000123c + iVar11) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001254 + iVar11) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000124c + iVar11) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001264 + iVar11) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000125c + iVar11) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001274 + iVar11) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000126c + iVar11) = 0xffffffffffffffff;
  if (iVar33 == -0xfefc) {
    uVar22 = 1;
    puVar25 = puVar37;
LAB_10023080:
    uVar27 = *puVar25 & 0xffff;
    switch(uVar27) {
    case 0:
      puVar25 = puVar25 + 1;
      goto LAB_10023080;
    case 1:
switchD_100230a0_caseD_1:
      puVar25 = puVar25 + 3;
      goto LAB_10023080;
    case 2:
    case 3:
    case 5:
    case 8:
    case 9:
switchD_100230a0_caseD_2:
      puVar25 = puVar25 + 4;
      goto LAB_10023080;
    case 4:
switchD_100230a0_caseD_4:
      puVar25 = puVar25 + 5;
      goto LAB_10023080;
    case 6:
    case 7:
switchD_100230a0_caseD_6:
      break;
    default:
      if (uVar27 < 0x57) {
        if ((uVar27 - 0x40 & 0xfffffffd) == 0) goto switchD_100230a0_caseD_1;
        if ((uVar27 - 0x12 < 0x3f) &&
           ((0x4000000000000001U >> ((ulonglong)(uVar27 - 0x12) & 0x3f) & 1) != 0))
        goto switchD_100230a0_caseD_4;
        if (uVar27 == 0x41) goto LAB_10023138;
        if (uVar27 != 0x51) goto switchD_100230a0_caseD_6;
        puVar25 = puVar25 + 6;
      }
      else if (uVar27 < 0x58) {
LAB_10023138:
        puVar25 = puVar25 + 2;
      }
      else {
        if (uVar27 < 0xfffd) {
          if (uVar27 == 0x58) goto switchD_100230a0_caseD_4;
          if (uVar27 == 0x59) goto switchD_100230a0_caseD_2;
          goto switchD_100230a0_caseD_6;
        }
        if (uVar27 < 0xfffe) {
          uVar22 = 0;
          goto switchD_100230a0_caseD_6;
        }
        if (uVar27 != 0xfffe) goto switchD_100230a0_caseD_6;
        puVar25 = puVar25 + (*puVar25 >> 0x10) + 1;
      }
      goto LAB_10023080;
    }
  }
  else {
    uVar22 = 0;
  }
  if (!bVar13) {
LAB_1002429c:
    uVar29 = (uint)(byte)(&stack0x0000128c)[iVar11];
    uVar27 = 0;
    do {
      if ((&stack0x0000004a)[uVar27 + iVar11] != '\0') {
        uVar29 = 1 << (ulonglong)(uVar27 & 0x1f) | uVar29;
        (&stack0x0000128c)[iVar11] = (char)uVar29;
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 < 8);
    uVar17 = ((&stack0x0000002a)[iVar11] & 0xf) == 0xf & uVar17;
    if (uVar17 != 0) {
      FUN_101325a0(*(undefined4 *)(&stack0xfffffffc + iVar11),&stack0x00000020 + iVar11,0x1270);
      **(int **)(&stack0x00000000 + iVar11) =
           (int)puVar37 - *(int *)(&stack0xffffffe8 + iVar11) >> 2;
    }
    return uVar17;
  }
  cVar14 = (&stack0x00001344)[iVar11];
  *pcVar10 = '\0';
  uVar27 = *(uint *)(&stack0x0000132c + iVar11);
  *(undefined4 *)(abStack_48 + iVar11 + 4) = uVar22;
  uVar29 = *(uint *)(&stack0x00001324 + iVar11);
  *(undefined4 *)(&stack0xffffffd0 + iVar11) = 0;
  iVar33 = *(int *)(&stack0x00001320 + iVar11);
  iVar26 = *(int *)(&stack0x0000131c + iVar11);
  bVar34 = (&stack0x00001318)[iVar11];
  bVar28 = (&stack0x00001316)[iVar11];
LAB_10023190:
  uVar17 = (uint)uVar21;
  if (*pcVar10 != '\0') goto LAB_1002429c;
  *(undefined8 *)(&stack0xffffffd8 + iVar11) = 0;
  uVar39 = *puVar37;
  *(uint **)(&stack0xfffffff8 + iVar11) = puVar37;
  (&uStack_4c)[extraout_w15 * -4] = 0;
  *(undefined4 *)(&stack0xffffffe0 + iVar11) = 0;
  uVar5 = uVar39 & 0xffff;
  uVar17 = uVar17 & (uVar39 >> 0x1f ^ 0xffffffff) & 1;
  uVar21 = (ulonglong)uVar17;
  uVar38 = uVar39 & 0xffff0000;
  if (0xfffc < uVar5) {
    if (uVar5 < 0xfffe) {
      iVar33 = 6;
      uVar21 = (ulonglong)
               ((((&stack0x0000128e)[iVar11] == '\x04' && *(int *)(abStack_48 + iVar11 + 4) == 0) &&
                uVar38 == 0) & uVar17);
      pbVar2 = &stack0x0000002a + iVar11;
      do {
        iVar33 = iVar33 + -1;
        *pbVar2 = *pbVar2 & 7;
        pbVar2 = pbVar2 + 1;
      } while (iVar33 != 0);
      iVar33 = *(int *)(abStack_48 + iVar11 + 4);
      bVar34 = 0;
      cVar14 = (&stack0x00001344)[iVar11];
      (&stack0x00001318)[iVar11] = 0;
      bVar28 = 0;
      uVar27 = *(uint *)(&stack0x0000132c + iVar11);
      *(undefined2 *)(&stack0x00001316 + iVar11) = 0;
      uVar29 = *(uint *)(&stack0x00001324 + iVar11);
      *(int *)(abStack_48 + iVar11 + 4) = iVar33 + 1;
      iVar26 = *(int *)(&stack0x0000131c + iVar11);
      goto LAB_10024260;
    }
    if (uVar5 == 0xfffe) {
      puVar37 = puVar37 + (uVar39 >> 0x10) + 1;
    }
    else {
      if (uVar5 != 0xffff) goto LAB_100232a8;
      if ((uVar38 == 0) && (cVar14 == '\0')) {
        uVar21 = 1;
      }
      else {
        uVar21 = 0;
      }
      *pcVar10 = '\x01';
      puVar37 = puVar37 + 1;
    }
    goto LAB_10024298;
  }
  if (uVar5 == 0) {
    if ((uVar38 == 0) && (cVar14 == '\0')) {
      uVar21 = 1;
    }
    else {
      uVar21 = 0;
    }
LAB_10024260:
    puVar37 = puVar37 + 1;
    goto LAB_10024264;
  }
  if (uVar5 == 0x51) {
    uVar5 = puVar37[1];
    uVar17 = uVar17 & uVar5 >> 0x1f & (uint)(bVar28 == 0 && uVar38 == 0);
    if (uVar17 == 0) {
      uVar21 = 0;
    }
    else {
      uVar38 = uVar5 & 0x7ff;
      if (7 < uVar38) {
        uVar17 = 0;
      }
      uVar39 = (uint)((uVar5 & 0xf0000) == 0xf0000 || (uVar5 & 0xf0000) == 0);
      if ((uVar5 & 0xf00000) != 0) {
        uVar39 = 0;
      }
      uVar17 = (uVar5 & 0x1800 | uVar5 >> 0x14 & 0x700) == 0x200 & uVar39 & uVar17;
      uVar21 = (ulonglong)uVar17;
      if (uVar17 != 0) {
        (&stack0x00000351)[uVar38 + iVar11] = 1;
        *(uint *)(&stack0x00000434 + uVar38 * 0x10 + iVar11) = puVar37[2];
        puVar25 = puVar37 + 4;
        *(uint *)(&stack0x00000438 + uVar38 * 0x10 + iVar11) = puVar37[3];
        puVar3 = puVar37 + 5;
        puVar37 = puVar37 + 6;
        *(uint *)(&stack0x0000043c + uVar38 * 0x10 + iVar11) = *puVar25;
        *(uint *)(&stack0x00000440 + uVar38 * 0x10 + iVar11) = *puVar3;
        cVar14 = (&stack0x00001344)[iVar11];
        uVar27 = *(uint *)(&stack0x0000132c + iVar11);
        uVar29 = *(uint *)(&stack0x00001324 + iVar11);
        bVar34 = (&stack0x00001318)[iVar11];
        bVar28 = (&stack0x00001316)[iVar11];
        iVar26 = *(int *)(&stack0x0000131c + iVar11);
      }
    }
    goto LAB_10024264;
  }
LAB_100232a8:
  cVar6 = *(char *)(uVar5 + 0x10160b50);
  if (cVar6 == -1) {
    uVar21 = 0;
    goto LAB_10024134;
  }
  uVar39 = puVar37[1];
  *(undefined4 *)(&stack0xfffffff0 + iVar11) = 0x8040201;
  (&stack0xfffffff4)[iVar11] = 0x10;
  iVar16 = (int)cVar6;
  iVar19 = iVar16 * 7;
  bVar35 = (&stack0x0000128e)[iVar11];
  uVar30 = (uint)bVar35;
  iVar1 = iVar16 * 0x1c;
  uVar17 = (uint)(((&stack0xfffffff0)[(uint)bVar35 + iVar11] & (&DAT_10160bb4)[iVar1]) != 0 &&
                 cVar6 != -1);
  uVar31 = (uint)bVar35;
  if (uVar38 == 0) {
    bVar18 = (&stack0x00001317)[iVar11];
    iVar4 = uVar31 + (uint)bVar35 * 2;
    if ((&DAT_10160bb0)[iVar16 * 0x1c] == '\0') {
      if ((&DAT_10160bb1)[iVar1] != '\0') {
        bVar12 = bVar34 <= *(byte *)(iVar4 + 0x10160f19);
        bVar13 = *(byte *)(iVar4 + 0x10160f19) == bVar34;
        goto LAB_1002336c;
      }
    }
    else {
      bVar12 = bVar18 <= *(byte *)(iVar4 + 0x10160f18);
      bVar13 = *(byte *)(iVar4 + 0x10160f18) == bVar18;
LAB_1002336c:
      if (!bVar12 || bVar13) {
        uVar17 = 0;
      }
    }
    if (*(byte *)(iVar4 + 0x10160f1a) <= bVar28) {
      uVar17 = 0;
    }
    if ((&DAT_10160bb0)[iVar16 * 0x1c] == '\0') {
      if ((&DAT_10160bb1)[iVar1] != '\0') {
        (&stack0x00001318)[iVar11] = bVar34 + 1;
        uVar17 = bVar18 == 0 & uVar17;
        *(int *)(&stack0x00001238 + iVar11) = *(int *)(&stack0x00001238 + iVar11) + 1;
      }
    }
    else {
      bVar18 = bVar18 + 1;
      (&stack0x00001317)[iVar11] = bVar18;
    }
    bVar28 = bVar28 + 1;
    (&stack0x00001316)[iVar11] = bVar28;
  }
  else {
    bVar18 = (&stack0x00001317)[iVar11];
  }
  *(undefined8 *)(&stack0x00000008 + iVar11) = 0x18020104;
  uVar9 = (uVar39 & 0x1800 | uVar39 >> 0x14 & 0x7ff) >> 8;
  uVar36 = uVar39 & 0x7ff;
  uVar23 = 0;
  uVar20 = (uint)((uVar39 & 0xe00000) == 0);
  if (*(byte *)(uVar9 * 5 + uVar31 + 0x10160f30) <= uVar36) {
    uVar20 = 0;
  }
  switch(uVar39 >> 0x18 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar20 = uVar20 & uVar17;
    uVar21 = (ulonglong)(byte)uVar20;
    if (uVar20 != 0) {
      (&stack0xffffffd9)[iVar11] = (char)uVar36;
      bVar34 = (&stack0x00000008)[uVar9 + iVar11];
      uVar23 = (uint)bVar34;
      (&stack0xffffffd8)[iVar11] = bVar34;
      if (bVar34 == 0x18) {
        if (((&stack0x00000052)[uVar36 + iVar11] == '\0') &&
           ((&DAT_10160bb0)[iVar16 * 0x1c] == '\0')) {
          uVar23 = 0x10;
        }
        else {
          uVar23 = 8;
        }
      }
      if ((*(byte *)(uVar31 + iVar16 * 0x1c + 0x10160bb5) & uVar23) == 0) {
        uVar20 = 0;
      }
      uVar21 = (ulonglong)uVar20;
    }
    break;
  default:
    uVar21 = 0;
  }
  uVar17 = uVar39 & 0xf0000;
  if (uVar31 != 4) {
    uVar21 = (ulonglong)
             ((uint)(((uVar17 == 0x80000 || uVar17 == 0x70000) || uVar17 == 0xf0000) || uVar17 == 0)
             & (uint)uVar21);
  }
  if ((&DAT_10160bb1)[iVar1] != '\0' && uVar23 == 0x10) {
    uVar20 = (uint)uVar21;
    if (uVar17 != 0xf0000) {
      uVar20 = 0;
    }
    uVar21 = (ulonglong)uVar20;
  }
  if (uVar17 == 0) {
    uVar17 = 0xf0000;
  }
  iVar1 = uVar31 + iVar16 * 0x1c + *(int *)(abStack_48 + iVar11 + 4);
  bVar34 = (byte)(uVar17 >> 0x10);
  (&stack0xffffffda)[iVar11] = bVar34;
  abStack_48[iVar11] = *(byte *)(iVar1 + 0x10160bba);
  abStack_48[iVar11 + 1] = *(byte *)(iVar1 + 0x10160bc0);
  abStack_48[iVar11 + 2] = *(byte *)(iVar1 + 0x10160bc6);
  if ((int)uVar21 != 0) {
    *(int *)(&stack0xffffffc8 + iVar11) = iVar19;
    *(uint *)(&stack0xffffffcc + iVar11) = uVar23;
    (&uStack_4c)[extraout_w15 * -4] = uVar17;
    iVar16 = iVar16 * 0x1c;
    *(uint *)(&stack0xffffffc0 + iVar11) = uVar38;
    *(uint *)(&stack0xffffffc4 + iVar11) = uVar39;
    uVar27 = 0;
    do {
      if ((2 < uVar27) || (bVar28 = abStack_48[uVar27 + iVar11], bVar28 == 0)) break;
      uVar20 = 0;
      uVar39 = puVar37[uVar27 + 2];
      uVar31 = (uVar39 & 0x1800 | uVar39 >> 0x14 & 0x7ff) >> 8;
      uVar29 = uVar39 & 0x7ff;
      uVar38 = uVar39 >> 0x1f;
      if (*(byte *)(uVar31 * 5 + uVar30 + 0x10160f30) <= uVar29) {
        uVar38 = 0;
      }
      uVar38 = uVar38 & (uint)uVar21;
      if (uVar38 == 0) {
        uVar38 = 0;
        goto LAB_1002386c;
      }
      iVar33 = uVar27 * 3;
      bVar35 = (&stack0x00000008)[uVar31 + iVar11];
      (&stack0xffffffdb)[iVar33 + iVar11] = bVar35;
      (&stack0xffffffdc)[iVar33 + iVar11] = (char)uVar29;
      if ((bVar35 == 0x18) && (bVar35 = 8, (&stack0x00000052)[uVar29 + iVar11] == '\0')) {
        bVar35 = 0x10;
      }
      if ((bVar28 & bVar35) == 0) {
        uVar38 = 0;
      }
      uVar31 = uVar39 & 0xff0000;
      if (uVar5 == 0x42) {
        if (uVar30 == 4) {
          if ((uVar31 == 0xe40000) || (uVar31 == 0xa40000)) {
            bVar13 = (uVar39 & 0xf000000) == 0x9000000;
          }
          else {
LAB_100236b4:
            if (uVar31 != 0xf40000) {
              uVar38 = 0;
              uVar20 = uVar38;
              goto LAB_10023744;
            }
            bVar13 = (uVar39 & 0xf000000) == 0xa000000;
          }
          uVar38 = uVar38 & (bVar13 || (uVar39 & 0xf000000) == 0);
          uVar20 = uVar38;
        }
        else {
LAB_100236f0:
          if ((((uVar31 == 0xff0000 || uVar31 == 0xe40000) ||
               ((uVar31 == 0xaa0000 && (uVar30 != 0)))) || ((uVar31 == 0x550000 && (uVar30 == 4))))
             || ((uVar31 == 0 && (uVar30 == 4)))) {
            uVar20 = 1;
          }
          else {
            uVar20 = 0;
          }
          uVar38 = uVar38 & uVar20;
          uVar20 = 0;
        }
      }
      else {
        if ((uVar5 != 0x40) || (uVar30 != 4)) goto LAB_100236f0;
        if ((uVar31 - 0xa40000 & 0xffbfffff) != 0) goto LAB_100236b4;
        uVar38 = (uVar39 & 0xf000000) == 0 & uVar38;
        uVar20 = uVar38;
      }
LAB_10023744:
      uVar23 = (uint)(byte)(&DAT_10160bb3)[iVar16];
      if ((&DAT_10160bb2)[iVar16] != '\0') {
        uVar23 = (uint)(byte)(&DAT_10160bb3)[iVar16] & uVar17 >> 0x10;
      }
      uVar9 = 1 << (ulonglong)(uVar31 >> 0x14 & 3);
      if ((uVar23 & 4) == 0) {
        uVar9 = 0;
      }
      uVar7 = 1 << (ulonglong)(uVar31 >> 0x12 & 3);
      if ((uVar23 & 2) == 0) {
        uVar7 = 0;
      }
      uVar8 = 1 << (ulonglong)(uVar31 >> 0x10 & 3);
      if ((uVar23 & 1) == 0) {
        uVar8 = 0;
      }
      uVar31 = 1 << (ulonglong)(uVar31 >> 0x16);
      if ((uVar23 & 8) == 0) {
        uVar31 = 0;
      }
      uVar31 = uVar9 | uVar7 | uVar8 | uVar31;
      bVar28 = (byte)uVar31;
      uVar23 = 0;
      switch(bVar35) {
      case 1:
        puVar32 = &stack0x00000020 + iVar11;
        break;
      case 2:
        puVar32 = &stack0x00000058 + iVar11;
        break;
      default:
        goto switchD_100237e0_caseD_3;
      case 4:
        puVar32 = &stack0x0000002a;
        goto LAB_10023840;
      case 8:
        puVar32 = &stack0x00000052;
        if ((&stack0x00001290)[uVar29 + iVar11] != '\0') {
          uVar38 = 0;
        }
LAB_10023840:
        uVar23 = (uint)(byte)puVar32[uVar29 + iVar11];
        goto switchD_100237e0_caseD_3;
      case 0x10:
        puVar32 = &stack0x0000004a + iVar11;
      }
      uVar23 = 0xf;
      puVar32[uVar29] = bVar28 | puVar32[uVar29];
      uVar30 = (uint)(byte)(&stack0x0000128e)[iVar11];
switchD_100237e0_caseD_3:
      uVar31 = uVar31 & 0xff;
      uVar38 = uVar31 == (uVar31 & uVar23) & uVar38;
      (&stack0xffffffdd)[iVar33 + iVar11] = bVar28;
LAB_1002386c:
      *(undefined8 *)(&stack0x00000010 + iVar11) = 0x101010101010101;
      *(undefined8 *)(&stack0x00000018 + iVar11) = 0x10101;
      if ((((uVar39 & 0xb000000) == 0) || (uVar20 != 0)) || ((&DAT_10160bb0)[iVar16] != '\0')) {
        uVar29 = 1;
      }
      else {
        uVar29 = 0;
      }
      uVar27 = uVar27 + 1;
      uVar29 = (byte)(&stack0x00000010)[((uVar39 & 0xf000000) >> 0x18) + iVar11] & uVar38 & uVar29;
      uVar21 = (ulonglong)uVar29;
    } while (uVar29 != 0);
    uVar17 = (&uStack_4c)[extraout_w15 * -4];
    uVar38 = *(uint *)(&stack0xffffffc0 + iVar11);
    uVar39 = *(uint *)(&stack0xffffffc4 + iVar11);
    iVar19 = *(int *)(&stack0xffffffc8 + iVar11);
    uVar23 = *(uint *)(&stack0xffffffcc + iVar11);
    cVar14 = (&stack0x00001344)[iVar11];
    (&uStack_4c)[extraout_w15 * -4] = *(uint *)(&stack0xffffffe0 + iVar11);
    uVar27 = *(uint *)(&stack0x0000132c + iVar11);
    uVar29 = *(uint *)(&stack0x00001324 + iVar11);
    iVar33 = *(int *)(&stack0x00001320 + iVar11);
    iVar26 = *(int *)(&stack0x0000131c + iVar11);
    bVar18 = (&stack0x00001317)[iVar11];
    bVar28 = (&stack0x00001316)[iVar11];
  }
  if (uVar23 == 4) {
    puVar32 = &stack0x0000002a;
LAB_10023950:
    puVar32[uVar36 + iVar11] = bVar34 | puVar32[uVar36 + iVar11];
    uVar30 = (uint)(byte)(&stack0x0000128e)[iVar11];
    bVar28 = (&stack0x00001316)[iVar11];
    bVar18 = (&stack0x00001317)[iVar11];
    iVar26 = *(int *)(&stack0x0000131c + iVar11);
    iVar33 = *(int *)(&stack0x00001320 + iVar11);
    uVar29 = *(uint *)(&stack0x00001324 + iVar11);
    uVar27 = *(uint *)(&stack0x0000132c + iVar11);
    cVar14 = (&stack0x00001344)[iVar11];
  }
  else if (uVar23 == 8) {
    if (((&DAT_10160bb0)[iVar19 * 4] != '\0') && ((&stack0x00001290)[uVar36 + iVar11] != '\0')) {
      (&stack0x00001290)[uVar36 + iVar11] = '\0';
      (&stack0x00000052)[uVar36 + iVar11] = 0;
    }
    puVar32 = &stack0x00000052;
    goto LAB_10023950;
  }
  if (uVar38 == 0x40000000) {
    *(int *)(&stack0x0000123c + (uint)(byte)(&stack0x00001319)[iVar11] * 4 + iVar11) =
         *(int *)(&stack0xffffffd0 + iVar11) - *(int *)(&stack0xffffffe8 + iVar11) >> 2;
    uVar27 = *(uint *)(&stack0x00001324 + iVar11) & 0xf0000;
    if (uVar27 == 0) {
      uVar27 = 0xf0000;
    }
    if (((uVar27 & 0x80000) == 0 && uVar17 == 0x80000) ||
       (uVar29 = 0, uVar27 == 0x80000 && (uVar17 & 0x80000) == 0)) {
      uVar29 = 1;
    }
    uVar21 = (ulonglong)(uVar29 & (uint)uVar21);
    uVar17 = FUN_10022f60(&stack0xffffffd8 + iVar11,&stack0x00001334 + iVar11);
    uVar27 = uVar17 & 0xff;
    if ((uVar17 & 0xff) == 0) {
      uVar27 = 0;
      uVar17 = extraout_w14;
      uVar36 = extraout_w15_00;
    }
    else {
      cVar14 = FUN_10022f60(&stack0x00001334 + iVar11,&stack0xffffffd8 + iVar11);
      uVar17 = extraout_w14_00;
      uVar36 = extraout_w15_01;
      if (cVar14 != '\0') {
        uVar27 = 2;
      }
    }
    (&stack0x0000127c)[(uint)(byte)(&stack0x00001319)[iVar11] + iVar11] =
         (byte)*(undefined4 *)(&stack0x00001340 + iVar11) | (byte)(uVar27 << 4);
    cVar14 = (&stack0x00001344)[iVar11];
    uVar27 = *(uint *)(&stack0x0000132c + iVar11);
    uVar29 = *(uint *)(&stack0x00001324 + iVar11);
    iVar33 = *(int *)(&stack0x00001320 + iVar11);
    (&stack0x00001319)[iVar11] = (&stack0x00001319)[iVar11] + '\x01';
    bVar18 = (&stack0x00001317)[iVar11];
    iVar26 = *(int *)(&stack0x0000131c + iVar11);
    bVar28 = (&stack0x00001316)[iVar11];
    uVar30 = (uint)(byte)(&stack0x0000128e)[iVar11];
  }
  uVar31 = (uint)uVar21;
  bVar34 = (byte)uVar21;
  switch(uVar5) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 8:
  case 0x12:
  case 0x58:
    goto switchD_10023ac0_caseD_1;
  case 9:
    uVar31 = uVar38 == 0 & uVar31;
    if ((uVar30 == 2) || (uVar30 == 3)) {
      (&stack0x00001317)[iVar11] = bVar18 + 1;
      if (((uVar39 & 0x70001800) == (puVar37[2] & 0x70001800)) ||
         (uVar17 = 1, (uVar39 & 0x70001800) == (puVar37[3] & 0x70001800))) {
        uVar17 = 0;
      }
      uVar31 = uVar31 & uVar17;
    }
    if (cVar14 != '\0') {
      uVar31 = 0;
    }
    uVar21 = (ulonglong)uVar31;
    break;
  case 0x40:
    if (uVar30 == 4) {
      uVar27 = puVar37[2] & 0xf000000;
      if ((uVar17 == 0x70000 && uVar27 == 0) ||
         (uVar31 = 0, uVar17 == 0x30000 && uVar27 == 0xa000000)) {
        uVar31 = 1;
      }
      bVar28 = 3;
      if (uVar27 != 0xa000000) {
        bVar28 = 7;
      }
      (&stack0x0000002a)[uVar36 + iVar11] = bVar28 & (&stack0x0000002a)[uVar36 + iVar11];
    }
    else {
      (&stack0x00000052)[uVar36 + iVar11] = 0xf;
    }
    puVar32 = &stack0x0000004a;
    uVar24 = 0xf;
    goto LAB_10023bd8;
  case 0x41:
    (&stack0x00000052)[uVar36 + iVar11] = 0xf;
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
    puVar32 = &stack0x00001290;
    uVar24 = 1;
LAB_10023bd8:
    puVar32[uVar36 + iVar11] = uVar24;
LAB_10023bdc:
    cVar14 = (&stack0x00001344)[iVar11];
    goto LAB_10023ac8;
  case 0x42:
    if ((uVar30 != 4) &&
       ((&stack0x00000052)[uVar36 + iVar11] = 0xf, (&stack0x0000128e)[iVar11] == '\0')) {
      (&stack0x00001316)[iVar11] = (&stack0x00001316)[iVar11] + -1;
    }
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
    *(uint *)(&stack0x00001234 + iVar11) =
         1 << (ulonglong)(uVar36 & 0x1f) | *(uint *)(&stack0x00001234 + iVar11);
    goto LAB_10023bdc;
  case 0x43:
  case 0x44:
    uVar31 = (puVar37[2] & 0x7ff) < uVar36 & uVar31;
    if (((uVar30 == 0) || (uVar30 == 1)) && ((puVar37[2] & 0xf000000) != 0)) {
      uVar31 = 0;
    }
    (&stack0x00000052)[uVar36 + iVar11] = 0xf;
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
    *(uint *)(&stack0x00001234 + iVar11) =
         1 << (ulonglong)(uVar36 & 0x1f) | *(uint *)(&stack0x00001234 + iVar11);
    if ((&stack0x00001344)[iVar11] != '\0') {
      uVar31 = 0;
    }
    uVar21 = (ulonglong)uVar31;
    break;
  case 0x45:
  case 0x46:
  case 0x53:
    (&stack0x00000052)[uVar36 + iVar11] = 0xf;
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
    goto LAB_10023d18;
  case 0x47:
    uVar21 = (ulonglong)
             (((puVar37[2] & 0x7ff) < uVar36 && (iVar26 - 0x47U & 0xfffffffd) != 0) & bVar34);
    goto LAB_10023d80;
  case 0x48:
    uVar21 = (ulonglong)
             ((iVar26 == 0x47 &&
              (uVar36 - 1 == (uVar29 & 0x7ff) && ((puVar37[2] ^ uVar27) & 0x7ff) == 0)) & bVar34);
    goto LAB_10023de4;
  case 0x49:
    if (iVar26 == 0x47) {
LAB_10023e84:
      uVar21 = 0;
    }
    else {
      if (iVar26 == 0x49) {
        if ((iVar33 - 0x47U & 0xfffffffd) == 0) goto LAB_10023e84;
        bVar13 = uVar36 - 1 == (uVar29 & 0x7ff) && ((puVar37[2] ^ uVar27) & 0x7ff) == 0;
      }
      else {
        bVar13 = (puVar37[2] & 0x7ff) < uVar36;
      }
      uVar21 = (ulonglong)(bVar13 & uVar31);
    }
LAB_10023d80:
    (&stack0x00000052)[uVar36 + iVar11] = 0xf;
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
    (&stack0x00001344)[iVar11] = 1;
    break;
  case 0x4a:
  case 0x4c:
  case 0x4d:
    if ((iVar26 != 0x49) || (uVar17 = 1, iVar33 != 0x49)) {
      uVar17 = 0;
    }
    if (uVar36 - 1 != (uVar29 & 0x7ff)) {
      uVar17 = 0;
    }
    uVar21 = (ulonglong)(uVar17 & ((puVar37[2] ^ uVar27) & 0x7ff) == 0 & uVar31);
LAB_10023de4:
    (&stack0x00000052)[uVar36 + iVar11] = 0xf;
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
    *(uint *)(&stack0x00001234 + iVar11) =
         1 << (ulonglong)(uVar36 & 0x1f) | *(uint *)(&stack0x00001234 + iVar11);
    goto LAB_10023e14;
  case 0x50:
    if (uVar30 != 4) {
      if (((puVar37[2] & 0x7ff) != 0) || (uVar17 = 1, (puVar37[2] & 0xff0000) != 0xff0000)) {
        uVar17 = 0;
      }
      uVar31 = uVar17 & uVar31;
    }
    goto switchD_10023ac0_caseD_1;
  case 0x52:
    (&stack0x00000052)[uVar36 + iVar11] = (&stack0x00000052)[uVar36 + iVar11] | 7;
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
LAB_10023d18:
    *(uint *)(&stack0x00001234 + iVar11) =
         1 << (ulonglong)(uVar36 & 0x1f) | *(uint *)(&stack0x00001234 + iVar11);
LAB_10023d2c:
    bVar13 = (puVar37[2] & 0x7ff) < uVar36 && (&stack0x00001344)[iVar11] == '\0';
    goto LAB_10023acc;
  case 0x54:
    uVar21 = (ulonglong)
             ((iVar26 == 0x47 &&
              (uVar36 - 1 == (uVar29 & 0x7ff) && ((puVar37[2] ^ uVar27) & 0x7ff) == 0)) & bVar34);
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
    (&stack0x00001290)[uVar36 + iVar11] = 1;
    (&stack0x00000350)[iVar11] = 1;
    goto LAB_10023e14;
  case 0x55:
    (&stack0x00000052)[uVar36 + iVar11] = 0xf;
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
    goto LAB_10023d2c;
  case 0x56:
    if ((iVar26 != 0x49) || (uVar17 = 1, iVar33 != 0x49)) {
      uVar17 = 0;
    }
    if (uVar36 - 1 != (uVar29 & 0x7ff)) {
      uVar17 = 0;
    }
    uVar21 = (ulonglong)(uVar17 & ((puVar37[2] ^ uVar27) & 0x7ff) == 0 & uVar31);
    (&stack0x00000052)[uVar36 + iVar11] = 0xf;
    (&stack0x0000004a)[uVar36 + iVar11] = 0xf;
LAB_10023e14:
    (&stack0x00001344)[iVar11] = 0;
    break;
  case 0x57:
    uVar21 = (ulonglong)((uVar36 == 5 && cVar14 == '\0') & uVar31);
    (&stack0x00000350)[iVar11] = 1;
    break;
  case 0x59:
    (&stack0x00001317)[iVar11] = bVar18 + 1;
    (&stack0x00001316)[iVar11] = bVar28 + 1;
    cVar6 = (&stack0x000012ef)[iVar11];
    (&stack0x000012ef)[iVar11] = cVar6 + '\x01';
    uVar21 = (ulonglong)((cVar14 == '\0' && (cVar6 == '\0' && uVar17 == 0x30000)) & bVar34);
  }
switchD_10023ac0_caseD_6:
  *(uint **)(&stack0xffffffd0 + iVar11) = puVar37;
  uVar17 = 0;
  do {
    if (abStack_48[uVar17 + iVar11] == 0) break;
    uVar17 = uVar17 + 1;
    puVar37 = puVar37 + 1;
  } while (uVar17 < 3);
  puVar37 = puVar37 + 2;
  *(int *)(&stack0x00001340 + iVar11) = (int)puVar37 - *(int *)(&stack0xffffffd0 + iVar11) >> 2;
  *(undefined8 *)(&stack0x00001334 + iVar11) = *(undefined8 *)(&stack0xffffffd8 + iVar11);
  *(uint *)(&stack0x0000133c + iVar11) = (&uStack_4c)[extraout_w15 * -4];
  if ((int)uVar21 != 0) {
    (&stack0x00001296)[uVar5 + iVar11] = (&stack0x00001296)[uVar5 + iVar11] + '\x01';
  }
  cVar14 = (&stack0x00001344)[iVar11];
  uVar27 = *(uint *)(&stack0x0000132c + iVar11);
  uVar29 = *(uint *)(&stack0x00001324 + iVar11);
  iVar33 = *(int *)(&stack0x00001320 + iVar11);
  iVar26 = *(int *)(&stack0x0000131c + iVar11);
  bVar34 = (&stack0x00001318)[iVar11];
  bVar28 = (&stack0x00001316)[iVar11];
LAB_10024134:
  if (1 < uVar5 - 0xfffe) {
LAB_10024264:
    iVar33 = iVar26;
    *(uint *)(&stack0x00001330 + iVar11) = uVar27;
    piVar15 = *(int **)(&stack0xfffffff8 + iVar11);
    *(uint *)(&stack0x00001328 + iVar11) = uVar29;
    *(int *)(&stack0x00001320 + iVar11) = iVar33;
    iVar26 = *piVar15;
    uVar29 = piVar15[1];
    uVar27 = piVar15[2];
    *(int *)(&stack0x0000131c + iVar11) = iVar26;
    *(uint *)(&stack0x00001324 + iVar11) = uVar29;
    *(uint *)(&stack0x0000132c + iVar11) = uVar27;
  }
LAB_10024298:
  uVar17 = 0;
  if ((int)uVar21 == 0) goto LAB_1002429c;
  goto LAB_10023190;
switchD_10023ac0_caseD_1:
LAB_10023ac8:
  bVar13 = cVar14 == '\0';
LAB_10023acc:
  uVar21 = (ulonglong)(bVar13 & uVar31);
  goto switchD_10023ac0_caseD_6;
}

