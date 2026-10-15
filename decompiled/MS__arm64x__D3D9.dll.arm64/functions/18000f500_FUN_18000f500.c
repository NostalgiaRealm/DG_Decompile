/*
 * FUN_18000f500 at 18000f500
 * undefined FUN_18000f500(void)
 * Address ranges: 18000f500-18000ff07;18000ff84-18000fff7;1800103d8-1800106e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000f500(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined *puVar21;
  undefined4 uVar22;
  uint uVar23;
  byte bVar24;
  uint *puVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  byte bVar31;
  undefined4 uVar32;
  uint uVar33;
  byte bVar34;
  undefined1 *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  longlong extraout_x15;
  longlong lVar40;
  uint *puVar41;
  uint uVar42;
  ulonglong uVar43;
  undefined4 uVar44;
  uint uVar45;
  undefined1 auVar46 [16];
  int *piVar14;
  undefined8 uVar20;
  uint uVar39;
  
  auVar46 = FUN_180001640();
  piVar14 = auVar46._0_8_;
  lVar8 = extraout_x15 * -0x10;
  func_0x000180222c50(&stack0x00000020 + lVar8,0,0x1328);
  iVar27 = *piVar14;
  puVar15 = (uint *)0x0;
  puVar41 = (uint *)(piVar14 + 1);
  uVar20 = 1;
  iVar19 = 1;
  (&stack0x0000128e)[lVar8] = (char)iVar27;
  bVar10 = iVar27 + 0xff00U < 5;
  uVar23 = (uint)bVar10;
  (&stack0x0000128d)[lVar8] = (char)((uint)iVar27 >> 8);
  *(undefined8 *)(&stack0x00001244 + lVar8) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000123c + lVar8) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001254 + lVar8) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000124c + lVar8) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001264 + lVar8) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000125c + lVar8) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x00001274 + lVar8) = 0xffffffffffffffff;
  *(undefined8 *)(&stack0x0000126c + lVar8) = 0xffffffffffffffff;
  if (iVar27 == -0xfefc) {
    uVar22 = 1;
    puVar25 = puVar41;
LAB_18000f5bc:
    do {
      while( true ) {
        uVar5 = (ushort)*puVar25;
        uVar28 = (uint)uVar5;
        if ((9 < uVar5) || ((0x32cU >> (ulonglong)(uVar28 & 0x1f) & 1) == 0)) break;
LAB_18000f668:
        puVar25 = puVar25 + 4;
      }
      if ((uVar28 - 1 < 0x40) &&
         ((0x8000000000000001U >> ((ulonglong)(uVar28 - 1) & 0x3f) & 1) != 0)) {
LAB_18000f650:
        puVar25 = puVar25 + 3;
        goto LAB_18000f5bc;
      }
      uVar36 = (uint)uVar5;
      if ((0x12 < uVar36) || ((0x40010U >> (ulonglong)(uVar28 & 0x1f) & 1) == 0)) {
        if ((uVar28 - 0x41 < 0x17) && ((0x400001U >> (ulonglong)(uVar28 - 0x41 & 0x1f) & 1) != 0)) {
          puVar25 = puVar25 + 2;
          goto LAB_18000f5bc;
        }
        if ((uVar36 - 0x50 & 0xfffffff7) != 0) {
          if (uVar36 == 0x51) {
            puVar25 = puVar25 + 6;
            goto LAB_18000f5bc;
          }
          if (uVar36 == 0x59) goto LAB_18000f668;
          if (uVar36 == 0xfffd) break;
          if (uVar36 == 0xfffe) {
            puVar25 = puVar25 + *(ushort *)((longlong)puVar25 + 2);
          }
          else {
            if (uVar36 == 0xffff) goto LAB_18000f684;
            if (uVar28 != 0) {
              if (uVar28 == 0x42) goto LAB_18000f650;
              goto LAB_18000f684;
            }
          }
          puVar25 = puVar25 + 1;
          goto LAB_18000f5bc;
        }
      }
      puVar25 = puVar25 + 5;
    } while( true );
  }
  uVar22 = 0;
LAB_18000f684:
  if (bVar10) {
    puVar21 = &DAT_180230550;
    cVar11 = (&stack0x00001344)[lVar8];
    *(undefined4 *)(&stack0xffffffffffffffc4 + lVar8) = 0;
    uVar32 = *(undefined4 *)(&stack0x0000132c + lVar8);
    *(undefined4 *)(&stack0xffffffffffffffa4 + lVar8) = uVar22;
    uVar22 = *(undefined4 *)(&stack0x00001324 + lVar8);
    *(longlong *)(&stack0x00000000 + lVar8) = auVar46._8_8_;
    *(undefined4 **)(&stack0x00000008 + lVar8) = param_3;
    *(int **)(&stack0xffffffffffffffe0 + lVar8) = piVar14;
    uVar30 = *(undefined4 *)(&stack0x0000131c + lVar8);
    bVar24 = (&stack0x00001318)[lVar8];
    bVar34 = (&stack0x00001316)[lVar8];
    uVar18 = 1;
    do {
      uVar23 = (uint)uVar18;
      iVar19 = (int)uVar20;
      if (*(int *)(&stack0xffffffffffffffc4 + lVar8) != 0) break;
      uVar45 = *puVar41;
      *(uint **)(&stack0xfffffffffffffff0 + lVar8) = puVar41;
      *(uint **)(&stack0xfffffffffffffff8 + lVar8) = puVar41;
      *(undefined8 *)(&stack0xffffffffffffffa8 + lVar8) = 0;
      uVar44 = 0;
      *(undefined4 *)(&stack0xffffffffffffffb0 + lVar8) = 0;
      *(uint *)(&stack0xffffffffffffffc0 + lVar8) = uVar45;
      uVar28 = uVar45 & 0xffff0000;
      uVar36 = uVar45 & 0xffff;
      if (uVar36 == 0) {
        if ((uVar28 == 0) && (cVar11 == '\0')) {
          uVar18 = 1;
        }
        else {
          uVar18 = 0;
        }
LAB_180010620:
        puVar41 = puVar41 + 1;
        goto LAB_180010624;
      }
      uVar23 = uVar23 & 0xff & ~uVar45 >> 0x1f;
      uVar18 = (ulonglong)uVar23;
      if (uVar36 == 0x51) {
        uVar36 = puVar41[1];
        if (bVar34 == 0 && uVar28 == 0) {
          uVar23 = uVar23 & uVar36 >> 0x1f;
        }
        else {
          uVar23 = 0;
        }
        if (uVar23 == 0) {
          uVar18 = 0;
        }
        else {
          if ((uVar36 & 0x7f8) != 0) {
            uVar23 = 0;
          }
          uVar28 = (uint)((uVar36 & 0xf0000) == 0xf0000 || (uVar36 & 0xf0000) == 0);
          if ((uVar36 & 0xf00000) != 0) {
            uVar28 = 0;
          }
          uVar23 = (uVar36 & 0x1800 | uVar36 >> 0x14 & 0x7ff) >> 8 == 2 & uVar28 & uVar23;
          uVar18 = (ulonglong)uVar23;
          if (uVar23 != 0) {
            uVar45 = puVar41[2];
            uVar28 = puVar41[3];
            (&stack0x00000351)[(ulonglong)(uVar36 & 0x7ff) + lVar8] = (char)uVar20;
            uVar23 = (uVar36 & 0x7ff) * 4;
            *(uint *)(&stack0x00000434 + (ulonglong)uVar23 * 4 + lVar8) = uVar45;
            *(uint *)(&stack0x00000434 + (ulonglong)(uVar23 + 1) * 4 + lVar8) = uVar28;
            uVar28 = puVar41[5];
            puVar25 = puVar41 + 6;
            *(uint *)(&stack0x00000434 + (ulonglong)(uVar23 + 2) * 4 + lVar8) = puVar41[4];
            *(uint *)(&stack0x00000434 + (ulonglong)(uVar23 + 3) * 4 + lVar8) = uVar28;
LAB_1800105d8:
            cVar11 = (&stack0x00001344)[lVar8];
            uVar32 = *(undefined4 *)(&stack0x0000132c + lVar8);
            uVar22 = *(undefined4 *)(&stack0x00001324 + lVar8);
            uVar30 = *(undefined4 *)(&stack0x0000131c + lVar8);
            bVar24 = (&stack0x00001318)[lVar8];
            bVar34 = (&stack0x00001316)[lVar8];
            puVar41 = puVar25;
          }
        }
LAB_180010624:
        *(undefined4 *)(&stack0x00001328 + lVar8) = uVar22;
        *(undefined4 *)(&stack0x00001330 + lVar8) = uVar32;
        *(undefined4 *)(&stack0x00001320 + lVar8) = uVar30;
        uVar30 = **(undefined4 **)(&stack0xfffffffffffffff0 + lVar8);
        *(undefined4 *)(&stack0x0000131c + lVar8) = uVar30;
        uVar22 = *(undefined4 *)(*(longlong *)(&stack0xfffffffffffffff8 + lVar8) + 4);
        uVar32 = *(undefined4 *)(*(longlong *)(&stack0xfffffffffffffff8 + lVar8) + 8);
        *(undefined4 *)(&stack0x00001324 + lVar8) = uVar22;
        *(undefined4 *)(&stack0x0000132c + lVar8) = uVar32;
      }
      else {
        if (uVar36 == 0xfffd) {
          if (((&stack0x0000128e)[lVar8] != '\x04') ||
             (*(int *)(&stack0xffffffffffffffa4 + lVar8) != 0 || uVar28 != 0)) {
            uVar18 = 0;
          }
          lVar40 = 0;
          do {
            (&stack0x0000002a)[lVar40 + lVar8] = (&stack0x0000002a)[lVar40 + lVar8] & 7;
            lVar40 = lVar40 + 1;
          } while (lVar40 != 6);
          bVar24 = 0;
          uVar32 = *(undefined4 *)(&stack0x0000132c + lVar8);
          (&stack0x00001318)[lVar8] = 0;
          bVar34 = 0;
          uVar22 = *(undefined4 *)(&stack0x00001324 + lVar8);
          *(undefined2 *)(&stack0x00001316 + lVar8) = 0;
          uVar30 = *(undefined4 *)(&stack0x0000131c + lVar8);
          *(int *)(&stack0xffffffffffffffa4 + lVar8) =
               *(int *)(&stack0xffffffffffffffa4 + lVar8) + 1;
          cVar11 = (&stack0x00001344)[lVar8];
          goto LAB_180010620;
        }
        if (uVar36 == 0xfffe) {
          puVar41 = puVar41 + ((uVar45 >> 0x10) + 1);
        }
        else {
          if (uVar36 != 0xffff) {
            cVar12 = (&DAT_180229fc0)[uVar36];
            uVar43 = (ulonglong)cVar12;
            uVar18 = (ulonglong)(cVar12 != -1);
            if (cVar12 == -1) goto LAB_180010624;
            uVar45 = puVar41[1];
            *(undefined4 *)(&stack0xffffffffffffffc8 + lVar8) = 0x8040201;
            (&stack0xffffffffffffffcc)[lVar8] = 0x10;
            iVar27 = (int)cVar12;
            lVar40 = ((-(uVar43 >> 0x1f & 1) & 0xfffffff800000000 | (uVar43 & 0xffffffff) << 3) -
                     (longlong)iVar27) * 4;
            bVar31 = (&stack0x0000128e)[lVar8];
            uVar29 = (ulonglong)bVar31;
            *(longlong *)(&stack0xffffffffffffffe8 + lVar8) = lVar40;
            uVar23 = (uint)((puVar21[lVar40 + 4] & (&stack0xffffffffffffffc8)[uVar29 + lVar8]) != 0
                           && cVar12 != -1);
            if (uVar28 == 0) {
              bVar4 = (&stack0x00001317)[lVar8];
              uVar13 = (uint)bVar4;
              if (puVar21[lVar40] == '\0') {
                if ((puVar21[lVar40 + 1] != '\0') && ((byte)(&DAT_1802308b9)[uVar29 * 3] <= bVar24))
                {
                  uVar23 = 0;
                }
              }
              else if ((uint)(byte)(&DAT_1802308b8)[uVar29 * 3] <= (uint)bVar4) {
                uVar23 = 0;
              }
              if ((byte)(&DAT_1802308ba)[uVar29 * 3] <= bVar34) {
                uVar23 = 0;
              }
              if (puVar21[lVar40] == '\0') {
                if (puVar21[lVar40 + 1] != '\0') {
                  (&stack0x00001318)[lVar8] = bVar24 + 1;
                  *(int *)(&stack0x00001238 + lVar8) = *(int *)(&stack0x00001238 + lVar8) + 1;
                  uVar23 = uVar13 == 0 & uVar23;
                }
              }
              else {
                uVar13 = bVar4 + 1;
                (&stack0x00001317)[lVar8] = (char)uVar13;
              }
              (&stack0x00001316)[lVar8] = bVar34 + 1;
            }
            else {
              uVar13 = (uint)(byte)(&stack0x00001317)[lVar8];
            }
            *(undefined8 *)(&stack0xffffffffffffffd0 + lVar8) = 0x18020104;
            uVar37 = (uVar45 & 0x1800 | uVar45 >> 0x14 & 0x7ff) >> 8;
            uVar1 = uVar45 & 0x7ff;
            uVar42 = 0;
            uVar16 = (uint)((uVar45 & 0xe00000) == 0);
            if ((byte)puVar21[(ulonglong)(uVar37 * 5 + (uint)bVar31) + 0x380] <= uVar1) {
              uVar16 = 0;
            }
            if (((((((uVar45 & 0xf000000) == 0) || ((uVar45 & 0xf000000) == 0x1000000)) ||
                  ((uVar45 & 0xf000000) == 0x2000000)) ||
                 (((uVar45 & 0xf000000) == 0x3000000 || ((uVar45 & 0xf000000) == 0xd000000)))) ||
                ((uVar45 & 0xf000000) == 0xe000000)) || ((uVar45 & 0xf000000) == 0xf000000)) {
              uVar16 = uVar16 & uVar23;
              uVar18 = (ulonglong)(byte)uVar16;
              if (uVar16 != 0) {
                (&stack0xffffffffffffffa9)[lVar8] = (char)uVar1;
                bVar24 = (&stack0xffffffffffffffd0)[(ulonglong)uVar37 + lVar8];
                uVar42 = (uint)bVar24;
                (&stack0xffffffffffffffa8)[lVar8] = bVar24;
                if (bVar24 == 0x18) {
                  if (((&stack0x00000052)[(ulonglong)uVar1 + lVar8] == '\0') &&
                     (puVar21[((-(uVar43 >> 0x1f & 1) & 0xfffffff800000000 |
                               (uVar43 & 0xffffffff) << 3) - (longlong)iVar27) * 4] == '\0')) {
                    uVar42 = 0x10;
                  }
                  else {
                    uVar42 = 8;
                  }
                }
                if (((byte)puVar21[uVar29 + ((-(uVar43 >> 0x1f & 1) & 0xfffffff800000000 |
                                             (uVar43 & 0xffffffff) << 3) - (longlong)(int)cVar12) *
                                            4 + 5] & uVar42) == 0) {
                  uVar16 = 0;
                }
                uVar18 = (ulonglong)uVar16;
              }
            }
            else {
              uVar18 = 0;
            }
            uVar23 = uVar45 & 0xf0000;
            if (bVar31 != 4) {
              uVar18 = (ulonglong)
                       ((uint)(((uVar23 == 0x80000 || uVar23 == 0x70000) || uVar23 == 0xf0000) ||
                              uVar23 == 0) & (uint)uVar18);
            }
            if (puVar21[((-(uVar43 >> 0x1f & 1) & 0xfffffff800000000 | (uVar43 & 0xffffffff) << 3) -
                        (longlong)(int)cVar12) * 4 + 1] != '\0') {
              uVar16 = (uint)uVar18;
              if (uVar23 != 0xf0000) {
                uVar16 = 0;
              }
              uVar37 = (uint)uVar18;
              if (uVar42 == 0x10) {
                uVar37 = uVar16;
              }
              uVar18 = (ulonglong)uVar37;
            }
            uVar16 = uVar23;
            if (uVar23 == 0) {
              uVar16 = 0xf0000;
            }
            lVar40 = ((-(uVar43 >> 0x1f & 1) & 0xfffffff800000000 | (uVar43 & 0xffffffff) << 3) -
                     (longlong)iVar27) * 4 +
                     (ulonglong)(*(int *)(&stack0xffffffffffffffa4 + lVar8) + (uint)bVar31);
            bVar24 = (byte)(uVar16 >> 0x10);
            (&stack0xffffffffffffffaa)[lVar8] = bVar24;
            (&stack0xffffffffffffffa0)[lVar8] = puVar21[lVar40 + 10];
            uVar3 = puVar21[lVar40 + 0x16];
            (&stack0xffffffffffffffa1)[lVar8] = puVar21[lVar40 + 0x10];
            (&stack0xffffffffffffffa2)[lVar8] = uVar3;
            if ((int)uVar18 == 0) {
              uVar18 = 0;
            }
            else {
              *(uint *)(&stack0xffffffffffffffb8 + lVar8) = uVar42;
              *(uint *)(&stack0xffffffffffffffbc + lVar8) = uVar16;
              uVar26 = 0;
              *(uint **)(&stack0xffffffffffffffd8 + lVar8) = puVar15;
              lVar40 = ((-(uVar43 >> 0x1f & 1) & 0xfffffff800000000 | (uVar43 & 0xffffffff) << 3) -
                       (longlong)iVar27) * 4;
              do {
                uVar13 = (uint)uVar26;
                if ((2 < uVar13) ||
                   (bVar34 = (&stack0xffffffffffffffa0)[uVar26 + lVar8], bVar34 == 0)) break;
                uVar2 = puVar41[uVar13 + 2];
                uVar33 = (uVar2 & 0x1800 | uVar2 >> 0x14 & 0x7ff) >> 8;
                uVar42 = uVar2 & 0x7ff;
                iVar27 = (int)uVar29;
                uVar37 = uVar2 >> 0x1f;
                if ((byte)puVar21[(ulonglong)(uVar33 * 5 + iVar27) + 0x380] <= uVar42) {
                  uVar37 = 0;
                }
                uVar37 = uVar37 & (uint)uVar18;
                uVar39 = 0;
                uVar38 = 0;
                uVar17 = 0;
                if (uVar37 != 0) {
                  lVar9 = uVar26 * 3;
                  bVar31 = (&stack0xffffffffffffffd0)[(ulonglong)uVar33 + lVar8];
                  (&stack0xffffffffffffffab)[lVar9 + lVar8] = bVar31;
                  (&stack0xffffffffffffffac)[lVar9 + lVar8] = (char)uVar42;
                  if ((bVar31 == 0x18) &&
                     (bVar31 = 8, (&stack0x00000052)[(ulonglong)uVar42 + lVar8] == '\0')) {
                    bVar31 = 0x10;
                  }
                  if ((bVar34 & bVar31) == 0) {
                    uVar37 = 0;
                  }
                  uVar33 = uVar2 & 0xff0000;
                  uVar17 = uVar37;
                  if (uVar36 == 0x42) {
                    if (iVar27 == 4) {
                      if ((uVar33 == 0xe40000) || (uVar33 == 0xa40000)) {
                        bVar10 = (uVar2 & 0xf000000) == 0x9000000;
                      }
                      else {
LAB_18000fb3c:
                        if (uVar33 != 0xf40000) {
                          uVar17 = 0;
                          uVar38 = 0;
                          goto LAB_18000fbbc;
                        }
                        bVar10 = (uVar2 & 0xf000000) == 0xa000000;
                      }
                      uVar17 = 0;
                      uVar38 = 0;
                      if (bVar10 || (uVar2 & 0xf000000) == 0) {
                        uVar17 = uVar37;
                        uVar38 = uVar37;
                      }
                    }
                    else {
LAB_18000fb74:
                      uVar38 = uVar39;
                      if ((((uVar33 != 0xff0000 && uVar33 != 0xe40000) &&
                           ((uVar33 != 0xaa0000 || (iVar27 == 0)))) &&
                          ((uVar33 != 0x550000 || (iVar27 != 4)))) &&
                         ((uVar33 != 0 || (iVar27 != 4)))) {
                        uVar17 = 0;
                      }
                    }
                  }
                  else {
                    if ((uVar36 != 0x40) || (iVar27 != 4)) goto LAB_18000fb74;
                    if ((uVar33 - 0xa40000 & 0xffbfffff) != 0) goto LAB_18000fb3c;
                    uVar17 = (uVar2 & 0xf000000) == 0 & uVar37;
                    uVar38 = uVar17;
                  }
LAB_18000fbbc:
                  uVar37 = (uint)(byte)puVar21[lVar40 + 3];
                  if (puVar21[lVar40 + 2] != '\0') {
                    uVar37 = (uint)(byte)puVar21[lVar40 + 3] & uVar16 >> 0x10;
                  }
                  uVar39 = iVar19 << (ulonglong)(uVar33 >> 0x14 & 3);
                  if ((uVar37 & 4) == 0) {
                    uVar39 = 0;
                  }
                  uVar6 = iVar19 << (ulonglong)(uVar33 >> 0x12 & 3);
                  if ((uVar37 & 2) == 0) {
                    uVar6 = 0;
                  }
                  uVar7 = iVar19 << (ulonglong)(uVar33 >> 0x10 & 3);
                  if ((uVar37 & 1) == 0) {
                    uVar7 = 0;
                  }
                  uVar33 = iVar19 << (ulonglong)(uVar33 >> 0x16);
                  if ((uVar37 & 8) == 0) {
                    uVar33 = 0;
                  }
                  uVar33 = uVar39 | uVar6 | uVar7 | uVar33;
                  uVar37 = uVar33 & 0xff;
                  bVar34 = (byte)uVar33;
                  if (bVar31 == 1) {
                    puVar35 = &stack0x00000020 + lVar8;
LAB_18000fc94:
                    uVar33 = 0xf;
                    puVar35[uVar42] = puVar35[uVar42] | bVar34;
                    uVar29 = (ulonglong)(byte)(&stack0x0000128e)[lVar8];
                  }
                  else {
                    if (bVar31 == 2) {
                      puVar35 = &stack0x00000058 + lVar8;
                      goto LAB_18000fc94;
                    }
                    if (bVar31 == 4) {
                      uVar33 = (uint)(byte)(&stack0x0000002a)[(ulonglong)uVar42 + lVar8];
                    }
                    else if (bVar31 == 8) {
                      uVar33 = (uint)(byte)(&stack0x00000052)[(ulonglong)uVar42 + lVar8];
                      uVar17 = (&stack0x00001290)[(ulonglong)uVar42 + lVar8] == '\0' & uVar17;
                    }
                    else {
                      if (bVar31 == 0x10) {
                        puVar35 = &stack0x0000004a + lVar8;
                        goto LAB_18000fc94;
                      }
                      uVar33 = 0;
                    }
                  }
                  uVar17 = uVar37 == (uVar37 & uVar33) & uVar17;
                  (&stack0xffffffffffffffad)[lVar9 + lVar8] = bVar34;
                }
                *(undefined8 *)(&stack0x00000010 + lVar8) = 0x101010101010101;
                *(undefined8 *)(&stack0x00000018 + lVar8) = 0x10101;
                if ((((uVar2 & 0xb000000) == 0) || (uVar38 != 0)) || (puVar21[lVar40] != '\0')) {
                  uVar18 = (ulonglong)
                           ((byte)(&stack0x00000010)
                                  [(ulonglong)((uVar2 & 0xf000000) >> 0x18) + lVar8] & uVar17);
                }
                else {
                  uVar18 = 0;
                }
                uVar26 = (ulonglong)(uVar13 + 1);
              } while ((int)uVar18 != 0);
              puVar15 = *(uint **)(&stack0xffffffffffffffd8 + lVar8);
              uVar42 = *(uint *)(&stack0xffffffffffffffb8 + lVar8);
              uVar16 = *(uint *)(&stack0xffffffffffffffbc + lVar8);
              cVar11 = (&stack0x00001344)[lVar8];
              uVar13 = (uint)(byte)(&stack0x00001317)[lVar8];
              uVar44 = *(undefined4 *)(&stack0xffffffffffffffb0 + lVar8);
            }
            uVar37 = (uint)uVar29;
            if (uVar42 == 4) {
              puVar35 = &stack0x0000002a;
LAB_18000fd90:
              puVar35[(ulonglong)uVar1 + lVar8] = puVar35[(ulonglong)uVar1 + lVar8] | bVar24;
              uVar37 = (uint)(byte)(&stack0x0000128e)[lVar8];
              uVar13 = (uint)(byte)(&stack0x00001317)[lVar8];
              cVar11 = (&stack0x00001344)[lVar8];
            }
            else if (uVar42 == 8) {
              if ((puVar21[*(longlong *)(&stack0xffffffffffffffe8 + lVar8)] != '\0') &&
                 ((&stack0x00001290)[(ulonglong)uVar1 + lVar8] != '\0')) {
                (&stack0x00001290)[(ulonglong)uVar1 + lVar8] = 0;
                (&stack0x00000052)[(ulonglong)uVar1 + lVar8] = 0;
              }
              puVar35 = &stack0x00000052;
              goto LAB_18000fd90;
            }
            if (uVar28 == 0x40000000) {
              *(int *)(&stack0x0000123c + (ulonglong)(byte)(&stack0x00001319)[lVar8] * 4 + lVar8) =
                   (int)((longlong)puVar15 - *(longlong *)(&stack0xffffffffffffffe0 + lVar8) >> 2);
              uVar13 = *(uint *)(&stack0x00001324 + lVar8) & 0xf0000;
              if (uVar13 == 0) {
                uVar13 = 0xf0000;
              }
              if ((uVar13 & 0x80000) == 0 && uVar16 == 0x80000) {
LAB_18000fe34:
                uVar23 = 1;
              }
              else {
                uVar1 = uVar45 & 0x80000;
                if (uVar23 == 0) {
                  uVar1 = 0x80000;
                }
                uVar23 = 0;
                if (uVar13 == 0x80000 && uVar1 == 0) goto LAB_18000fe34;
              }
              uVar18 = (ulonglong)(uVar23 & (uint)uVar18);
              cVar11 = FUN_18000f490(&stack0xffffffffffffffa8 + lVar8,&stack0x00001334 + lVar8);
              if (cVar11 == '\0') {
                cVar11 = '\0';
              }
              else {
                cVar12 = FUN_18000f490(&stack0x00001334 + lVar8,&stack0xffffffffffffffa8 + lVar8);
                if (cVar12 != '\0') {
                  cVar11 = '\x02';
                }
              }
              (&stack0x0000127c)[(ulonglong)(byte)(&stack0x00001319)[lVar8] + lVar8] =
                   (byte)*(undefined4 *)(&stack0x00001340 + lVar8) | cVar11 << 4;
              (&stack0x00001319)[lVar8] = (&stack0x00001319)[lVar8] + '\x01';
              uVar13 = (uint)(byte)(&stack0x00001317)[lVar8];
              cVar11 = (&stack0x00001344)[lVar8];
              uVar37 = (uint)(byte)(&stack0x0000128e)[lVar8];
            }
            if ((*(uint *)(&stack0xffffffffffffffc0 + lVar8) & 0xffc0) == 0) {
              if (((uVar36 == 1) || (uVar36 == 2)) ||
                 ((uVar36 == 3 || (((uVar36 == 4 || (uVar36 == 5)) || (uVar36 == 8)))))) {
LAB_18000ff84:
                uVar18 = (ulonglong)((uint)(cVar11 == '\0') & (uint)uVar18);
              }
              else if (uVar36 == 9) {
                uVar23 = (uint)(uVar28 == 0) & (uint)uVar18;
                if ((uVar37 - 2 & 0xff) < 2) {
                  (&stack0x00001317)[lVar8] = (char)uVar13 + '\x01';
                  if (((uVar45 & 0x70001800) == (puVar41[2] & 0x70001800)) ||
                     ((uVar45 & 0x70001800) == (puVar41[3] & 0x70001800))) {
                    uVar23 = 0;
                  }
                }
                if (cVar11 != '\0') {
                  uVar23 = 0;
                }
                uVar18 = (ulonglong)uVar23;
              }
              else if (uVar36 == 0x12) goto LAB_18000ff84;
            }
            else if (uVar36 < 0x5a) {
                    /* WARNING: Could not emulate address calculation at 0x00018000fef8 */
                    /* WARNING: Treating indirect jump as call */
              uVar18 = (*(code *)(&UNK_180010218 +
                                 (longlong)*(int *)(&DAT_1800106e8 + (ulonglong)(uVar36 - 0x40) * 4)
                                 * 4))(uVar13,uVar45 & 0x7ff);
              return uVar18;
            }
            uVar43 = 0;
            puVar25 = puVar41;
            do {
              if ((&stack0xffffffffffffffa0)[uVar43 + lVar8] == '\0') break;
              uVar23 = (int)uVar43 + 1;
              uVar43 = (ulonglong)uVar23;
              puVar25 = puVar25 + 1;
            } while (uVar23 < 3);
            puVar25 = puVar25 + 2;
            *(int *)(&stack0x00001340 + lVar8) = (int)((longlong)puVar25 - (longlong)puVar41 >> 2);
            *(undefined8 *)(&stack0x00001334 + lVar8) =
                 *(undefined8 *)(&stack0xffffffffffffffa8 + lVar8);
            *(undefined4 *)(&stack0x0000133c + lVar8) = uVar44;
            puVar15 = puVar41;
            if ((int)uVar18 != 0) {
              (&stack0x00001296)[(ulonglong)*(ushort *)(&stack0xffffffffffffffc0 + lVar8) + lVar8] =
                   (&stack0x00001296)
                   [(ulonglong)*(ushort *)(&stack0xffffffffffffffc0 + lVar8) + lVar8] + '\x01';
            }
            goto LAB_1800105d8;
          }
          if ((uVar28 == 0) && (cVar11 == '\0')) {
            uVar18 = 1;
          }
          else {
            uVar18 = 0;
          }
          *(undefined4 *)(&stack0xffffffffffffffc4 + lVar8) = 1;
          puVar41 = puVar41 + 1;
        }
      }
      iVar19 = (int)uVar20;
      uVar23 = 0;
    } while ((int)uVar18 != 0);
    auVar46._8_8_ = *(undefined8 *)(&stack0x00000000 + lVar8);
    auVar46._0_8_ = *(undefined8 *)(&stack0xffffffffffffffe0 + lVar8);
    param_3 = *(undefined4 **)(&stack0x00000008 + lVar8);
  }
  uVar28 = (uint)(byte)(&stack0x0000128c)[lVar8];
  uVar18 = 0;
  do {
    if ((&stack0x0000004a)[uVar18 + lVar8] != '\0') {
      uVar28 = iVar19 << (ulonglong)((uint)uVar18 & 0x1f) | uVar28;
      (&stack0x0000128c)[lVar8] = (char)uVar28;
    }
    uVar36 = (uint)uVar18 + 1;
    uVar18 = (ulonglong)uVar36;
  } while (uVar36 < 8);
  uVar23 = ((&stack0x0000002a)[lVar8] & 0xf) == 0xf & uVar23;
  if (uVar23 != 0) {
    thunk_FUN_180001218(auVar46._8_8_,&stack0x00000020 + lVar8,0x1270);
    *param_3 = (int)((longlong)puVar41 - auVar46._0_8_ >> 2);
  }
  return (ulonglong)uVar23;
}

