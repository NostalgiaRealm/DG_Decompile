/*
 * FUN_1801d5cb8 at 1801d5cb8
 * undefined FUN_1801d5cb8(void)
 * Address ranges: 1801d5cb8-1801d6787;1801d67dc-1801d684b;1801d6868-1801d69b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801d5cb8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  uint uVar17;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint *puVar24;
  longlong lVar25;
  undefined2 uVar26;
  uint uVar27;
  longlong extraout_x15;
  ulonglong uVar28;
  longlong lVar29;
  undefined4 uVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  uint *puVar18;
  
  auVar41 = FUN_180104f10();
  puVar18 = auVar41._8_8_;
  lVar25 = auVar41._0_8_;
  lVar6 = extraout_x15 * -0x10;
  *(longlong *)(&stack0x00000098 + lVar6) = param_3;
  *(undefined4 *)(&stack0xffffffffffffffd8 + lVar6) = 0x8876086c;
  if ((puVar18 == (uint *)0x0) || (param_3 == 0)) goto LAB_1801d6998;
  if (((*(uint *)(lVar25 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    uVar30 = 0;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
LAB_1801d5d2c:
    *(undefined4 *)(&stack0xffffffffffffffd4 + lVar6) = uVar30;
  }
  else {
    uVar30 = 1;
    iVar12 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar12 != 0) goto LAB_1801d5d2c;
    FUN_1801085c8();
    *(undefined4 *)(&stack0xffffffffffffffd4 + lVar6) = 1;
  }
  uVar31 = *puVar18;
  if ((uVar31 + 0x1ff00 < 2) || (uVar31 + 0x1fe00 < 2 || uVar31 == 0xfffe0300)) {
    FUN_180222c50(&stack0x00000928 + lVar6,0,0x4a70);
    lVar22 = *(longlong *)(lVar25 + 0x60);
    *(undefined4 *)(&stack0xffffffffffffffb0 + lVar6) = 0;
    uVar34 = *(uint *)(lVar22 + 0xc4);
    if (uVar34 < uVar31) {
      uVar30 = 0x7fffffff;
    }
    else {
      uVar30 = *(undefined4 *)(lVar22 + 0x128);
    }
    if ((uVar31 & 0xff00) == 0x100) {
      uVar26 = *(undefined2 *)(lVar25 + -0x59bc);
      *(undefined8 *)(&stack0x0000008c + lVar6) = 0x8000800020002;
      *(undefined8 *)(&stack0x00000084 + lVar6) = 0x3000300010000;
      *(undefined8 *)(&stack0x00000078 + lVar6) = 0x100010000c000c;
      bVar9 = uVar31 + 0x1ff00 < 2;
      uVar21 = (uint)bVar9;
      *(undefined2 *)(&stack0x00000080 + lVar6) = uVar26;
      bVar8 = uVar31 != 0xfffe0100;
      *(undefined2 *)(&stack0x00000082 + lVar6) = uVar26;
      *(undefined8 *)(&stack0x00000038 + lVar6) = 0;
      *(undefined8 *)(&stack0x00000030 + lVar6) = 0;
      *(undefined8 *)(&stack0x00000040 + lVar6) = 0;
      uVar27 = 0;
      puVar24 = puVar18 + 1;
      iVar12 = 0;
      (&stack0x00005395)[lVar6] = (char)uVar31;
      (&stack0x00005394)[lVar6] = 1;
      if (bVar9) {
        *(undefined4 *)(&stack0xffffffffffffffe8 + lVar6) = 0;
        *(undefined4 *)(&stack0xffffffffffffffd0 + lVar6) = 0;
        *(uint *)(&stack0xffffffffffffffb8 + lVar6) = uVar34;
        *(uint *)(&stack0xffffffffffffffc8 + lVar6) = uVar31;
        *(undefined1 **)(&stack0x00000068 + lVar6) = &stack0x00004928 + lVar6;
        *(uint **)(&stack0x00000070 + lVar6) = puVar18;
        *(longlong *)(&stack0xffffffffffffffc0 + lVar6) = lVar25;
LAB_1801d5e94:
        if (iVar12 != 0) goto LAB_1801d6520;
        *(undefined8 *)(&stack0x00000038 + lVar6) = 0x100000000;
        uVar27 = *puVar24;
        *(undefined2 *)(&stack0x00000040 + lVar6) = 0xf0f;
        bVar9 = true;
        uVar31 = uVar27 & 0xffff;
        uVar34 = uVar27 & 0xffff0000;
        *(int *)(*(longlong *)(&stack0x00000068 + lVar6) + 0xa68) =
             *(int *)(*(longlong *)(&stack0x00000068 + lVar6) + 0xa68) + 1;
        switch(uVar31) {
        case 0:
          puVar24 = puVar24 + 1;
LAB_1801d5f98:
          uVar27 = 1;
          goto LAB_1801d6518;
        case 1:
          goto switchD_1801d5ee0_caseD_1;
        case 2:
        case 5:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
          goto switchD_1801d5ee0_caseD_2;
        case 3:
        case 0x12:
switchD_1801d5ee0_caseD_3:
          uVar27 = *(uint *)(&stack0x00000038 + lVar6);
          uVar21 = 0;
          break;
        case 4:
          uVar27 = 3;
          break;
        case 6:
        case 7:
        case 0xe:
        case 0xf:
switchD_1801d5ee0_caseD_6:
          *(undefined2 *)(&stack0x00000041 + lVar6) = 8;
          goto LAB_1801d60c0;
        case 8:
          uVar26 = 7;
          goto LAB_1801d5ef8;
        case 9:
          goto switchD_1801d5ee0_caseD_9;
        case 0x10:
          *(undefined2 *)(&stack0x00000041 + lVar6) = 0xb;
LAB_1801d60c0:
          bVar9 = false;
switchD_1801d5ee0_caseD_1:
          uVar27 = 1;
          break;
        case 0x11:
          uVar26 = 0xe;
LAB_1801d5ef8:
          *(undefined2 *)(&stack0x00000041 + lVar6) = uVar26;
          bVar9 = false;
          uVar27 = 2;
          break;
        case 0x13:
          *(undefined2 *)(&stack0x00000040 + lVar6) = 0x303;
          bVar10 = 3;
          uVar27 = 1;
          goto LAB_1801d60cc;
        case 0x14:
          *(undefined8 *)(&stack0x00000038 + lVar6) = 0x400000002;
          bVar9 = false;
          goto switchD_1801d5ee0_caseD_2;
        case 0x15:
          goto LAB_1801d5f44;
        case 0x16:
          *(undefined2 *)(&stack0x00000041 + lVar6) = 7;
          *(undefined8 *)(&stack0x00000038 + lVar6) = 0x400000002;
          goto switchD_1801d5ee0_caseD_9;
        case 0x17:
          *(undefined2 *)(&stack0x00000040 + lVar6) = 0x707;
LAB_1801d5f44:
          bVar10 = 7;
          uVar16 = 0x300000002;
LAB_1801d5f48:
          *(undefined8 *)(&stack0x00000038 + lVar6) = uVar16;
          bVar9 = false;
          uVar27 = 2;
          goto LAB_1801d60cc;
        case 0x18:
          *(undefined2 *)(&stack0x00000040 + lVar6) = 0x703;
          bVar10 = 3;
          uVar16 = 0x200000002;
          goto LAB_1801d5f48;
        default:
          if (uVar31 == 0x1f) {
            if ((((((uVar34 == 0) && (uVar31 = puVar24[2], (int)uVar31 < 0)) &&
                  ((uVar31 & 0x70000000) == 0x10000000)) &&
                 (((uVar31 & 0xf000000) == 0 && ((uVar31 & 0xf0000) == 0xf0000)))) &&
                ((uVar31 & 0xf00000) == 0)) &&
               ((((uVar31 & 0x7ff) <
                  (uint)*(ushort *)
                         (&stack0x00000078 +
                         (ulonglong)((uint)bVar8 | (uVar31 >> 0x1c & 7) << 1) * 2 + lVar6) &&
                 (uVar34 = puVar24[1], (uVar34 & 0xfff0fff0) == 0x80000000)) &&
                ((uVar34 & 0xf) < 0xe)))) {
              (&stack0x00000928)[(ulonglong)(uVar31 & 0x7ff) + lVar6] =
                   (byte)((uVar34 & 0xf) << 4) | (byte)(uVar34 >> 0x10) & 0xf;
              uVar27 = 1;
              *(uint *)(&stack0xffffffffffffffd0 + lVar6) =
                   1 << (ulonglong)(uVar31 & 0x1f) | *(uint *)(&stack0xffffffffffffffd0 + lVar6);
            }
            else {
              uVar27 = 0;
            }
            puVar24 = puVar24 + 3;
          }
          else {
            if ((uVar31 == 0x4e) || (uVar31 == 0x4f)) goto switchD_1801d5ee0_caseD_6;
            if (uVar31 == 0x51) {
              if (((((uVar34 == 0) && (uVar31 = puVar24[1], (int)uVar31 < 0)) &&
                   ((uVar31 & 0x70000000) == 0x20000000)) &&
                  (((uVar31 & 0xf000000) == 0 && ((uVar31 & 0xf0000) == 0xf0000)))) &&
                 (((uVar31 & 0xf00000) == 0 &&
                  (uVar34 = uVar31 & 0x7ff,
                  uVar34 < *(ushort *)
                            (&stack0x00000078 +
                            (ulonglong)((uint)bVar8 | (uVar31 >> 0x1c & 7) << 1) * 2 + lVar6))))) {
                uVar37 = puVar24[2];
                uVar38 = puVar24[3];
                uVar39 = puVar24[4];
                uVar40 = puVar24[5];
                uVar31 = uVar34 * 4;
                (&stack0x00000d77)[(ulonglong)uVar34 + lVar6] = 1;
                uVar27 = 1;
                *(uint *)(&stack0x00001178 + (ulonglong)uVar31 * 4 + lVar6) = uVar37;
                *(uint *)(&stack0x00001178 + (ulonglong)(uVar31 + 1) * 4 + lVar6) = uVar38;
                *(uint *)(&stack0x00001178 + (ulonglong)(uVar31 + 2) * 4 + lVar6) = uVar39;
                *(uint *)(&stack0x00001178 + (ulonglong)(uVar31 + 3) * 4 + lVar6) = uVar40;
              }
              else {
                uVar27 = 0;
              }
              puVar24 = puVar24 + 6;
            }
            else {
              if (uVar31 == 0xfffe) {
                puVar24 = puVar24 + ((uVar27 >> 0x10) + 1);
                goto LAB_1801d5f98;
              }
              if (uVar31 != 0xffff) goto switchD_1801d5ee0_caseD_3;
              uVar27 = (uint)(uVar34 == 0);
              uVar21 = (uint)(uVar34 == 0);
              puVar24 = puVar24 + 1;
              iVar12 = 1;
            }
          }
LAB_1801d6518:
          uVar21 = uVar21 & uVar27;
          goto LAB_1801d651c;
        }
LAB_1801d60c8:
        bVar10 = (&stack0x00000040)[lVar6];
LAB_1801d60cc:
        uVar2 = puVar24[1];
        uVar33 = (uint)(uVar34 == 0);
        iVar3 = *(int *)(&stack0xffffffffffffffe8 + lVar6);
        uVar39 = uVar2 & 0x1800 | uVar2 >> 0x14 & 0x700;
        uVar40 = uVar39 >> 8;
        *(uint *)(&stack0xffffffffffffffe8 + lVar6) = iVar3 + 1U;
        uVar37 = uVar2 & 0x7ff;
        uVar38 = uVar2 >> 0x10 & 0xf;
        if ((uVar34 == 0) && (iVar3 + 1U < 0x81 && (int)uVar2 < 0)) {
          if ((uVar39 < 0x100) || (bVar7 = false, uVar40 - 3 < 4)) {
            bVar7 = true;
          }
          uVar34 = uVar2 & 0xf0000;
          if ((uVar34 == 0) || (bVar11 = 1, uVar34 != 0x10000 && uVar40 == 3)) {
            bVar11 = 0;
          }
          if ((uVar31 != 0x13) || (bVar19 = 0, (uVar34 - 0x20000 & 0xfffeffff) == 0)) {
            bVar19 = 1;
          }
          if ((((!bVar7) || (!(bool)(bVar19 & bVar11))) ||
              ((uVar2 & 0xf000000) != 0 || (uVar2 & 0xf00000) != 0)) ||
             (*(ushort *)(&stack0x00000078 + (ulonglong)((uint)bVar8 | uVar40 << 1) * 2 + lVar6) <=
              uVar37)) goto LAB_1801d61cc;
          if (0xff < uVar39) {
            uVar38 = uVar2 >> 0x10 & 0xf & (uint)bVar10;
          }
          if (bVar9) {
            uVar31 = uVar38 & (byte)(&stack0x00000041)[lVar6];
          }
          else {
            uVar31 = (uint)(byte)(&stack0x00000041)[lVar6];
          }
          uVar33 = 1;
        }
        else {
LAB_1801d61cc:
          uVar31 = (uint)(byte)(&stack0x00000041)[lVar6];
        }
        if (uVar27 != 0) {
          uVar34 = 0;
          *(uint *)(&stack0xffffffffffffffe0 + lVar6) = uVar38;
          *(uint *)(&stack0x00000050 + lVar6) = uVar37;
          *(uint *)(&stack0x00000060 + lVar6) = uVar40;
          *(undefined4 *)(&stack0x00000058 + lVar6) = *(undefined4 *)(&stack0x0000003c + lVar6);
          *(uint *)(&stack0x0000005c + lVar6) = uVar39;
          *(undefined4 *)(&stack0xffffffffffffffec + lVar6) = 0;
          *(uint *)(&stack0xfffffffffffffff0 + lVar6) = uVar21;
          do {
            if (uVar33 == 0) {
              iVar12 = *(int *)(&stack0xffffffffffffffec + lVar6);
              uVar21 = *(uint *)(&stack0xfffffffffffffff0 + lVar6);
              uVar33 = 0;
              goto LAB_1801d6460;
            }
            uVar21 = puVar24[uVar34 + 2];
            uVar33 = 0;
            if ((int)uVar21 < 0) {
              uVar37 = uVar21 & 0x1800 | uVar21 >> 0x14 & 0x700;
              uVar38 = uVar37 >> 8;
              if ((uVar37 < 0x100) || (uVar38 - 1 < 3)) {
                bVar10 = 1;
                if (uVar38 != 2) goto LAB_1801d6244;
LAB_1801d6250:
                bVar9 = true;
              }
              else {
                bVar10 = 0;
LAB_1801d6244:
                if ((uVar21 >> 0xd & 1) == 0) goto LAB_1801d6250;
                bVar9 = false;
              }
              uVar39 = uVar21 & 0xff0000;
              uVar40 = 1 << (ulonglong)(uVar39 >> 0x14 & 3);
              if ((uVar31 & 4) == 0) {
                uVar40 = 0;
              }
              uVar2 = 1 << (ulonglong)(uVar39 >> 0x12 & 3);
              if ((uVar31 & 2) == 0) {
                uVar2 = 0;
              }
              uVar17 = 1 << (ulonglong)(uVar39 >> 0x10 & 3);
              if ((uVar31 & 1) == 0) {
                uVar17 = 0;
              }
              uVar4 = 1 << (ulonglong)(uVar39 >> 0x16);
              if ((uVar31 & 8) == 0) {
                uVar4 = 0;
              }
              if ((((bool)((uVar38 != 3 || uVar39 == 0) & bVar10)) && (bVar9)) &&
                 (((uVar21 & 0xe000000) == 0 &&
                  (uVar39 = uVar21 & 0x7ff,
                  uVar39 < *(ushort *)
                            (&stack0x00000078 + (ulonglong)((uint)bVar8 | uVar38 << 1) * 2 + lVar6))
                  ))) {
                uVar4 = uVar40 | uVar2 | uVar17 | uVar4;
                uVar40 = 0xff;
                uVar17 = uVar4 & 0xff;
                uVar2 = 1;
                if ((uVar34 != uVar27 - 1) ||
                   (uVar2 = *(uint *)(&stack0x00000058 + lVar6), uVar2 != 0)) {
                  uVar20 = 0;
                  do {
                    if (uVar37 < 0x100) {
                      bVar10 = (&stack0x00000948)[(ulonglong)(uVar20 + uVar39) + lVar6];
LAB_1801d6380:
                      uVar40 = bVar10 & uVar40;
                    }
                    else {
                      bVar10 = (byte)uVar4;
                      if (uVar38 == 1) {
                        lVar25 = (ulonglong)(uVar20 + uVar39) + lVar6;
                        uVar40 = uVar40 & 0xf;
                        (&stack0x00000938)[lVar25] = (&stack0x00000938)[lVar25] | bVar10;
                      }
                      else if (uVar38 == 2) {
                        lVar25 = (ulonglong)(uVar20 + uVar39) + lVar6;
                        uVar40 = uVar40 & 0xf;
                        (&stack0x00000969)[lVar25] = (&stack0x00000969)[lVar25] | bVar10;
                      }
                      else if (uVar38 == 3) {
                        bVar10 = (&stack0x00000968)[(ulonglong)(uVar20 + uVar39) + lVar6];
                        goto LAB_1801d6380;
                      }
                    }
                    uVar20 = uVar20 + 1;
                  } while (uVar20 < uVar2);
                }
                if (uVar17 == (uVar17 & uVar40)) {
                  if ((uVar21 >> 0xd & 1) != 0) {
                    (&stack0x00000d76)[lVar6] = 1;
                  }
                  uVar33 = 1;
                }
              }
            }
            uVar34 = uVar34 + 1;
          } while (uVar34 < uVar27);
          iVar12 = *(int *)(&stack0xffffffffffffffec + lVar6);
          uVar21 = *(uint *)(&stack0xfffffffffffffff0 + lVar6);
          uVar39 = *(uint *)(&stack0x0000005c + lVar6);
          uVar40 = *(uint *)(&stack0x00000060 + lVar6);
          uVar37 = *(uint *)(&stack0x00000050 + lVar6);
          uVar38 = *(uint *)(&stack0xffffffffffffffe0 + lVar6);
        }
        if (uVar33 != 0) {
          bVar10 = (byte)uVar38;
          if (uVar39 < 0x100) {
            (&stack0x00000948)[(ulonglong)uVar37 + lVar6] =
                 (&stack0x00000948)[(ulonglong)uVar37 + lVar6] | bVar10;
          }
          else if (uVar40 == 3) {
            (&stack0x00000968)[(ulonglong)uVar37 + lVar6] =
                 (&stack0x00000968)[(ulonglong)uVar37 + lVar6] | bVar10;
          }
          else if (uVar40 == 4) {
            (&stack0x00000d69)[(ulonglong)uVar37 + lVar6] =
                 (&stack0x00000d69)[(ulonglong)uVar37 + lVar6] | bVar10;
          }
          else if (uVar40 == 5) {
            (&stack0x00000d6c)[(ulonglong)uVar37 + lVar6] =
                 (&stack0x00000d6c)[(ulonglong)uVar37 + lVar6] | bVar10;
          }
          else if (uVar40 == 6) {
            (&stack0x00000d6e)[(ulonglong)uVar37 + lVar6] =
                 (&stack0x00000d6e)[(ulonglong)uVar37 + lVar6] | bVar10;
          }
        }
LAB_1801d6460:
        puVar24 = puVar24 + (uVar27 + 2);
        uVar21 = uVar21 & uVar33;
LAB_1801d651c:
        if (uVar21 == 0) goto LAB_1801d6520;
        goto LAB_1801d5e94;
      }
      goto LAB_1801d6534;
    }
    if ((uVar31 & 0xff00) == 0x200) {
      bVar10 = FUN_1801ea500(puVar18,*(undefined4 *)(lVar25 + -0x59bc),&stack0x00000928 + lVar6,
                             &stack0xffffffffffffffb0 + lVar6);
    }
    else {
      if ((uVar31 & 0xff00) != 0x300) goto LAB_1801d6970;
      bVar10 = FUN_1801eb7e0(puVar18,*(undefined4 *)(lVar25 + -0x59bc),uVar30,
                             &stack0x00000928 + lVar6,&stack0xffffffffffffffb0 + lVar6);
    }
    uVar21 = (uint)bVar10;
    goto LAB_1801d65cc;
  }
LAB_1801d6970:
  if (*(int *)(&stack0xffffffffffffffd4 + lVar6) == 0) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  else {
    thunk_FUN_18022370c(DAT_180258900);
  }
LAB_1801d6998:
  return *(undefined4 *)(&stack0xffffffffffffffd8 + lVar6);
switchD_1801d5ee0_caseD_9:
  bVar9 = false;
switchD_1801d5ee0_caseD_2:
  uVar27 = 2;
  goto LAB_1801d60c8;
LAB_1801d6520:
  auVar41._8_8_ = *(undefined8 *)(&stack0x00000070 + lVar6);
  auVar41._0_8_ = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar6);
  uVar31 = *(uint *)(&stack0xffffffffffffffc8 + lVar6);
  uVar34 = *(uint *)(&stack0xffffffffffffffb8 + lVar6);
  uVar27 = *(uint *)(&stack0xffffffffffffffd0 + lVar6);
LAB_1801d6534:
  if (uVar27 == 0) {
    lVar25 = 0;
    do {
      if ((&stack0x00000938)[lVar25 + lVar6] != '\0') {
        (&stack0x00000928)[lVar25 + lVar6] = (&DAT_18022c628)[lVar25];
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != 0x10);
  }
  else {
    for (uVar37 = 0; (uVar21 != 0 && (uVar37 < 0x10)); uVar37 = uVar37 + 1) {
      if (((&stack0x00000938)[(ulonglong)uVar37 + lVar6] == '\0') ||
         (uVar38 = 0, (1 << (ulonglong)(uVar37 & 0x1f) & uVar27) != 0)) {
        uVar38 = 1;
      }
      uVar21 = uVar38 & uVar21;
    }
  }
  uVar21 = ((&stack0x00000d69)[lVar6] & 3) == 3 & uVar21;
  if (uVar21 != 0) {
    *(int *)(&stack0xffffffffffffffb0 + lVar6) = (int)((longlong)puVar24 - auVar41._8_8_ >> 2);
  }
LAB_1801d65cc:
  lVar22 = auVar41._8_8_;
  lVar25 = auVar41._0_8_;
  if ((uVar21 != 0 && uVar31 <= uVar34) &&
     (puVar13 = (undefined8 *)FUN_1802229a8(0x30), puVar13 != (undefined8 *)0x0)) {
    *puVar13 = &PTR_FUN_18022f278;
    puVar13[1] = 0;
    puVar13[4] = 0;
    *(undefined4 *)(puVar13 + 5) = 0;
    lVar35 = 0;
    puVar13[2] = puVar13;
    puVar13[3] = lVar25 + -0x6838;
    uVar36 = 0;
    uVar31 = *(uint *)(&stack0xffffffffffffffb0 + lVar6);
    uVar32 = CONCAT44(0,uVar31);
    *(undefined8 **)(&stack0x00000050 + lVar6) = puVar13;
    uVar23 = 0;
    if (uVar31 != 0) {
      do {
        lVar29 = uVar23 * 4;
        uVar28 = uVar23 & 1;
        uVar34 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar34;
        uVar36 = ((ulonglong)*(uint *)(lVar22 + lVar29) << (uVar28 << 5)) + uVar36;
      } while (uVar34 < uVar31);
    }
    uVar34 = *(uint *)(lVar25 + 0x90);
    if (uVar34 != 0) {
      uVar21 = 0;
      uVar27 = uVar34;
      do {
        uVar37 = uVar27 + uVar21 >> 1;
        uVar23 = (ulonglong)uVar37;
        uVar28 = *(ulonglong *)(*(longlong *)(lVar25 + 0x88) + uVar23 * 0x18);
        if (uVar28 <= uVar36) {
          if (uVar36 <= uVar28) break;
          uVar21 = uVar37 + 1;
          uVar23 = (ulonglong)(uVar37 + 1);
          uVar37 = uVar27;
        }
        uVar27 = uVar37;
      } while (uVar27 != uVar21);
      if (((uint)uVar23 != uVar34) &&
         (puVar1 = (ulonglong *)(*(longlong *)(lVar25 + 0x88) + uVar23 * 0x18), *puVar1 == uVar36))
      {
        puVar1 = puVar1 + 2;
        *(ulonglong **)(&stack0x00000068 + lVar6) = puVar1;
        if (puVar1 != (ulonglong *)0x0) {
          uVar34 = *(uint *)((longlong *)*puVar1 + 1);
          if (uVar34 != 0) {
            lVar35 = *(longlong *)*puVar1;
            *(ulonglong *)(&stack0xffffffffffffffb8 + lVar6) = uVar36;
            *(longlong *)(&stack0xffffffffffffffc0 + lVar6) = lVar25;
            uVar23 = 0;
            *(undefined8 *)(&stack0xffffffffffffffc8 + lVar6) = 0;
            *(undefined8 **)(&stack0xffffffffffffffe0 + lVar6) = puVar13;
            *(longlong *)(&stack0x00000070 + lVar6) = lVar35;
            do {
              lVar29 = uVar23 * 0x888;
              uVar21 = (uint)uVar23;
              if ((*(uint *)(lVar35 + 0x864 + lVar29) == uVar31) &&
                 (iVar12 = FUN_180222c00(lVar22,*(undefined8 *)(lVar35 + 0x868 + lVar29),uVar32 << 2
                                        ), iVar12 == 0)) {
                lVar35 = *(longlong *)(&stack0x00000070 + lVar6);
                puVar13 = *(undefined8 **)(&stack0xffffffffffffffe0 + lVar6);
                uVar36 = *(ulonglong *)(&stack0xffffffffffffffb8 + lVar6);
                lVar25 = *(longlong *)(&stack0xffffffffffffffc0 + lVar6);
                *(undefined8 **)(lVar29 + lVar35) = puVar13;
                lVar35 = FUN_1801dbd58(lVar25 + 0xa0,&stack0x00000050 + lVar6,lVar29 + lVar35);
                lVar35 = lVar35 + 8;
                plVar15 = (longlong *)**(longlong **)(&stack0x00000068 + lVar6);
                uVar34 = *(uint *)(plVar15 + 1);
                if (uVar21 < uVar34) {
                  if (uVar21 + 1 < uVar34) {
                    *(ulonglong *)(&stack0xffffffffffffffb8 + lVar6) = uVar36;
                    *(longlong *)(&stack0xffffffffffffffc8 + lVar6) = lVar35;
                    /* WARNING: Subroutine does not return */
                    thunk_FUN_180104c48(*plVar15 + uVar23 * 0x888,
                                        *plVar15 + (ulonglong)(uVar21 + 1) * 0x888,0x888);
                  }
                  *(uint *)(plVar15 + 1) = uVar34 - 1;
                }
                if (lVar35 == 0) goto LAB_1801d6720;
                goto LAB_1801d6924;
              }
              uVar23 = (ulonglong)(uVar21 + 1);
            } while (uVar21 + 1 < uVar34);
            puVar13 = *(undefined8 **)(&stack0xffffffffffffffe0 + lVar6);
            lVar35 = *(longlong *)(&stack0xffffffffffffffc8 + lVar6);
            uVar36 = *(ulonglong *)(&stack0xffffffffffffffb8 + lVar6);
            lVar25 = *(longlong *)(&stack0xffffffffffffffc0 + lVar6);
          }
        }
      }
    }
LAB_1801d6720:
    *(undefined8 *)(&stack0xffffffffffffffc8 + lVar6) = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar32;
    lVar29 = uVar32 << 2;
    if (SUB168(auVar5 * ZEXT816(4),8) != 0) {
      lVar29 = -1;
    }
    lVar29 = FUN_1802229a8(lVar29);
    *(longlong *)(&stack0xffffffffffffffe0 + lVar6) = lVar29;
    lVar14 = FUN_1802229a8(0x4a70);
    *(longlong *)(&stack0xffffffffffffffc0 + lVar6) = lVar14;
    if ((lVar29 == 0) || (lVar14 == 0)) {
      *(undefined8 *)(&stack0xffffffffffffffb8 + lVar6) = 0;
      bVar9 = false;
    }
    else {
      lVar14 = FUN_180114158(*(undefined8 *)(lVar25 + 0x98),lVar22,&stack0x00000928 + lVar6);
      bVar9 = lVar14 != 0;
      *(longlong *)(&stack0xffffffffffffffb8 + lVar6) = lVar14;
      if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar29,lVar22,uVar32 << 2);
      }
    }
    if (bVar9) {
      *(uint *)(&stack0x00000904 + lVar6) = uVar31;
      *(undefined8 *)(&stack0x00000918 + lVar6) = 0;
      *(ulonglong *)(&stack0x00000920 + lVar6) = uVar36;
      *(undefined8 **)(&stack0x000000a0 + lVar6) = puVar13;
      *(undefined8 *)(&stack0x000000a8 + lVar6) = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar6);
      *(undefined8 *)(&stack0x000000b0 + lVar6) = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar6);
      *(undefined2 *)(&stack0x000000b8 + lVar6) = 0xffff;
      *(undefined8 *)(&stack0x00000908 + lVar6) = *(undefined8 *)(&stack0xffffffffffffffe0 + lVar6);
      *(undefined8 *)(&stack0x00000910 + lVar6) = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar6);
      uVar16 = FUN_18010a4a8(*(undefined8 *)(&stack0xffffffffffffffb8 + lVar6),
                             &stack0x00000d77 + lVar6,&stack0x000000b8 + lVar6,0x400);
      uVar16 = FUN_18010a4a8(uVar16,&stack0x000051ed + lVar6,&stack0x000008bc + lVar6,0x10);
      FUN_18010a4a8(uVar16,&stack0x00005300 + lVar6,&stack0x000008e0 + lVar6);
      lVar35 = FUN_1801dbd58(lVar25 + 0xa0,&stack0x00000050 + lVar6,&stack0x000000a0 + lVar6);
      lVar35 = lVar35 + 8;
    }
    if (lVar35 == 0) {
      FUN_1802229d8(*(undefined8 *)(&stack0xffffffffffffffb8 + lVar6),0);
      FUN_1802229d8(*(undefined8 *)(&stack0xffffffffffffffe0 + lVar6));
      FUN_1802229d8(*(undefined8 *)(&stack0xffffffffffffffc0 + lVar6),0x4a70);
    }
    else {
LAB_1801d6924:
      uVar30 = *(undefined4 *)(&stack0xffffffffffffffb0 + lVar6);
      uVar16 = *(undefined8 *)(&stack0x00000098 + lVar6);
      puVar13[4] = *(undefined8 *)(lVar35 + 0x868);
      *(undefined4 *)(puVar13 + 5) = uVar30;
      iVar12 = FUN_1801e4638(puVar13,&DAT_1802292b8,uVar16);
      *(int *)(&stack0xffffffffffffffd8 + lVar6) = iVar12;
      if (-1 < iVar12) goto LAB_1801d6970;
      puVar13[4] = 0;
      *(undefined4 *)(puVar13 + 5) = 0;
    }
    *puVar13 = &PTR_FUN_18022f278;
    FUN_1802229d8(puVar13,0x30);
  }
  goto LAB_1801d6970;
}

